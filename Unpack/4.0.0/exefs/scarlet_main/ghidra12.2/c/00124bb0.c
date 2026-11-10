/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00124bb0; name: FUN_00124bb0
 */


undefined8 FUN_00124bb0(undefined8 param_1)

{
  undefined8 uVar1;
  int local_24;
  
  FUN_00123540();
  uVar1 = FUN_00c92df0(param_1,0xffffffff,&local_24);
  if (local_24 == 0) {
    FUN_00123a70(param_1,"object length is not an integer");
  }
  FUN_00c5db00(param_1,0xfffffffe);
  return uVar1;
}


