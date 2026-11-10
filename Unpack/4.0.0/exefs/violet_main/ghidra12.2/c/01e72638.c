/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e72638; name: FUN_01e72638
 */


undefined8 FUN_01e72638(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (((*PTR_DAT_047da800 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047da800), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047da9d0,PTR_DAT_047da808,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047da800);
  }
  lVar3 = *(long *)PTR_DAT_047da808;
  *(long *)PTR_DAT_047da810 = lVar3;
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar3 + 0x60);
  }
  return uVar2;
}


