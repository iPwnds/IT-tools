Ticketsystemen
==============

Merger ticketmaster & live nation zou monopolie nu zijn


Capaciteitsproblemen
====================

- Server overload : Conditions cause server to exhaust its resources, can't
  respond to / handle / process incoming requests. TCP listen queue
  of server overflows. Clients can experience outages. Even though,
  there may be enough capacity to deliver all responses for subset of clients,
  all clients normally experience smoe issues.
- Load-handling / handling of load : multiple strategies / factors / 
  bottlenecks that determine this
    - Disk speed
    - Available memory
    - Processor speed
    - Bandwidth
    - Traffic spikes
    - Design patterns: bv. monolitische software vs. gebruik microservices,
      database sharding patterns, cqrs ...
    - DevOps strategies: techniques such as automatic deployment, advanced
      monitoring and management can help with scaling
    - Load balancing: whether its used and which algorithms. Distributes
      network traffic across horizontally scaled servers by using algorithms to
      route and redirect client requests. Offers real-time scalability,
      on-demand deployability. Hardware vs. software load balancing solutions.
    - Caching
    - Back up servers
    - Firewalls
    - Content distribution using CDN's: horizontal scaling with geographically
      close servers to reduce loading times
    - Code performance: reduces resource usage
- HTTP error codes as possible result
    - 503: temporarily unavailable due to server overload
    - 504: gateway timeout error + server overload error
    - 408
    - 500
    - 502
- Scale / scaling: "In technology, scale refers to the ability of a system,
  application, or infrastructure to handle an increasing amount of data, users,
  or load without compromising performance or stability.
  Essentially, it's about accommodating growth without breaking."
    - Horizonal scaling / scaling out: more machines and nodes
    - Vertical scaling / scaling up: upgrading existing ressources
    - Automatic horziontal scaling: bv. kubernetes
    - Cloud computing: helps for scaling, cloud providers often provide
      auto-scaling
    - Database scaling: distributing data across databases, keeping the data
      consistent

Termen:

- Overload
- Connection-scheduling
- Starvation
- Heavy-tailed workloads
- Availability
- Resource allocation / management
- Web performance studies / evaluations
- Work load generators / simulations / stress tests (bv. apache jmeter, siege)
- Response time
- Capacity planning
- Server load balancing / SLB


References
==========

References van deze wikipedia pagina:
- https://en.wikipedia.org/wiki/Scalability

@article{10.1145/1125274.1125276,
author = {Schroeder, Bianca and Harchol-Balter, Mor},
title = {Web Servers under Overload: How Scheduling Can Help},
year = {2006},
issue_date = {February 2006},
publisher = {Association for Computing Machinery},
address = {New York, NY, USA},
volume = {6},
number = {1},
issn = {1533-5399},
url = {https://doi.org/10.1145/1125274.1125276},
doi = {10.1145/1125274.1125276},
abstract = {This article provides a detailed implementation study on the behavior of web serves that serve static requests where the load fluctuates over time (transient overload). Various external factors are considered, including WAN delays and losses and different client behavior models. We find that performance can be dramatically improved via a kernel-level modification to the web server to change the scheduling policy at the server from the standard FAIR (processor-sharing) scheduling to SRPT (shortest-remaining-processing-time) scheduling. We find that SRPT scheduling induces no penalties. In particular, throughput is not sacrificed and requests for long files experience only negligibly higher response times under SRPT than they did under the original FAIR scheduling.},
journal = {ACM Trans. Internet Technol.},
month = {feb},
pages = {20–52},
numpages = {33},
keywords = {Web server, overload, unfairness, SRPT, scheduling, starvation}
}

@article{ABDELZAHER19991563,
title = {Web content adaptation to improve server overload behavior},
journal = {Computer Networks},
volume = {31},
number = {11},
pages = {1563-1577},
year = {1999},
issn = {1389-1286},
doi = {https://doi.org/10.1016/S1389-1286(99)00031-6},
url = {https://www.sciencedirect.com/science/article/pii/S1389128699000316},
author = {Tarek F Abdelzaher and Nina Bhatti},
keywords = {Web server performance, Adaptive content, Overload protection},
abstract = {This paper presents a study of Web content adaptation to improve server overload performance, as well as an implementation of a Web content adaptation software prototype. When the request rate on a Web server increases beyond server capacity, the server becomes overloaded and unresponsive. The TCP listen queue of the server's socket overflows exhibiting a drop-tail behavior. As a result, clients experience service outages. Since clients typically issue multiple requests over the duration of a session with the server, and since requests are dropped indiscriminately, all clients connecting to the server at overload are likely to experience connection failures, even though there may be enough capacity on the server to deliver all responses properly for a subset of clients. In this paper, we propose to resolve the overload problem by adapting delivered content to load conditions to alleviate overload. The premise is that successful delivery of a less resource intensive content under overload is more desirable to clients than connection rejection or failures. The paper suggests the feasibility of content adaptation from three different viewpoints; (a) potential for automating content adaptation with minimal involvement of the content provider, (b) ability to achieve sufficient savings in resource requirements by adapting present-day Web content while preserving adequate information, and (c) feasibility to apply content adaptation technology on the Web with no modification to existing Web servers, browsers or the HTTP protocol.}
}
