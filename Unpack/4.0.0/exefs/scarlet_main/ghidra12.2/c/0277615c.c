/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0277615c; name: FUN_0277615c
 */


void FUN_0277615c(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  uVar1 = FUN_027762b4((int)param_1[5],*(undefined8 *)(param_1[2] + 0x1f8),param_1 + 3,param_1[6]);
  *(undefined8 *)(*(long *)(lVar2 + 0xe8) + param_1[1] * 0x10 + 8) = uVar1;
  return;
}


