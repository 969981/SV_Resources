/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017516e8; name: FUN_017516e8
 */


undefined8 FUN_017516e8(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar3 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar3;
  if ((lVar3 == 0) || (*(long *)PTR_DAT_047d0a08 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(long *)PTR_DAT_047d0a08 + 0xb8);
  }
  return uVar2;
}


