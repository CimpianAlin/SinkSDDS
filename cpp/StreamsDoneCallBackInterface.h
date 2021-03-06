/*
 * This file is protected by Copyright. Please refer to the COPYRIGHT file
 * distributed with this source distribution.
 *
 * This file is part of REDHAWK rh.SinkSDDS.
 *
 * REDHAWK rh.SinkSDDS is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or (at your
 * option) any later version.
 *
 * REDHAWK rh.SinkSDDS is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License
 * for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see http://www.gnu.org/licenses/.
 */
/*
 * StreamsDoneCallBackInterface.h
 *
 *  Created on: Jul 1, 2016
 *      Author: 
 */

#ifndef STREAMSDONECALLBACKINTERFACE_H_
#define STREAMSDONECALLBACKINTERFACE_H_


class StreamsDoneCallBackInterface {
public:
    virtual void streamsDone(std::string streamId) = 0;
};




#endif /* STREAMSDONECALLBACKINTERFACE_H_ */
