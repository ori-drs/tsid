#!/usr/bin/env python3

import time
import rospy
import quadrupedSynchronous
import numpy as np
import matplotlib.pyplot as plt

rospy.init_node('controller', anonymous=True)

dt = 0.0025

anymal = quadrupedSynchronous.Anymal(dt)

q = np.array([ 0., 0., 0.4792, 1., 0., 0., 0., -0.1, 0.7, -1., -0.1, -0.7, 1., 0.1, 0.7, -1., 0.1, -0.7, 1.])
v = np.zeros(18)

while True:
    if rospy.is_shutdown():
        anymal.plot()
        print('shutdown')
        break
    else:
        anymal.step()
        time.sleep(dt)

