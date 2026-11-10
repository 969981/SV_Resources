/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001240f0; name: FUN_001240f0
 */


long FUN_001240f0(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00c646d0();
  if (lVar1 == 0) {
    uVar2 = FUN_01b2ccf0(param_1,4);
    FUN_00123c80(param_1,param_2,uVar2);
  }
  return lVar1;
}


