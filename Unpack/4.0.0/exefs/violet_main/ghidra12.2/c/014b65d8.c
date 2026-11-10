/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014b65d8; name: FUN_014b65d8
 */


undefined8 FUN_014b65d8(void)

{
  int iVar1;
  long lVar2;
  
  if (((*PTR_DAT_047dd4c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047dd4c0), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047dd520,PTR_DAT_047dd4c8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dd4c0);
  }
  lVar2 = *(long *)PTR_DAT_047dd4c8;
  *(long *)PTR_DAT_047dd4d0 = lVar2;
  return *(undefined8 *)(lVar2 + 0x28);
}


