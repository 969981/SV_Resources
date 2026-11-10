/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020c83b0; name: FUN_020c83b0
 */


void FUN_020c83b0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  param_1[1] = *(undefined8 *)(param_2 + 0x58);
  param_1[2] = uVar2;
  *param_1 = uVar1;
  return;
}


