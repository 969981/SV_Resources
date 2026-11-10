/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019979a0; name: FUN_019979a0
 */


void FUN_019979a0(void)

{
  int iVar1;
  long lVar2;
  
  if (((*PTR_DAT_047d8840 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8840), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047db070,PTR_DAT_047d8848,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8840);
  }
  lVar2 = *(long *)PTR_DAT_047d8848;
  *(long *)PTR_DAT_047d8850 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x01997a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar2 + 0x88) + 0xa8))();
  return;
}


