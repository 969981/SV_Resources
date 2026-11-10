/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012b422c; name: FUN_012b422c
 */


void FUN_012b422c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar3 = param_2[2];
  uVar2 = *(undefined4 *)(param_2 + 3);
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  *(undefined1 *)(param_1 + 0x5d) = 1;
  FUN_012b4424(param_1 + 0x10);
  FUN_012b427c(param_1 + 0x10,param_3);
  return;
}


