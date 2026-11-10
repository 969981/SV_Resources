/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e99f68; name: FUN_01e99f68
 */


undefined8 FUN_01e99f68(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_30 [16];
  
  if (((*PTR_DAT_047da800 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047da800), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047da9d0,PTR_DAT_047da808,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047da800);
  }
  lVar2 = *(long *)PTR_DAT_047da808;
  *(long *)PTR_DAT_047da810 = lVar2;
  uVar3 = 0;
  if (lVar2 != 0) {
    FUN_01e9a038(auStack_30);
    FUN_01e9a1bc(param_1 + 0x40,auStack_30);
    FUN_01e9a4dc(auStack_30);
    if ((*(long *)(param_1 + 0x40) == 0) || (*(short *)(*(long *)(param_1 + 0x40) + 0x1a) == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
      *(undefined4 *)(param_1 + 0x30) = 1;
    }
  }
  return uVar3;
}


