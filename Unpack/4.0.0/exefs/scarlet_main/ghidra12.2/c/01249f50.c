/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01249f50; name: FUN_01249f50
 */


undefined1 FUN_01249f50(undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 local_20 [8];
  undefined1 local_18;
  undefined1 local_17;
  
  local_18 = param_2;
  local_17 = param_3;
  FUN_01461214();
  uVar1 = FUN_01249f88();
  FUN_01249f90(uVar1,local_20,&local_18);
  return local_20[0];
}


