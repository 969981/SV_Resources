/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b04bc4; name: FUN_02b04bc4
 */


void FUN_02b04bc4(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_2 = param_2 + (param_3 & 0xffff) * 0x18;
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  param_1[1] = *(undefined8 *)(param_2 + 0x48);
  param_1[2] = uVar2;
  *param_1 = uVar1;
  return;
}


