;; Auto-generated. Do not edit!


(when (boundp 'tutorial_python::Person)
  (if (not (find-package "TUTORIAL_PYTHON"))
    (make-package "TUTORIAL_PYTHON"))
  (shadow 'Person (find-package "TUTORIAL_PYTHON")))
(unless (find-package "TUTORIAL_PYTHON::PERSON")
  (make-package "TUTORIAL_PYTHON::PERSON"))

(in-package "ROS")
;;//! \htmlinclude Person.msg.html


(defclass tutorial_python::Person
  :super ros::object
  :slots (_first_name _last_name _age ))

(defmethod tutorial_python::Person
  (:init
   (&key
    ((:first_name __first_name) "")
    ((:last_name __last_name) "")
    ((:age __age) 0)
    )
   (send-super :init)
   (setq _first_name (string __first_name))
   (setq _last_name (string __last_name))
   (setq _age (round __age))
   self)
  (:first_name
   (&optional __first_name)
   (if __first_name (setq _first_name __first_name)) _first_name)
  (:last_name
   (&optional __last_name)
   (if __last_name (setq _last_name __last_name)) _last_name)
  (:age
   (&optional __age)
   (if __age (setq _age __age)) _age)
  (:serialization-length
   ()
   (+
    ;; string _first_name
    4 (length _first_name)
    ;; string _last_name
    4 (length _last_name)
    ;; uint8 _age
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _first_name
       (write-long (length _first_name) s) (princ _first_name s)
     ;; string _last_name
       (write-long (length _last_name) s) (princ _last_name s)
     ;; uint8 _age
       (write-byte _age s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _first_name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _first_name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _last_name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _last_name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; uint8 _age
     (setq _age (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get tutorial_python::Person :md5sum-) "e284f48db143ad4a2296917c51a4a73e")
(setf (get tutorial_python::Person :datatype-) "tutorial_python/Person")
(setf (get tutorial_python::Person :definition-)
      "string first_name
string last_name
uint8 age
")



(provide :tutorial_python/Person "e284f48db143ad4a2296917c51a4a73e")


