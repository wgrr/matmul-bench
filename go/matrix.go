package main

import (
	"fmt"
	"math/rand"
	"os"
	"time"
)

const n = 4096

var A [n][n]float64
var B [n][n]float64
var C [n][n]float64

func main() {
	for i := 0; i < n; i++ {
		for j := 0; j < n; j++ {
			A[i][j] = rand.Float64()
			B[i][j] = rand.Float64()
			C[i][j] = 0
		}
	}
	start := time.Now()
	for i := 0; i < n; i++ {
		for j := 0; j < n; j++ {
			for k := 0; k < n; k++ {
				C[i][j] += A[i][k] * B[k][j]
			}
		}
	}

	stop := time.Now()
	diff := stop.Sub(start)

	fmt.Fprintf(os.Stderr, "time: %.9f\n", diff.Seconds())
	for i := 0; i < n; i++ {
		for j := 0; j < n; j++ {
			fmt.Printf("%f", C[i][j])
		}
	}
}
