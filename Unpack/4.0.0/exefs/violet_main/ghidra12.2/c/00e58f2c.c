/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e58f2c; name: FUN_00e58f2c
 */


void FUN_00e58f2c(long *param_1,long *param_2,long param_3,byte param_4,byte param_5)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  long *plVar19;
  byte *pbVar20;
  undefined8 *puVar21;
  long *plVar22;
  long *plVar23;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  param_1[2] = 0;
  puVar7 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar7 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  puVar7 = PTR_DAT_047d8c78;
  if (lVar10 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = 0;
    if (*(long *)(lVar10 + 0x80) != 0) {
      lVar14 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar14;
  param_1[4] = (long)(puVar7 + 0x88);
  param_1[5] = (long)(puVar7 + 0xd8);
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_00d1a3f4();
  param_1[8] = (long)(PTR_DAT_047dd5a0 + 0x10);
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 1;
  nn::os::InitializeLightEvent(param_1 + 10,0,1);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar14 = nn::os::GetTlsValue(DAT_04865a30);
  lVar10 = tpidr_el0;
  if ((((lVar14 == 0) || (*(long *)(lVar14 + 0x80) == 0)) ||
      (lVar14 = *(long *)(lVar14 + *(long *)(lVar14 + 0x80) * 8 + -8), lVar14 == 0)) &&
     (lVar14 = *(long *)(lVar10 + 0x30), lVar14 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar14 = DAT_04859430;
    *(long *)(lVar10 + 0x30) = DAT_04859430;
  }
  param_1[0xf] = lVar14;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x10] = 0x1fffffffffffffff;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)((long)param_1 + 0xac) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x14,0,1);
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x19] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar14 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar14 == 0) || (*(long *)(lVar14 + 0x80) == 0)) ||
      (lVar14 = *(long *)(lVar14 + *(long *)(lVar14 + 0x80) * 8 + -8), lVar14 == 0)) &&
     (lVar14 = *(long *)(lVar10 + 0x30), lVar14 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar14 = DAT_04859430;
    *(long *)(lVar10 + 0x30) = DAT_04859430;
  }
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  puVar8 = PTR_DAT_047dd5f8;
  puVar7 = PTR_DAT_047dd588;
  param_1[0x1a] = lVar14;
  param_1[0x1b] = 0x1fffffffffffffff;
  *param_1 = (long)(puVar8 + 0x10);
  param_1[4] = (long)(puVar8 + 0xa0);
  param_1[5] = (long)(puVar8 + 0xf0);
  param_1[8] = (long)(puVar8 + 0x148);
  param_1[0x1e] = (long)(puVar7 + 0x10);
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)((long)param_1 + 0x114) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x21,0,1);
  *param_1 = (long)&DAT_045a0cc8;
  param_1[4] = (long)&PTR_LAB_045a0da0;
  param_1[5] = (long)&DAT_045a0df0;
  param_1[8] = (long)&PTR_LAB_045a0e48;
  param_1[0x1e] = (long)&PTR_LAB_045a0ee8;
  plVar11 = (long *)*param_2;
  param_1[0x23] = (long)plVar11;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))();
  }
  param_1[0x24] = param_2[1];
  param_1[0x25] = param_2[2];
  param_1[0x26] = param_2[3];
  plVar11 = (long *)param_2[4];
  param_1[0x27] = (long)plVar11;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))();
  }
  lVar14 = param_2[5];
  param_1[0x29] = (long)&PTR_FUN_045a1058;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(int *)(param_1 + 0x28) = (int)lVar14;
  param_1[0x3b] = 0;
  param_1[0x33] = (long)&DAT_cbf29ce484222645;
  param_1[0x34] = (long)&DAT_03c886bc;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)((long)param_1 + 0x1ec) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x3c,0,1);
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar14 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar14 == 0) || (*(long *)(lVar14 + 0x80) == 0)) ||
      (lVar14 = *(long *)(lVar14 + *(long *)(lVar14 + 0x80) * 8 + -8), lVar14 == 0)) &&
     (lVar14 = *(long *)(lVar10 + 0x30), lVar14 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar14 = DAT_04859430;
    *(long *)(lVar10 + 0x30) = DAT_04859430;
  }
  param_1[0x41] = lVar14;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x42] = 0x1fffffffffffffff;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar14 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar14 == 0) || (*(long *)(lVar14 + 0x80) == 0)) ||
      (lVar14 = *(long *)(lVar14 + *(long *)(lVar14 + 0x80) * 8 + -8), lVar14 == 0)) &&
     (lVar14 = *(long *)(lVar10 + 0x30), lVar14 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar14 = DAT_04859430;
    *(long *)(lVar10 + 0x30) = DAT_04859430;
  }
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  param_1[0x47] = lVar14;
  param_1[0x48] = 0x555555555555555;
  param_1[0x4b] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar14 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar14 == 0) || (*(long *)(lVar14 + 0x80) == 0)) ||
      (lVar14 = *(long *)(lVar14 + *(long *)(lVar14 + 0x80) * 8 + -8), lVar14 == 0)) &&
     (lVar14 = *(long *)(lVar10 + 0x30), lVar14 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar14 = DAT_04859430;
    *(long *)(lVar10 + 0x30) = DAT_04859430;
  }
  param_1[0x4c] = lVar14;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x4d] = 0x555555555555555;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0x3f800000;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar14 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar14 == 0) || (*(long *)(lVar14 + 0x80) == 0)) ||
      (lVar14 = *(long *)(lVar14 + *(long *)(lVar14 + 0x80) * 8 + -8), lVar14 == 0)) &&
     (lVar14 = *(long *)(lVar10 + 0x30), lVar14 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar14 = DAT_04859430;
    *(long *)(lVar10 + 0x30) = DAT_04859430;
  }
  param_1[0x55] = lVar14;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x56] = 0x1fffffffffffffff;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar14 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar14 == 0) || (*(long *)(lVar14 + 0x80) == 0)) ||
      (lVar14 = *(long *)(lVar14 + *(long *)(lVar14 + 0x80) * 8 + -8), lVar14 == 0)) &&
     (lVar14 = *(long *)(lVar10 + 0x30), lVar14 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar14 = DAT_04859430;
    *(long *)(lVar10 + 0x30) = DAT_04859430;
  }
  param_1[0x5c] = lVar14;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  param_1[0x5d] = 0xfffffffffffffff;
  param_1[0x60] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar14 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar14 == 0) || (*(long *)(lVar14 + 0x80) == 0)) ||
      (lVar14 = *(long *)(lVar14 + *(long *)(lVar14 + 0x80) * 8 + -8), lVar14 == 0)) &&
     (lVar14 = *(long *)(lVar10 + 0x30), lVar14 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar14 = DAT_04859430;
    *(long *)(lVar10 + 0x30) = DAT_04859430;
  }
  param_1[0x61] = lVar14;
  param_1[0x62] = 0xfffffffffffffff;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0x3f800000;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar14 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar14 == 0) || (*(long *)(lVar14 + 0x80) == 0)) ||
      (lVar14 = *(long *)(lVar14 + *(long *)(lVar14 + 0x80) * 8 + -8), lVar14 == 0)) &&
     (lVar14 = *(long *)(lVar10 + 0x30), lVar14 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar14 = DAT_04859430;
    *(long *)(lVar10 + 0x30) = DAT_04859430;
  }
  param_1[0x6a] = lVar14;
  param_1[0x6b] = 0x1fffffffffffffff;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)((long)param_1 + 900) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x6f,0,1);
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar14 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar14 == 0) || (*(long *)(lVar14 + 0x80) == 0)) ||
      (lVar14 = *(long *)(lVar14 + *(long *)(lVar14 + 0x80) * 8 + -8), lVar14 == 0)) &&
     (lVar14 = *(long *)(lVar10 + 0x30), lVar14 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar14 = DAT_04859430;
    *(long *)(lVar10 + 0x30) = DAT_04859430;
  }
  param_1[0x74] = lVar14;
  param_1[0x75] = 0x1ffffffffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  param_1[0x7a] = 0;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x77) = 0;
  param_1[0x79] = param_1[1];
  *(undefined4 *)((long)param_1 + 0x3e4) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x7b,0,1);
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  param_1[0x7d] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar14 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar14 == 0) || (*(long *)(lVar14 + 0x80) == 0)) ||
      (lVar14 = *(long *)(lVar14 + *(long *)(lVar14 + 0x80) * 8 + -8), lVar14 == 0)) &&
     (lVar14 = *(long *)(lVar10 + 0x30), lVar14 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar14 = DAT_04859430;
    *(long *)(lVar10 + 0x30) = DAT_04859430;
  }
  param_1[0x80] = lVar14;
  param_1[0x81] = 0x1fffffffffffffff;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0;
  *(undefined2 *)(param_1 + 0x84) = 0;
  param_1[0x85] = 0;
  *(undefined4 *)((long)param_1 + 0x43c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x86,0,1);
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0x89) = 0;
  *(byte *)((long)param_1 + 0x449) = param_4 & 1;
  *(undefined2 *)((long)param_1 + 0x44a) = 0;
  *(byte *)((long)param_1 + 0x44c) = param_5 & 1;
  *(undefined1 *)((long)param_1 + 0x44d) = 1;
  pbVar20 = PTR_DAT_047d4df8;
  *(undefined4 *)((long)param_1 + 0x44e) = 0;
  *(undefined1 *)((long)param_1 + 0x452) = 0;
  if (((*pbVar20 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar9 != 0)) {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  plVar22 = (long *)PTR_DAT_047d4e08;
  plVar11 = (long *)PTR_DAT_047d4e00;
  lVar10 = *(long *)PTR_DAT_047d4e00;
  *(long *)PTR_DAT_047d4e08 = lVar10;
  *(undefined1 *)(param_1 + 0x91) = 0;
  *(undefined1 *)((long)param_1 + 0x48c) = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  *(undefined1 *)(param_1 + 0x8f) = 0;
  param_1[0x8b] = lVar10 + 0xb140;
  if (param_3 != 0) {
    (**(code **)(*param_1 + 0x58))(param_1);
    plVar23 = (long *)(param_3 + 0x1d8);
    lVar14 = *plVar23;
    lVar10 = nn::os::GetCurrentThread();
    if (lVar10 != lVar14) {
      lVar10 = nn::os::GetCurrentThread();
LAB_00e595e4:
      if (*plVar23 == 0) goto code_r0x00e595ec;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_3 + 0x1e0));
      do {
        if (*plVar23 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_3 + 0x1e0));
            while (*plVar23 == 0) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
              if (bVar6) {
                *plVar23 = lVar10;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_00e595f4;
            }
          } while( true );
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar6) {
          *plVar23 = lVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_00e595f4:
      bVar6 = false;
      goto LAB_00e595f8;
    }
    plVar23 = (long *)0x0;
    bVar6 = true;
