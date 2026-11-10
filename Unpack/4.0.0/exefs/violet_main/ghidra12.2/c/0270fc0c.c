/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0270fc0c; name: FUN_0270fc0c
 */


void FUN_0270fc0c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  
  puVar1 = PTR_DAT_047e0d80;
  if (((*PTR_DAT_047e0d80 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047e0d80), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047e0d98,PTR_DAT_047e0d88,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047e0d80);
  }
  puVar3 = PTR_DAT_047e0d90;
  puVar2 = PTR_DAT_047e0d88;
  *(undefined8 *)PTR_DAT_047e0d90 = *(undefined8 *)PTR_DAT_047e0d88;
  FUN_0270f6e4();
  if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047e0d80), iVar5 != 0)) {
    FUN_00100190(PTR_LAB_047e0d98,PTR_DAT_047e0d88,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047e0d80);
  }
  *(undefined8 *)puVar3 = *(undefined8 *)puVar2;
  FUN_0270f6e4();
  if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047e0d80), iVar5 != 0)) {
    FUN_00100190(PTR_LAB_047e0d98,PTR_DAT_047e0d88,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047e0d80);
  }
  *(undefined8 *)puVar3 = *(undefined8 *)puVar2;
  FUN_0270f6e4();
  if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047e0d80), iVar5 != 0)) {
    FUN_00100190(PTR_LAB_047e0d98,PTR_DAT_047e0d88,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047e0d80);
  }
  *(undefined8 *)puVar3 = *(undefined8 *)puVar2;
  FUN_0270f6e4();
  uVar6 = FUN_0270fea8(param_1);
  puVar4 = PTR_LAB_047e0d98;
  while ((uVar6 & 1) == 0) {
    if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar1), iVar5 != 0)) {
      FUN_00100190(puVar4,puVar2,&PTR_LOOP_04483000);
      __cxa_guard_release(puVar1);
    }
    *(undefined8 *)puVar3 = *(undefined8 *)puVar2;
    FUN_0270f6e4();
    if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar1), iVar5 != 0)) {
      FUN_00100190(puVar4,puVar2,&PTR_LOOP_04483000);
      __cxa_guard_release(puVar1);
    }
    *(undefined8 *)puVar3 = *(undefined8 *)puVar2;
    FUN_0270f6e4();
    if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar1), iVar5 != 0)) {
      FUN_00100190(puVar4,puVar2,&PTR_LOOP_04483000);
      __cxa_guard_release(puVar1);
    }
    *(undefined8 *)puVar3 = *(undefined8 *)puVar2;
    FUN_0270f6e4();
    if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar1), iVar5 != 0)) {
      FUN_00100190(puVar4,puVar2,&PTR_LOOP_04483000);
      __cxa_guard_release(puVar1);
    }
    *(undefined8 *)puVar3 = *(undefined8 *)puVar2;
    FUN_0270f6e4();
    uVar6 = FUN_0270fea8(param_1);
  }
  return;
}


