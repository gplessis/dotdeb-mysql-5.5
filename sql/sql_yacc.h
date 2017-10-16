/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_MYSQL_EXPORT_HOME2_PB2_BUILD_SB_2_24964559_1505317808_65_DIST_GPL_SQL_SQL_YACC_H_INCLUDED
# define YY_MYSQL_EXPORT_HOME2_PB2_BUILD_SB_2_24964559_1505317808_65_DIST_GPL_SQL_SQL_YACC_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int MYSQLdebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ABORT_SYM = 258,
     ACCESSIBLE_SYM = 259,
     ACTION = 260,
     ADD = 261,
     ADDDATE_SYM = 262,
     AFTER_SYM = 263,
     AGAINST = 264,
     AGGREGATE_SYM = 265,
     ALGORITHM_SYM = 266,
     ALL = 267,
     ALTER = 268,
     ANALYSE_SYM = 269,
     ANALYZE_SYM = 270,
     AND_AND_SYM = 271,
     AND_SYM = 272,
     ANY_SYM = 273,
     AS = 274,
     ASC = 275,
     ASCII_SYM = 276,
     ASENSITIVE_SYM = 277,
     AT_SYM = 278,
     AUTOEXTEND_SIZE_SYM = 279,
     AUTO_INC = 280,
     AVG_ROW_LENGTH = 281,
     AVG_SYM = 282,
     BACKUP_SYM = 283,
     BEFORE_SYM = 284,
     BEGIN_SYM = 285,
     BETWEEN_SYM = 286,
     BIGINT = 287,
     BINARY = 288,
     BINLOG_SYM = 289,
     BIN_NUM = 290,
     BIT_AND = 291,
     BIT_OR = 292,
     BIT_SYM = 293,
     BIT_XOR = 294,
     BLOB_SYM = 295,
     BLOCK_SYM = 296,
     BOOLEAN_SYM = 297,
     BOOL_SYM = 298,
     BOTH = 299,
     BTREE_SYM = 300,
     BY = 301,
     BYTE_SYM = 302,
     CACHE_SYM = 303,
     CALL_SYM = 304,
     CASCADE = 305,
     CASCADED = 306,
     CASE_SYM = 307,
     CAST_SYM = 308,
     CATALOG_NAME_SYM = 309,
     CHAIN_SYM = 310,
     CHANGE = 311,
     CHANGED = 312,
     CHARSET = 313,
     CHAR_SYM = 314,
     CHECKSUM_SYM = 315,
     CHECK_SYM = 316,
     CIPHER_SYM = 317,
     CLASS_ORIGIN_SYM = 318,
     CLIENT_SYM = 319,
     CLOSE_SYM = 320,
     COALESCE = 321,
     CODE_SYM = 322,
     COLLATE_SYM = 323,
     COLLATION_SYM = 324,
     COLUMNS = 325,
     COLUMN_SYM = 326,
     COLUMN_FORMAT_SYM = 327,
     COLUMN_NAME_SYM = 328,
     COMMENT_SYM = 329,
     COMMITTED_SYM = 330,
     COMMIT_SYM = 331,
     COMPACT_SYM = 332,
     COMPLETION_SYM = 333,
     COMPRESSED_SYM = 334,
     CONCURRENT = 335,
     CONDITION_SYM = 336,
     CONNECTION_SYM = 337,
     CONSISTENT_SYM = 338,
     CONSTRAINT = 339,
     CONSTRAINT_CATALOG_SYM = 340,
     CONSTRAINT_NAME_SYM = 341,
     CONSTRAINT_SCHEMA_SYM = 342,
     CONTAINS_SYM = 343,
     CONTEXT_SYM = 344,
     CONTINUE_SYM = 345,
     CONVERT_SYM = 346,
     COUNT_SYM = 347,
     CPU_SYM = 348,
     CREATE = 349,
     CROSS = 350,
     CUBE_SYM = 351,
     CURDATE = 352,
     CURRENT_SYM = 353,
     CURRENT_USER = 354,
     CURSOR_SYM = 355,
     CURSOR_NAME_SYM = 356,
     CURTIME = 357,
     DATABASE = 358,
     DATABASES = 359,
     DATAFILE_SYM = 360,
     DATA_SYM = 361,
     DATETIME = 362,
     DATE_ADD_INTERVAL = 363,
     DATE_SUB_INTERVAL = 364,
     DATE_SYM = 365,
     DAY_HOUR_SYM = 366,
     DAY_MICROSECOND_SYM = 367,
     DAY_MINUTE_SYM = 368,
     DAY_SECOND_SYM = 369,
     DAY_SYM = 370,
     DEALLOCATE_SYM = 371,
     DECIMAL_NUM = 372,
     DECIMAL_SYM = 373,
     DECLARE_SYM = 374,
     DEFAULT = 375,
     DEFAULT_AUTH_SYM = 376,
     DEFINER_SYM = 377,
     DELAYED_SYM = 378,
     DELAY_KEY_WRITE_SYM = 379,
     DELETE_SYM = 380,
     DESC = 381,
     DESCRIBE = 382,
     DES_KEY_FILE = 383,
     DETERMINISTIC_SYM = 384,
     DIAGNOSTICS_SYM = 385,
     DIRECTORY_SYM = 386,
     DISABLE_SYM = 387,
     DISCARD = 388,
     DISK_SYM = 389,
     DISTINCT = 390,
     DIV_SYM = 391,
     DOUBLE_SYM = 392,
     DO_SYM = 393,
     DROP = 394,
     DUAL_SYM = 395,
     DUMPFILE = 396,
     DUPLICATE_SYM = 397,
     DYNAMIC_SYM = 398,
     EACH_SYM = 399,
     ELSE = 400,
     ELSEIF_SYM = 401,
     ENABLE_SYM = 402,
     ENCLOSED = 403,
     END = 404,
     ENDS_SYM = 405,
     END_OF_INPUT = 406,
     ENGINES_SYM = 407,
     ENGINE_SYM = 408,
     ENUM = 409,
     EQ = 410,
     EQUAL_SYM = 411,
     ERROR_SYM = 412,
     ERRORS = 413,
     ESCAPED = 414,
     ESCAPE_SYM = 415,
     EVENTS_SYM = 416,
     EVENT_SYM = 417,
     EVERY_SYM = 418,
     EXCHANGE_SYM = 419,
     EXECUTE_SYM = 420,
     EXISTS = 421,
     EXIT_SYM = 422,
     EXPANSION_SYM = 423,
     EXPIRE_SYM = 424,
     EXPORT_SYM = 425,
     EXTENDED_SYM = 426,
     EXTENT_SIZE_SYM = 427,
     EXTRACT_SYM = 428,
     FALSE_SYM = 429,
     FAST_SYM = 430,
     FAULTS_SYM = 431,
     FETCH_SYM = 432,
     FILE_SYM = 433,
     FIRST_SYM = 434,
     FIXED_SYM = 435,
     FLOAT_NUM = 436,
     FLOAT_SYM = 437,
     FLUSH_SYM = 438,
     FORCE_SYM = 439,
     FOREIGN = 440,
     FOR_SYM = 441,
     FORMAT_SYM = 442,
     FOUND_SYM = 443,
     FROM = 444,
     FULL = 445,
     FULLTEXT_SYM = 446,
     FUNCTION_SYM = 447,
     GE = 448,
     GENERAL = 449,
     GEOMETRYCOLLECTION = 450,
     GEOMETRY_SYM = 451,
     GET_FORMAT = 452,
     GET_SYM = 453,
     GLOBAL_SYM = 454,
     GRANT = 455,
     GRANTS = 456,
     GROUP_SYM = 457,
     GROUP_CONCAT_SYM = 458,
     GT_SYM = 459,
     HANDLER_SYM = 460,
     HASH_SYM = 461,
     HAVING = 462,
     HELP_SYM = 463,
     HEX_NUM = 464,
     HIGH_PRIORITY = 465,
     HOST_SYM = 466,
     HOSTS_SYM = 467,
     HOUR_MICROSECOND_SYM = 468,
     HOUR_MINUTE_SYM = 469,
     HOUR_SECOND_SYM = 470,
     HOUR_SYM = 471,
     IDENT = 472,
     IDENTIFIED_SYM = 473,
     IDENT_QUOTED = 474,
     IF = 475,
     IGNORE_SYM = 476,
     IGNORE_SERVER_IDS_SYM = 477,
     IMPORT = 478,
     INDEXES = 479,
     INDEX_SYM = 480,
     INFILE = 481,
     INITIAL_SIZE_SYM = 482,
     INNER_SYM = 483,
     INOUT_SYM = 484,
     INSENSITIVE_SYM = 485,
     INSERT = 486,
     INSERT_METHOD = 487,
     INSTALL_SYM = 488,
     INTERVAL_SYM = 489,
     INTO = 490,
     INT_SYM = 491,
     INVOKER_SYM = 492,
     IN_SYM = 493,
     IO_AFTER_GTIDS = 494,
     IO_BEFORE_GTIDS = 495,
     IO_SYM = 496,
     IPC_SYM = 497,
     IS = 498,
     ISOLATION = 499,
     ISSUER_SYM = 500,
     ITERATE_SYM = 501,
     JOIN_SYM = 502,
     KEYS = 503,
     KEY_BLOCK_SIZE = 504,
     KEY_SYM = 505,
     KILL_SYM = 506,
     LANGUAGE_SYM = 507,
     LAST_SYM = 508,
     LE = 509,
     LEADING = 510,
     LEAVES = 511,
     LEAVE_SYM = 512,
     LEFT = 513,
     LESS_SYM = 514,
     LEVEL_SYM = 515,
     LEX_HOSTNAME = 516,
     LIKE = 517,
     LIMIT = 518,
     LINEAR_SYM = 519,
     LINES = 520,
     LINESTRING = 521,
     LIST_SYM = 522,
     LOAD = 523,
     LOCAL_SYM = 524,
     LOCATOR_SYM = 525,
     LOCKS_SYM = 526,
     LOCK_SYM = 527,
     LOGFILE_SYM = 528,
     LOGS_SYM = 529,
     LONGBLOB = 530,
     LONGTEXT = 531,
     LONG_NUM = 532,
     LONG_SYM = 533,
     LOOP_SYM = 534,
     LOW_PRIORITY = 535,
     LT = 536,
     MASTER_AUTO_POSITION_SYM = 537,
     MASTER_BIND_SYM = 538,
     MASTER_CONNECT_RETRY_SYM = 539,
     MASTER_DELAY_SYM = 540,
     MASTER_HOST_SYM = 541,
     MASTER_LOG_FILE_SYM = 542,
     MASTER_LOG_POS_SYM = 543,
     MASTER_PASSWORD_SYM = 544,
     MASTER_PORT_SYM = 545,
     MASTER_RETRY_COUNT_SYM = 546,
     MASTER_SERVER_ID_SYM = 547,
     MASTER_SSL_CAPATH_SYM = 548,
     MASTER_SSL_CA_SYM = 549,
     MASTER_SSL_CERT_SYM = 550,
     MASTER_SSL_CIPHER_SYM = 551,
     MASTER_SSL_CRL_SYM = 552,
     MASTER_SSL_CRLPATH_SYM = 553,
     MASTER_SSL_KEY_SYM = 554,
     MASTER_SSL_SYM = 555,
     MASTER_SSL_VERIFY_SERVER_CERT_SYM = 556,
     MASTER_SYM = 557,
     MASTER_USER_SYM = 558,
     MASTER_HEARTBEAT_PERIOD_SYM = 559,
     MATCH = 560,
     MAX_CONNECTIONS_PER_HOUR = 561,
     MAX_QUERIES_PER_HOUR = 562,
     MAX_ROWS = 563,
     MAX_SIZE_SYM = 564,
     MAX_SYM = 565,
     MAX_UPDATES_PER_HOUR = 566,
     MAX_USER_CONNECTIONS_SYM = 567,
     MAX_VALUE_SYM = 568,
     MEDIUMBLOB = 569,
     MEDIUMINT = 570,
     MEDIUMTEXT = 571,
     MEDIUM_SYM = 572,
     MEMORY_SYM = 573,
     MERGE_SYM = 574,
     MESSAGE_TEXT_SYM = 575,
     MICROSECOND_SYM = 576,
     MIGRATE_SYM = 577,
     MINUTE_MICROSECOND_SYM = 578,
     MINUTE_SECOND_SYM = 579,
     MINUTE_SYM = 580,
     MIN_ROWS = 581,
     MIN_SYM = 582,
     MODE_SYM = 583,
     MODIFIES_SYM = 584,
     MODIFY_SYM = 585,
     MOD_SYM = 586,
     MONTH_SYM = 587,
     MULTILINESTRING = 588,
     MULTIPOINT = 589,
     MULTIPOLYGON = 590,
     MUTEX_SYM = 591,
     MYSQL_ERRNO_SYM = 592,
     NAMES_SYM = 593,
     NAME_SYM = 594,
     NATIONAL_SYM = 595,
     NATURAL = 596,
     NCHAR_STRING = 597,
     NCHAR_SYM = 598,
     NDBCLUSTER_SYM = 599,
     NE = 600,
     NEG = 601,
     NEW_SYM = 602,
     NEXT_SYM = 603,
     NODEGROUP_SYM = 604,
     NONE_SYM = 605,
     NOT2_SYM = 606,
     NOT_SYM = 607,
     NOW_SYM = 608,
     NO_SYM = 609,
     NO_WAIT_SYM = 610,
     NO_WRITE_TO_BINLOG = 611,
     NULL_SYM = 612,
     NUM = 613,
     NUMBER_SYM = 614,
     NUMERIC_SYM = 615,
     NVARCHAR_SYM = 616,
     OFFSET_SYM = 617,
     OLD_PASSWORD = 618,
     ON = 619,
     ONE_SYM = 620,
     ONLY_SYM = 621,
     OPEN_SYM = 622,
     OPTIMIZE = 623,
     OPTIONS_SYM = 624,
     OPTION = 625,
     OPTIONALLY = 626,
     OR2_SYM = 627,
     ORDER_SYM = 628,
     OR_OR_SYM = 629,
     OR_SYM = 630,
     OUTER = 631,
     OUTFILE = 632,
     OUT_SYM = 633,
     OWNER_SYM = 634,
     PACK_KEYS_SYM = 635,
     PAGE_SYM = 636,
     PARAM_MARKER = 637,
     PARSER_SYM = 638,
     PARTIAL = 639,
     PARTITION_SYM = 640,
     PARTITIONS_SYM = 641,
     PARTITIONING_SYM = 642,
     PASSWORD = 643,
     PHASE_SYM = 644,
     PLUGIN_DIR_SYM = 645,
     PLUGIN_SYM = 646,
     PLUGINS_SYM = 647,
     POINT_SYM = 648,
     POLYGON = 649,
     PORT_SYM = 650,
     POSITION_SYM = 651,
     PRECISION = 652,
     PREPARE_SYM = 653,
     PRESERVE_SYM = 654,
     PREV_SYM = 655,
     PRIMARY_SYM = 656,
     PRIVILEGES = 657,
     PROCEDURE_SYM = 658,
     PROCESS = 659,
     PROCESSLIST_SYM = 660,
     PROFILE_SYM = 661,
     PROFILES_SYM = 662,
     PROXY_SYM = 663,
     PURGE = 664,
     QUARTER_SYM = 665,
     QUERY_SYM = 666,
     QUICK = 667,
     RANGE_SYM = 668,
     READS_SYM = 669,
     READ_ONLY_SYM = 670,
     READ_SYM = 671,
     READ_WRITE_SYM = 672,
     REAL = 673,
     REBUILD_SYM = 674,
     RECOVER_SYM = 675,
     REDOFILE_SYM = 676,
     REDO_BUFFER_SIZE_SYM = 677,
     REDUNDANT_SYM = 678,
     REFERENCES = 679,
     REGEXP = 680,
     RELAY = 681,
     RELAYLOG_SYM = 682,
     RELAY_LOG_FILE_SYM = 683,
     RELAY_LOG_POS_SYM = 684,
     RELAY_THREAD = 685,
     RELEASE_SYM = 686,
     RELOAD = 687,
     REMOVE_SYM = 688,
     RENAME = 689,
     REORGANIZE_SYM = 690,
     REPAIR = 691,
     REPEATABLE_SYM = 692,
     REPEAT_SYM = 693,
     REPLACE = 694,
     REPLICATION = 695,
     REQUIRE_SYM = 696,
     RESET_SYM = 697,
     RESIGNAL_SYM = 698,
     RESOURCES = 699,
     RESTORE_SYM = 700,
     RESTRICT = 701,
     RESUME_SYM = 702,
     RETURNED_SQLSTATE_SYM = 703,
     RETURNS_SYM = 704,
     RETURN_SYM = 705,
     REVERSE_SYM = 706,
     REVOKE = 707,
     RIGHT = 708,
     ROLLBACK_SYM = 709,
     ROLLUP_SYM = 710,
     ROUTINE_SYM = 711,
     ROWS_SYM = 712,
     ROW_FORMAT_SYM = 713,
     ROW_SYM = 714,
     ROW_COUNT_SYM = 715,
     RTREE_SYM = 716,
     SAVEPOINT_SYM = 717,
     SCHEDULE_SYM = 718,
     SCHEMA_NAME_SYM = 719,
     SECOND_MICROSECOND_SYM = 720,
     SECOND_SYM = 721,
     SECURITY_SYM = 722,
     SELECT_SYM = 723,
     SENSITIVE_SYM = 724,
     SEPARATOR_SYM = 725,
     SERIALIZABLE_SYM = 726,
     SERIAL_SYM = 727,
     SESSION_SYM = 728,
     SERVER_SYM = 729,
     SERVER_OPTIONS = 730,
     SET = 731,
     SET_VAR = 732,
     SHARE_SYM = 733,
     SHIFT_LEFT = 734,
     SHIFT_RIGHT = 735,
     SHOW = 736,
     SHUTDOWN = 737,
     SIGNAL_SYM = 738,
     SIGNED_SYM = 739,
     SIMPLE_SYM = 740,
     SLAVE = 741,
     SLOW = 742,
     SMALLINT = 743,
     SNAPSHOT_SYM = 744,
     SOCKET_SYM = 745,
     SONAME_SYM = 746,
     SOUNDS_SYM = 747,
     SOURCE_SYM = 748,
     SPATIAL_SYM = 749,
     SPECIFIC_SYM = 750,
     SQLEXCEPTION_SYM = 751,
     SQLSTATE_SYM = 752,
     SQLWARNING_SYM = 753,
     SQL_AFTER_GTIDS = 754,
     SQL_AFTER_MTS_GAPS = 755,
     SQL_BEFORE_GTIDS = 756,
     SQL_BIG_RESULT = 757,
     SQL_BUFFER_RESULT = 758,
     SQL_CACHE_SYM = 759,
     SQL_CALC_FOUND_ROWS = 760,
     SQL_NO_CACHE_SYM = 761,
     SQL_SMALL_RESULT = 762,
     SQL_SYM = 763,
     SQL_THREAD = 764,
     SSL_SYM = 765,
     STARTING = 766,
     STARTS_SYM = 767,
     START_SYM = 768,
     STATS_AUTO_RECALC_SYM = 769,
     STATS_PERSISTENT_SYM = 770,
     STATS_SAMPLE_PAGES_SYM = 771,
     STATUS_SYM = 772,
     STDDEV_SAMP_SYM = 773,
     STD_SYM = 774,
     STOP_SYM = 775,
     STORAGE_SYM = 776,
     STRAIGHT_JOIN = 777,
     STRING_SYM = 778,
     SUBCLASS_ORIGIN_SYM = 779,
     SUBDATE_SYM = 780,
     SUBJECT_SYM = 781,
     SUBPARTITIONS_SYM = 782,
     SUBPARTITION_SYM = 783,
     SUBSTRING = 784,
     SUM_SYM = 785,
     SUPER_SYM = 786,
     SUSPEND_SYM = 787,
     SWAPS_SYM = 788,
     SWITCHES_SYM = 789,
     SYSDATE = 790,
     TABLES = 791,
     TABLESPACE = 792,
     TABLE_REF_PRIORITY = 793,
     TABLE_SYM = 794,
     TABLE_CHECKSUM_SYM = 795,
     TABLE_NAME_SYM = 796,
     TEMPORARY = 797,
     TEMPTABLE_SYM = 798,
     TERMINATED = 799,
     TEXT_STRING = 800,
     TEXT_SYM = 801,
     THAN_SYM = 802,
     THEN_SYM = 803,
     TIMESTAMP = 804,
     TIMESTAMP_ADD = 805,
     TIMESTAMP_DIFF = 806,
     TIME_SYM = 807,
     TINYBLOB = 808,
     TINYINT = 809,
     TINYTEXT = 810,
     TO_SYM = 811,
     TRAILING = 812,
     TRANSACTION_SYM = 813,
     TRIGGERS_SYM = 814,
     TRIGGER_SYM = 815,
     TRIM = 816,
     TRUE_SYM = 817,
     TRUNCATE_SYM = 818,
     TYPES_SYM = 819,
     TYPE_SYM = 820,
     UDF_RETURNS_SYM = 821,
     ULONGLONG_NUM = 822,
     UNCOMMITTED_SYM = 823,
     UNDEFINED_SYM = 824,
     UNDERSCORE_CHARSET = 825,
     UNDOFILE_SYM = 826,
     UNDO_BUFFER_SIZE_SYM = 827,
     UNDO_SYM = 828,
     UNICODE_SYM = 829,
     UNINSTALL_SYM = 830,
     UNION_SYM = 831,
     UNIQUE_SYM = 832,
     UNKNOWN_SYM = 833,
     UNLOCK_SYM = 834,
     UNSIGNED = 835,
     UNTIL_SYM = 836,
     UPDATE_SYM = 837,
     UPGRADE_SYM = 838,
     USAGE = 839,
     USER = 840,
     USE_FRM = 841,
     USE_SYM = 842,
     USING = 843,
     UTC_DATE_SYM = 844,
     UTC_TIMESTAMP_SYM = 845,
     UTC_TIME_SYM = 846,
     VALUES = 847,
     VALUE_SYM = 848,
     VARBINARY = 849,
     VARCHAR = 850,
     VARIABLES = 851,
     VARIANCE_SYM = 852,
     VARYING = 853,
     VAR_SAMP_SYM = 854,
     VIEW_SYM = 855,
     WAIT_SYM = 856,
     WARNINGS = 857,
     WEEK_SYM = 858,
     WEIGHT_STRING_SYM = 859,
     WHEN_SYM = 860,
     WHERE = 861,
     WHILE_SYM = 862,
     WITH = 863,
     WITH_CUBE_SYM = 864,
     WITH_ROLLUP_SYM = 865,
     WORK_SYM = 866,
     WRAPPER_SYM = 867,
     WRITE_SYM = 868,
     X509_SYM = 869,
     XA_SYM = 870,
     XML_SYM = 871,
     XOR = 872,
     YEAR_MONTH_SYM = 873,
     YEAR_SYM = 874,
     ZEROFILL = 875
   };
