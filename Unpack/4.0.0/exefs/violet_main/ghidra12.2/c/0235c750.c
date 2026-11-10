/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0235c750; name: FUN_0235c750
 */


long FUN_0235c750(void)

{
  int iVar1;
  long lVar2;
  
  if (((*PTR_DAT_047dab40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047dab40), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047dd780,PTR_DAT_047dab48,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dab40);
  }
  lVar2 = *(long *)PTR_DAT_047dab48;
  *(long *)PTR_DAT_047dab50 = lVar2;
  return *(long *)(lVar2 + 0xb0) - *(long *)(lVar2 + 0xa8) >> 3;
}


