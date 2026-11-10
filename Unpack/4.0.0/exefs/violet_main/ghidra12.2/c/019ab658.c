/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019ab658; name: FUN_019ab658
 */


void FUN_019ab658(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_c0 [144];
  undefined1 auStack_30 [16];
  
  if ((*PTR_DAT_047da9b8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047da9b8,param_2);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047daa28,PTR_DAT_047da9c0,&PTR_LOOP_04483000,param_4,param_5);
      __cxa_guard_release(PTR_DAT_047da9b8);
    }
  }
  lVar2 = *(long *)PTR_DAT_047da9c0;
  *(long *)PTR_DAT_047da9c8 = lVar2;
  if (lVar2 == 0) {
    FUN_019870dc(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  FUN_019ab760(auStack_c0);
  FUN_019ab83c(auStack_30,lVar2,auStack_c0);
  FUN_019ab758(param_1,auStack_30);
  FUN_019aba14(auStack_30);
  return;
}


