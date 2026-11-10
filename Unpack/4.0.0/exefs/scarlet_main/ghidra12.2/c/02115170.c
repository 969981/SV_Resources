/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02115170; name: FUN_02115170
 */


undefined8 FUN_02115170(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0xd0) == '\0') {
    if (((*PTR_DAT_047d6c98 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar1 != 0)) {
      FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c98);
    }
    lVar3 = *(long *)PTR_DAT_047d6ca0;
    *(long *)PTR_DAT_047d6ca8 = lVar3;
    if ((lVar3 != 0) && (*(long *)PTR_DAT_047d0a08 != 0)) {
      return *(undefined8 *)(*(long *)PTR_DAT_047d0a08 + 0xb8);
    }
  }
  else if ((*(long *)(param_1 + 0xd8) != 0) && (*(short *)(*(long *)(param_1 + 0xd8) + 0x1a) != 0))
  {
    uVar2 = FUN_019965ec();
    return uVar2;
  }
  return 0;
}


