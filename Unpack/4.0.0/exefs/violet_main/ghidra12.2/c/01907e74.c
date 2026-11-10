/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01907e74; name: FUN_01907e74
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01907e74(ushort param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined1 *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  long *local_d8;
  undefined8 auStack_d0 [12];
  undefined1 auStack_70 [24];
  long *local_58;
  char acStack_50 [16];
  long *local_28;
  
  uVar5 = FUN_01232cd8(DAT_0483f0d8);
  snprintf(acStack_50,0x10,"PLAY_PV_%04hu",param_1);
  FUN_0173b8d4(param_2,uVar5);
  FUN_0173b9a8(param_3,uVar5);
  puVar1 = PTR_DAT_047d8280;
  if (((*PTR_DAT_047d8280 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  puVar3 = PTR_DAT_047d8290;
  puVar2 = PTR_DAT_047d8288;
  uVar6 = *(undefined8 *)PTR_DAT_047d8288;
  *(undefined8 *)PTR_DAT_047d8290 = uVar6;
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  *(undefined8 *)puVar3 = *(undefined8 *)puVar2;
  uVar9 = FUN_0190817c();
  FUN_0173b86c(uVar9,_DAT_03d608f0,_DAT_03d60900,uVar6,uVar5);
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  uVar6 = *(undefined8 *)puVar2;
  *(undefined8 *)puVar3 = uVar6;
  local_f0 = (undefined1 *)0x96905bd4934d07c5;
  local_e8 = (code *)&DAT_03c9fec9;
  local_e0 = (undefined1 *)0x4;
  local_d8 = (long *)0x0;
  FUN_01605300(0x3f800000,uVar6,&local_f0,uVar5,0);
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  lVar7 = *(long *)puVar2;
  *(long *)puVar3 = lVar7;
  FUN_013e3cf8(&local_28,acStack_50);
  FUN_0135d26c(auStack_70,&local_28);
  local_f0 = &LAB_0183168c;
  local_e8 = FUN_02acb3e8;
  local_e0 = &LAB_02acb3ec;
  local_d8 = (long *)&LAB_02acb3f8;
  auStack_d0[0] = uVar5;
  iVar4 = FUN_0177ffac(lVar7,auStack_70,uVar5,0);
  pcVar8 = FUN_02acb3e8;
  if (iVar4 != 0) {
    FUN_0173ba88(*(undefined8 *)(lVar7 + 0x220),auStack_70,iVar4,uVar5,0,&local_f0,0);
    pcVar8 = local_e8;
    if (local_e8 == (code *)0x0) goto LAB_01908018;
  }
  local_e0 = (undefined1 *)0x0;
  local_d8 = (long *)0x0;
  local_f0 = (undefined1 *)0x0;
  local_e8 = (code *)0x0;
  (*pcVar8)(auStack_d0);
LAB_01908018:
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return iVar4;
}