LAB_00e595f8:
    puVar4 = *(undefined8 **)(param_3 + 0x1f8);
    if (puVar4 < *(undefined8 **)(param_3 + 0x200)) {
      uVar18 = *(undefined8 *)(param_3 + 0x208);
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar10 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar10 == 0) {
        *puVar4 = param_1;
      }
      else {
        if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00e5a32c;
        *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar18;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
        *puVar4 = param_1;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      }
      *(undefined8 **)(param_3 + 0x1f8) = puVar4 + 1;
    }
    else {
      uVar17 = *(ulong *)(param_3 + 0x210);
      lVar10 = (long)puVar4 - *(long *)(param_3 + 0x1f0) >> 3;
      uVar13 = lVar10 + 1;
      if (0x7ffffffffffffffe < uVar17) {
        uVar17 = 0x7fffffffffffffff;
      }
      if (uVar17 < uVar13) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar14 = (long)*(undefined8 **)(param_3 + 0x200) - *(long *)(param_3 + 0x1f0);
      uVar15 = lVar14 >> 2;
      if (uVar13 <= uVar15) {
        uVar13 = uVar15;
      }
      if (uVar17 >> 1 <= (ulong)(lVar14 >> 3)) {
        uVar13 = uVar17;
      }
      if (uVar13 == 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = (**(code **)(**(long **)(param_3 + 0x208) + 0x10))
                           (*(long **)(param_3 + 0x208),uVar13 << 3,8);
        if (lVar14 == 0) {
          (**(code **)(**(long **)(param_3 + 0x208) + 0xe8))();
        }
      }
      puVar4 = (undefined8 *)(lVar14 + lVar10 * 8);
      uVar18 = *(undefined8 *)(param_3 + 0x208);
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar10 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar10 == 0) {
        *puVar4 = param_1;
      }
      else {
        if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_00e5a32c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar18;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
        *puVar4 = param_1;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      }
      plVar19 = *(long **)(param_3 + 0x1f0);
      plVar11 = *(long **)(param_3 + 0x1f8);
      puVar21 = puVar4;
      if (plVar11 == plVar19) {
        plVar11 = plVar19;
      }
      else {
        do {
          uVar18 = *(undefined8 *)(param_3 + 0x208);
          if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar10 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar10 == 0) {
            lVar10 = plVar11[-1];
            plVar11[-1] = 0;
            puVar21[-1] = lVar10;
          }
          else {
            if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00e5a32c;
            *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar18;
            *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
            lVar16 = plVar11[-1];
            plVar11[-1] = 0;
            puVar21[-1] = lVar16;
            *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
          }
          plVar11 = plVar11 + -1;
          puVar21 = puVar21 + -1;
        } while (plVar19 != plVar11);
        plVar19 = *(long **)(param_3 + 0x1f0);
        pbVar20 = PTR_DAT_047d4df8;
        plVar11 = *(long **)(param_3 + 0x1f8);
      }
      *(undefined8 **)(param_3 + 0x1f0) = puVar21;
      *(undefined8 **)(param_3 + 0x1f8) = puVar4 + 1;
      lVar10 = *(long *)(param_3 + 0x200);
      *(ulong *)(param_3 + 0x200) = lVar14 + uVar13 * 8;
      plVar22 = (long *)PTR_DAT_047d4e08;
      if (plVar11 != plVar19) {
        plVar12 = (long *)plVar11[-1];
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x60))();
        }
        if (plVar11 + -1 != plVar19) {
          plVar12 = (long *)plVar11[-2];
          if (plVar12 != (long *)0x0) {
            (**(code **)(*plVar12 + 0x60))();
          }
          if (plVar11 + -2 != plVar19) {
            plVar12 = (long *)plVar11[-3];
            if (plVar12 != (long *)0x0) {
              (**(code **)(*plVar12 + 0x60))();
            }
            puVar7 = PTR_DAT_047d4e08;
            if (plVar11 + -3 != plVar19) {
              do {
                if ((long *)plVar11[-4] != (long *)0x0) {
                  (**(code **)(*(long *)plVar11[-4] + 0x60))();
                }
                plVar11 = plVar11 + -1;
                plVar22 = (long *)puVar7;
              } while (plVar19 + 3 != plVar11);
            }
          }
        }
      }
      plVar11 = (long *)PTR_DAT_047d4e00;
      if (plVar19 != (long *)0x0) {
        plVar12 = *(long **)(param_3 + 0x208);
        lVar10 = lVar10 - (long)plVar19;
        uVar13 = (**(code **)(*plVar12 + 0xf8))(plVar12);
        if (((uVar13 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
          (**(code **)(*plVar12 + 0x18))(plVar12,plVar19,lVar10,8);
        }
        else {
          FUN_00c48fe8(plVar12,plVar19,lVar10,8);
        }
      }
    }
    if (!bVar6) {
      *plVar23 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar23 + 1));
    }
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_00c43ef0(&local_78,param_3 + 0x30);
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    if (local_78[2] == param_3 + 0x28) {
      FUN_00e29918(&local_88,&local_78);
    }
    puVar4 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_78 + 3);
      do {
        sVar3 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_78 + 0x1c);
        do {
          iVar9 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_68 = *puVar4;
          FUN_00c44438(lVar10 + 0x8040,&local_68);
        }
      }
      else if (sVar3 == 0) goto LAB_00e599b0;
    }
    FUN_00dbd160(param_1 + 0x39,&local_88);
    puVar4 = local_88;
    if (local_88 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_88 + 3);
      do {
        sVar3 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_88 + 0x1c);
        do {
          iVar9 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_78 = (undefined8 *)*puVar4;
          FUN_00c44438(lVar10 + 0x8040,&local_78);
        }
      }
      else if (sVar3 == 0) {
LAB_00e599b0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    lVar10 = param_3 + 0x478;
    if ((((*(char *)(param_3 + 0x488) == '\0') && (*(char *)(param_3 + 0x48c) == '\0')) &&
        (lVar10 = param_3 + 0x460, *(char *)(param_3 + 0x470) == '\0')) &&
       ((*(char *)(param_3 + 0x474) == '\0' && (lVar10 = *(long *)(param_3 + 0x458), lVar10 == 0))))
    {
      if (((*pbVar20 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar9 != 0)) {
        FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4df8);
      }
      lVar10 = *plVar11;
      *plVar22 = lVar10;
      lVar10 = lVar10 + 0xb140;
    }
    param_1[0x8b] = lVar10;
    FUN_00e5a670(param_1);
    param_1[0x79] = *(long *)(param_3 + 0x3c8);
    lVar10 = param_1[0x39];
    *(undefined1 *)(param_1 + 0x89) = 1;
    for (; (lVar10 != 0 && (lVar10 = *(long *)(lVar10 + 0x10), lVar10 != 0));
        lVar10 = *(long *)(lVar10 + 0x1a0)) {
      *(undefined1 *)(lVar10 + 0x420) = 1;
    }
  }
  return;
code_r0x00e595ec:
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
  if (bVar6) {
    *plVar23 = lVar10;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_00e595f4;
  goto LAB_00e595e4;
}


