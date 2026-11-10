/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029818e4; name: FUN_029818e4
 */


void FUN_029818e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined1 local_30;
  undefined8 *local_28;
  undefined8 local_20;
  undefined2 local_18;
  
  local_18 = *(undefined2 *)(param_4 + 2);
  local_30 = 1;
  local_28 = &local_20;
  local_38 = param_2;
  local_20 = param_3;
  FUN_01461214();
  uVar1 = FUN_0124389c();
  FUN_01244df8(uVar1,auStack_40,&local_38);
  return;
}


