/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011fbc4c; name: FUN_011fbc4c
 */


void FUN_011fbc4c(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *local_50 [4];
  long *local_30;
  char *local_8;
  
  DAT_04838250 = param_1;
  if (((*PTR_DAT_047d8ac0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8ac0), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d8ea0,PTR_DAT_047d8ac8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8ac0);
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d8ac8;
  local_8 = "message/dat/JPN/script/field_trade.dat";
  *(undefined8 *)PTR_DAT_047d8ad0 = uVar2;
  FUN_00e52f24(local_50,&local_8);
  FUN_011fbd5c(uVar2,local_50);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_50[0] != (long *)0x0) {
    (**(code **)(*local_50[0] + 0x20))();
  }
  nn::crypto::GenerateCryptographicallyRandomBytes(local_50,8);
  DAT_04544c88 = local_50[0];
  DAT_04544c90 = 0x82a2b175229d6a5b;
  DAT_04544c98 = local_50[0];
  return;
}


