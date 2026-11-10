/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01250a8c; name: FUN_01250a8c
 */


undefined1 FUN_01250a8c(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  undefined8 local_28;
  byte local_20;
  undefined1 local_1f;
  undefined1 local_18 [8];
  
  local_20 = param_3 & 1;
  local_18[0] = 0;
  local_1f = 1;
  local_28 = param_2;
  FUN_01461214();
  uVar1 = FUN_01250ad4();
  FUN_012528bc(uVar1,local_18,&local_28);
  return local_18[0];
}


