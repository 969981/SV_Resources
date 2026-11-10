/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0124ea98; name: FUN_0124ea98
 */


void FUN_0124ea98(long param_1,ulong param_2,ulong param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + (param_2 & 0xff) * 8);
  *(undefined8 *)(param_1 + (param_2 & 0xff) * 8) = *(undefined8 *)(param_1 + (param_3 & 0xff) * 8);
  *(undefined8 *)(param_1 + (param_3 & 0xff) * 8) = uVar1;
  return;
}


