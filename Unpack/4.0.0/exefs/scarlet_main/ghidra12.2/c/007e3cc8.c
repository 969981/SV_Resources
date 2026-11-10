/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e3cc8; name: FUN_007e3cc8
 */


undefined8 FUN_007e3cc8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  undefined1 auStack_30 [32];
  
  FUN_007e5304(auStack_50,param_2);
  FUN_00796868(auStack_30,auStack_50);
  uVar1 = FUN_007e3c0c(param_1,auStack_30);
  FUN_0284e3d4(auStack_30);
  return uVar1;
}


