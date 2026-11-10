/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c37cf0; name: FUN_01c37cf0
 */


void FUN_01c37cf0(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long local_30 [2];
  
  if (((*PTR_DAT_047da800 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047da800), iVar1 != 0))
  {
    FUN_00100190(&LAB_00ae336c,PTR_DAT_047da808,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047da800);
  }
  lVar2 = *(long *)PTR_DAT_047da808;
  *(long *)PTR_DAT_047da810 = lVar2;
  if (lVar2 == 0) {
    *param_1 = 0;
  }
  else {
    FUN_01e724b8(local_30);
    if ((local_30[0] == 0) || (*(short *)(local_30[0] + 0x1a) == 0)) {
      *param_1 = 0;
    }
    else {
      uVar3 = FUN_01e72638();
      uVar3 = FUN_01e726bc(uVar3,local_30);
      FUN_01e729e8(param_1,uVar3);
    }
    FUN_01e72aa4(local_30);
  }
  return;
}


