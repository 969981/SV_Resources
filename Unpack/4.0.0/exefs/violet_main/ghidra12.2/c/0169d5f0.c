/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0169d5f0; name: FUN_0169d5f0
 */


bool FUN_0169d5f0(void)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  if ((*PTR_DAT_047ddaa8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_047ddaa8);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_02b72364,PTR_DAT_047ddab0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047ddaa8);
    }
  }
  plVar4 = (long *)PTR_DAT_047ddab8;
  plVar3 = (long *)PTR_DAT_047ddab0;
  puVar1 = PTR_DAT_047ddaa8;
  lVar5 = *(long *)PTR_DAT_047ddab0;
  *(long *)PTR_DAT_047ddab8 = lVar5;
  if (lVar5 == 0) {
    return false;
  }
  if ((*puVar1 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_047ddaa8);
    plVar3 = (long *)PTR_DAT_047ddab0;
    plVar4 = (long *)PTR_DAT_047ddab8;
    if (iVar2 != 0) {
      FUN_00100190(&LAB_02b72364,PTR_DAT_047ddab0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047ddaa8);
      plVar3 = (long *)PTR_DAT_047ddab0;
      plVar4 = (long *)PTR_DAT_047ddab8;
    }
  }
  lVar5 = *plVar3;
  *plVar4 = lVar5;
  if ((*(long *)(lVar5 + 0x30) == 0) || ((*(byte *)(*(long *)(lVar5 + 0x30) + 0x1e8) & 1) == 0)) {
    return false;
  }
  return *(char *)(lVar5 + 0xd8) != '\0';
}


