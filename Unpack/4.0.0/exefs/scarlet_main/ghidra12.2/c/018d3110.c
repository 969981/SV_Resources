/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018d3110; name: FUN_018d3110
 */


void FUN_018d3110(long param_1,undefined8 param_2,undefined2 param_3,byte param_4)

{
  undefined8 uVar1;
  undefined1 auStack_28 [8];
  undefined8 local_20;
  undefined2 local_18;
  byte local_16;
  
  local_16 = param_4 & 1;
  local_20 = param_2;
  local_18 = param_3;
  uVar1 = FUN_018d314c(*(undefined8 *)(param_1 + 0x78));
  FUN_018d3154(uVar1,auStack_28,&local_20);
  return;
}


