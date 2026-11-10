/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014a6eec; name: FUN_014a6eec
 */


void FUN_014a6eec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *local_60 [3];
  long *local_48;
  long *local_28;
  
  puVar1 = PTR_DAT_047d4240;
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  local_28 = (long *)0x0;
  if (((*PTR_DAT_047d4240 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  puVar3 = PTR_DAT_047d4250;
  puVar2 = PTR_DAT_047d4248;
  uVar6 = *(undefined8 *)PTR_DAT_047d4248;
  *(undefined8 *)PTR_DAT_047d4250 = uVar6;
  FUN_00cf9884(local_60,uVar6,"BoxViewCancel");
  plVar4 = local_28;
  local_28 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  local_28 = local_60[0];
  FUN_014a74f8(uVar7,&local_28,5);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  local_28 = (long *)0x0;
  if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar5 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar6 = *(undefined8 *)puVar2;
  *(undefined8 *)puVar3 = uVar6;
  FUN_00cf9884(local_60,uVar6,"BoxViewDecide");
  plVar4 = local_28;
  local_28 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  local_28 = local_60[0];
  FUN_014a74f8(uVar7,&local_28,4);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  local_28 = (long *)0x0;
  if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar5 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar6 = *(undefined8 *)puVar2;
  *(undefined8 *)puVar3 = uVar6;
  FUN_00cf9884(local_60,uVar6,"BoxViewX");
  plVar4 = local_28;
  local_28 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  local_28 = local_60[0];
  FUN_014a74f8(uVar7,&local_28,6);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  local_28 = (long *)0x0;
  if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar5 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar6 = *(undefined8 *)puVar2;
  *(undefined8 *)puVar3 = uVar6;
  FUN_00cf9884(local_60,uVar6,"BoxViewY");
  plVar4 = local_28;
  local_28 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  local_28 = local_60[0];
  FUN_014a74f8(uVar7,&local_28,7);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  local_28 = (long *)0x0;
  if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar5 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar6 = *(undefined8 *)puVar2;
  *(undefined8 *)puVar3 = uVar6;
  FUN_00cf9884(local_60,uVar6,"BoxViewL");
  plVar4 = local_28;
  local_28 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  local_28 = local_60[0];
  FUN_014a74f8(uVar7,&local_28,8);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  local_28 = (long *)0x0;
  if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar5 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar6 = *(undefined8 *)puVar2;
  *(undefined8 *)puVar3 = uVar6;
  FUN_00cf9884(local_60,uVar6,"BoxViewR");
  plVar4 = local_28;
  local_28 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  local_28 = local_60[0];
  FUN_014a74f8(uVar7,&local_28,9);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  local_28 = (long *)0x0;
  if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar5 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar6 = *(undefined8 *)puVar2;
  *(undefined8 *)puVar3 = uVar6;
  FUN_00cf9884(local_60,uVar6,"BoxViewPlus");
  plVar4 = local_28;
  local_28 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  local_28 = local_60[0];
  FUN_014a74f8(uVar7,&local_28,0xc);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  local_28 = (long *)0x0;
  if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar5 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar6 = *(undefined8 *)puVar2;
  *(undefined8 *)puVar3 = uVar6;
  FUN_00cf9884(local_60,uVar6,"BoxViewMinus");
  plVar4 = local_28;
  local_28 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  local_28 = local_60[0];
  FUN_014a74f8(uVar7,&local_28,0xd);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  FUN_014fa9b4(local_60);
  FUN_015d8984(uVar7,5,local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  FUN_015d81e0(*(undefined8 *)(param_1 + 0x30),0);
  return;
}


