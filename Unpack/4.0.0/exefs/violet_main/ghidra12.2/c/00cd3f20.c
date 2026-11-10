/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cd3f20; name: FUN_00cd3f20
 */


void FUN_00cd3f20(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  FUN_00cd44f4();
  *param_1 = &DAT_045daf50;
  param_1[0xc56] = 0;
  param_1[0xc57] = 0;
  memset(param_1 + 0xc14,0,0x201);
  param_1[0xc58] = 0xffffffffffffffff;
  param_1[0xc59] = 0;
  param_1[0xc5a] = 0;
  *(undefined4 *)((long)param_1 + 0x62e4) = 1;
  nn::os::InitializeLightEvent(param_1 + 0xc5b,0,1);
  param_1[0xc5f] = 0;
  param_1[0xc5e] = 0;
  param_1[0xc5d] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar2 = nn::os::GetTlsValue(DAT_04865a30);
  lVar5 = tpidr_el0;
  if ((((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) ||
      (lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8), lVar2 == 0)) &&
     (lVar2 = *(long *)(lVar5 + 0x30), lVar2 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar2 = DAT_04859430;
    *(long *)(lVar5 + 0x30) = DAT_04859430;
  }
  param_1[0xc62] = 0;
  *(undefined4 *)(param_1 + 0xc63) = 0;
  param_1[0xc60] = lVar2;
  param_1[0xc61] = 0xfffffffffffffff;
  param_1[0xc64] = 0;
  param_1[0xc65] = 0;
  param_1[0xc66] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar2 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) ||
      (lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8), lVar2 == 0)) &&
     (lVar2 = *(long *)(lVar5 + 0x30), lVar2 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar2 = DAT_04859430;
    *(long *)(lVar5 + 0x30) = DAT_04859430;
  }
  param_1[0xc69] = 0;
  *(undefined4 *)(param_1 + 0xc6a) = 0;
  param_1[0xc67] = lVar2;
  param_1[0xc68] = 0xfffffffffffffff;
  param_1[0xc6b] = 0;
  param_1[0xc6c] = 0;
  param_1[0xc6d] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar2 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) ||
      (lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8), lVar2 == 0)) &&
     (lVar2 = *(long *)(lVar5 + 0x30), lVar2 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar2 = DAT_04859430;
    *(long *)(lVar5 + 0x30) = DAT_04859430;
  }
  param_1[0xc70] = 0;
  *(undefined4 *)(param_1 + 0xc71) = 0;
  param_1[0xc6e] = lVar2;
  param_1[0xc6f] = 0xfffffffffffffff;
  *(undefined4 *)(param_1 + 0xc72) = 0;
  lVar5 = param_1[0xc5d];
  if (lVar5 != 0) {
    lVar2 = param_1[0xc5f];
    param_1[0xc5e] = lVar5;
    plVar6 = (long *)param_1[0xc60];
    uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,lVar2 - lVar5,8);
    }
    else {
      FUN_00c48fe8(plVar6,lVar5,lVar2 - lVar5,8);
    }
    param_1[0xc5e] = 0;
    param_1[0xc5f] = 0;
    param_1[0xc5d] = 0;
  }
  param_1[0xc60] = param_2;
  param_1[0xc61] = 0xfffffffffffffff;
  param_1[0xc62] = 0;
  *(undefined4 *)(param_1 + 0xc63) = 0;
  param_1[0xc5d] = 0;
  param_1[0xc5e] = 0;
  param_1[0xc5f] = 0;
  lVar5 = param_1[0xc64];
  if (lVar5 != 0) {
    lVar2 = param_1[0xc66];
    param_1[0xc65] = lVar5;
    plVar6 = (long *)param_1[0xc67];
    uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,lVar2 - lVar5,8);
    }
    else {
      FUN_00c48fe8(plVar6,lVar5,lVar2 - lVar5,8);
    }
    param_1[0xc65] = 0;
    param_1[0xc66] = 0;
    param_1[0xc64] = 0;
  }
  param_1[0xc67] = param_2;
  param_1[0xc69] = 0;
  param_1[0xc68] = 0xfffffffffffffff;
  *(undefined4 *)(param_1 + 0xc6a) = 0;
  param_1[0xc64] = 0;
  param_1[0xc65] = 0;
  param_1[0xc66] = 0;
  lVar5 = param_1[0xc6b];
  if (lVar5 != 0) {
    lVar2 = param_1[0xc6d];
    param_1[0xc6c] = lVar5;
    plVar6 = (long *)param_1[0xc6e];
    uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,lVar2 - lVar5,8);
    }
    else {
      FUN_00c48fe8(plVar6,lVar5,lVar2 - lVar5,8);
    }
    param_1[0xc6c] = 0;
    param_1[0xc6d] = 0;
    param_1[0xc6b] = 0;
  }
  param_1[0xc6e] = param_2;
  param_1[0xc6f] = 0xfffffffffffffff;
  param_1[0xc70] = 0;
  *(undefined4 *)(param_1 + 0xc71) = 0;
  param_1[0xc6b] = 0;
  param_1[0xc6c] = 0;
  param_1[0xc6d] = 0;
  return;
}


