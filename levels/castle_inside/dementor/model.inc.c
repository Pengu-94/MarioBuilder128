Lights1 dementor_Hood_lights = gdSPDefLights1(
	0x69, 0x37, 0x67,
	0xFC, 0xDE, 0xFF, 0x0, 0x7F, 0x0);

Vtx dementor_root_mesh_layer_1_vtx_0[16] = {
	{{{8, 102, 13},0, {1127, 41},{0x37, 0x56, 0x4C, 0xFF}}},
	{{{15, 102, 0},0, {1317, 31},{0x62, 0x51, 0x0, 0xFF}}},
	{{{8, 102, -13},0, {524, 32},{0x37, 0x56, 0xB4, 0xFF}}},
	{{{-15, 102, 0},0, {847, 52},{0xB0, 0x63, 0x0, 0xFF}}},
	{{{-8, 102, -13},0, {704, 43},{0xE1, 0x56, 0xA7, 0xFF}}},
	{{{-17, 2, -30},0, {640, 946},{0xD5, 0x1A, 0x8B, 0xFF}}},
	{{{17, 2, -27},0, {472, 923},{0x4A, 0x14, 0x9A, 0xFF}}},
	{{{15, 102, 0},0, {293, 31},{0x62, 0x51, 0x0, 0xFF}}},
	{{{25, 2, 0},0, {329, 926},{0x7E, 0xF, 0x0, 0xFF}}},
	{{{8, 102, 13},0, {103, 41},{0x37, 0x56, 0x4C, 0xFF}}},
	{{{17, 2, 27},0, {178, 941},{0x4A, 0x14, 0x66, 0xFF}}},
	{{{-8, 102, 13},0, {-43, 52},{0xE1, 0x56, 0x59, 0xFF}}},
	{{{-17, 2, 30},0, {-9, 966},{0xD5, 0x1A, 0x75, 0xFF}}},
	{{{-56, 2, 0},0, {825, 982},{0x88, 0x29, 0x0, 0xFF}}},
	{{{-17, 2, 30},0, {1015, 966},{0xD5, 0x1A, 0x75, 0xFF}}},
	{{{-8, 102, 13},0, {981, 52},{0xE1, 0x56, 0x59, 0xFF}}},
};

