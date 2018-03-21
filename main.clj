



(defn print-message [A B C]
    (println "A : " A)
    (println "B : " B)
    (println "C : " C))

(defn input[]

    (def A 0)
    (def B 0)
    (def C 0)

    (println "Enter the value of A")
    (let[A (read-line)]
    (println "Enter the value of B")
    (let[B (read-line)]
    (println "Enter the value of C")
    (let[C (read-line)]
    
    (print-message A B C)))))
    


(input)


    ; lein repl
    ; (load-file "main.clj")
    ; exit

