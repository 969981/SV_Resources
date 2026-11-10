/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f11df4; name: FUN_02f11df4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f11df4(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined4 local_54;
  
  *(undefined2 *)(param_1 + 4) = 3;
  param_1[2] = 1;
  param_1[3] = 0;
  puVar1 = PTR_DAT_047e4630 + 0x10;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0xec) = 0x100135f7ffff0;
  *(undefined2 *)(param_1 + 0x2a) = 0x11;
  *(undefined2 *)(param_1 + 0x2c) = 0x11;
  *(undefined2 *)(param_1 + 0x2e) = 0x11;
  *(undefined2 *)(param_1 + 0x30) = 0xf;
  param_1[0x31] = 0x5f7ffff0df7ffff0;
  param_1[0x32] = 0x3f8000003f800000;
  *(undefined2 *)(param_1 + 0x34) = 0x1d;
  *(undefined2 *)(param_1 + 0x1c) = 0x17;
  *(undefined8 *)((long)param_1 + 0xe4) = 0x7f7fffee7f7fffee;
  param_1[0x28] = 0;
  *(undefined1 *)((long)param_1 + 0x152) = 1;
  *(undefined1 *)((long)param_1 + 0x154) = 1;
  *(undefined1 *)((long)param_1 + 0x162) = 1;
  *(undefined1 *)((long)param_1 + 0x174) = 1;
  *(undefined2 *)(param_1 + 0x3a) = 6;
  *(undefined2 *)(param_1 + 10) = 2;
  *(undefined4 *)((long)param_1 + 0xf4) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x164) = 1;
  *(undefined1 *)((long)param_1 + 0x172) = 1;
  *(undefined1 *)((long)param_1 + 0x182) = 1;
  *(undefined1 *)((long)param_1 + 0x1a2) = 1;
  param_1[0x39] = 0x3f8000003f800000;
  *(undefined2 *)(param_1 + 0x40) = 9;
  param_1[0x3d] = -0x407fffff40800000;
  param_1[0x3e] = 0x3f8000003f800000;
  *(undefined8 *)((long)param_1 + 0x20c) = 0xbf800000bf800000;
  *(undefined2 *)(param_1 + 0x44) = 9;
  *(undefined8 *)((long)param_1 + 0x22c) = 0xbf800000bf800000;
  *(undefined2 *)(param_1 + 0x48) = 9;
  *(undefined8 *)((long)param_1 + 0x24c) = 0xbf800000bf800000;
  *(undefined2 *)(param_1 + 0x4c) = 10;
  *(undefined2 *)(param_1 + 0x4e) = 10;
  *(undefined2 *)(param_1 + 0x50) = 10;
  *(undefined2 *)(param_1 + 0x52) = 0xb;
  *(undefined2 *)(param_1 + 0x56) = 0xb;
  *(undefined2 *)(param_1 + 0x5a) = 0xb;
  *(undefined1 *)((long)param_1 + 0x262) = 1;
  *(undefined1 *)((long)param_1 + 0x272) = 1;
  *(undefined1 *)((long)param_1 + 0x282) = 1;
  *(undefined1 *)((long)param_1 + 0x292) = 1;
  *(undefined4 *)((long)param_1 + 0x294) = 0xffffffff;
  param_1[0x53] = 0;
  *(undefined1 *)((long)param_1 + 0x2b2) = 1;
  *(undefined4 *)((long)param_1 + 0x2b4) = 0xffffffff;
  param_1[0x57] = 0;
  *(undefined1 *)((long)param_1 + 0x2d2) = 1;
  *(undefined4 *)((long)param_1 + 0x2d4) = 0xffffffff;
  param_1[0x5b] = 0;
  *(undefined2 *)(param_1 + 0x5e) = 5;
  local_54 = 0x3f800000;
  FUN_00cb06cc((long)param_1 + 0x2f2,&local_54);
  *(undefined1 *)((long)param_1 + 0x2f3) = 0;
  *(undefined8 *)((long)param_1 + 0x2f4) = 0x3f8000003f800000;
  lVar11 = _UNK_03cabe68;
  lVar10 = _DAT_03cabe60;
  lVar9 = _UNK_03cabe58;
  lVar8 = _DAT_03cabe50;
  lVar7 = DAT_03cab628;
  lVar6 = DAT_03cab620;
  lVar5 = _UNK_03caa5b8;
  lVar4 = _DAT_03caa5b0;
  *(undefined4 *)((long)param_1 + 0x2fc) = 0;
  param_1[0xd] = lVar7;
  param_1[0xc] = lVar6;
  param_1[0xf] = lVar11;
  param_1[0xe] = lVar10;
  param_1[0x7e] = 0;
  param_1[0x11] = lVar5;
  param_1[0x10] = lVar4;
  param_1[0x13] = lVar9;
  param_1[0x12] = lVar8;
  param_1[0x7f] = 0;
  param_1[0x15] = lVar7;
  param_1[0x14] = lVar6;
  param_1[0x17] = lVar11;
  param_1[0x16] = lVar10;
  param_1[0x19] = lVar5;
  param_1[0x18] = lVar4;
  param_1[0x1b] = lVar9;
  param_1[0x1a] = lVar8;
  *(undefined2 *)((long)param_1 + 0x153) = 0x100;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined2 *)((long)param_1 + 0x163) = 0x101;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined2 *)((long)param_1 + 0x173) = 0x102;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)((long)param_1 + 0xf2) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)((long)param_1 + 0xf4) = 0xa00098;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x25] = lVar5;
  param_1[0x24] = lVar4;
  param_1[0x21] = lVar7;
  param_1[0x20] = lVar6;
  param_1[0x23] = lVar11;
  param_1[0x22] = lVar10;
  *(undefined2 *)((long)param_1 + 0x183) = 0x100;
  param_1[0x39] = 0x3f8000003f4ccccd;
  *(undefined1 *)((long)param_1 + 0x1a2) = 1;
  *(undefined2 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x31] = 0x7f7fffeeff7fffee;
  param_1[0x32] = 0x3f8000003f4ccccd;
  param_1[0x3c] = 0x7f7fffee00000000;
  param_1[0x3d] = -0x407fffffbd380000;
  param_1[0x35] = 0x40490fdb40490fdb;
  param_1[7] = 0x40490fdbc0490fdb;
  param_1[8] = 0x40490fdbc0490fdb;
  *(undefined8 *)((long)param_1 + 0x204) = 0x7f7fffeeff7fffee;
  *(undefined2 *)((long)param_1 + 0x262) = 1;
  *(undefined4 *)((long)param_1 + 0x264) = 0;
  *(undefined1 *)((long)param_1 + 0x222) = 1;
  plVar12 = param_1 + 0x61;
  *(undefined8 *)((long)param_1 + 0x224) = 0x7f7fffeeff7fffee;
  *(undefined2 *)((long)param_1 + 0x272) = 0x101;
  *(undefined4 *)((long)param_1 + 0x274) = 0;
  *(undefined1 *)((long)param_1 + 0x242) = 2;
  *(undefined8 *)((long)param_1 + 0x244) = 0x7f7fffeeff7fffee;
  *(undefined2 *)((long)param_1 + 0x282) = 0x201;
  uVar2 = (ulong)plVar12 & 0xf;
  *(undefined4 *)((long)param_1 + 0x284) = 0;
  if (uVar2 == 0) {
    plVar13 = param_1 + 0x69;
LAB_02f12130:
    plVar3 = plVar13;
    if (plVar13 <= plVar12 + 2) {
      plVar3 = plVar12 + 2;
    }
    memset(plVar12,0xff,(long)plVar3 + ~(ulong)plVar12 + 0x10 & 0xfffffffffffffff0);
    do {
      plVar12 = plVar12 + 2;
    } while (plVar12 < plVar13);
  }
  else {
    plVar13 = (long *)((long)param_1 + (4 - (uVar2 >> 2)) * 4 + 0x308);
    plVar3 = plVar13;
    if (plVar13 <= (long *)((long)param_1 + 0x30c)) {
      plVar3 = (long *)((long)param_1 + 0x30c);
    }
    uVar2 = (uVar2 >> 2) + 0xf;
    memset(plVar12,0xff,(long)plVar3 + (-0x305 - (long)param_1) & 0xfffffffffffffffc);
    do {
      plVar12 = (long *)((long)plVar12 + 4);
    } while (plVar12 < plVar13);
    if ((uVar2 & 0x1c) != 0) {
      plVar13 = (long *)((long)plVar12 + ((ulong)(uint)((int)uVar2 << 2) & 0x70));
      goto LAB_02f12130;
    }
  }
  if (plVar12 < (long *)((long)param_1 + 0x354)) {
    memset(plVar12,0xff,(long)param_1 + (0x357 - (long)plVar12) & 0xfffffffffffffffc);
  }
  plVar12 = (long *)((long)param_1 + 0x354);
  uVar2 = (ulong)plVar12 & 0xf;
  if (uVar2 == 0) {
    plVar13 = (long *)((long)param_1 + 0x394);
LAB_02f121f8:
    plVar3 = plVar13;
    if (plVar13 <= plVar12 + 2) {
      plVar3 = plVar12 + 2;
    }
    memset(plVar12,0xff,(long)plVar3 + ~(ulong)plVar12 + 0x10 & 0xfffffffffffffff0);
    do {
      plVar12 = plVar12 + 2;
    } while (plVar12 < plVar13);
  }
  else {
    plVar13 = (long *)((long)param_1 + (4 - (uVar2 >> 2)) * 4 + 0x354);
    plVar3 = plVar13;
    if (plVar13 <= param_1 + 0x6b) {
      plVar3 = param_1 + 0x6b;
    }
    uVar2 = (uVar2 >> 2) + 0xf;
    memset(plVar12,0xff,(long)plVar3 + (-0x351 - (long)param_1) & 0xfffffffffffffffc);
    do {
      plVar12 = (long *)((long)plVar12 + 4);
    } while (plVar12 < plVar13);
    if ((uVar2 & 0x1c) != 0) {
      plVar13 = (long *)((long)plVar12 + ((ulong)(uint)((int)uVar2 << 2) & 0x70));
      goto LAB_02f121f8;
    }
  }
  if (plVar12 < param_1 + 0x74) {
    memset(plVar12,0xff,(long)param_1 + (0x3a3 - (long)plVar12) & 0xfffffffffffffffc);
  }
  plVar12 = param_1 + 0x74;
  *(undefined4 *)((long)param_1 + 0x304) = 0;
  uVar2 = (ulong)plVar12 & 0xf;
  *(undefined4 *)((long)param_1 + 0x3ec) = 0xffffffff;
  if (uVar2 == 0) {
    plVar13 = param_1 + 0x7c;
  }
  else {
    plVar13 = (long *)((long)param_1 + (4 - (uVar2 >> 2)) * 4 + 0x3a0);
    plVar3 = plVar13;
    if (plVar13 <= (long *)((long)param_1 + 0x3a4)) {
      plVar3 = (long *)((long)param_1 + 0x3a4);
    }
    uVar2 = (uVar2 >> 2) + 0xf;
    memset(plVar12,0xff,(long)plVar3 + (-0x39d - (long)param_1) & 0xfffffffffffffffc);
    do {
      plVar12 = (long *)((long)plVar12 + 4);
    } while (plVar12 < plVar13);
    if ((uVar2 & 0x1c) == 0) goto LAB_02f122fc;
    plVar13 = (long *)((long)plVar12 + ((ulong)(uint)((int)uVar2 << 2) & 0x70));
  }
  plVar3 = plVar13;
  if (plVar13 <= plVar12 + 2) {
    plVar3 = plVar12 + 2;
  }
  memset(plVar12,0xff,(long)plVar3 + ~(ulong)plVar12 + 0x10 & 0xfffffffffffffff0);
  do {
    plVar12 = plVar12 + 2;
  } while (plVar12 < plVar13);
LAB_02f122fc:
  if (plVar12 < (long *)((long)param_1 + 0x3ec)) {
    memset(plVar12,0xff,(long)param_1 + (0x3ef - (long)plVar12) & 0xfffffffffffffffc);
  }
  *(undefined1 *)(param_1 + 0x60) = 1;
  *(undefined4 *)((long)param_1 + 0x294) = 0xac009b;
  *(undefined2 *)((long)param_1 + 0x2b2) = 0x100;
  *(undefined4 *)((long)param_1 + 0x2b4) = 0xb0009c;
  *(undefined2 *)((long)param_1 + 0x2d2) = 0x200;
  *(undefined2 *)((long)param_1 + 0x292) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)((long)param_1 + 0x2d4) = 0xb4009d;
  return;
}


