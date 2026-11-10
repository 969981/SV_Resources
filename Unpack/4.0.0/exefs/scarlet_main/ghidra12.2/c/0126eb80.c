/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0126eb80; name: FUN_0126eb80
 */


undefined1 FUN_0126eb80(long param_1)

{
  undefined8 uVar1;
  undefined4 local_20 [2];
  undefined1 local_18 [8];
  
  local_20[0] = 0;
  uVar1 = FUN_0126ebb4(*(undefined8 *)(param_1 + 0x28));
  FUN_0126ebbc(uVar1,local_18,local_20);
  return local_18[0];
}


