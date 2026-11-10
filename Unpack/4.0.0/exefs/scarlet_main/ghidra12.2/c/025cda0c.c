/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025cda0c; name: FUN_025cda0c
 */


void FUN_025cda0c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x98) = param_2[1];
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0xd8) = uVar2;
  *(undefined8 *)(param_1 + 0xd0) = uVar1;
  return;
}


