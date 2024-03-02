# Flask Kubernetes Deployment

This project demonstrates deploying a simple Flask web application to a Kubernetes cluster using minikube.

## Prerequisites

- Docker Desktop installed and running
- minikube installed
- kubectl installed 

## Getting Started

1. Start the minikube cluster:
  minikube start --driver=docker

2. Build the Flask Docker image:
  docker build -t myimage .


3. Apply the Kubernetes deployment and service:
kubectl apply -f flask-deployment.yaml -f service.yaml


4. Port forward to access the app:
kubectl port-forward service/my-flask-service 5000:5000

5. Access the running app at http://localhost:5000

## Cleanup
kubectl delete deployment my-deployment
kubectl delete service my-service
minikube stop


## Next Steps

- Configure CI/CD workflows
