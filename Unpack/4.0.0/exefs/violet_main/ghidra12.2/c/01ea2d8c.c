/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ea2d8c; name: FUN_01ea2d8c
 */


void FUN_01ea2d8c(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar2 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar2;
  if (lVar2 != 0) {
    if ((((*(long *)PTR_DAT_047d0a08 == 0) || (iVar1 = FUN_00f21480(), iVar1 != 1)) &&
        (*(char *)(param_1 + 0x39) != '\0')) && (*(int *)(param_1 + 0x48) == 0)) {
      *(undefined4 *)(param_1 + 0x48) = 2;
    }
  }
  return;
}


