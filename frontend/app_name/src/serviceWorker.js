const CACHE_NAME = 'my-cache-v1';
const urlsToCache = [
    '/',
    '/styles/main.css',
    '/scripts/main.js'
];

/* eslint-disable no-restricted-globals */
self.addEventListener('install', event => {
    // Service worker fetch event handling using 'self' here
    event.waitUntil(
        caches.open(CACHE_NAME)
            .then(cache => {
                return cache.addAll(urlsToCache);
            })
    );
});

self.addEventListener('fetch', event => {
    // Service worker fetch event handling using 'self' here
    event.respondWith(
        caches.match(event.request)
            .then(response => {
                if (response) {
                    return response;
                }
                return fetch(event.request);
            })
    );
});
/* eslint-enable no-restricted-globals */