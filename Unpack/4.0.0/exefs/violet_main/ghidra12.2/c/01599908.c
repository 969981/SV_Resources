/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01599908; name: FUN_01599908
 */


void FUN_01599908(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  param_1[2] = param_3;
  *param_1 = &PTR_FUN_0460b4b0;
  param_1[1] = param_2;
  plVar4 = param_1 + 3;
  *plVar4 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x10,8);
  if (plVar2 == (long *)0x0) {
    param_2 = (long *)0x0;
    uVar6 = 0;
    uVar5 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_01599ba4;
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    *plVar2 = (long)(PTR_DAT_047e32f0 + 0x10);
    plVar2[1] = -1;
    uVar5 = 8;
    uVar6 = 0x10;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  lVar3 = *plVar4;
  *plVar4 = (long)plVar2;
  if (lVar3 != 0) {
    FUN_029f3a08(param_1 + 4);
  }
  local_68 = (long *)param_1[1];
  param_1[4] = param_2;
  param_1[5] = uVar6;
  param_1[6] = uVar5;
  plVar2 = (long *)(**(code **)(*local_68 + 0x10))(local_68,8,8);
  if (plVar2 == (long *)0x0) {
    local_60 = 0;
    local_58 = 0;
    local_68 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_01599ba4:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = local_68;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    *plVar2 = (long)(PTR_DAT_047e32f8 + 0x10);
    local_60 = 8;
    local_58 = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  lVar3 = param_1[7];
  param_1[7] = plVar2;
  if (lVar3 != 0) {
    FUN_029f3ab4(param_1 + 8);
  }
  param_1[9] = local_60;
  param_1[10] = local_58;
  param_1[8] = local_68;
  return;
}


