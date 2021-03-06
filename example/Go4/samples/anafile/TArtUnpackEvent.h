// $Id: TArtUnpackEvent.h 478 2009-10-29 12:26:09Z linev $
//-----------------------------------------------------------------------
//       The GSI Online Offline Object Oriented (Go4) Project
//         Experiment Data Processing at EE department, GSI
//-----------------------------------------------------------------------
// Copyright (C) 2000- GSI Helmholtzzentrum f?r Schwerionenforschung GmbH
//                     Planckstr. 1, 64291 Darmstadt, Germany
// Contact:            http://go4.gsi.de
//-----------------------------------------------------------------------
// This software can be used under the license agreements as stated
// in Go4License.txt file which is part of the distribution.
//-----------------------------------------------------------------------

#ifndef TArtEVENT_H
#define TArtEVENT_H

#include "TGo4EventElement.h"

class TArtUnpackEvent : public TGo4EventElement {
   public:
      TArtUnpackEvent() ;
      TArtUnpackEvent(const char* name) ;
      virtual ~TArtUnpackEvent() ;

   ClassDef(TArtUnpackEvent,1)
};
#endif //TArtEVENT_H



