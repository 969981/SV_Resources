/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fe9ad0; name: FUN_00fe9ad0
 */


undefined8 FUN_00fe9ad0(ushort param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar2 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar2;
  uVar3 = 0;
  if (lVar2 != 0) {
    lVar2 = FUN_00fe9b78();
    if ((ulong)param_1 < *(ulong *)(lVar2 + 0x28)) {
      uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x20) + (ulong)param_1 * 8);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}


