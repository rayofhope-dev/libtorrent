// generated by tools/gen_header.py

#ifndef LIBTORRENT_SETTINGS_H
#define LIBTORRENT_SETTINGS_H

// tags for session wide settings
enum settings_tags_t {
	SET_USER_AGENT = 0x200,
	SET_ANNOUNCE_IP,
	SET_HANDSHAKE_CLIENT_VERSION,
	SET_OUTGOING_INTERFACES,
	SET_LISTEN_INTERFACES,
	SET_PROXY_HOSTNAME,
	SET_PROXY_USERNAME,
	SET_PROXY_PASSWORD,
	SET_I2P_HOSTNAME,
	SET_PEER_FINGERPRINT,
	SET_DHT_BOOTSTRAP_NODES,
	SET_WEBTORRENT_STUN_SERVER,
	SET_ALLOW_MULTIPLE_CONNECTIONS_PER_IP,
	SET_SEND_REDUNDANT_HAVE,
	SET_USE_DHT_AS_FALLBACK,
	SET_UPNP_IGNORE_NONROUTERS,
	SET_USE_PAROLE_MODE,
	SET_AUTO_MANAGE_PREFER_SEEDS,
	SET_DONT_COUNT_SLOW_TORRENTS,
	SET_CLOSE_REDUNDANT_CONNECTIONS,
	SET_PRIORITIZE_PARTIAL_PIECES,
	SET_RATE_LIMIT_IP_OVERHEAD,
	SET_ANNOUNCE_TO_ALL_TIERS,
	SET_ANNOUNCE_TO_ALL_TRACKERS,
	SET_PREFER_UDP_TRACKERS,
	SET_DISABLE_HASH_CHECKS,
	SET_ALLOW_I2P_MIXED,
	SET_VOLATILE_READ_CACHE,
	SET_NO_ATIME_STORAGE,
	SET_INCOMING_STARTS_QUEUED_TORRENTS,
	SET_REPORT_TRUE_DOWNLOADED,
	SET_STRICT_END_GAME_MODE,
	SET_ENABLE_OUTGOING_UTP,
	SET_ENABLE_INCOMING_UTP,
	SET_ENABLE_OUTGOING_TCP,
	SET_ENABLE_INCOMING_TCP,
	SET_NO_RECHECK_INCOMPLETE_RESUME,
	SET_ANONYMOUS_MODE,
	SET_REPORT_WEB_SEED_DOWNLOADS,
	SET_SEEDING_OUTGOING_CONNECTIONS,
	SET_NO_CONNECT_PRIVILEGED_PORTS,
	SET_SMOOTH_CONNECTS,
	SET_ALWAYS_SEND_USER_AGENT,
	SET_APPLY_IP_FILTER_TO_TRACKERS,
	SET_BAN_WEB_SEEDS,
	SET_ALLOW_PARTIAL_DISK_WRITES,
	SET_SUPPORT_SHARE_MODE,
	SET_REPORT_REDUNDANT_BYTES,
	SET_LISTEN_SYSTEM_PORT_FALLBACK,
	SET_ANNOUNCE_CRYPTO_SUPPORT,
	SET_ENABLE_UPNP,
	SET_ENABLE_NATPMP,
	SET_ENABLE_LSD,
	SET_ENABLE_DHT,
	SET_PREFER_RC4,
	SET_PROXY_HOSTNAMES,
	SET_PROXY_PEER_CONNECTIONS,
	SET_AUTO_SEQUENTIAL,
	SET_PROXY_TRACKER_CONNECTIONS,
	SET_ENABLE_IP_NOTIFIER,
	SET_DHT_PREFER_VERIFIED_NODE_IDS,
	SET_DHT_RESTRICT_ROUTING_IPS,
	SET_DHT_RESTRICT_SEARCH_IPS,
	SET_DHT_EXTENDED_ROUTING_TABLE,
	SET_DHT_AGGRESSIVE_LOOKUPS,
	SET_DHT_PRIVACY_LOOKUPS,
	SET_DHT_ENFORCE_NODE_ID,
	SET_DHT_IGNORE_DARK_INTERNET,
	SET_DHT_READ_ONLY,
	SET_PIECE_EXTENT_AFFINITY,
	SET_VALIDATE_HTTPS_TRACKERS,
	SET_TRACKER_COMPLETION_TIMEOUT,
	SET_TRACKER_RECEIVE_TIMEOUT,
	SET_STOP_TRACKER_TIMEOUT,
	SET_TRACKER_MAXIMUM_RESPONSE_LENGTH,
	SET_PIECE_TIMEOUT,
	SET_REQUEST_TIMEOUT,
	SET_REQUEST_QUEUE_TIME,
	SET_MAX_ALLOWED_IN_REQUEST_QUEUE,
	SET_MAX_OUT_REQUEST_QUEUE,
	SET_WHOLE_PIECES_THRESHOLD,
	SET_PEER_TIMEOUT,
	SET_URLSEED_TIMEOUT,
	SET_URLSEED_PIPELINE_SIZE,
	SET_URLSEED_WAIT_RETRY,
	SET_FILE_POOL_SIZE,
	SET_MAX_FAILCOUNT,
	SET_MIN_RECONNECT_TIME,
	SET_PEER_CONNECT_TIMEOUT,
	SET_CONNECTION_SPEED,
	SET_INACTIVITY_TIMEOUT,
	SET_UNCHOKE_INTERVAL,
	SET_OPTIMISTIC_UNCHOKE_INTERVAL,
	SET_NUM_WANT,
	SET_INITIAL_PICKER_THRESHOLD,
	SET_ALLOWED_FAST_SET_SIZE,
	SET_SUGGEST_MODE,
	SET_MAX_QUEUED_DISK_BYTES,
	SET_HANDSHAKE_TIMEOUT,
	SET_SEND_BUFFER_LOW_WATERMARK,
	SET_SEND_BUFFER_WATERMARK,
	SET_SEND_BUFFER_WATERMARK_FACTOR,
	SET_CHOKING_ALGORITHM,
	SET_SEED_CHOKING_ALGORITHM,
	SET_DISK_IO_WRITE_MODE,
	SET_DISK_IO_READ_MODE,
	SET_OUTGOING_PORT,
	SET_NUM_OUTGOING_PORTS,
	SET_PEER_TOS,
	SET_ACTIVE_DOWNLOADS,
	SET_ACTIVE_SEEDS,
	SET_ACTIVE_CHECKING,
	SET_ACTIVE_DHT_LIMIT,
	SET_ACTIVE_TRACKER_LIMIT,
	SET_ACTIVE_LSD_LIMIT,
	SET_ACTIVE_LIMIT,
	SET_AUTO_MANAGE_INTERVAL,
	SET_SEED_TIME_LIMIT,
	SET_AUTO_SCRAPE_INTERVAL,
	SET_AUTO_SCRAPE_MIN_INTERVAL,
	SET_MAX_PEERLIST_SIZE,
	SET_MAX_PAUSED_PEERLIST_SIZE,
	SET_MIN_ANNOUNCE_INTERVAL,
	SET_AUTO_MANAGE_STARTUP,
	SET_SEEDING_PIECE_QUOTA,
	SET_MAX_REJECTS,
	SET_RECV_SOCKET_BUFFER_SIZE,
	SET_SEND_SOCKET_BUFFER_SIZE,
	SET_MAX_PEER_RECV_BUFFER_SIZE,
	SET_READ_CACHE_LINE_SIZE,
	SET_WRITE_CACHE_LINE_SIZE,
	SET_OPTIMISTIC_DISK_RETRY,
	SET_MAX_SUGGEST_PIECES,
	SET_LOCAL_SERVICE_ANNOUNCE_INTERVAL,
	SET_DHT_ANNOUNCE_INTERVAL,
	SET_UDP_TRACKER_TOKEN_EXPIRY,
	SET_NUM_OPTIMISTIC_UNCHOKE_SLOTS,
	SET_MAX_PEX_PEERS,
	SET_TICK_INTERVAL,
	SET_SHARE_MODE_TARGET,
	SET_UPLOAD_RATE_LIMIT,
	SET_DOWNLOAD_RATE_LIMIT,
	SET_DHT_UPLOAD_RATE_LIMIT,
	SET_UNCHOKE_SLOTS_LIMIT,
	SET_CONNECTIONS_LIMIT,
	SET_CONNECTIONS_SLACK,
	SET_UTP_TARGET_DELAY,
	SET_UTP_GAIN_FACTOR,
	SET_UTP_MIN_TIMEOUT,
	SET_UTP_SYN_RESENDS,
	SET_UTP_FIN_RESENDS,
	SET_UTP_NUM_RESENDS,
	SET_UTP_CONNECT_TIMEOUT,
	SET_UTP_LOSS_MULTIPLIER,
	SET_MIXED_MODE_ALGORITHM,
	SET_LISTEN_QUEUE_SIZE,
	SET_TORRENT_CONNECT_BOOST,
	SET_ALERT_QUEUE_SIZE,
	SET_MAX_METADATA_SIZE,
	SET_HASHING_THREADS,
	SET_CHECKING_MEM_USAGE,
	SET_PREDICTIVE_PIECE_ANNOUNCE,
	SET_AIO_THREADS,
	SET_TRACKER_BACKOFF,
	SET_SHARE_RATIO_LIMIT,
	SET_SEED_TIME_RATIO_LIMIT,
	SET_PEER_TURNOVER,
	SET_PEER_TURNOVER_CUTOFF,
	SET_PEER_TURNOVER_INTERVAL,
	SET_CONNECT_SEED_EVERY_N_DOWNLOAD,
	SET_MAX_HTTP_RECV_BUFFER_SIZE,
	SET_MAX_RETRY_PORT_BIND,
	SET_ALERT_MASK,
	SET_OUT_ENC_POLICY,
	SET_IN_ENC_POLICY,
	SET_ALLOWED_ENC_LEVEL,
	SET_INACTIVE_DOWN_RATE,
	SET_INACTIVE_UP_RATE,
	SET_PROXY_TYPE,
	SET_PROXY_PORT,
	SET_I2P_PORT,
	SET_URLSEED_MAX_REQUEST_BYTES,
	SET_WEB_SEED_NAME_LOOKUP_RETRY,
	SET_CLOSE_FILE_INTERVAL,
	SET_UTP_CWND_REDUCE_TIMER,
	SET_MAX_WEB_SEED_CONNECTIONS,
	SET_RESOLVER_CACHE_TIMEOUT,
	SET_SEND_NOT_SENT_LOW_WATERMARK,
	SET_RATE_CHOKER_INITIAL_THRESHOLD,
	SET_UPNP_LEASE_DURATION,
	SET_MAX_CONCURRENT_HTTP_ANNOUNCES,
	SET_DHT_MAX_PEERS_REPLY,
	SET_DHT_SEARCH_BRANCHING,
	SET_DHT_MAX_FAIL_COUNT,
	SET_DHT_MAX_TORRENTS,
	SET_DHT_MAX_DHT_ITEMS,
	SET_DHT_MAX_PEERS,
	SET_DHT_MAX_TORRENT_SEARCH_REPLY,
	SET_DHT_BLOCK_TIMEOUT,
	SET_DHT_BLOCK_RATELIMIT,
	SET_DHT_ITEM_LIFETIME,
	SET_DHT_SAMPLE_INFOHASHES_INTERVAL,
	SET_DHT_MAX_INFOHASHES_SAMPLE_COUNT,
	SET_MAX_PIECE_COUNT,
	SET_MIN_WEBSOCKET_ANNOUNCE_INTERVAL,
	SET_WEBTORRENT_CONNECTION_TIMEOUT,
};

#endif // LIBTORRENT_SETTINGS_H
