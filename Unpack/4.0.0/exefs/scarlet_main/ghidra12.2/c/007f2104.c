/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f2104; name: FUN_007f2104
 */


undefined8 FUN_007f2104(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_20 [16];
  
  if (param_2 == 0) {
    return 0;
  }
  FUN_007eba90(auStack_20,param_3,param_4 + 0x30);
  return 1;
}