#endif
/* Tokens.  */
#define ABORT_SYM 258
#define ACCESSIBLE_SYM 259
#define ACTION 260
#define ADD 261
#define ADDDATE_SYM 262
#define AFTER_SYM 263
#define AGAINST 264
#define AGGREGATE_SYM 265
#define ALGORITHM_SYM 266
#define ALL 267
#define ALTER 268
#define ANALYSE_SYM 269
#define ANALYZE_SYM 270
#define AND_AND_SYM 271
#define AND_SYM 272
#define ANY_SYM 273
#define AS 274
#define ASC 275
#define ASCII_SYM 276
#define ASENSITIVE_SYM 277
#define AT_SYM 278
#define AUTOEXTEND_SIZE_SYM 279
#define AUTO_INC 280
#define AVG_ROW_LENGTH 281
#define AVG_SYM 282
#define BACKUP_SYM 283
#define BEFORE_SYM 284
#define BEGIN_SYM 285
#define BETWEEN_SYM 286
#define BIGINT 287
#define BINARY 288
#define BINLOG_SYM 289
#define BIN_NUM 290
#define BIT_AND 291
#define BIT_OR 292
#define BIT_SYM 293
#define BIT_XOR 294
#define BLOB_SYM 295
#define BLOCK_SYM 296
#define BOOLEAN_SYM 297
#define BOOL_SYM 298
#define BOTH 299
#define BTREE_SYM 300
#define BY 301
#define BYTE_SYM 302
#define CACHE_SYM 303
#define CALL_SYM 304
#define CASCADE 305
#define CASCADED 306
#define CASE_SYM 307
#define CAST_SYM 308
#define CATALOG_NAME_SYM 309
#define CHAIN_SYM 310
#define CHANGE 311
#define CHANGED 312
#define CHARSET 313
#define CHAR_SYM 314
#define CHECKSUM_SYM 315
#define CHECK_SYM 316
#define CIPHER_SYM 317
#define CLASS_ORIGIN_SYM 318
#define CLIENT_SYM 319
#define CLOSE_SYM 320
#define COALESCE 321
#define CODE_SYM 322
#define COLLATE_SYM 323
#define COLLATION_SYM 324
#define COLUMNS 325
#define COLUMN_SYM 326
#define COLUMN_FORMAT_SYM 327
#define COLUMN_NAME_SYM 328
#define COMMENT_SYM 329
#define COMMITTED_SYM 330
#define COMMIT_SYM 331
#define COMPACT_SYM 332
#define COMPLETION_SYM 333
#define COMPRESSED_SYM 334
#define CONCURRENT 335
#define CONDITION_SYM 336
#define CONNECTION_SYM 337
#define CONSISTENT_SYM 338
#define CONSTRAINT 339
#define CONSTRAINT_CATALOG_SYM 340
#define CONSTRAINT_NAME_SYM 341
#define CONSTRAINT_SCHEMA_SYM 342
#define CONTAINS_SYM 343
#define CONTEXT_SYM 344
#define CONTINUE_SYM 345
#define CONVERT_SYM 346
#define COUNT_SYM 347
#define CPU_SYM 348
#define CREATE 349
#define CROSS 350
#define CUBE_SYM 351
#define CURDATE 352
#define CURRENT_SYM 353
#define CURRENT_USER 354
#define CURSOR_SYM 355
#define CURSOR_NAME_SYM 356
#define CURTIME 357
#define DATABASE 358
#define DATABASES 359
#define DATAFILE_SYM 360
#define DATA_SYM 361
#define DATETIME 362
#define DATE_ADD_INTERVAL 363
#define DATE_SUB_INTERVAL 364
#define DATE_SYM 365
#define DAY_HOUR_SYM 366
#define DAY_MICROSECOND_SYM 367
#define DAY_MINUTE_SYM 368
#define DAY_SECOND_SYM 369
#define DAY_SYM 370
#define DEALLOCATE_SYM 371
#define DECIMAL_NUM 372
#define DECIMAL_SYM 373
#define DECLARE_SYM 374
#define DEFAULT 375
#define DEFAULT_AUTH_SYM 376
#define DEFINER_SYM 377
#define DELAYED_SYM 378
#define DELAY_KEY_WRITE_SYM 379
#define DELETE_SYM 380
#define DESC 381
#define DESCRIBE 382
#define DES_KEY_FILE 383
#define DETERMINISTIC_SYM 384
#define DIAGNOSTICS_SYM 385
#define DIRECTORY_SYM 386
#define DISABLE_SYM 387
#define DISCARD 388
#define DISK_SYM 389
#define DISTINCT 390
#define DIV_SYM 391
#define DOUBLE_SYM 392
#define DO_SYM 393
#define DROP 394
#define DUAL_SYM 395
#define DUMPFILE 396
#define DUPLICATE_SYM 397
#define DYNAMIC_SYM 398
#define EACH_SYM 399
#define ELSE 400
#define ELSEIF_SYM 401
#define ENABLE_SYM 402
#define ENCLOSED 403
#define END 404
#define ENDS_SYM 405
#define END_OF_INPUT 406
#define ENGINES_SYM 407
#define ENGINE_SYM 408
#define ENUM 409
#define EQ 410
#define EQUAL_SYM 411
#define ERROR_SYM 412
#define ERRORS 413
#define ESCAPED 414
#define ESCAPE_SYM 415
#define EVENTS_SYM 416
#define EVENT_SYM 417
#define EVERY_SYM 418
#define EXCHANGE_SYM 419
#define EXECUTE_SYM 420
#define EXISTS 421
#define EXIT_SYM 422
#define EXPANSION_SYM 423
#define EXPIRE_SYM 424
#define EXPORT_SYM 425
#define EXTENDED_SYM 426
#define EXTENT_SIZE_SYM 427
#define EXTRACT_SYM 428
#define FALSE_SYM 429
#define FAST_SYM 430
#define FAULTS_SYM 431
#define FETCH_SYM 432
#define FILE_SYM 433
#define FIRST_SYM 434
#define FIXED_SYM 435
#define FLOAT_NUM 436
#define FLOAT_SYM 437
#define FLUSH_SYM 438
#define FORCE_SYM 439
#define FOREIGN 440
#define FOR_SYM 441
#define FORMAT_SYM 442
#define FOUND_SYM 443
#define FROM 444
#define FULL 445
#define FULLTEXT_SYM 446
#define FUNCTION_SYM 447
#define GE 448
#define GENERAL 449
#define GEOMETRYCOLLECTION 450
#define GEOMETRY_SYM 451
#define GET_FORMAT 452
#define GET_SYM 453
#define GLOBAL_SYM 454
#define GRANT 455
#define GRANTS 456
#define GROUP_SYM 457
#define GROUP_CONCAT_SYM 458
#define GT_SYM 459
#define HANDLER_SYM 460
#define HASH_SYM 461
#define HAVING 462
#define HELP_SYM 463
#define HEX_NUM 464
#define HIGH_PRIORITY 465
#define HOST_SYM 466
#define HOSTS_SYM 467
#define HOUR_MICROSECOND_SYM 468
#define HOUR_MINUTE_SYM 469
#define HOUR_SECOND_SYM 470
#define HOUR_SYM 471
#define IDENT 472
#define IDENTIFIED_SYM 473
#define IDENT_QUOTED 474
#define IF 475
#define IGNORE_SYM 476
#define IGNORE_SERVER_IDS_SYM 477
#define IMPORT 478
#define INDEXES 479
#define INDEX_SYM 480
#define INFILE 481
#define INITIAL_SIZE_SYM 482
#define INNER_SYM 483
#define INOUT_SYM 484
#define INSENSITIVE_SYM 485
#define INSERT 486
#define INSERT_METHOD 487
#define INSTALL_SYM 488
#define INTERVAL_SYM 489
#define INTO 490
#define INT_SYM 491
#define INVOKER_SYM 492
#define IN_SYM 493
#define IO_AFTER_GTIDS 494
#define IO_BEFORE_GTIDS 495
#define IO_SYM 496
#define IPC_SYM 497
#define IS 498
#define ISOLATION 499
#define ISSUER_SYM 500
#define ITERATE_SYM 501
#define JOIN_SYM 502
#define KEYS 503
#define KEY_BLOCK_SIZE 504
#define KEY_SYM 505
#define KILL_SYM 506
#define LANGUAGE_SYM 507
#define LAST_SYM 508
#define LE 509
#define LEADING 510
#define LEAVES 511
#define LEAVE_SYM 512
#define LEFT 513
#define LESS_SYM 514
#define LEVEL_SYM 515
#define LEX_HOSTNAME 516
#define LIKE 517
#define LIMIT 518
#define LINEAR_SYM 519
#define LINES 520
#define LINESTRING 521
#define LIST_SYM 522
#define LOAD 523
#define LOCAL_SYM 524
#define LOCATOR_SYM 525
#define LOCKS_SYM 526
#define LOCK_SYM 527
#define LOGFILE_SYM 528
#define LOGS_SYM 529
#define LONGBLOB 530
#define LONGTEXT 531
#define LONG_NUM 532
#define LONG_SYM 533
#define LOOP_SYM 534
#define LOW_PRIORITY 535
#define LT 536
#define MASTER_AUTO_POSITION_SYM 537
#define MASTER_BIND_SYM 538
#define MASTER_CONNECT_RETRY_SYM 539
#define MASTER_DELAY_SYM 540
#define MASTER_HOST_SYM 541
#define MASTER_LOG_FILE_SYM 542
#define MASTER_LOG_POS_SYM 543
#define MASTER_PASSWORD_SYM 544
#define MASTER_PORT_SYM 545
#define MASTER_RETRY_COUNT_SYM 546
#define MASTER_SERVER_ID_SYM 547
#define MASTER_SSL_CAPATH_SYM 548
#define MASTER_SSL_CA_SYM 549
#define MASTER_SSL_CERT_SYM 550
#define MASTER_SSL_CIPHER_SYM 551
#define MASTER_SSL_CRL_SYM 552
#define MASTER_SSL_CRLPATH_SYM 553
#define MASTER_SSL_KEY_SYM 554
#define MASTER_SSL_SYM 555
#define MASTER_SSL_VERIFY_SERVER_CERT_SYM 556
#define MASTER_SYM 557
#define MASTER_USER_SYM 558
#define MASTER_HEARTBEAT_PERIOD_SYM 559
#define MATCH 560
#define MAX_CONNECTIONS_PER_HOUR 561
#define MAX_QUERIES_PER_HOUR 562
#define MAX_ROWS 563
#define MAX_SIZE_SYM 564
#define MAX_SYM 565
#define MAX_UPDATES_PER_HOUR 566
#define MAX_USER_CONNECTIONS_SYM 567
#define MAX_VALUE_SYM 568
#define MEDIUMBLOB 569
#define MEDIUMINT 570
#define MEDIUMTEXT 571
#define MEDIUM_SYM 572
#define MEMORY_SYM 573
#define MERGE_SYM 574
#define MESSAGE_TEXT_SYM 575
#define MICROSECOND_SYM 576
#define MIGRATE_SYM 577
#define MINUTE_MICROSECOND_SYM 578
#define MINUTE_SECOND_SYM 579
#define MINUTE_SYM 580
#define MIN_ROWS 581
#define MIN_SYM 582
#define MODE_SYM 583
#define MODIFIES_SYM 584
#define MODIFY_SYM 585
#define MOD_SYM 586
#define MONTH_SYM 587
#define MULTILINESTRING 588
#define MULTIPOINT 589
#define MULTIPOLYGON 590
#define MUTEX_SYM 591
#define MYSQL_ERRNO_SYM 592
#define NAMES_SYM 593
#define NAME_SYM 594
#define NATIONAL_SYM 595
#define NATURAL 596
#define NCHAR_STRING 597
#define NCHAR_SYM 598
#define NDBCLUSTER_SYM 599
#define NE 600
#define NEG 601
#define NEW_SYM 602
#define NEXT_SYM 603
#define NODEGROUP_SYM 604
#define NONE_SYM 605
#define NOT2_SYM 606
#define NOT_SYM 607
#define NOW_SYM 608
#define NO_SYM 609
#define NO_WAIT_SYM 610
#define NO_WRITE_TO_BINLOG 611
#define NULL_SYM 612
#define NUM 613
#define NUMBER_SYM 614
#define NUMERIC_SYM 615
#define NVARCHAR_SYM 616
#define OFFSET_SYM 617
#define OLD_PASSWORD 618
#define ON 619
#define ONE_SYM 620
#define ONLY_SYM 621
#define OPEN_SYM 622
#define OPTIMIZE 623
#define OPTIONS_SYM 624
#define OPTION 625
#define OPTIONALLY 626
#define OR2_SYM 627
#define ORDER_SYM 628
#define OR_OR_SYM 629
#define OR_SYM 630
#define OUTER 631
#define OUTFILE 632
#define OUT_SYM 633
#define OWNER_SYM 634
#define PACK_KEYS_SYM 635
#define PAGE_SYM 636
#define PARAM_MARKER 637
#define PARSER_SYM 638
#define PARTIAL 639
#define PARTITION_SYM 640
#define PARTITIONS_SYM 641
#define PARTITIONING_SYM 642
#define PASSWORD 643
#define PHASE_SYM 644
#define PLUGIN_DIR_SYM 645
#define PLUGIN_SYM 646
#define PLUGINS_SYM 647
#define POINT_SYM 648
#define POLYGON 649
#define PORT_SYM 650
#define POSITION_SYM 651
#define PRECISION 652
#define PREPARE_SYM 653
#define PRESERVE_SYM 654
#define PREV_SYM 655
#define PRIMARY_SYM 656
#define PRIVILEGES 657
#define PROCEDURE_SYM 658
#define PROCESS 659
#define PROCESSLIST_SYM 660
#define PROFILE_SYM 661
#define PROFILES_SYM 662
#define PROXY_SYM 663
#define PURGE 664
#define QUARTER_SYM 665
#define QUERY_SYM 666
#define QUICK 667
#define RANGE_SYM 668
#define READS_SYM 669
#define READ_ONLY_SYM 670
#define READ_SYM 671
#define READ_WRITE_SYM 672
#define REAL 673
#define REBUILD_SYM 674
#define RECOVER_SYM 675
#define REDOFILE_SYM 676
#define REDO_BUFFER_SIZE_SYM 677
#define REDUNDANT_SYM 678
#define REFERENCES 679
#define REGEXP 680
#define RELAY 681
#define RELAYLOG_SYM 682
#define RELAY_LOG_FILE_SYM 683
#define RELAY_LOG_POS_SYM 684
#define RELAY_THREAD 685
#define RELEASE_SYM 686
#define RELOAD 687
#define REMOVE_SYM 688
#define RENAME 689
#define REORGANIZE_SYM 690
#define REPAIR 691
#define REPEATABLE_SYM 692
#define REPEAT_SYM 693
#define REPLACE 694
#define REPLICATION 695
#define REQUIRE_SYM 696
#define RESET_SYM 697
#define RESIGNAL_SYM 698
#define RESOURCES 699
#define RESTORE_SYM 700
#define RESTRICT 701
#define RESUME_SYM 702
#define RETURNED_SQLSTATE_SYM 703
#define RETURNS_SYM 704
#define RETURN_SYM 705
#define REVERSE_SYM 706
#define REVOKE 707
#define RIGHT 708
#define ROLLBACK_SYM 709
#define ROLLUP_SYM 710
#define ROUTINE_SYM 711
#define ROWS_SYM 712
#define ROW_FORMAT_SYM 713
#define ROW_SYM 714
#define ROW_COUNT_SYM 715
#define RTREE_SYM 716
#define SAVEPOINT_SYM 717
#define SCHEDULE_SYM 718
#define SCHEMA_NAME_SYM 719
#define SECOND_MICROSECOND_SYM 720
#define SECOND_SYM 721
#define SECURITY_SYM 722
#define SELECT_SYM 723
#define SENSITIVE_SYM 724
#define SEPARATOR_SYM 725
#define SERIALIZABLE_SYM 726
#define SERIAL_SYM 727
#define SESSION_SYM 728
#define SERVER_SYM 729
#define SERVER_OPTIONS 730
#define SET 731
#define SET_VAR 732
#define SHARE_SYM 733
#define SHIFT_LEFT 734
#define SHIFT_RIGHT 735
#define SHOW 736
#define SHUTDOWN 737
#define SIGNAL_SYM 738
#define SIGNED_SYM 739
#define SIMPLE_SYM 740
#define SLAVE 741
#define SLOW 742
#define SMALLINT 743
#define SNAPSHOT_SYM 744
#define SOCKET_SYM 745
#define SONAME_SYM 746
#define SOUNDS_SYM 747
#define SOURCE_SYM 748
#define SPATIAL_SYM 749
#define SPECIFIC_SYM 750
#define SQLEXCEPTION_SYM 751
#define SQLSTATE_SYM 752
#define SQLWARNING_SYM 753
#define SQL_AFTER_GTIDS 754
#define SQL_AFTER_MTS_GAPS 755
#define SQL_BEFORE_GTIDS 756
#define SQL_BIG_RESULT 757
#define SQL_BUFFER_RESULT 758
#define SQL_CACHE_SYM 759
#define SQL_CALC_FOUND_ROWS 760
#define SQL_NO_CACHE_SYM 761
#define SQL_SMALL_RESULT 762
#define SQL_SYM 763
#define SQL_THREAD 764
#define SSL_SYM 765
#define STARTING 766
#define STARTS_SYM 767
#define START_SYM 768
#define STATS_AUTO_RECALC_SYM 769
#define STATS_PERSISTENT_SYM 770
#define STATS_SAMPLE_PAGES_SYM 771
#define STATUS_SYM 772
#define STDDEV_SAMP_SYM 773
#define STD_SYM 774
#define STOP_SYM 775
#define STORAGE_SYM 776
#define STRAIGHT_JOIN 777
#define STRING_SYM 778
#define SUBCLASS_ORIGIN_SYM 779
#define SUBDATE_SYM 780
#define SUBJECT_SYM 781
#define SUBPARTITIONS_SYM 782
#define SUBPARTITION_SYM 783
#define SUBSTRING 784
#define SUM_SYM 785
#define SUPER_SYM 786
#define SUSPEND_SYM 787
#define SWAPS_SYM 788
#define SWITCHES_SYM 789
#define SYSDATE 790
#define TABLES 791
#define TABLESPACE 792
#define TABLE_REF_PRIORITY 793
#define TABLE_SYM 794
#define TABLE_CHECKSUM_SYM 795
#define TABLE_NAME_SYM 796
#define TEMPORARY 797
#define TEMPTABLE_SYM 798
#define TERMINATED 799
#define TEXT_STRING 800
#define TEXT_SYM 801
#define THAN_SYM 802
#define THEN_SYM 803
#define TIMESTAMP 804
#define TIMESTAMP_ADD 805
#define TIMESTAMP_DIFF 806
#define TIME_SYM 807
#define TINYBLOB 808
#define TINYINT 809
#define TINYTEXT 810
#define TO_SYM 811
#define TRAILING 812
#define TRANSACTION_SYM 813
#define TRIGGERS_SYM 814
#define TRIGGER_SYM 815
#define TRIM 816
#define TRUE_SYM 817
#define TRUNCATE_SYM 818
#define TYPES_SYM 819
#define TYPE_SYM 820
#define UDF_RETURNS_SYM 821
#define ULONGLONG_NUM 822
#define UNCOMMITTED_SYM 823
#define UNDEFINED_SYM 824
#define UNDERSCORE_CHARSET 825
#define UNDOFILE_SYM 826
#define UNDO_BUFFER_SIZE_SYM 827
#define UNDO_SYM 828
#define UNICODE_SYM 829
#define UNINSTALL_SYM 830
#define UNION_SYM 831
#define UNIQUE_SYM 832
#define UNKNOWN_SYM 833
#define UNLOCK_SYM 834
#define UNSIGNED 835
#define UNTIL_SYM 836
#define UPDATE_SYM 837
#define UPGRADE_SYM 838
#define USAGE 839
#define USER 840
#define USE_FRM 841
#define USE_SYM 842
#define USING 843
#define UTC_DATE_SYM 844
#define UTC_TIMESTAMP_SYM 845
#define UTC_TIME_SYM 846
#define VALUES 847
#define VALUE_SYM 848
#define VARBINARY 849
#define VARCHAR 850
#define VARIABLES 851
#define VARIANCE_SYM 852
#define VARYING 853
#define VAR_SAMP_SYM 854
#define VIEW_SYM 855
#define WAIT_SYM 856
#define WARNINGS 857
#define WEEK_SYM 858
#define WEIGHT_STRING_SYM 859
#define WHEN_SYM 860
#define WHERE 861
#define WHILE_SYM 862
#define WITH 863
#define WITH_CUBE_SYM 864
#define WITH_ROLLUP_SYM 865
#define WORK_SYM 866
#define WRAPPER_SYM 867
#define WRITE_SYM 868
#define X509_SYM 869
#define XA_SYM 870
#define XML_SYM 871
#define XOR 872
#define YEAR_MONTH_SYM 873
#define YEAR_SYM 874
#define ZEROFILL 875



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2058 of yacc.c  */
#line 968 "/export/home2/pb2/build/sb_2-24964559-1505317808.65/mysql-5.6.38-release-export-11839531_gpl/sql/sql_yacc.yy"

  int  num;
  ulong ulong_num;
  ulonglong ulonglong_number;
  longlong longlong_number;
  LEX_STRING lex_str;
  LEX_STRING *lex_str_ptr;
  LEX_SYMBOL symbol;
  Table_ident *table;
  char *simple_string;
  Item *item;
  Item_num *item_num;
  List<Item> *item_list;
  List<String> *string_list;
  String *string;
  Key_part_spec *key_part;
  TABLE_LIST *table_list;
  udf_func *udf;
  LEX_USER *lex_user;
  struct sys_var_with_base variable;
  enum enum_var_type var_type;
  Key::Keytype key_type;
  enum ha_key_alg key_alg;
  handlerton *db_type;
  enum row_type row_type;
  enum ha_rkey_function ha_rkey_mode;
  enum enum_ha_read_modes ha_read_mode;
  enum enum_tx_isolation tx_isolation;
  enum Cast_target cast_type;
  enum Item_udftype udf_type;
  const CHARSET_INFO *charset;
  thr_lock_type lock_type;
  interval_type interval, interval_time_st;
  timestamp_type date_time_type;
  st_select_lex *select_lex;
  chooser_compare_func_creator boolfunc2creator;
  class sp_condition_value *spcondvalue;
  struct { int vars, conds, hndlrs, curs; } spblock;
  sp_name *spname;
  LEX *lex;
  sp_head *sphead;
  struct p_elem_val *p_elem_value;
  enum index_hint_type index_hint;
  enum enum_filetype filetype;
  enum Foreign_key::fk_option m_fk_option;
  enum enum_yes_no_unknown m_yes_no_unk;
  Diag_condition_item_name diag_condition_item_name;
  Diagnostics_information::Which_area diag_area;
  Diagnostics_information *diag_info;
  Statement_information_item *stmt_info_item;
  Statement_information_item::Name stmt_info_item_name;
  List<Statement_information_item> *stmt_info_list;
  Condition_information_item *cond_info_item;
  Condition_information_item::Name cond_info_item_name;
  List<Condition_information_item> *cond_info_list;
  bool is_not_empty;


/* Line 2058 of yacc.c  */
#line 1356 "/export/home2/pb2/build/sb_2-24964559-1505317808.65/dist_GPL/sql/sql_yacc.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int MYSQLparse (void *YYPARSE_PARAM);
#else
int MYSQLparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int MYSQLparse (class THD *YYTHD);
#else
int MYSQLparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_MYSQL_EXPORT_HOME2_PB2_BUILD_SB_2_24964559_1505317808_65_DIST_GPL_SQL_SQL_YACC_H_INCLUDED  */
