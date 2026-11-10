/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012bd9c8; name: FUN_012bd9c8
 */


void FUN_012bd9c8(void)

{
  int iVar1;
  
  FUN_012bdf4c(*(undefined8 *)(*(long *)PTR_DAT_047d3f70 + 8));
  if (((*PTR_DAT_047de6e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047de6e0), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047e23e8,PTR_DAT_047de6e8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047de6e0);
  }
  *(undefined8 *)PTR_DAT_047de6f0 = *(undefined8 *)PTR_DAT_047de6e8;
  FUN_012c01f0();
  return;
}


