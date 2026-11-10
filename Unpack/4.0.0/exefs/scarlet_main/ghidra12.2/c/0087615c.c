/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0087615c; name: FUN_0087615c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0087615c(long *param_1,long *param_2,long param_3,uint *param_4)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  
  if ((((param_2 != (long *)0x0) && ((*(byte *)(param_2 + 2) & 3) == 0)) &&
      ((int)param_1[0x7c] == (int)param_2[1])) &&
     ((param_3 != 0 || (*(char *)((long)param_1 + 0x3ec) == '\0')))) {
    iVar5 = (**(code **)(*param_1 + 0x48))(param_1);
    if (iVar5 - DAT_047fc380 != 1) {
      DAT_044ea8dc = 0;
      _DAT_044ea8a0 = 0;
      _DAT_044ea8a8 = 0;
      _DAT_044ea8d0 = 0;
      DAT_044ea8b0 = 0;
      DAT_044ea8b8 = 0;
      DAT_044ea8c0 = 0;
      DAT_044ea8c8 = 0;
      if (DAT_047fc398 != (void *)0x0) {
        memset(DAT_047fc398,0,(ulong)(uint)(DAT_047fc388 << 3));
      }
      if (DAT_047fc3a0 != (void *)0x0) {
        memset(DAT_047fc3a0,0,(ulong)(uint)(DAT_047fc388 << 2));
      }
      lVar13 = param_1[5];
      if (*(void **)(lVar13 + 0x598) != (void *)0x0) {
        memset(*(void **)(lVar13 + 0x598),0,(ulong)(uint)(*(int *)(lVar13 + 0x21c) << 9));
      }
      *(undefined8 *)(lVar13 + 0xc8c) = 0;
      *(undefined8 *)(lVar13 + 0xc84) = 0;
      *(undefined8 *)(lVar13 + 0xc7c) = 0;
      *(undefined8 *)(lVar13 + 0xc74) = 0;
      *(undefined8 *)(lVar13 + 0xc6c) = 0;
      *(undefined8 *)(lVar13 + 0xc64) = 0;
      *(undefined8 *)(lVar13 + 0xc5c) = 0;
      *(undefined8 *)(lVar13 + 0xc54) = 0;
      *(undefined8 *)(lVar13 + 0xc4c) = 0;
      *(undefined8 *)(lVar13 + 0xc44) = 0;
      *(undefined8 *)(lVar13 + 0xc3c) = 0;
      *(undefined8 *)(lVar13 + 0xc34) = 0;
      *(undefined8 *)(lVar13 + 0xc2c) = 0;
      *(undefined8 *)(lVar13 + 0xc24) = 0;
      *(undefined8 *)(lVar13 + 0xc1c) = 0;
      *(undefined8 *)(lVar13 + 0xc14) = 0;
      *(undefined8 *)(lVar13 + 0xc0c) = 0;
      *(undefined8 *)(lVar13 + 0xc04) = 0;
      *(undefined8 *)(lVar13 + 0xbfc) = 0;
      *(undefined8 *)(lVar13 + 0xbf4) = 0;
      *(undefined8 *)(lVar13 + 0xc94) = 0;
      *(undefined8 *)(lVar13 + 0xbdc) = 0;
      *(undefined8 *)(lVar13 + 0xbec) = 0;
      *(undefined8 *)(lVar13 + 0xbe4) = 0;
      *(undefined8 *)(lVar13 + 0xd6c) = 0;
      *(undefined8 *)(lVar13 + 0xd64) = 0;
      *(undefined8 *)(lVar13 + 0xd5c) = 0;
      *(undefined8 *)(lVar13 + 0xd54) = 0;
      *(undefined8 *)(lVar13 + 0xd4c) = 0;
      *(undefined8 *)(lVar13 + 0xd44) = 0;
      *(undefined8 *)(lVar13 + 0xd3c) = 0;
      *(undefined8 *)(lVar13 + 0xd34) = 0;
      *(undefined8 *)(lVar13 + 0xd2c) = 0;
      *(undefined8 *)(lVar13 + 0xd24) = 0;
      *(undefined8 *)(lVar13 + 0xd1c) = 0;
      *(undefined8 *)(lVar13 + 0xd14) = 0;
      *(undefined8 *)(lVar13 + 0xd0c) = 0;
      *(undefined8 *)(lVar13 + 0xd04) = 0;
      *(undefined8 *)(lVar13 + 0xcfc) = 0;
      *(undefined8 *)(lVar13 + 0xcf4) = 0;
      *(undefined8 *)(lVar13 + 0xcec) = 0;
      *(undefined8 *)(lVar13 + 0xce4) = 0;
      *(undefined8 *)(lVar13 + 0xcdc) = 0;
      *(undefined8 *)(lVar13 + 0xcd4) = 0;
      *(undefined8 *)(lVar13 + 0xccc) = 0;
      *(undefined8 *)(lVar13 + 0xcc4) = 0;
      *(undefined8 *)(lVar13 + 0xcbc) = 0;
      *(undefined8 *)(lVar13 + 0xcb4) = 0;
      *(undefined8 *)(lVar13 + 0xd8c) = 0;
      *(undefined8 *)(lVar13 + 0xe44) = 0;
      *(undefined8 *)(lVar13 + 0xe3c) = 0;
      *(undefined8 *)(lVar13 + 0xe34) = 0;
      *(undefined8 *)(lVar13 + 0xe2c) = 0;
      *(undefined8 *)(lVar13 + 0xe24) = 0;
      *(undefined8 *)(lVar13 + 0xe1c) = 0;
      *(undefined8 *)(lVar13 + 0xe14) = 0;
      *(undefined8 *)(lVar13 + 0xe0c) = 0;
      *(undefined8 *)(lVar13 + 0xe04) = 0;
      *(undefined8 *)(lVar13 + 0xdfc) = 0;
      *(undefined8 *)(lVar13 + 0xdf4) = 0;
      *(undefined8 *)(lVar13 + 0xdec) = 0;
      *(undefined8 *)(lVar13 + 0xde4) = 0;
      *(undefined8 *)(lVar13 + 0xddc) = 0;
      *(undefined8 *)(lVar13 + 0xdd4) = 0;
      *(undefined8 *)(lVar13 + 0xdcc) = 0;
      *(undefined8 *)(lVar13 + 0xdc4) = 0;
      *(undefined8 *)(lVar13 + 0xdbc) = 0;
      *(undefined8 *)(lVar13 + 0xdb4) = 0;
      *(undefined8 *)(lVar13 + 0xdac) = 0;
      *(undefined8 *)(lVar13 + 0xda4) = 0;
      *(undefined8 *)(lVar13 + 0xd9c) = 0;
      *(undefined8 *)(lVar13 + 0xd94) = 0;
      *(undefined8 *)(lVar13 + 0xf1c) = 0;
      *(undefined8 *)(lVar13 + 0xf14) = 0;
      *(undefined8 *)(lVar13 + 0xf0c) = 0;
      *(undefined8 *)(lVar13 + 0xf04) = 0;
      *(undefined8 *)(lVar13 + 0xefc) = 0;
      *(undefined8 *)(lVar13 + 0xef4) = 0;
      *(undefined8 *)(lVar13 + 0xeec) = 0;
      *(undefined8 *)(lVar13 + 0xee4) = 0;
      *(undefined8 *)(lVar13 + 0xedc) = 0;
      *(undefined8 *)(lVar13 + 0xed4) = 0;
      *(undefined8 *)(lVar13 + 0xecc) = 0;
      *(undefined8 *)(lVar13 + 0xec4) = 0;
      *(undefined8 *)(lVar13 + 0xebc) = 0;
      *(undefined8 *)(lVar13 + 0xeb4) = 0;
      *(undefined8 *)(lVar13 + 0xeac) = 0;
      *(undefined8 *)(lVar13 + 0xea4) = 0;
      *(undefined8 *)(lVar13 + 0xe9c) = 0;
      *(undefined8 *)(lVar13 + 0xe94) = 0;
      *(undefined8 *)(lVar13 + 0xe8c) = 0;
      *(undefined8 *)(lVar13 + 0xe84) = 0;
      *(undefined8 *)(lVar13 + 0xe7c) = 0;
      *(undefined8 *)(lVar13 + 0xe74) = 0;
      *(undefined8 *)(lVar13 + 0xe6c) = 0;
      *(undefined8 *)(lVar13 + 0xe64) = 0;
      *(undefined8 *)(lVar13 + 0xf3c) = 0;
      *(undefined8 *)(lVar13 + 0xff4) = 0;
      *(undefined8 *)(lVar13 + 0xfec) = 0;
      *(undefined8 *)(lVar13 + 0xfe4) = 0;
      *(undefined8 *)(lVar13 + 0xfdc) = 0;
      *(undefined8 *)(lVar13 + 0xfd4) = 0;
      *(undefined8 *)(lVar13 + 0xfcc) = 0;
      *(undefined8 *)(lVar13 + 0xfc4) = 0;
      *(undefined8 *)(lVar13 + 0xfbc) = 0;
      *(undefined8 *)(lVar13 + 0xfb4) = 0;
      *(undefined8 *)(lVar13 + 0xfac) = 0;
      *(undefined8 *)(lVar13 + 0xfa4) = 0;
      *(undefined8 *)(lVar13 + 0xf9c) = 0;
      *(undefined8 *)(lVar13 + 0xf94) = 0;
      *(undefined8 *)(lVar13 + 0xf8c) = 0;
      *(undefined8 *)(lVar13 + 0xf84) = 0;
      *(undefined8 *)(lVar13 + 0xf7c) = 0;
      *(undefined8 *)(lVar13 + 0xf74) = 0;
      *(undefined8 *)(lVar13 + 0xf6c) = 0;
      *(undefined8 *)(lVar13 + 0xf64) = 0;
      *(undefined8 *)(lVar13 + 0xf5c) = 0;
      *(undefined8 *)(lVar13 + 0xf54) = 0;
      *(undefined8 *)(lVar13 + 0xf4c) = 0;
      *(undefined8 *)(lVar13 + 0xf44) = 0;
      *(undefined8 *)(lVar13 + 0x10cc) = 0;
      *(undefined8 *)(lVar13 + 0x10c4) = 0;
      *(undefined8 *)(lVar13 + 0x10bc) = 0;
      *(undefined8 *)(lVar13 + 0x10b4) = 0;
      *(undefined8 *)(lVar13 + 0x10ac) = 0;
      *(undefined8 *)(lVar13 + 0x10a4) = 0;
      *(undefined8 *)(lVar13 + 0x109c) = 0;
      *(undefined8 *)(lVar13 + 0x1094) = 0;
      *(undefined8 *)(lVar13 + 0x108c) = 0;
      *(undefined8 *)(lVar13 + 0x1084) = 0;
      *(undefined8 *)(lVar13 + 0x107c) = 0;
      *(undefined8 *)(lVar13 + 0x1074) = 0;
      *(undefined8 *)(lVar13 + 0x106c) = 0;
      *(undefined8 *)(lVar13 + 0x1064) = 0;
      *(undefined8 *)(lVar13 + 0x105c) = 0;
      *(undefined8 *)(lVar13 + 0x1054) = 0;
      *(undefined8 *)(lVar13 + 0x104c) = 0;
      *(undefined8 *)(lVar13 + 0x1044) = 0;
      *(undefined8 *)(lVar13 + 0x103c) = 0;
      *(undefined8 *)(lVar13 + 0x1034) = 0;
      *(undefined8 *)(lVar13 + 0x102c) = 0;
      *(undefined8 *)(lVar13 + 0x1024) = 0;
      *(undefined8 *)(lVar13 + 0x101c) = 0;
      *(undefined8 *)(lVar13 + 0x1014) = 0;
      *(undefined8 *)(lVar13 + 0x11a4) = 0;
      *(undefined8 *)(lVar13 + 0x119c) = 0;
      *(undefined8 *)(lVar13 + 0x1194) = 0;
      *(undefined8 *)(lVar13 + 0x118c) = 0;
      *(undefined8 *)(lVar13 + 0x1184) = 0;
      *(undefined8 *)(lVar13 + 0x117c) = 0;
      *(undefined8 *)(lVar13 + 0x1174) = 0;
      *(undefined8 *)(lVar13 + 0x116c) = 0;
      *(undefined8 *)(lVar13 + 0x1164) = 0;
      *(undefined8 *)(lVar13 + 0x115c) = 0;
      *(undefined8 *)(lVar13 + 0x1154) = 0;
      *(undefined8 *)(lVar13 + 0x114c) = 0;
      *(undefined8 *)(lVar13 + 0x1144) = 0;
      *(undefined8 *)(lVar13 + 0x113c) = 0;
      *(undefined8 *)(lVar13 + 0x1134) = 0;
      *(undefined8 *)(lVar13 + 0x112c) = 0;
      *(undefined8 *)(lVar13 + 0x1124) = 0;
      *(undefined8 *)(lVar13 + 0x111c) = 0;
      *(undefined8 *)(lVar13 + 0x1114) = 0;
      *(undefined8 *)(lVar13 + 0x110c) = 0;
      *(undefined8 *)(lVar13 + 0x1104) = 0;
      *(undefined8 *)(lVar13 + 0x10fc) = 0;
      *(undefined8 *)(lVar13 + 0x10f4) = 0;
      *(undefined8 *)(lVar13 + 0x10ec) = 0;
      *(undefined8 *)(lVar13 + 0x127c) = 0;
      *(undefined8 *)(lVar13 + 0x1274) = 0;
      *(undefined8 *)(lVar13 + 0x126c) = 0;
      *(undefined8 *)(lVar13 + 0x1264) = 0;
      *(undefined8 *)(lVar13 + 0x125c) = 0;
      *(undefined8 *)(lVar13 + 0x1254) = 0;
      *(undefined8 *)(lVar13 + 0x124c) = 0;
      *(undefined8 *)(lVar13 + 0x1244) = 0;
      *(undefined8 *)(lVar13 + 0x123c) = 0;
      *(undefined8 *)(lVar13 + 0x1234) = 0;
      *(undefined8 *)(lVar13 + 0x122c) = 0;
      *(undefined8 *)(lVar13 + 0x1224) = 0;
      *(undefined8 *)(lVar13 + 0x121c) = 0;
      *(undefined8 *)(lVar13 + 0x1214) = 0;
      *(undefined8 *)(lVar13 + 0x120c) = 0;
      *(undefined8 *)(lVar13 + 0x1204) = 0;
      *(undefined8 *)(lVar13 + 0x11fc) = 0;
      *(undefined8 *)(lVar13 + 0x11f4) = 0;
      *(undefined8 *)(lVar13 + 0x11ec) = 0;
      *(undefined8 *)(lVar13 + 0x11e4) = 0;
      *(undefined8 *)(lVar13 + 0x11dc) = 0;
      *(undefined8 *)(lVar13 + 0x11d4) = 0;
      *(undefined8 *)(lVar13 + 0x11cc) = 0;
      *(undefined8 *)(lVar13 + 0x11c4) = 0;
      *(undefined8 *)(lVar13 + 0x1354) = 0;
      *(undefined8 *)(lVar13 + 0x134c) = 0;
      *(undefined8 *)(lVar13 + 0x1344) = 0;
      *(undefined8 *)(lVar13 + 0x133c) = 0;
      *(undefined8 *)(lVar13 + 0x1334) = 0;
      *(undefined8 *)(lVar13 + 0x132c) = 0;
      *(undefined8 *)(lVar13 + 0x1324) = 0;
      *(undefined8 *)(lVar13 + 0x131c) = 0;
      *(undefined8 *)(lVar13 + 0x1314) = 0;
      *(undefined8 *)(lVar13 + 0x130c) = 0;
      *(undefined8 *)(lVar13 + 0x1304) = 0;
      *(undefined8 *)(lVar13 + 0x12fc) = 0;
      *(undefined8 *)(lVar13 + 0x12f4) = 0;
      *(undefined8 *)(lVar13 + 0x12ec) = 0;
      *(undefined8 *)(lVar13 + 0x12e4) = 0;
      *(undefined8 *)(lVar13 + 0x12dc) = 0;
      *(undefined8 *)(lVar13 + 0x12d4) = 0;
      *(undefined8 *)(lVar13 + 0x12cc) = 0;
      *(undefined8 *)(lVar13 + 0x12c4) = 0;
      *(undefined8 *)(lVar13 + 0x12bc) = 0;
      *(undefined8 *)(lVar13 + 0x12b4) = 0;
      *(undefined8 *)(lVar13 + 0x12ac) = 0;
      *(undefined8 *)(lVar13 + 0x12a4) = 0;
      *(undefined8 *)(lVar13 + 0x129c) = 0;
      *(undefined8 *)(lVar13 + 0x142c) = 0;
      *(undefined8 *)(lVar13 + 0x1424) = 0;
      *(undefined8 *)(lVar13 + 0x141c) = 0;
      *(undefined8 *)(lVar13 + 0x1414) = 0;
      *(undefined8 *)(lVar13 + 0x140c) = 0;
      *(undefined8 *)(lVar13 + 0x1404) = 0;
      *(undefined8 *)(lVar13 + 0x13fc) = 0;
      *(undefined8 *)(lVar13 + 0x13f4) = 0;
      *(undefined8 *)(lVar13 + 0x13ec) = 0;
      *(undefined8 *)(lVar13 + 0x13e4) = 0;
      *(undefined8 *)(lVar13 + 0x13dc) = 0;
      *(undefined8 *)(lVar13 + 0x13d4) = 0;
      *(undefined8 *)(lVar13 + 0x13cc) = 0;
      *(undefined8 *)(lVar13 + 0x13c4) = 0;
      *(undefined8 *)(lVar13 + 0x13bc) = 0;
      *(undefined8 *)(lVar13 + 0x13b4) = 0;
      *(undefined8 *)(lVar13 + 0x13ac) = 0;
      *(undefined8 *)(lVar13 + 0x13a4) = 0;
      *(undefined8 *)(lVar13 + 0x139c) = 0;
      *(undefined8 *)(lVar13 + 0x1394) = 0;
      *(undefined8 *)(lVar13 + 0x138c) = 0;
      *(undefined8 *)(lVar13 + 0x1384) = 0;
      *(undefined8 *)(lVar13 + 0x137c) = 0;
      *(undefined8 *)(lVar13 + 0x1374) = 0;
      *(undefined8 *)(lVar13 + 0x1504) = 0;
      *(undefined8 *)(lVar13 + 0x14fc) = 0;
      *(undefined8 *)(lVar13 + 0x14f4) = 0;
      *(undefined8 *)(lVar13 + 0x14ec) = 0;
      *(undefined8 *)(lVar13 + 0x14e4) = 0;
      *(undefined8 *)(lVar13 + 0x14dc) = 0;
      *(undefined8 *)(lVar13 + 0x14d4) = 0;
      *(undefined8 *)(lVar13 + 0x14cc) = 0;
      *(undefined8 *)(lVar13 + 0x14c4) = 0;
      *(undefined8 *)(lVar13 + 0x14bc) = 0;
      *(undefined8 *)(lVar13 + 0x14b4) = 0;
      *(undefined8 *)(lVar13 + 0x14ac) = 0;
      *(undefined8 *)(lVar13 + 0x14a4) = 0;
      *(undefined8 *)(lVar13 + 0x149c) = 0;
      *(undefined8 *)(lVar13 + 0x1494) = 0;
      *(undefined8 *)(lVar13 + 0x148c) = 0;
      *(undefined8 *)(lVar13 + 0x1484) = 0;
      *(undefined8 *)(lVar13 + 0x147c) = 0;
      *(undefined8 *)(lVar13 + 0x1474) = 0;
      *(undefined8 *)(lVar13 + 0x146c) = 0;
      *(undefined8 *)(lVar13 + 0x1464) = 0;
      *(undefined8 *)(lVar13 + 0x145c) = 0;
      *(undefined8 *)(lVar13 + 0x1454) = 0;
      *(undefined8 *)(lVar13 + 0x144c) = 0;
      *(undefined8 *)(lVar13 + 0x15dc) = 0;
      *(undefined8 *)(lVar13 + 0x15d4) = 0;
      *(undefined8 *)(lVar13 + 0x15cc) = 0;
      *(undefined8 *)(lVar13 + 0x15c4) = 0;
      *(undefined8 *)(lVar13 + 0x15bc) = 0;
      *(undefined8 *)(lVar13 + 0x15b4) = 0;
      *(undefined8 *)(lVar13 + 0x15ac) = 0;
      *(undefined8 *)(lVar13 + 0x15a4) = 0;
      *(undefined8 *)(lVar13 + 0x159c) = 0;
      *(undefined8 *)(lVar13 + 0x1594) = 0;
      *(undefined8 *)(lVar13 + 0x158c) = 0;
      *(undefined8 *)(lVar13 + 0x1584) = 0;
      *(undefined8 *)(lVar13 + 0x157c) = 0;
      *(undefined8 *)(lVar13 + 0x1574) = 0;
      *(undefined8 *)(lVar13 + 0x156c) = 0;
      *(undefined8 *)(lVar13 + 0x1564) = 0;
      *(undefined8 *)(lVar13 + 0x155c) = 0;
      *(undefined8 *)(lVar13 + 0x1554) = 0;
      *(undefined8 *)(lVar13 + 0x154c) = 0;
      *(undefined8 *)(lVar13 + 0x1544) = 0;
      *(undefined8 *)(lVar13 + 0x153c) = 0;
      *(undefined8 *)(lVar13 + 0x1534) = 0;
      *(undefined8 *)(lVar13 + 0x152c) = 0;
      *(undefined8 *)(lVar13 + 0x1524) = 0;
      *(undefined8 *)(lVar13 + 0x16b4) = 0;
      *(undefined8 *)(lVar13 + 0x16ac) = 0;
      *(undefined8 *)(lVar13 + 0x16a4) = 0;
      *(undefined8 *)(lVar13 + 0x169c) = 0;
      *(undefined8 *)(lVar13 + 0x1694) = 0;
      *(undefined8 *)(lVar13 + 0x168c) = 0;
      *(undefined8 *)(lVar13 + 0x1684) = 0;
      *(undefined8 *)(lVar13 + 0x167c) = 0;
      *(undefined8 *)(lVar13 + 0x1674) = 0;
      *(undefined8 *)(lVar13 + 0x166c) = 0;
      *(undefined8 *)(lVar13 + 0x1664) = 0;
      *(undefined8 *)(lVar13 + 0x165c) = 0;
      *(undefined8 *)(lVar13 + 0x1654) = 0;
      *(undefined8 *)(lVar13 + 0x164c) = 0;
      *(undefined8 *)(lVar13 + 0x1644) = 0;
      *(undefined8 *)(lVar13 + 0x163c) = 0;
      *(undefined8 *)(lVar13 + 0x1634) = 0;
      *(undefined8 *)(lVar13 + 0x162c) = 0;
      *(undefined8 *)(lVar13 + 0x1624) = 0;
      *(undefined8 *)(lVar13 + 0x161c) = 0;
      *(undefined8 *)(lVar13 + 0x1614) = 0;
      *(undefined8 *)(lVar13 + 0x160c) = 0;
      *(undefined8 *)(lVar13 + 0x1604) = 0;
      *(undefined8 *)(lVar13 + 0x15fc) = 0;
      *(undefined8 *)(lVar13 + 0x178c) = 0;
      *(undefined8 *)(lVar13 + 0x1784) = 0;
      *(undefined8 *)(lVar13 + 0x177c) = 0;
      *(undefined8 *)(lVar13 + 0x1774) = 0;
      *(undefined8 *)(lVar13 + 0x176c) = 0;
      *(undefined8 *)(lVar13 + 0x1764) = 0;
      *(undefined8 *)(lVar13 + 0x175c) = 0;
      *(undefined8 *)(lVar13 + 0x1754) = 0;
      *(undefined8 *)(lVar13 + 0x174c) = 0;
      *(undefined8 *)(lVar13 + 0x1744) = 0;
      *(undefined8 *)(lVar13 + 0x173c) = 0;
      *(undefined8 *)(lVar13 + 0x1734) = 0;
      *(undefined8 *)(lVar13 + 0x172c) = 0;
      *(undefined8 *)(lVar13 + 0x1724) = 0;
      *(undefined8 *)(lVar13 + 0x171c) = 0;
      *(undefined8 *)(lVar13 + 0x1714) = 0;
      *(undefined8 *)(lVar13 + 0x170c) = 0;
      *(undefined8 *)(lVar13 + 0x1704) = 0;
      *(undefined8 *)(lVar13 + 0x16fc) = 0;
      *(undefined8 *)(lVar13 + 0x16f4) = 0;
      *(undefined8 *)(lVar13 + 0x16ec) = 0;
      *(undefined8 *)(lVar13 + 0x16e4) = 0;
      *(undefined8 *)(lVar13 + 0x16dc) = 0;
      *(undefined8 *)(lVar13 + 0x16d4) = 0;
      *(undefined8 *)(lVar13 + 0x1864) = 0;
      *(undefined8 *)(lVar13 + 0x185c) = 0;
      *(undefined8 *)(lVar13 + 0x1854) = 0;
      *(undefined8 *)(lVar13 + 0x184c) = 0;
      *(undefined8 *)(lVar13 + 0x1844) = 0;
      *(undefined8 *)(lVar13 + 0x183c) = 0;
      *(undefined8 *)(lVar13 + 0x1834) = 0;
      *(undefined8 *)(lVar13 + 0x182c) = 0;
      *(undefined8 *)(lVar13 + 0x1824) = 0;
      *(undefined8 *)(lVar13 + 0x181c) = 0;
      *(undefined8 *)(lVar13 + 0x1814) = 0;
      *(undefined8 *)(lVar13 + 0x180c) = 0;
      *(undefined8 *)(lVar13 + 0x1804) = 0;
      *(undefined8 *)(lVar13 + 0x17fc) = 0;
      *(undefined8 *)(lVar13 + 0x17f4) = 0;
      *(undefined8 *)(lVar13 + 0x17ec) = 0;
      *(undefined8 *)(lVar13 + 0x17e4) = 0;
      *(undefined8 *)(lVar13 + 0x17dc) = 0;
      *(undefined8 *)(lVar13 + 0x17d4) = 0;
      *(undefined8 *)(lVar13 + 0x17cc) = 0;
      *(undefined8 *)(lVar13 + 0x17c4) = 0;
      *(undefined8 *)(lVar13 + 0x17bc) = 0;
      *(undefined8 *)(lVar13 + 0x17b4) = 0;
      *(undefined8 *)(lVar13 + 0x17ac) = 0;
      *(undefined8 *)(lVar13 + 0x193c) = 0;
      *(undefined8 *)(lVar13 + 0x1934) = 0;
      *(undefined8 *)(lVar13 + 0x192c) = 0;
      *(undefined8 *)(lVar13 + 0x1924) = 0;
      *(undefined8 *)(lVar13 + 0x191c) = 0;
      *(undefined8 *)(lVar13 + 0x1914) = 0;
      *(undefined8 *)(lVar13 + 0x190c) = 0;
      *(undefined8 *)(lVar13 + 0x1904) = 0;
      *(undefined8 *)(lVar13 + 0x18fc) = 0;
      *(undefined8 *)(lVar13 + 0x18f4) = 0;
      *(undefined8 *)(lVar13 + 0x18ec) = 0;
      *(undefined8 *)(lVar13 + 0x18e4) = 0;
      *(undefined8 *)(lVar13 + 0x18dc) = 0;
      *(undefined8 *)(lVar13 + 0x18d4) = 0;
      *(undefined8 *)(lVar13 + 0x18cc) = 0;
      *(undefined8 *)(lVar13 + 0x18c4) = 0;
      *(undefined8 *)(lVar13 + 0x18bc) = 0;
      *(undefined8 *)(lVar13 + 0x18b4) = 0;
      *(undefined8 *)(lVar13 + 0x18ac) = 0;
      *(undefined8 *)(lVar13 + 0x18a4) = 0;
      *(undefined8 *)(lVar13 + 0x189c) = 0;
      *(undefined8 *)(lVar13 + 0x1894) = 0;
      *(undefined8 *)(lVar13 + 0x188c) = 0;
      *(undefined8 *)(lVar13 + 0x1884) = 0;
      *(undefined8 *)(lVar13 + 0x71c) = 0;
      *(undefined8 *)(lVar13 + 0x714) = 0;
      *(undefined8 *)(lVar13 + 0x70c) = 0;
      *(undefined8 *)(lVar13 + 0x704) = 0;
      *(undefined8 *)(lVar13 + 0x6fc) = 0;
      *(undefined8 *)(lVar13 + 0x6f4) = 0;
      *(undefined8 *)(lVar13 + 0x6ec) = 0;
      *(undefined8 *)(lVar13 + 0x6e4) = 0;
      *(undefined8 *)(lVar13 + 0x6dc) = 0;
      *(undefined8 *)(lVar13 + 0x6d4) = 0;
      *(undefined8 *)(lVar13 + 0x6cc) = 0;
      *(undefined8 *)(lVar13 + 0x6c4) = 0;
      *(undefined8 *)(lVar13 + 0x6bc) = 0;
      *(undefined8 *)(lVar13 + 0x6b4) = 0;
      *(undefined8 *)(lVar13 + 0x6ac) = 0;
      *(undefined8 *)(lVar13 + 0x6a4) = 0;
      *(undefined8 *)(lVar13 + 0x69c) = 0;
      *(undefined8 *)(lVar13 + 0x694) = 0;
      *(undefined8 *)(lVar13 + 0x68c) = 0;
      *(undefined8 *)(lVar13 + 0x684) = 0;
      *(undefined8 *)(lVar13 + 0x67c) = 0;
      *(undefined8 *)(lVar13 + 0x674) = 0;
      *(undefined8 *)(lVar13 + 0x66c) = 0;
      *(undefined8 *)(lVar13 + 0x664) = 0;
      *(undefined8 *)(lVar13 + 0x73c) = 0;
      *(undefined8 *)(lVar13 + 0x7f4) = 0;
      *(undefined8 *)(lVar13 + 0x7ec) = 0;
      *(undefined8 *)(lVar13 + 0x7e4) = 0;
      *(undefined8 *)(lVar13 + 0x7dc) = 0;
      *(undefined8 *)(lVar13 + 0x7d4) = 0;
      *(undefined8 *)(lVar13 + 0x7cc) = 0;
      *(undefined8 *)(lVar13 + 0x7c4) = 0;
      *(undefined8 *)(lVar13 + 0x7bc) = 0;
      *(undefined8 *)(lVar13 + 0x7b4) = 0;
      *(undefined8 *)(lVar13 + 0x7ac) = 0;
      *(undefined8 *)(lVar13 + 0x7a4) = 0;
      *(undefined8 *)(lVar13 + 0x79c) = 0;
      *(undefined8 *)(lVar13 + 0x794) = 0;
      *(undefined8 *)(lVar13 + 0x78c) = 0;
      *(undefined8 *)(lVar13 + 0x784) = 0;
      *(undefined8 *)(lVar13 + 0x77c) = 0;
      *(undefined8 *)(lVar13 + 0x774) = 0;
      *(undefined8 *)(lVar13 + 0x76c) = 0;
      *(undefined8 *)(lVar13 + 0x764) = 0;
      *(undefined8 *)(lVar13 + 0x75c) = 0;
      *(undefined8 *)(lVar13 + 0x754) = 0;
      *(undefined8 *)(lVar13 + 0x74c) = 0;
      *(undefined8 *)(lVar13 + 0x744) = 0;
      *(undefined8 *)(lVar13 + 0x8cc) = 0;
      *(undefined8 *)(lVar13 + 0x8c4) = 0;
      *(undefined8 *)(lVar13 + 0x8bc) = 0;
      *(undefined8 *)(lVar13 + 0x8b4) = 0;
      *(undefined8 *)(lVar13 + 0x8ac) = 0;
      *(undefined8 *)(lVar13 + 0x8a4) = 0;
      *(undefined8 *)(lVar13 + 0x89c) = 0;
      *(undefined8 *)(lVar13 + 0x894) = 0;
      *(undefined8 *)(lVar13 + 0x88c) = 0;
      *(undefined8 *)(lVar13 + 0x884) = 0;
      *(undefined8 *)(lVar13 + 0x87c) = 0;
      *(undefined8 *)(lVar13 + 0x874) = 0;
      *(undefined8 *)(lVar13 + 0x86c) = 0;
      *(undefined8 *)(lVar13 + 0x864) = 0;
      *(undefined8 *)(lVar13 + 0x85c) = 0;
      *(undefined8 *)(lVar13 + 0x854) = 0;
      *(undefined8 *)(lVar13 + 0x84c) = 0;
      *(undefined8 *)(lVar13 + 0x844) = 0;
      *(undefined8 *)(lVar13 + 0x83c) = 0;
      *(undefined8 *)(lVar13 + 0x834) = 0;
      *(undefined8 *)(lVar13 + 0x82c) = 0;
      *(undefined8 *)(lVar13 + 0x824) = 0;
      *(undefined8 *)(lVar13 + 0x81c) = 0;
      *(undefined8 *)(lVar13 + 0x814) = 0;
      *(undefined8 *)(lVar13 + 0x8ec) = 0;
      *(undefined8 *)(lVar13 + 0x9a4) = 0;
      *(undefined8 *)(lVar13 + 0x99c) = 0;
      *(undefined8 *)(lVar13 + 0x994) = 0;
      *(undefined8 *)(lVar13 + 0x98c) = 0;
      *(undefined8 *)(lVar13 + 0x984) = 0;
      *(undefined8 *)(lVar13 + 0x97c) = 0;
      *(undefined8 *)(lVar13 + 0x974) = 0;
      *(undefined8 *)(lVar13 + 0x96c) = 0;
      *(undefined8 *)(lVar13 + 0x964) = 0;
      *(undefined8 *)(lVar13 + 0x95c) = 0;
      *(undefined8 *)(lVar13 + 0x954) = 0;
      *(undefined8 *)(lVar13 + 0x94c) = 0;
      *(undefined8 *)(lVar13 + 0x944) = 0;
      *(undefined8 *)(lVar13 + 0x93c) = 0;
      *(undefined8 *)(lVar13 + 0x934) = 0;
      *(undefined8 *)(lVar13 + 0x92c) = 0;
      *(undefined8 *)(lVar13 + 0x924) = 0;
      *(undefined8 *)(lVar13 + 0x91c) = 0;
      *(undefined8 *)(lVar13 + 0x914) = 0;
      *(undefined8 *)(lVar13 + 0x90c) = 0;
      *(undefined8 *)(lVar13 + 0x904) = 0;
      *(undefined8 *)(lVar13 + 0x8fc) = 0;
      *(undefined8 *)(lVar13 + 0x8f4) = 0;
      *(undefined8 *)(lVar13 + 0xa7c) = 0;
      *(undefined8 *)(lVar13 + 0xa74) = 0;
      *(undefined8 *)(lVar13 + 0xa6c) = 0;
      *(undefined8 *)(lVar13 + 0xa64) = 0;
      *(undefined8 *)(lVar13 + 0xa5c) = 0;
      *(undefined8 *)(lVar13 + 0xa54) = 0;
      *(undefined8 *)(lVar13 + 0xa4c) = 0;
      *(undefined8 *)(lVar13 + 0xa44) = 0;
      *(undefined8 *)(lVar13 + 0xa3c) = 0;
      *(undefined8 *)(lVar13 + 0xa34) = 0;
      *(undefined8 *)(lVar13 + 0xa2c) = 0;
      *(undefined8 *)(lVar13 + 0xa24) = 0;
      *(undefined8 *)(lVar13 + 0xa1c) = 0;
      *(undefined8 *)(lVar13 + 0xa14) = 0;
      *(undefined8 *)(lVar13 + 0xa0c) = 0;
      *(undefined8 *)(lVar13 + 0xa04) = 0;
      *(undefined8 *)(lVar13 + 0x9fc) = 0;
      *(undefined8 *)(lVar13 + 0x9f4) = 0;
      *(undefined8 *)(lVar13 + 0x9ec) = 0;
      *(undefined8 *)(lVar13 + 0x9e4) = 0;
      *(undefined8 *)(lVar13 + 0x9dc) = 0;
      *(undefined8 *)(lVar13 + 0x9d4) = 0;
      *(undefined8 *)(lVar13 + 0x9cc) = 0;
      *(undefined8 *)(lVar13 + 0x9c4) = 0;
      *(undefined8 *)(lVar13 + 0xa9c) = 0;
      *(undefined8 *)(lVar13 + 0xb54) = 0;
      *(undefined8 *)(lVar13 + 0xb4c) = 0;
      *(undefined8 *)(lVar13 + 0xb44) = 0;
      *(undefined8 *)(lVar13 + 0xb3c) = 0;
      *(undefined8 *)(lVar13 + 0xb34) = 0;
      *(undefined8 *)(lVar13 + 0xb2c) = 0;
      *(undefined8 *)(lVar13 + 0xb24) = 0;
      *(undefined8 *)(lVar13 + 0xb1c) = 0;
      *(undefined8 *)(lVar13 + 0xb14) = 0;
      *(undefined8 *)(lVar13 + 0xb0c) = 0;
      *(undefined8 *)(lVar13 + 0xb04) = 0;
      *(undefined8 *)(lVar13 + 0xafc) = 0;
      *(undefined8 *)(lVar13 + 0xaf4) = 0;
      *(undefined8 *)(lVar13 + 0xaec) = 0;
      *(undefined8 *)(lVar13 + 0xae4) = 0;
      *(undefined8 *)(lVar13 + 0xadc) = 0;
      *(undefined8 *)(lVar13 + 0xad4) = 0;
      *(undefined8 *)(lVar13 + 0xacc) = 0;
      *(undefined8 *)(lVar13 + 0xac4) = 0;
      *(undefined8 *)(lVar13 + 0xabc) = 0;
      *(undefined8 *)(lVar13 + 0xab4) = 0;
      *(undefined8 *)(lVar13 + 0xaac) = 0;
      *(undefined8 *)(lVar13 + 0xaa4) = 0;
      if (param_1[0x83] != 0) {
        FUN_0087a8a8();
      }
    }
    uVar6 = FUN_00875184(param_1,0);
    if ((uVar6 & 1) == 0) {
      *(undefined4 *)((long)param_2 + 0xc) = 2;
      if (param_3 != 0) {
        *(undefined4 *)(param_3 + 0xc) = 2;
      }
      if ((*(long **)(param_4 + 2) != (long *)0x0) && (uVar8 = *param_4, uVar8 != 0)) {
        uVar6 = 0;
        lVar13 = **(long **)(param_4 + 2);
        while( true ) {
          if (lVar13 != 0) {
            *(undefined4 *)(lVar13 + 0xc) = 2;
            uVar8 = *param_4;
          }
          uVar6 = uVar6 + 1;
          if (uVar8 <= uVar6) break;
          lVar13 = *(long *)(*(long *)(param_4 + 2) + uVar6 * 8);
        }
      }
    }
    else if ((*(char *)((long)param_1 + 0x411) != '\0') || (*(char *)(param_1[2] + 0x178) != '\0'))
    {
      uVar8 = *param_4;
      if (uVar8 != 0) {
        uVar6 = 0;
        do {
          plVar15 = *(long **)(*(long *)(param_4 + 2) + uVar6 * 8);
          if (*plVar15 != 0) {
            uVar4 = *(ushort *)(plVar15 + 2);
            uVar7 = (ulong)uVar4;
            uVar2 = (uint)*(ushort *)((long)plVar15 + 0x12);
            if ((uint)uVar4 <= (uint)*(ushort *)((long)plVar15 + 0x12)) {
              uVar2 = (uint)uVar4;
            }
            if (uVar4 - uVar2 != 0) {
              bVar3 = *(byte *)(plVar15 + 1);
              if (bVar3 != 0) {
                uVar14 = (ulong)((uVar4 - uVar2) * 4);
                memset((void *)(*plVar15 + (ulong)uVar2 * 4),0,uVar14);
                uVar7 = (ulong)*(ushort *)(plVar15 + 2);
                if (bVar3 != 1) {
                  uVar10 = (ulong)bVar3 - 1;
                  uVar16 = uVar10 & 3;
                  if ((ulong)bVar3 - 2 < 3) {
                    lVar13 = 1;
                  }
                  else {
                    lVar13 = 0x10;
                    uVar1 = 0;
                    do {
                      uVar17 = uVar1;
                      lVar12 = (ulong)uVar2 * 4;
                      memset((void *)(*plVar15 + (lVar13 + -0xc) * uVar7 + lVar12),0,uVar14);
                      memset((void *)(*plVar15 + (lVar13 + -8) * (ulong)*(ushort *)(plVar15 + 2) +
                                     lVar12),0,uVar14);
                      memset((void *)(*plVar15 + (lVar13 + -4) * (ulong)*(ushort *)(plVar15 + 2) +
                                     lVar12),0,uVar14);
                      memset((void *)(*plVar15 + lVar13 * (ulong)*(ushort *)(plVar15 + 2) + lVar12),
                             0,uVar14);
                      uVar7 = (ulong)*(ushort *)(plVar15 + 2);
                      uVar1 = uVar17 + 4;
                      lVar13 = lVar13 + 0x10;
                    } while ((uVar10 & 0xfffffffffffffffc) != uVar1);
                    lVar13 = uVar17 + 5;
                  }
                  if (uVar16 != 0) {
                    lVar13 = lVar13 << 2;
                    do {
                      memset((void *)(*plVar15 + lVar13 * uVar7 + (ulong)uVar2 * 4),0,uVar14);
                      uVar7 = (ulong)*(ushort *)(plVar15 + 2);
                      uVar16 = uVar16 - 1;
                      lVar13 = lVar13 + 4;
                    } while (uVar16 != 0);
                  }
                }
              }
              *(short *)((long)plVar15 + 0x12) = (short)uVar7;
              uVar8 = *param_4;
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar8);
      }
      if (param_1[0x83] != 0) {
        FUN_008798ac(param_1[0x83],param_4);
      }
      uVar4 = *(ushort *)(param_2 + 2);
      if (uVar4 != 0) {
        uVar2 = *(uint *)(param_1 + 0x7c);
        uVar8 = 0;
        do {
          uVar9 = uVar4 - uVar8;
          if (0xff < uVar9) {
            uVar9 = 0x100;
          }
          FUN_00877788(param_1,param_2,param_3,param_4,uVar8,uVar9);
          iVar5 = FUN_0087c130(param_1[0x7f],param_1[0x80],param_1 + 0x4e,param_1[5],param_1 + 6,
                               uVar9,uVar2 & 0xff,(int)param_1[0x7d],uVar2 >> 0xc,param_1[0x83] != 0
                               ,0,param_1[3]);
          if (iVar5 != 0) {
            *(undefined4 *)((long)param_2 + 0xc) = 2;
            if (param_3 != 0) {
              *(undefined4 *)(param_3 + 0xc) = 2;
            }
            if ((*(long **)(param_4 + 2) != (long *)0x0) && (uVar8 = *param_4, uVar8 != 0)) {
              uVar6 = 0;
              lVar13 = **(long **)(param_4 + 2);
              while( true ) {
                if (lVar13 != 0) {
                  *(undefined4 *)(lVar13 + 0xc) = 2;
                  uVar8 = *param_4;
                }
                uVar6 = uVar6 + 1;
                if (uVar8 <= uVar6) break;
                lVar13 = *(long *)(*(long *)(param_4 + 2) + uVar6 * 8);
              }
            }
            *(undefined1 *)((long)param_1 + 0x411) = 0;
            return;
          }
          if ((*(char *)((long)param_1 + 0x3ed) == '\0') &&
             (*(char *)((long)param_1 + 0x3ec) == '\0')) {
            bVar3 = *(byte *)(param_1 + 0x7c);
            if ((bVar3 != 0) && (uVar9 != 0)) {
              uVar6 = 0;
              do {
                lVar13 = *param_2 + uVar6 * *(ushort *)(param_2 + 2) * 4;
                iVar5 = (int)uVar6;
                if (uVar9 == 1) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = 0;
                  do {
                    iVar11 = (int)uVar7;
                    uVar14 = uVar8 + uVar7;
                    *(undefined4 *)(lVar13 + (uVar14 & 0xffffffff) * 4) =
                         *(undefined4 *)
                          (param_1[0x80] + (ulong)(uint)(iVar5 + (int)param_1[0x7d] * iVar11) * 4);
                    uVar7 = uVar7 + 2;
                    *(undefined4 *)(lVar13 + (ulong)((int)uVar14 + 1) * 4) =
                         *(undefined4 *)
                          (param_1[0x80] +
                          (ulong)(uint)(iVar5 + (int)param_1[0x7d] * (iVar11 + 1)) * 4);
                  } while (((ulong)uVar9 & 0x1fe) != uVar7);
                }
                if ((uVar9 & 1) != 0) {
                  *(undefined4 *)(lVar13 + (ulong)(uVar8 + (int)uVar7) * 4) =
                       *(undefined4 *)
                        (param_1[0x80] + (ulong)(uint)(iVar5 + (int)param_1[0x7d] * (int)uVar7) * 4)
                  ;
                }
                uVar6 = uVar6 + 1;
              } while (uVar6 != bVar3);
            }
          }
          else if (param_1[0x83] != 0) {
            FUN_00879b20(param_1[0x83],param_2,param_3,param_4,uVar8,uVar9);
          }
          uVar8 = uVar8 + 0x100 & 0xffff;
        } while (uVar8 < uVar4);
      }
      if (param_1[0x83] != 0) {
        FUN_00879a28(param_1[0x83],param_4);
      }
      if (*(int *)((long)param_2 + 0xc) == 0x11) {
        FUN_00877ce0(param_2);
      }
      if ((param_3 != 0) && (*(int *)(param_3 + 0xc) == 0x11)) {
        FUN_00877ce0(param_3);
      }
      uVar6 = (ulong)*param_4;
      if (*param_4 != 0) {
        uVar7 = 0;
        do {
          plVar15 = *(long **)(*(long *)(param_4 + 2) + uVar7 * 8);
          if ((*(int *)((long)plVar15 + 0xc) == 0x11) && (*plVar15 != 0)) {
            FUN_00877ce0();
            uVar6 = (ulong)*param_4;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar6);
      }
    }
  }
  return;
}


