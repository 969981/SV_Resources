/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0159bf78; name: FUN_0159bf78
 */


void FUN_0159bf78(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5
                 ,uint param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  
  puVar2 = PTR_DAT_047d3e30;
  puVar1 = PTR_DAT_047d3e28;
  if (param_3 == 0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_70 = *(undefined8 *)puVar2;
    uStack_68 = *(undefined8 *)(puVar2 + 8);
    local_60 = *(undefined8 *)(puVar2 + 0x10);
    local_58 = *(long **)(puVar2 + 0x18);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x18))();
    }
    if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_90 = *(undefined8 *)puVar2;
    uStack_88 = *(undefined8 *)(puVar2 + 8);
    local_80 = *(undefined8 *)(puVar2 + 0x10);
    local_78 = *(long **)(puVar2 + 0x18);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x18))();
    }
  }
  else {
    FUN_0135d26c(&local_70,param_3);
    FUN_0135d26c(&local_90,param_3 + 0x18);
  }
  if (param_4 == 0) {
    if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_b0 = *(undefined8 *)puVar2;
    uStack_a8 = *(undefined8 *)(puVar2 + 8);
    local_a0 = *(undefined8 *)(puVar2 + 0x10);
    local_98 = *(long **)(puVar2 + 0x18);
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x18))();
    }
    if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_d0 = *(undefined8 *)puVar2;
    uStack_c8 = *(undefined8 *)(puVar2 + 8);
    local_c0 = *(undefined8 *)(puVar2 + 0x10);
    local_b8 = *(long **)(puVar2 + 0x18);
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x18))();
    }
  }
  else {
    FUN_0135d26c(&local_b0,param_4);
    FUN_0135d26c(&local_d0,param_4 + 0x18);
  }
  FUN_014f70b0(param_1,param_2,&local_70,&local_90,&local_b0,&local_d0,param_5,param_6 & 1);
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


