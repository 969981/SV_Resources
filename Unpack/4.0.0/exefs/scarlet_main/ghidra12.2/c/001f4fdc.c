/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f4fdc; name: FUN_001f4fdc
 */


void FUN_001f4fdc(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_001ed56c(param_2);
  *(uint *)(param_1 + 0x10) = uVar1 & 0x7fffffff;
  uVar2 = FUN_001ed56c(param_2 + 4);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  return;
}


