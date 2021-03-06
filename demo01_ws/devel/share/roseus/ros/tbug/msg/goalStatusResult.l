;; Auto-generated. Do not edit!


(when (boundp 'tbug::goalStatusResult)
  (if (not (find-package "TBUG"))
    (make-package "TBUG"))
  (shadow 'goalStatusResult (find-package "TBUG")))
(unless (find-package "TBUG::GOALSTATUSRESULT")
  (make-package "TBUG::GOALSTATUSRESULT"))

(in-package "ROS")
;;//! \htmlinclude goalStatusResult.msg.html


(defclass tbug::goalStatusResult
  :super ros::object
  :slots (_robot0_thereOrNot _robot1_thereOrNot _robot2_thereOrNot ))

(defmethod tbug::goalStatusResult
  (:init
   (&key
    ((:robot0_thereOrNot __robot0_thereOrNot) 0)
    ((:robot1_thereOrNot __robot1_thereOrNot) 0)
    ((:robot2_thereOrNot __robot2_thereOrNot) 0)
    )
   (send-super :init)
   (setq _robot0_thereOrNot (round __robot0_thereOrNot))
   (setq _robot1_thereOrNot (round __robot1_thereOrNot))
   (setq _robot2_thereOrNot (round __robot2_thereOrNot))
   self)
  (:robot0_thereOrNot
   (&optional __robot0_thereOrNot)
   (if __robot0_thereOrNot (setq _robot0_thereOrNot __robot0_thereOrNot)) _robot0_thereOrNot)
  (:robot1_thereOrNot
   (&optional __robot1_thereOrNot)
   (if __robot1_thereOrNot (setq _robot1_thereOrNot __robot1_thereOrNot)) _robot1_thereOrNot)
  (:robot2_thereOrNot
   (&optional __robot2_thereOrNot)
   (if __robot2_thereOrNot (setq _robot2_thereOrNot __robot2_thereOrNot)) _robot2_thereOrNot)
  (:serialization-length
   ()
   (+
    ;; uint32 _robot0_thereOrNot
    4
    ;; uint32 _robot1_thereOrNot
    4
    ;; uint32 _robot2_thereOrNot
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint32 _robot0_thereOrNot
       (write-long _robot0_thereOrNot s)
     ;; uint32 _robot1_thereOrNot
       (write-long _robot1_thereOrNot s)
     ;; uint32 _robot2_thereOrNot
       (write-long _robot2_thereOrNot s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint32 _robot0_thereOrNot
     (setq _robot0_thereOrNot (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; uint32 _robot1_thereOrNot
     (setq _robot1_thereOrNot (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; uint32 _robot2_thereOrNot
     (setq _robot2_thereOrNot (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get tbug::goalStatusResult :md5sum-) "2ce792ce8df4eddb005f1e3ae8982006")
(setf (get tbug::goalStatusResult :datatype-) "tbug/goalStatusResult")
(setf (get tbug::goalStatusResult :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# Define the result
uint32 robot0_thereOrNot
uint32 robot1_thereOrNot
uint32 robot2_thereOrNot

")



(provide :tbug/goalStatusResult "2ce792ce8df4eddb005f1e3ae8982006")


