/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0296e390; name: FUN_0296e390
 */


bool FUN_0296e390(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_014813ec(*(undefined8 *)(param_1 + 8));
  uVar1 = FUN_0293d780(param_1,param_2);
  uVar2 = FUN_01a46f48(uVar3,uVar1);
  return 1 < uVar2;
}


