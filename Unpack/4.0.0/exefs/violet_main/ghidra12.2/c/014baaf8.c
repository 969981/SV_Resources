/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014baaf8; name: FUN_014baaf8
 */


void FUN_014baaf8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  if ((*PTR_DAT_047dd4c0 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_047dd4c0);
    if (iVar2 != 0) {
      FUN_00100190(PTR_LAB_047dd520,PTR_DAT_047dd4c8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047dd4c0);
    }
  }
  plVar5 = (long *)PTR_DAT_047dd4d0;
  plVar4 = (long *)PTR_DAT_047dd4c8;
  puVar1 = PTR_DAT_047dd4c0;
  *(undefined8 *)PTR_DAT_047dd4d0 = *(undefined8 *)PTR_DAT_047dd4c8;
  if ((*puVar1 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_047dd4c0);
    plVar4 = (long *)PTR_DAT_047dd4c8;
    plVar5 = (long *)PTR_DAT_047dd4d0;
    if (iVar2 != 0) {
      FUN_00100190(PTR_LAB_047dd520,PTR_DAT_047dd4c8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047dd4c0);
      plVar4 = (long *)PTR_DAT_047dd4c8;
      plVar5 = (long *)PTR_DAT_047dd4d0;
    }
  }
  lVar3 = *plVar4;
  *plVar5 = lVar3;
  FUN_029eda10(param_1,*(undefined8 *)(lVar3 + 0x28),param_2);
  return;
}


