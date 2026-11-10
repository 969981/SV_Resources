/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0108b290; name: FUN_0108b290
 */


void FUN_0108b290(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  puVar1 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  puVar1 = PTR_DAT_047d8c78;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar4 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar4;
  param_1[4] = (long)(puVar1 + 0x88);
  plVar5 = param_1 + 5;
  *plVar5 = (long)(puVar1 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar5);
  *param_1 = (long)&DAT_04546ba8;
  param_1[4] = (long)&PTR_LAB_04546c20;
  *plVar5 = (long)&PTR_LAB_04546c70;
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  lVar3 = tpidr_el0;
  if ((((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
      (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) &&
     (lVar4 = *(long *)(lVar3 + 0x30), lVar4 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar4 = DAT_04859430;
    *(long *)(lVar3 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xb] = lVar4;
  param_1[0x19] = 0;
  param_1[0xc] = 0x3fffffffffffffff;
  param_1[0xd] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
      (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) &&
     (lVar4 = *(long *)(lVar3 + 0x30), lVar4 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar4 = DAT_04859430;
    *(long *)(lVar3 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1a] = lVar4;
  param_1[0x20] = 0;
  param_1[0x1b] = 0xaaaaaaaaaaaaaaa;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
      (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) &&
     (lVar4 = *(long *)(lVar3 + 0x30), lVar4 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar4 = DAT_04859430;
    *(long *)(lVar3 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x21] = lVar4;
  param_1[0x27] = 0;
  param_1[0x22] = 0x3fffffffffffffff;
  param_1[0x23] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
      (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) &&
     (lVar4 = *(long *)(lVar3 + 0x30), lVar4 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar4 = DAT_04859430;
    *(long *)(lVar3 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x28] = lVar4;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined2 *)((long)param_1 + 0x164) = 0;
  param_1[0x29] = 0x1555555555555555;
  param_1[0x2a] = 0;
  return;
}


