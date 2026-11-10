/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0236cd1c; name: FUN_0236cd1c
 */


long FUN_0236cd1c(long param_1)

{
  int iVar1;
  long lVar2;
  
  if ((0xfffffffffffffffd < *(ulong *)(param_1 + 0x60)) ||
     (((*(long *)(param_1 + 0x40) == 0 && (*(long *)(param_1 + 0x48) == 0)) ||
      (*(char *)(param_1 + 0x68) != '\0')))) {
    return param_1;
  }
  if (((*PTR_DAT_047d88d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d88d0);
  }
  lVar2 = *(long *)PTR_DAT_047d88d8;
  *(long *)PTR_DAT_047d88e0 = lVar2;
  return lVar2;
}


