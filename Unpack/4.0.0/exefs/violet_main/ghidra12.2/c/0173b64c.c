/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0173b64c; name: FUN_0173b64c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0173b64c(undefined8 *param_1,ushort param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  undefined1 *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined8 auStack_d0 [12];
  undefined1 auStack_70 [24];
  long *local_58;
  char acStack_50 [16];
  long *local_28;
  
  uVar7 = FUN_01232cd8(DAT_0483f0d8);
  snprintf(acStack_50,0x10,"PLAY_PV_%04hu",param_2);
  FUN_0173b8d4(param_3,uVar7);
  FUN_0173b9a8(param_4,uVar7);
  puVar3 = PTR_DAT_047d8280;
  if (((*PTR_DAT_047d8280 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  puVar5 = PTR_DAT_047d8290;
  puVar4 = PTR_DAT_047d8288;
  uVar2 = _DAT_03d60900;
  uVar1 = _DAT_03d608f0;
  uVar8 = *(undefined8 *)PTR_DAT_047d8288;
  *(undefined8 *)PTR_DAT_047d8290 = uVar8;
  FUN_0173b86c(*param_1,uVar1,uVar2,uVar8,uVar7);
  if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar6 != 0)) {
    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  lVar9 = *(long *)puVar4;
  *(long *)puVar5 = lVar9;
  FUN_013e3cf8(&local_28,acStack_50);
  FUN_0135d26c(auStack_70,&local_28);
  local_f0 = &LAB_020e2edc;
  local_e8 = FUN_02acb404;
  local_e0 = &LAB_02acb408;
  local_d8 = &LAB_02acb414;
  auStack_d0[0] = uVar7;
  iVar6 = FUN_0177ffac(lVar9,auStack_70,uVar7,0);
  pcVar10 = FUN_02acb404;
  if (iVar6 != 0) {
    FUN_0173ba88(*(undefined8 *)(lVar9 + 0x220),auStack_70,iVar6,uVar7,0,&local_f0,0);
    pcVar10 = local_e8;
    if (local_e8 == (code *)0x0) goto LAB_0173b790;
  }
  local_e0 = (undefined1 *)0x0;
  local_d8 = (undefined1 *)0x0;
  local_f0 = (undefined1 *)0x0;
  local_e8 = (code *)0x0;
  (*pcVar10)(auStack_d0);
LAB_0173b790:
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return iVar6;
}


