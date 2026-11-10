/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021ea4dc; name: FUN_021ea4dc
 */


void FUN_021ea4dc(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047dd000 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047dd000), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047dd018,PTR_DAT_047dd008,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dd000);
  }
  FUN_012ae9f8(PTR_DAT_047dd008,0);
  return;
}


