/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0177b984; name: FUN_0177b984
 */


void FUN_0177b984(long *param_1)

{
  undefined *puVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined2 *puVar10;
  long lVar11;
  long *local_60;
  undefined8 local_58;
  
  puVar6 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar6 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar8 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    if (*(long *)(lVar8 + 0x80) != 0) {
      lVar9 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&PTR_FUN_04540fd8;
  param_1[1] = lVar9;
  param_1[4] = (long)&PTR_LAB_04541010;
  puVar10 = (undefined2 *)((long)param_1 + 0x2c);
  do {
    *puVar10 = 0;
    *(undefined1 *)(puVar10 + 1) = 0;
    *(undefined4 *)(puVar10 + 2) = 0;
    puVar10[4] = 0;
    *(undefined8 *)(puVar10 + 6) = 0;
    *(undefined4 *)(puVar10 + 10) = 0;
    puVar10[0xc] = 0;
    *(undefined1 *)(puVar10 + 0xd) = 0;
    *(undefined4 *)(puVar10 + 0xe) = 0;
    puVar10[0x10] = 0;
    *(undefined8 *)(puVar10 + 0x12) = 0;
    *(undefined4 *)(puVar10 + 0x16) = 0;
    puVar10[0x18] = 0;
    *(undefined1 *)(puVar10 + 0x19) = 0;
    *(undefined4 *)(puVar10 + 0x1a) = 0;
    puVar10[0x1c] = 0;
    *(undefined4 *)(puVar10 + 0x22) = 0;
    *(undefined8 *)(puVar10 + 0x1e) = 0;
    puVar10 = puVar10 + 0x24;
  } while (puVar10 != (undefined2 *)((long)param_1 + 0x605c));
  param_1[0xc0e] = 0;
  param_1[0xc0d] = 0;
  param_1[0xc0c] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  lVar8 = tpidr_el0;
  if ((((lVar9 == 0) || (*(long *)(lVar9 + 0x80) == 0)) ||
      (lVar9 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8), lVar9 == 0)) &&
     (lVar9 = *(long *)(lVar8 + 0x30), lVar9 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar9 = DAT_04859430;
    *(long *)(lVar8 + 0x30) = DAT_04859430;
  }
  param_1[0xc11] = 0;
  *(undefined4 *)(param_1 + 0xc12) = 0;
  param_1[0xc0f] = lVar9;
  param_1[0xc10] = 0xaaaaaaaaaaaaaaa;
  param_1[0xc13] = 0;
  param_1[0xc14] = 0;
  param_1[0xc15] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar9 == 0) || (*(long *)(lVar9 + 0x80) == 0)) ||
      (lVar9 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8), lVar9 == 0)) &&
     (lVar9 = *(long *)(lVar8 + 0x30), lVar9 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar9 = DAT_04859430;
    *(long *)(lVar8 + 0x30) = DAT_04859430;
  }
  param_1[0xc18] = 0;
  *(undefined4 *)(param_1 + 0xc19) = 0;
  param_1[0xc16] = lVar9;
  param_1[0xc17] = 0xaaaaaaaaaaaaaaa;
  param_1[0xc1a] = 0;
  param_1[0xc1b] = 0;
  param_1[0xc1c] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar9 == 0) || (*(long *)(lVar9 + 0x80) == 0)) ||
      (lVar9 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8), lVar9 == 0)) &&
     (lVar9 = *(long *)(lVar8 + 0x30), lVar9 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar9 = DAT_04859430;
    *(long *)(lVar8 + 0x30) = DAT_04859430;
  }
  param_1[0xc1f] = 0;
  *(undefined4 *)(param_1 + 0xc20) = 0;
  param_1[0xc1d] = lVar9;
  param_1[0xc1e] = 0xaaaaaaaaaaaaaaa;
  param_1[0xc21] = 0;
  param_1[0xc22] = 0;
  param_1[0xc23] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar9 == 0) || (*(long *)(lVar9 + 0x80) == 0)) ||
      (lVar9 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8), lVar9 == 0)) &&
     (lVar9 = *(long *)(lVar8 + 0x30), lVar9 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar9 = DAT_04859430;
    *(long *)(lVar8 + 0x30) = DAT_04859430;
  }
  param_1[0xc26] = 0;
  *(undefined4 *)(param_1 + 0xc27) = 0;
  param_1[0xc24] = lVar9;
  param_1[0xc25] = 0xaaaaaaaaaaaaaaa;
  param_1[0xc28] = 0;
  param_1[0xc29] = 0;
  param_1[0xc2a] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar9 == 0) || (*(long *)(lVar9 + 0x80) == 0)) ||
      (lVar9 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8), lVar9 == 0)) &&
     (lVar9 = *(long *)(lVar8 + 0x30), lVar9 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar9 = DAT_04859430;
    *(long *)(lVar8 + 0x30) = DAT_04859430;
  }
  param_1[0xc2d] = 0;
  *(undefined4 *)(param_1 + 0xc2e) = 0;
  param_1[0xc2b] = lVar9;
  param_1[0xc2c] = 0xaaaaaaaaaaaaaaa;
  param_1[0xc2f] = 0;
  param_1[0xc30] = 0;
  param_1[0xc31] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar9 == 0) || (*(long *)(lVar9 + 0x80) == 0)) ||
      (lVar9 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8), lVar9 == 0)) &&
     (lVar9 = *(long *)(lVar8 + 0x30), lVar9 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar9 = DAT_04859430;
    *(long *)(lVar8 + 0x30) = DAT_04859430;
  }
  param_1[0xc34] = 0;
  *(undefined4 *)(param_1 + 0xc35) = 0;
  param_1[0xc32] = lVar9;
  param_1[0xc33] = 0xaaaaaaaaaaaaaaa;
  param_1[0xc36] = 0;
  param_1[0xc37] = 0;
  param_1[0xc38] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar9 == 0) || (*(long *)(lVar9 + 0x80) == 0)) ||
      (lVar9 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8), lVar9 == 0)) &&
     (lVar9 = *(long *)(lVar8 + 0x30), lVar9 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar9 = DAT_04859430;
    *(long *)(lVar8 + 0x30) = DAT_04859430;
  }
  param_1[0xc3b] = 0;
  *(undefined4 *)(param_1 + 0xc3c) = 0;
  param_1[0xc39] = lVar9;
  param_1[0xc3a] = 0x1fffffffffffffff;
  *(undefined1 *)(param_1 + 0xc3d) = 0;
  param_1[0xc40] = 0;
  param_1[0xc3f] = 0;
  param_1[0xc3e] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar9 == 0) || (*(long *)(lVar9 + 0x80) == 0)) ||
      (lVar9 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8), lVar9 == 0)) &&
     (lVar9 = *(long *)(lVar8 + 0x30), lVar9 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar9 = DAT_04859430;
    *(long *)(lVar8 + 0x30) = DAT_04859430;
  }
  param_1[0xc43] = 0;
  *(undefined4 *)(param_1 + 0xc44) = 0;
  param_1[0xc41] = lVar9;
  param_1[0xc42] = 0xfffffffffffffff;
  *(undefined2 *)(param_1 + 0xc45) = 0;
  *(undefined1 *)((long)param_1 + 0x622a) = 0;
  param_1[0xc46] = (long)(puVar6 + 0x10);
  param_1[0xc48] = 0;
  *(undefined4 *)(param_1 + 0xc49) = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar9 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    if (*(long *)(lVar9 + 0x80) != 0) {
      lVar11 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8);
    }
  }
  param_1[0xc47] = lVar11;
  *(undefined4 *)(param_1 + 0xc4b) = 0;
  puVar1 = PTR_DAT_047d8eb8 + 0x10;
  param_1[0xc4a] = (long)(PTR_DAT_047d8eb8 + 0x60);
  param_1[0xc46] = (long)puVar1;
  param_1[0xc55] = (long)(puVar6 + 0x10);
  param_1[0xc57] = 0;
  *(undefined4 *)(param_1 + 0xc58) = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar9 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    if (*(long *)(lVar9 + 0x80) != 0) {
      lVar11 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8);
    }
  }
  param_1[0xc56] = lVar11;
  puVar1 = PTR_DAT_047d8ec0;
  *(undefined4 *)(param_1 + 0xc5a) = 0;
  param_1[0xc55] = (long)(puVar1 + 0x10);
  param_1[0xc59] = (long)(puVar1 + 0x60);
  param_1[0xc64] = 0;
  param_1[0xc65] = 0;
  param_1[0xc66] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar9 == 0) || (*(long *)(lVar9 + 0x80) == 0)) ||
      (lVar9 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8), lVar9 == 0)) &&
     (lVar9 = *(long *)(lVar8 + 0x30), lVar9 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar9 = DAT_04859430;
    *(long *)(lVar8 + 0x30) = DAT_04859430;
  }
  param_1[0xc69] = 0;
  *(undefined4 *)(param_1 + 0xc6a) = 0;
  param_1[0xc67] = lVar9;
  param_1[0xc68] = 0x1fffffffffffffff;
  param_1[0xc6b] = (long)(puVar6 + 0x10);
  param_1[0xc6d] = 0;
  *(undefined4 *)(param_1 + 0xc6e) = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar9 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    if (*(long *)(lVar9 + 0x80) != 0) {
      lVar11 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8);
    }
  }
  param_1[0xc6c] = lVar11;
  *(undefined4 *)(param_1 + 0xc70) = 0;
  puVar1 = PTR_DAT_047d8ec8 + 0x10;
  param_1[0xc6f] = (long)(PTR_DAT_047d8ec8 + 0x60);
  param_1[0xc6b] = (long)puVar1;
  param_1[0xc7a] = (long)(puVar6 + 0x10);
  param_1[0xc7c] = 0;
  *(undefined4 *)(param_1 + 0xc7d) = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar9 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    if (*(long *)(lVar9 + 0x80) != 0) {
      lVar11 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8);
    }
  }
  param_1[0xc7b] = lVar11;
  puVar6 = PTR_DAT_047d8ed0;
  *(undefined4 *)(param_1 + 0xc7f) = 0;
  param_1[0xc7a] = (long)(puVar6 + 0x10);
  param_1[0xc7e] = (long)(puVar6 + 0x60);
  param_1[0xc89] = 0;
  param_1[0xc8a] = 0;
  param_1[0xc8b] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar9 == 0) || (*(long *)(lVar9 + 0x80) == 0)) ||
      (lVar9 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8), lVar9 == 0)) &&
     (lVar9 = *(long *)(lVar8 + 0x30), lVar9 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar9 = DAT_04859430;
    *(long *)(lVar8 + 0x30) = DAT_04859430;
  }
  param_1[0xc8e] = 0;
  *(undefined4 *)(param_1 + 0xc8f) = 0;
  param_1[0xc8c] = lVar9;
  param_1[0xc8d] = 0xfffffffffffffff;
  param_1[0xc90] = 0;
  param_1[0xc91] = 0;
  param_1[0xc92] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar9 == 0) || (*(long *)(lVar9 + 0x80) == 0)) ||
      (lVar9 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8), lVar9 == 0)) &&
     (lVar9 = *(long *)(lVar8 + 0x30), lVar9 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar9 = DAT_04859430;
    *(long *)(lVar8 + 0x30) = DAT_04859430;
  }
  param_1[0xc95] = 0;
  *(undefined4 *)(param_1 + 0xc96) = 0;
  param_1[0xc93] = lVar9;
  param_1[0xc94] = 0x7ffffffffffffff;
  *(undefined4 *)(param_1 + 0xc97) = 0;
  param_1[0xc9b] = param_1[1];
  param_1[0xc98] = 0;
  param_1[0xc9c] = 0x1fffffffffffffff;
  param_1[0xc9d] = 0;
  *(undefined4 *)(param_1 + 0xc9e) = 0;
  *(undefined8 *)((long)param_1 + 0x64ff) = 0;
  param_1[0xc9f] = 0;
  param_1[0xc99] = (long)(param_1 + 0xc9a);
  param_1[0xc9a] = 0;
  local_58 = *(undefined8 *)(*(long *)PTR_DAT_047d3a88 + 8);
  FUN_0158dd20(&local_60,local_58,&local_58);
  FUN_00a4c188(param_1 + 0xc98,&local_60);
  if (local_60 != (long *)0x0) {
    lVar8 = local_60[6];
    psVar2 = (short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*local_60 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (param_1[0xc98] == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_sortString","PokedexDataManager",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/ui/pokedex/pokedex_data_manager.cpp"
               ,0x122,"SortString is null.");
  }
  return;
}