Gfx dementor_root_mesh_layer_1_tri_0[] = {
	gsSPVertex(dementor_root_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
	gsSP2Triangles(2, 4, 3, 0, 5, 4, 2, 0),
	gsSP2Triangles(5, 2, 6, 0, 6, 2, 7, 0),
	gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
	gsSP2Triangles(8, 9, 10, 0, 10, 9, 11, 0),
	gsSP2Triangles(10, 11, 12, 0, 13, 4, 5, 0),
	gsSP2Triangles(13, 3, 4, 0, 14, 3, 13, 0),
	gsSP2Triangles(14, 15, 3, 0, 3, 15, 0, 0),
	gsSPEndDisplayList(),
};

Vtx dementor_head_mesh_layer_1_vtx_0[88] = {
	{{{-4, -1, 0},0, {994, 955},{0xF9, 0x81, 0xFF, 0xFF}}},
	{{{7, 3, -14},0, {676, 853},{0x18, 0x90, 0xC9, 0xFF}}},
	{{{13, 2, 5},0, {1436, 877},{0x2E, 0x8C, 0x16, 0xFF}}},
	{{{-14, 4, -14},0, {869, 793},{0xD7, 0x95, 0xC8, 0xFF}}},
	{{{-20, 4, 5},0, {1035, 777},{0xC4, 0x92, 0x16, 0xFF}}},
	{{{-4, 3, 17},0, {1208, 821},{0xFB, 0x94, 0x42, 0xFF}}},
	{{{-35, 16, -9},0, {953, 603},{0xB4, 0xAB, 0xC9, 0xFF}}},
	{{{-36, 19, 9},0, {1035, 577},{0xB6, 0xB1, 0x43, 0xFF}}},
	{{{-53, 22, 0},0, {993, 520},{0x85, 0xE0, 0x0, 0xFF}}},
	{{{-29, 33, 19},0, {1097, 453},{0xAB, 0xC, 0x5E, 0xFF}}},
	{{{-28, 50, 9},0, {1051, 266},{0xA8, 0x53, 0x25, 0xFF}}},
	{{{-29, 48, -9},0, {937, 295},{0xA4, 0x4D, 0xD7, 0xFF}}},
	{{{-17, 61, -5},0, {924, 115},{0xC7, 0x70, 0xED, 0xFF}}},
	{{{-10, 60, 14},0, {1188, 139},{0xDF, 0x6E, 0x36, 0xFF}}},
	{{{0, 65, 0},0, {482, 37},{0x7, 0x7F, 0x1, 0xFF}}},
	{{{0, 60, -17},0, {696, 171},{0x5, 0x6C, 0xBE, 0xFF}}},
	{{{16, 59, -5},0, {523, 215},{0x3B, 0x6E, 0xEA, 0xFF}}},
	{{{10, 59, 14},0, {357, 199},{0x25, 0x6C, 0x38, 0xFF}}},
	{{{-10, 60, 14},0, {164, 139},{0xDF, 0x6E, 0x36, 0xFF}}},
	{{{-1, 49, 28},0, {242, 318},{0x4, 0x42, 0x6C, 0xFF}}},
	{{{-18, 47, 24},0, {135, 315},{0xC1, 0x3C, 0x5C, 0xFF}}},
	{{{-28, 50, 9},0, {27, 266},{0xA8, 0x53, 0x25, 0xFF}}},
	{{{-29, 33, 19},0, {73, 453},{0xAB, 0xC, 0x5E, 0xFF}}},
	{{{-12, 32, 31},0, {175, 480},{0xD9, 0x1, 0x79, 0xFF}}},
	{{{-19, 15, 23},0, {112, 644},{0xC2, 0xC0, 0x5B, 0xFF}}},
	{{{-36, 19, 9},0, {11, 577},{0xB6, 0xB1, 0x43, 0xFF}}},
	{{{-20, 4, 5},0, {11, 777},{0xC4, 0x92, 0x16, 0xFF}}},
	{{{-4, 3, 17},0, {184, 821},{0xFB, 0x94, 0x42, 0xFF}}},
	{{{-3, 17, 29},0, {212, 645},{0xFD, 0xC7, 0x71, 0xFF}}},
	{{{14, 13, 22},0, {313, 705},{0x30, 0xB4, 0x5A, 0xFF}}},
	{{{13, 2, 5},0, {412, 877},{0x2E, 0x8C, 0x16, 0xFF}}},
	{{{25, 12, 11},0, {411, 722},{0x7F, 0xFB, 0xFF, 0xFF}}},
	{{{13, 2, 5},0, {412, 877},{0x2E, 0x8C, 0x16, 0xFF}}},
	{{{23, 9, -11},0, {554, 755},{0x7D, 0xEA, 0xF6, 0xFF}}},
	{{{25, 12, 11},0, {411, 722},{0x7F, 0xFB, 0xFF, 0xFF}}},
	{{{7, 3, -14},0, {676, 853},{0x18, 0x90, 0xC9, 0xFF}}},
	{{{15, 16, -24},0, {647, 677},{0x32, 0xC1, 0x9E, 0xFF}}},
	{{{-3, 14, -28},0, {754, 674},{0xFC, 0xBE, 0x94, 0xFF}}},
	{{{-14, 4, -14},0, {869, 793},{0xD7, 0x95, 0xC8, 0xFF}}},
	{{{-20, 18, -24},0, {849, 615},{0xC0, 0xCD, 0x9F, 0xFF}}},
	{{{-35, 16, -9},0, {953, 603},{0xB4, 0xAB, 0xC9, 0xFF}}},
	{{{-29, 33, -20},0, {890, 454},{0xAB, 0xF, 0xA2, 0xFF}}},
	{{{-53, 22, 0},0, {993, 520},{0x85, 0xE0, 0x0, 0xFF}}},
	{{{-29, 48, -9},0, {937, 295},{0xA4, 0x4D, 0xD7, 0xFF}}},
	{{{-17, 50, -23},0, {825, 287},{0xC5, 0x47, 0xA9, 0xFF}}},
	{{{-17, 61, -5},0, {924, 115},{0xC7, 0x70, 0xED, 0xFF}}},
	{{{0, 60, -17},0, {696, 171},{0x5, 0x6C, 0xBE, 0xFF}}},
	{{{-1, 47, -30},0, {724, 347},{0x3, 0x39, 0x8F, 0xFF}}},
	{{{16, 48, -23},0, {624, 348},{0x39, 0x45, 0xA5, 0xFF}}},
	{{{16, 59, -5},0, {523, 215},{0x3B, 0x6E, 0xEA, 0xFF}}},
	{{{27, 48, -11},0, {539, 368},{0x7F, 0xF7, 0x1, 0xFF}}},
	{{{26, 52, 11},0, {424, 334},{0x7E, 0x8, 0xA, 0xFF}}},
	{{{10, 59, 14},0, {357, 199},{0x25, 0x6C, 0x38, 0xFF}}},
	{{{16, 45, 24},0, {337, 377},{0x3A, 0x38, 0x62, 0xFF}}},
	{{{-1, 49, 28},0, {242, 318},{0x4, 0x42, 0x6C, 0xFF}}},
	{{{8, 31, 31},0, {276, 512},{0x1E, 0xFE, 0x7B, 0xFF}}},
	{{{-12, 32, 31},0, {175, 480},{0xD9, 0x1, 0x79, 0xFF}}},
	{{{-18, 47, 24},0, {135, 315},{0xC1, 0x3C, 0x5C, 0xFF}}},
	{{{-3, 17, 29},0, {212, 645},{0xFD, 0xC7, 0x71, 0xFF}}},
	{{{14, 13, 22},0, {313, 705},{0x30, 0xB4, 0x5A, 0xFF}}},
	{{{25, 30, 24},0, {360, 535},{0x7E, 0xFC, 0x12, 0xFF}}},
	{{{19, 12, 11},0, {391, 752},{0x5C, 0x49, 0xD0, 0xFF}}},
	{{{17, 9, -11},0, {578, 790},{0x5D, 0x4E, 0x24, 0xFF}}},
	{{{18, 31, -24},0, {626, 529},{0x58, 0xF6, 0x5B, 0xFF}}},
	{{{23, 9, -11},0, {554, 755},{0x7D, 0xEA, 0xF6, 0xFF}}},
	{{{24, 30, -24},0, {603, 535},{0x7D, 0xF6, 0xEE, 0xFF}}},
	{{{18, 31, -24},0, {626, 529},{0x58, 0xF6, 0x5B, 0xFF}}},
	{{{15, 16, -24},0, {647, 677},{0x32, 0xC1, 0x9E, 0xFF}}},
	{{{8, 31, -32},0, {687, 512},{0x1E, 0xFF, 0x85, 0xFF}}},
	{{{-3, 14, -28},0, {754, 674},{0xFC, 0xBE, 0x94, 0xFF}}},
	{{{-12, 32, -32},0, {788, 480},{0xD9, 0x2, 0x87, 0xFF}}},
	{{{-20, 18, -24},0, {849, 615},{0xC0, 0xCD, 0x9F, 0xFF}}},
	{{{-29, 33, -20},0, {890, 454},{0xAB, 0xF, 0xA2, 0xFF}}},
	{{{-17, 50, -23},0, {825, 287},{0xC5, 0x47, 0xA9, 0xFF}}},
	{{{-1, 47, -30},0, {724, 347},{0x3, 0x39, 0x8F, 0xFF}}},
	{{{16, 48, -23},0, {624, 348},{0x39, 0x45, 0xA5, 0xFF}}},
	{{{27, 48, -11},0, {539, 368},{0x7F, 0xF7, 0x1, 0xFF}}},
	{{{21, 49, -11},0, {553, 333},{0x53, 0xAC, 0x2F, 0xFF}}},
	{{{19, 52, 11},0, {410, 294},{0x53, 0xA7, 0xDB, 0xFF}}},
	{{{26, 52, 11},0, {424, 334},{0x7E, 0x8, 0xA, 0xFF}}},
	{{{18, 30, 24},0, {336, 529},{0x58, 0x1, 0xA5, 0xFF}}},
	{{{25, 30, 24},0, {360, 535},{0x7E, 0xFC, 0x12, 0xFF}}},
	{{{16, 45, 24},0, {337, 377},{0x3A, 0x38, 0x62, 0xFF}}},
	{{{8, 31, 31},0, {276, 512},{0x1E, 0xFE, 0x7B, 0xFF}}},
	{{{19, 12, 11},0, {391, 752},{0x5C, 0x49, 0xD0, 0xFF}}},
	{{{-19, 15, 23},0, {112, 644},{0xC2, 0xC0, 0x5B, 0xFF}}},
	{{{-3, 17, 29},0, {212, 645},{0xFD, 0xC7, 0x71, 0xFF}}},
	{{{-12, 32, 31},0, {175, 480},{0xD9, 0x1, 0x79, 0xFF}}},
};

Gfx dementor_head_mesh_layer_1_tri_0[] = {
	gsSPVertex(dementor_head_mesh_layer_1_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
	gsSP2Triangles(0, 4, 3, 0, 0, 5, 4, 0),
	gsSP2Triangles(0, 2, 5, 0, 3, 4, 6, 0),
	gsSP2Triangles(4, 7, 6, 0, 6, 7, 8, 0),
	gsSP2Triangles(7, 9, 8, 0, 8, 9, 10, 0),
	gsSP2Triangles(8, 10, 11, 0, 11, 10, 12, 0),
	gsSP2Triangles(12, 10, 13, 0, 12, 13, 14, 0),
	gsSP2Triangles(15, 12, 14, 0, 16, 15, 14, 0),
	gsSP2Triangles(17, 16, 14, 0, 18, 17, 14, 0),
	gsSP2Triangles(18, 19, 17, 0, 20, 19, 18, 0),
	gsSP2Triangles(21, 20, 18, 0, 22, 20, 21, 0),
	gsSP2Triangles(22, 23, 20, 0, 22, 24, 23, 0),
	gsSP2Triangles(25, 24, 22, 0, 26, 24, 25, 0),
	gsSP2Triangles(26, 27, 24, 0, 27, 28, 24, 0),
	gsSP2Triangles(27, 29, 28, 0, 27, 30, 29, 0),
	gsSP1Triangle(30, 31, 29, 0),
	gsSPVertex(dementor_head_mesh_layer_1_vtx_0 + 32, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(3, 4, 1, 0, 4, 3, 5, 0),
	gsSP2Triangles(5, 3, 6, 0, 5, 6, 7, 0),
	gsSP2Triangles(6, 8, 7, 0, 7, 8, 9, 0),
	gsSP2Triangles(9, 8, 10, 0, 9, 10, 11, 0),
	gsSP2Triangles(9, 11, 12, 0, 12, 11, 13, 0),
	gsSP2Triangles(14, 12, 13, 0, 15, 12, 14, 0),
	gsSP2Triangles(16, 15, 14, 0, 17, 16, 14, 0),
	gsSP2Triangles(18, 16, 17, 0, 19, 18, 17, 0),
	gsSP2Triangles(20, 19, 17, 0, 21, 19, 20, 0),
	gsSP2Triangles(22, 21, 20, 0, 23, 21, 22, 0),
	gsSP2Triangles(24, 23, 22, 0, 24, 22, 25, 0),
	gsSP2Triangles(26, 23, 24, 0, 26, 27, 23, 0),
	gsSP2Triangles(23, 27, 28, 0, 27, 2, 28, 0),
	gsSP2Triangles(28, 2, 29, 0, 2, 30, 29, 0),
	gsSP2Triangles(2, 1, 30, 0, 1, 31, 30, 0),
	gsSPVertex(dementor_head_mesh_layer_1_vtx_0 + 64, 24, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(3, 4, 1, 0, 3, 5, 4, 0),
	gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
	gsSP2Triangles(7, 8, 6, 0, 6, 8, 9, 0),
	gsSP2Triangles(6, 9, 10, 0, 4, 6, 10, 0),
	gsSP2Triangles(4, 10, 11, 0, 1, 4, 11, 0),
	gsSP2Triangles(1, 11, 12, 0, 1, 12, 13, 0),
	gsSP2Triangles(12, 14, 13, 0, 12, 15, 14, 0),
	gsSP2Triangles(15, 16, 14, 0, 15, 17, 16, 0),
	gsSP2Triangles(17, 15, 18, 0, 19, 17, 18, 0),
	gsSP2Triangles(17, 20, 16, 0, 21, 22, 23, 0),
	gsSP1Triangle(1, 13, 2, 0),
	gsSPEndDisplayList(),
};

Vtx dementor_head_mesh_layer_1_vtx_1[10] = {
	{{{18, 30, 24},0, {-161, 654},{0x58, 0x1, 0xA5, 0xFF}}},
	{{{26, 30, 0},0, {502, 743},{0x7F, 0xF9, 0x0, 0xFF}}},
	{{{19, 52, 11},0, {176, -420},{0x53, 0xA7, 0xDB, 0xFF}}},
	{{{19, 12, 11},0, {391, 752},{0x5C, 0x49, 0xD0, 0xFF}}},
	{{{26, 30, 0},0, {481, 549},{0x7F, 0xF9, 0x0, 0xFF}}},
	{{{18, 30, 24},0, {336, 529},{0x58, 0x1, 0xA5, 0xFF}}},
	{{{17, 9, -11},0, {578, 790},{0x5D, 0x4E, 0x24, 0xFF}}},
	{{{18, 31, -24},0, {626, 529},{0x58, 0xF6, 0x5B, 0xFF}}},
	{{{21, 49, -11},0, {553, 333},{0x53, 0xAC, 0x2F, 0xFF}}},
	{{{19, 52, 11},0, {410, 294},{0x53, 0xA7, 0xDB, 0xFF}}},
};

Gfx dementor_head_mesh_layer_1_tri_1[] = {
	gsSPVertex(dementor_head_mesh_layer_1_vtx_1 + 0, 10, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(3, 6, 4, 0, 4, 6, 7, 0),
	gsSP2Triangles(4, 7, 8, 0, 4, 8, 9, 0),
	gsSPEndDisplayList(),
};


Gfx mat_dementor_Hood[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(dementor_Hood_lights),
	gsSPEndDisplayList(),
};

Gfx mat_dementor_Darkness[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx dementor_root_mesh_layer_1[] = {
	gsSPDisplayList(mat_dementor_Hood),
	gsSPDisplayList(dementor_root_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx dementor_head_mesh_layer_1[] = {
	gsSPDisplayList(mat_dementor_Hood),
	gsSPDisplayList(dementor_head_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_dementor_Darkness),
	gsSPDisplayList(dementor_head_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx dementor_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};
