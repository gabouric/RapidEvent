#ifndef RAPIDEVENT_RAPIDEVENT_H_
#define RAPIDEVENT_RAPIDEVENT_H_

#include "RapidConfig.h"
#include "RapidNorm.h"
#include "RapidTrack.h"
#include "RapidSelect.h"
#include "RapidPV.h"

/*!
 * \class RapidEvent
 * Class defining an event.
*/

class RapidEvent {

    public:
        //! Default constructor.
        RapidEvent();
        //! Standard constructor.
        RapidEvent(RapidConfig* config, RapidNorm* norm, RapidSelect* select,
                                                         Ssiz_t event_number);
        //! Destructor
        ~RapidEvent();

        // Getters
        Ssiz_t GetEventNumber();
        Ssiz_t GetNumberOfTracks();
        std::vector<RapidTrack*> GetTracks();
        //! Build the event.
        int BuildEvent();

    private:
        RapidConfig* config_;
        RapidNorm*   norm_;
        RapidSelect* select_;
        RapidPV*     pv_;
        std::vector<RapidTrack*> tracks_;

        Ssiz_t event_number_;
        Ssiz_t n_tracks_;


};

#endif // RAPIDEVENT_RAPIDEVENT_H_
