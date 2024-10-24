#pragma once

const char *ssbdists_dss =
    "#  Sccsid:     @(#)dists.dss	2.1.8.1\n"
    "#\n"
    "# distributions have the following format:\n"
    "#\n"
    "# <token> | <weight> # comment\n"
    "#\n"
    "# Distributions are used to bias the selection of a token \n"
    "# based on its associated weight. The list of tokens and values \n"
    "# between the keywords BEGIN and END define the distribution named after\n"
    "# the BEGIN. A uniformly random value from [0, sum(weights)]\n"
    "# will be chosen and the first token whose cumulative weight is greater than\n"
    "# or equal to the result will be returned. In essence, the weights for each\n"
    "# token represent its relative weight within a distribution.\n"
    "#\n"
    "# one special token is defined: count (number of data points in the \n"
    "#  distribution). It MUST be defined for each named distribution.\n"
    "#-----------------------------------------------------------------------\n"
    "# currently defined distributions and their use:\n"
    "#  NAME       FIELD/NOTES\n"
    "#  ========   ==============\n"
    "#  category   parts.category\n"
    "#  container  parts.container\n"
    "#  instruct   shipping instructions\n"
    "#  msegmnt    market segment\n"
    "#  names      parts.name\n"
    "#  nations    must be ordered along with regions\n"
    "#  nations2   stand alone nations set for use with qgen\n"
    "#  o_prio     order priority\n"
    "#  regions    must be ordered along with nations\n"
    "#  rflag      lineitems.returnflag\n"
    "#  types      parts.type\n"
    "#  colors     embedded string creation; CANNOT BE USED FOR pick_str(), agg_str() perturbs order\n"
    "#  articles   comment generation \n"
    "#  nouns      \n"
    "#  verbs      \n"
    "#  adverbs    \n"
    "#  auxillaries \n"
    "#  prepositions\n"
    "#  terminators\n"
    "#  grammar    sentence formation\n"
    "#  np\n"
    "#  vp\n"
    "###\n"
    "# category\n"
    "###\n"
    "BEGIN category\n"
    "COUNT|5\n"
    "FURNITURE|1\n"
    "STORAGE EQUIP|1\n"
    "TOOLS|1\n"
    "MACHINE TOOLS|1\n"
    "OTHER|1\n"
    "END category\n"
    "###\n"
    "# container\n"
    "###\n"
    "begin p_cntr\n"
    "count|40\n"
    "SM CASE|1\n"
    "SM BOX|1\n"
    "SM BAG|1\n"
    "SM JAR|1\n"
    "SM PACK|1\n"
    "SM PKG|1\n"
    "SM CAN|1\n"
    "SM DRUM|1\n"
    "LG CASE|1\n"
    "LG BOX|1\n"
    "LG BAG|1\n"
    "LG JAR|1\n"
    "LG PACK|1\n"
    "LG PKG|1\n"
    "LG CAN|1\n"
    "LG DRUM|1\n"
    "MED CASE|1\n"
    "MED BOX|1\n"
    "MED BAG|1\n"
    "MED JAR|1\n"
    "MED PACK|1\n"
    "MED PKG|1\n"
    "MED CAN|1\n"
    "MED DRUM|1\n"
    "JUMBO CASE|1\n"
    "JUMBO BOX|1\n"
    "JUMBO BAG|1\n"
    "JUMBO JAR|1\n"
    "JUMBO PACK|1\n"
    "JUMBO PKG|1\n"
    "JUMBO CAN|1\n"
    "JUMBO DRUM|1\n"
    "WRAP CASE|1\n"
    "WRAP BOX|1\n"
    "WRAP BAG|1\n"
    "WRAP JAR|1\n"
    "WRAP PACK|1\n"
    "WRAP PKG|1\n"
    "WRAP CAN|1\n"
    "WRAP DRUM|1\n"
    "end p_cntr\n"
    "###\n"
    "# instruct\n"
    "###\n"
    "begin instruct\n"
    "count|4\n"
    "DELIVER IN PERSON|1\n"
    "COLLECT COD|1\n"
    "TAKE BACK RETURN|1\n"
    "NONE|1\n"
    "end instruct\n"
    "###\n"
    "# msegmnt\n"
    "###\n"
    "begin msegmnt\n"
    "count|5\n"
    "AUTOMOBILE|1\n"
    "BUILDING|1\n"
    "FURNITURE|1\n"
    "HOUSEHOLD|1\n"
    "MACHINERY|1\n"
    "end msegmnt\n"
    "###\n"
    "# names\n"
    "###\n"
    "begin p_names\n"
    "COUNT|4\n"
    "CLEANER|1\n"
    "SOAP|1\n"
    "DETERGENT|1\n"
    "EXTRA|1\n"
    "end p_names\n"
    "###\n"
    "# nations\n"
    "# NOTE: this is a special case; the weights here are adjustments to\n"
    "#       map correctly into the regions table, and are *NOT* cummulative\n"
    "#       values to mimic a distribution\n"
    "###\n"
    "begin nations\n"
    "count|25\n"
    "ALGERIA|0\n"
    "ARGENTINA|1\n"
    "BRAZIL|0\n"
    "CANADA|0\n"
    "EGYPT|3\n"
    "ETHIOPIA|-4\n"
    "FRANCE|3\n"
    "GERMANY|0\n"
    "INDIA|-1\n"
    "INDONESIA|0\n"
    "IRAN|2\n"
    "IRAQ|0\n"
    "JAPAN|-2\n"
    "JORDAN|2\n"
    "KENYA|-4\n"
    "MOROCCO|0\n"
    "MOZAMBIQUE|0\n"
    "PERU|1\n"
    "CHINA|1\n"
    "ROMANIA|1\n"
    "SAUDI ARABIA|1\n"
    "VIETNAM|-2\n"
    "RUSSIA|1\n"
    "UNITED KINGDOM|0\n"
    "UNITED STATES|-2\n"
    "end nations\n"
    "###\n"
    "# nations2\n"
    "###\n"
    "begin nations2\n"
    "count|25\n"
    "ALGERIA|1\n"
    "ARGENTINA|1\n"
    "BRAZIL|1\n"
    "CANADA|1\n"
    "EGYPT|1\n"
    "ETHIOPIA|1\n"
    "FRANCE|1\n"
    "GERMANY|1\n"
    "INDIA|1\n"
    "INDONESIA|1\n"
    "IRAN|1\n"
    "IRAQ|1\n"
    "JAPAN|1\n"
    "JORDAN|1\n"
    "KENYA|1\n"
    "MOROCCO|1\n"
    "MOZAMBIQUE|1\n"
    "PERU|1\n"
    "CHINA|1\n"
    "ROMANIA|1\n"
    "SAUDI ARABIA|1\n"
    "VIETNAM|1\n"
    "RUSSIA|1\n"
    "UNITED KINGDOM|1\n"
    "UNITED STATES|1\n"
    "end nations2\n"
    "###\n"
    "# regions\n"
    "###\n"
    "begin regions\n"
    "count|5\n"
    "AFRICA|1\n"
    "AMERICA|1\n"
    "ASIA|1\n"
    "EUROPE|1\n"
    "MIDDLE EAST|1\n"
    "end regions\n"
    "###\n"
    "# o_prio\n"
    "###\n"
    "begin o_oprio\n"
    "count|5\n"
    "1-URGENT|1\n"
    "2-HIGH|1\n"
    "3-MEDIUM|1\n"
    "4-NOT SPECIFIED|1\n"
    "5-LOW|1\n"
    "end o_oprio\n"
    "###\n"
    "# rflag\n"
    "###\n"
    "begin rflag\n"
    "count|2\n"
    "R|1\n"
    "A|1\n"
    "end rflag\n"
    "###\n"
    "# smode\n"
    "###\n"
    "begin smode\n"
    "count|7\n"
    "REG AIR|1\n"
    "AIR|1\n"
    "RAIL|1\n"
    "TRUCK|1\n"
    "MAIL|1\n"
    "FOB|1\n"
    "SHIP|1\n"
    "end smode\n"
    "###\n"
    "# types\n"
    "###\n"
    "begin p_types\n"
    "COUNT|150\n"
    "STANDARD ANODIZED TIN|1\n"
    "STANDARD ANODIZED NICKEL|1\n"
    "STANDARD ANODIZED BRASS|1\n"
    "STANDARD ANODIZED STEEL|1\n"
    "STANDARD ANODIZED COPPER|1\n"
    "STANDARD BURNISHED TIN|1\n"
    "STANDARD BURNISHED NICKEL|1\n"
    "STANDARD BURNISHED BRASS|1\n"
    "STANDARD BURNISHED STEEL|1\n"
    "STANDARD BURNISHED COPPER|1\n"
    "STANDARD PLATED TIN|1\n"
    "STANDARD PLATED NICKEL|1\n"
    "STANDARD PLATED BRASS|1\n"
    "STANDARD PLATED STEEL|1\n"
    "STANDARD PLATED COPPER|1\n"
    "STANDARD POLISHED TIN|1\n"
    "STANDARD POLISHED NICKEL|1\n"
    "STANDARD POLISHED BRASS|1\n"
    "STANDARD POLISHED STEEL|1\n"
    "STANDARD POLISHED COPPER|1\n"
    "STANDARD BRUSHED TIN|1\n"
    "STANDARD BRUSHED NICKEL|1\n"
    "STANDARD BRUSHED BRASS|1\n"
    "STANDARD BRUSHED STEEL|1\n"
    "STANDARD BRUSHED COPPER|1\n"
    "SMALL ANODIZED TIN|1\n"
    "SMALL ANODIZED NICKEL|1\n"
    "SMALL ANODIZED BRASS|1\n"
    "SMALL ANODIZED STEEL|1\n"
    "SMALL ANODIZED COPPER|1\n"
    "SMALL BURNISHED TIN|1\n"
    "SMALL BURNISHED NICKEL|1\n"
    "SMALL BURNISHED BRASS|1\n"
    "SMALL BURNISHED STEEL|1\n"
    "SMALL BURNISHED COPPER|1\n"
    "SMALL PLATED TIN|1\n"
    "SMALL PLATED NICKEL|1\n"
    "SMALL PLATED BRASS|1\n"
    "SMALL PLATED STEEL|1\n"
    "SMALL PLATED COPPER|1\n"
    "SMALL POLISHED TIN|1\n"
    "SMALL POLISHED NICKEL|1\n"
    "SMALL POLISHED BRASS|1\n"
    "SMALL POLISHED STEEL|1\n"
    "SMALL POLISHED COPPER|1\n"
    "SMALL BRUSHED TIN|1\n"
    "SMALL BRUSHED NICKEL|1\n"
    "SMALL BRUSHED BRASS|1\n"
    "SMALL BRUSHED STEEL|1\n"
    "SMALL BRUSHED COPPER|1\n"
    "MEDIUM ANODIZED TIN|1\n"
    "MEDIUM ANODIZED NICKEL|1\n"
    "MEDIUM ANODIZED BRASS|1\n"
    "MEDIUM ANODIZED STEEL|1\n"
    "MEDIUM ANODIZED COPPER|1\n"
    "MEDIUM BURNISHED TIN|1\n"
    "MEDIUM BURNISHED NICKEL|1\n"
    "MEDIUM BURNISHED BRASS|1\n"
    "MEDIUM BURNISHED STEEL|1\n"
    "MEDIUM BURNISHED COPPER|1\n"
    "MEDIUM PLATED TIN|1\n"
    "MEDIUM PLATED NICKEL|1\n"
    "MEDIUM PLATED BRASS|1\n"
    "MEDIUM PLATED STEEL|1\n"
    "MEDIUM PLATED COPPER|1\n"
    "MEDIUM POLISHED TIN|1\n"
    "MEDIUM POLISHED NICKEL|1\n"
    "MEDIUM POLISHED BRASS|1\n"
    "MEDIUM POLISHED STEEL|1\n"
    "MEDIUM POLISHED COPPER|1\n"
    "MEDIUM BRUSHED TIN|1\n"
    "MEDIUM BRUSHED NICKEL|1\n"
    "MEDIUM BRUSHED BRASS|1\n"
    "MEDIUM BRUSHED STEEL|1\n"
    "MEDIUM BRUSHED COPPER|1\n"
    "LARGE ANODIZED TIN|1\n"
    "LARGE ANODIZED NICKEL|1\n"
    "LARGE ANODIZED BRASS|1\n"
    "LARGE ANODIZED STEEL|1\n"
    "LARGE ANODIZED COPPER|1\n"
    "LARGE BURNISHED TIN|1\n"
    "LARGE BURNISHED NICKEL|1\n"
    "LARGE BURNISHED BRASS|1\n"
    "LARGE BURNISHED STEEL|1\n"
    "LARGE BURNISHED COPPER|1\n"
    "LARGE PLATED TIN|1\n"
    "LARGE PLATED NICKEL|1\n"
    "LARGE PLATED BRASS|1\n"
    "LARGE PLATED STEEL|1\n"
    "LARGE PLATED COPPER|1\n"
    "LARGE POLISHED TIN|1\n"
    "LARGE POLISHED NICKEL|1\n"
    "LARGE POLISHED BRASS|1\n"
    "LARGE POLISHED STEEL|1\n"
    "LARGE POLISHED COPPER|1\n"
    "LARGE BRUSHED TIN|1\n"
    "LARGE BRUSHED NICKEL|1\n"
    "LARGE BRUSHED BRASS|1\n"
    "LARGE BRUSHED STEEL|1\n"
    "LARGE BRUSHED COPPER|1\n"
    "ECONOMY ANODIZED TIN|1\n"
    "ECONOMY ANODIZED NICKEL|1\n"
    "ECONOMY ANODIZED BRASS|1\n"
    "ECONOMY ANODIZED STEEL|1\n"
    "ECONOMY ANODIZED COPPER|1\n"
    "ECONOMY BURNISHED TIN|1\n"
    "ECONOMY BURNISHED NICKEL|1\n"
    "ECONOMY BURNISHED BRASS|1\n"
    "ECONOMY BURNISHED STEEL|1\n"
    "ECONOMY BURNISHED COPPER|1\n"
    "ECONOMY PLATED TIN|1\n"
    "ECONOMY PLATED NICKEL|1\n"
    "ECONOMY PLATED BRASS|1\n"
    "ECONOMY PLATED STEEL|1\n"
    "ECONOMY PLATED COPPER|1\n"
    "ECONOMY POLISHED TIN|1\n"
    "ECONOMY POLISHED NICKEL|1\n"
    "ECONOMY POLISHED BRASS|1\n"
    "ECONOMY POLISHED STEEL|1\n"
    "ECONOMY POLISHED COPPER|1\n"
    "ECONOMY BRUSHED TIN|1\n"
    "ECONOMY BRUSHED NICKEL|1\n"
    "ECONOMY BRUSHED BRASS|1\n"
    "ECONOMY BRUSHED STEEL|1\n"
    "ECONOMY BRUSHED COPPER|1\n"
    "PROMO ANODIZED TIN|1\n"
    "PROMO ANODIZED NICKEL|1\n"
    "PROMO ANODIZED BRASS|1\n"
    "PROMO ANODIZED STEEL|1\n"
    "PROMO ANODIZED COPPER|1\n"
    "PROMO BURNISHED TIN|1\n"
    "PROMO BURNISHED NICKEL|1\n"
    "PROMO BURNISHED BRASS|1\n"
    "PROMO BURNISHED STEEL|1\n"
    "PROMO BURNISHED COPPER|1\n"
    "PROMO PLATED TIN|1\n"
    "PROMO PLATED NICKEL|1\n"
    "PROMO PLATED BRASS|1\n"
    "PROMO PLATED STEEL|1\n"
    "PROMO PLATED COPPER|1\n"
    "PROMO POLISHED TIN|1\n"
    "PROMO POLISHED NICKEL|1\n"
    "PROMO POLISHED BRASS|1\n"
    "PROMO POLISHED STEEL|1\n"
    "PROMO POLISHED COPPER|1\n"
    "PROMO BRUSHED TIN|1\n"
    "PROMO BRUSHED NICKEL|1\n"
    "PROMO BRUSHED BRASS|1\n"
    "PROMO BRUSHED STEEL|1\n"
    "PROMO BRUSHED COPPER|1\n"
    "end p_types\n"
    "###\n"
    "# colors\n"
    "# NOTE: This distribution CANNOT be used by pick_str(), since agg_str() perturbs its order\n"
    "###\n"
    "begin colors\n"
    "COUNT|92\n"
    "almond|1\n"
    "antique|1\n"
    "aquamarine|1\n"
    "azure|1\n"
    "beige|1\n"
    "bisque|1\n"
    "black|1\n"
    "blanched|1\n"
    "blue|1\n"
    "blush|1\n"
    "brown|1\n"
    "burlywood|1\n"
    "burnished|1\n"
    "chartreuse|1\n"
    "chiffon|1\n"
    "chocolate|1\n"
    "coral|1\n"
    "cornflower|1\n"
    "cornsilk|1\n"
    "cream|1\n"
    "cyan|1\n"
    "dark|1\n"
    "deep|1\n"
    "dim|1\n"
    "dodger|1\n"
    "drab|1\n"
    "firebrick|1\n"
    "floral|1\n"
    "forest|1\n"
    "frosted|1\n"
    "gainsboro|1\n"
    "ghost|1\n"
    "goldenrod|1\n"
    "green|1\n"
    "grey|1\n"
    "honeydew|1\n"
    "hot|1\n"
    "indian|1\n"
    "ivory|1\n"
    "khaki|1\n"
    "lace|1\n"
    "lavender|1\n"
    "lawn|1\n"
    "lemon|1\n"
    "light|1\n"
    "lime|1\n"
    "linen|1\n"
    "magenta|1\n"
    "maroon|1\n"
    "medium|1\n"
    "metallic|1\n"
    "midnight|1\n"
    "mint|1\n"
    "misty|1\n"
    "moccasin|1\n"
    "navajo|1\n"
    "navy|1\n"
    "olive|1\n"
    "orange|1\n"
    "orchid|1\n"
    "pale|1\n"
    "papaya|1\n"
    "peach|1\n"
    "peru|1\n"
    "pink|1\n"
    "plum|1\n"
    "powder|1\n"
    "puff|1\n"
    "purple|1\n"
    "red|1\n"
    "rose|1\n"
    "rosy|1\n"
    "royal|1\n"
    "saddle|1\n"
    "salmon|1\n"
    "sandy|1\n"
    "seashell|1\n"
    "sienna|1\n"
    "sky|1\n"
    "slate|1\n"
    "smoke|1\n"
    "snow|1\n"
    "spring|1\n"
    "steel|1\n"
    "tan|1\n"
    "thistle|1\n"
    "tomato|1\n"
    "turquoise|1\n"
    "violet|1\n"
    "wheat|1\n"
    "white|1\n"
    "yellow|1\n"
    "end colors\n"
    "################\n"
    "################\n"
    "## psuedo text distributions\n"
    "################\n"
    "################\n"
    "###\n"
    "# nouns\n"
    "###\n"
    "BEGIN nouns\n"
    "COUNT|45\n"
    "packages|40\n"
    "requests|40\n"
    "accounts|40\n"
    "deposits|40\n"
    "foxes|20\n"
    "ideas|20\n"
    "theodolites|20\n"
    "pinto beans|20\n"
    "instructions|20\n"
    "dependencies|10\n"
    "excuses|10\n"
    "platelets|10\n"
    "asymptotes|10\n"
    "courts|5\n"
    "dolphins|5\n"
    "multipliers|1\n"
    "sauternes|1\n"
    "warthogs|1\n"
    "frets|1\n"
    "dinos|1\n"
    "attainments|1\n"
    "somas|1\n"
    "Tiresias|1\n"
    "patterns|1\n"
    "forges|1\n"
    "braids|1\n"
    "frays|1\n"
    "warhorses|1\n"
    "dugouts|1\n"
    "notornis|1\n"
    "epitaphs|1\n"
    "pearls|1\n"
    "tithes|1\n"
    "waters|1\n"
    "orbits|1\n"
    "gifts|1\n"
    "sheaves|1\n"
    "depths|1\n"
    "sentiments|1\n"
    "decoys|1\n"
    "realms|1\n"
    "pains|1\n"
    "grouches|1\n"
    "escapades|1\n"
    "hockey players|1\n"
    "END nouns\n"
    "###\n"
    "# verbs\n"
    "###\n"
    "BEGIN verbs\n"
    "COUNT|40\n"
    "sleep|20\n"
    "wake|20\n"
    "are|20\n"
    "cajole|20\n"
    "haggle|20\n"
    "nag|10\n"
    "use|10\n"
    "boost|10\n"
    "affix|5\n"
    "detect|5\n"
    "integrate|5\n"
    "maintain|1\n"
    "nod|1\n"
    "was|1\n"
    "lose|1\n"
    "sublate|1\n"
    "solve|1\n"
    "thrash|1\n"
    "promise|1\n"
    "engage|1\n"
    "hinder|1\n"
    "print|1\n"
    "x-ray|1\n"
    "breach|1\n"
    "eat|1\n"
    "grow|1\n"
    "impress|1\n"
    "mold|1\n"
    "poach|1\n"
    "serve|1\n"
    "run|1\n"
    "dazzle|1\n"
    "snooze|1\n"
    "doze|1\n"
    "unwind|1\n"
    "kindle|1\n"
    "play|1\n"
    "hang|1\n"
    "believe|1\n"
    "doubt|1\n"
    "END verbs\n"
    "###\n"
    "# adverbs\n"
    "##\n"
    "BEGIN adverbs\n"
    "COUNT|28\n"
    "sometimes|1\n"
    "always|1\n"
    "never|1\n"
    "furiously|50\n"
    "slyly|50\n"
    "carefully|50\n"
    "blithely|40\n"
    "quickly|30\n"
    "fluffily|20\n"
    "slowly|1\n"
    "quietly|1\n"
    "ruthlessly|1\n"
    "thinly|1\n"
    "closely|1\n"
    "doggedly|1\n"
    "daringly|1\n"
    "bravely|1\n"
    "stealthily|1\n"
    "permanently|1\n"
    "enticingly|1\n"
    "idly|1\n"
    "busily|1\n"
    "regularly|1\n"
    "finally|1\n"
    "ironically|1\n"
    "evenly|1\n"
    "boldly|1\n"
    "silently|1\n"
    "END adverbs\n"
    "###\n"
    "# articles\n"
    "##\n"
    "BEGIN articles\n"
    "COUNT|3\n"
    "the|50\n"
    "a|20\n"
    "an|5\n"
    "END articles\n"
    "###\n"
    "# prepositions\n"
    "##\n"
    "BEGIN prepositions\n"
    "COUNT|47\n"
    "about|50\n"
    "above|50\n"
    "according to|50\n"
    "across|50\n"
    "after|50\n"
    "against|40\n"
    "along|40\n"
    "alongside of|30\n"
    "among|30\n"
    "around|20\n"
    "at|10\n"
    "atop|1\n"
    "before|1\n"
    "behind|1\n"
    "beneath|1\n"
    "beside|1\n"
    "besides|1\n"
    "between|1\n"
    "beyond|1\n"
    "by|1\n"
    "despite|1\n"
    "during|1\n"
    "except|1\n"
    "for|1\n"
    "from|1\n"
    "in place of|1\n"
    "inside|1\n"
    "instead of|1\n"
    "into|1\n"
    "near|1\n"
    "of|1\n"
    "on|1\n"
    "outside|1\n"
    "over|1 \n"
    "past|1\n"
    "since|1\n"
    "through|1\n"
    "throughout|1\n"
    "to|1\n"
    "toward|1\n"
    "under|1\n"
    "until|1\n"
    "up|1 \n"
    "upon|1\n"
    "whithout|1\n"
    "with|1\n"
    "within|1\n"
    "END prepositions\n"
    "###\n"
    "# auxillaries\n"
    "##\n"
    "BEGIN auxillaries\n"
    "COUNT|18\n"
    "do|1\n"
    "may|1\n"
    "might|1\n"
    "shall|1\n"
    "will|1\n"
    "would|1\n"
    "can|1\n"
    "could|1\n"
    "should|1\n"
    "ought to|1\n"
    "must|1\n"
    "will have to|1\n"
    "shall have to|1\n"
    "could have to|1\n"
    "should have to|1\n"
    "must have to|1\n"
    "need to|1\n"
    "try to|1\n"
    "END auxiallaries\n"
    "###\n"
    "# terminators\n"
    "##\n"
    "BEGIN terminators\n"
    "COUNT|6\n"
    ".|50\n"
    ";|1\n"
    ":|1\n"
    "?|1\n"
    "!|1\n"
    "--|1\n"
    "END terminators\n"
    "###\n"
    "# adjectives\n"
    "##\n"
    "BEGIN adjectives\n"
    "COUNT|29\n"
    "special|20\n"
    "pending|20\n"
    "unusual|20\n"
    "express|20\n"
    "furious|1\n"
    "sly|1\n"
    "careful|1\n"
    "blithe|1\n"
    "quick|1\n"
    "fluffy|1\n"
    "slow|1\n"
    "quiet|1\n"
    "ruthless|1\n"
    "thin|1\n"
    "close|1\n"
    "dogged|1\n"
    "daring|1\n"
    "brave|1\n"
    "stealthy|1\n"
    "permanent|1\n"
    "enticing|1\n"
    "idle|1\n"
    "busy|1\n"
    "regular|50\n"
    "final|40\n"
    "ironic|40\n"
    "even|30\n"
    "bold|20\n"
    "silent|10\n"
    "END adjectives\n"
    "###\n"
    "# grammar\n"
    "# first level grammar. N=noun phrase, V=verb phrase,\n"
    "# P=prepositional phrase, T=setence termination\n"
    "##\n"
    "BEGIN grammar\n"
    "COUNT|5\n"
    "N V T|3\n"
    "N V P T|3\n"
    "N V N T|3\n"
    "N P V N T|1\n"
    "N P V P T|1\n"
    "END grammar\n"
    "###\n"
    "# NP\n"
    "# second level grammar. Noun phrases. N=noun, A=article, \n"
    "# J=adjective, D=adverb\n"
    "##\n"
    "BEGIN np\n"
    "COUNT|4\n"
    "N|10\n"
    "J N|20\n"
    "J, J N|10\n"
    "D J N|50\n"
    "END np\n"
    "###\n"
    "# VP\n"
    "# second level grammar. Verb phrases. V=verb, X=auxiallary, \n"
    "# D=adverb\n"
    "##\n"
    "BEGIN vp\n"
    "COUNT|4\n"
    "V|30\n"
    "X V|1\n"
    "V D|40\n"
    "X V D|1\n"
    "END vp\n"
    "###\n"
    "# Q13\n"
    "# Substitution parameters for Q13 \n"
    "##\n"
    "BEGIN Q13a\n"
    "COUNT|4\n"
    "special|20\n"
    "pending|20\n"
    "unusual|20\n"
    "express|20\n"
    "END Q13a\n"
    "BEGIN Q13b\n"
    "COUNT|4\n"
    "packages|40\n"
    "requests|40\n"
    "accounts|40\n"
    "deposits|40\n"
    "END Q13b";