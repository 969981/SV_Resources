/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018d5d98; name: FUN_018d5d98
 */


void FUN_018d5d98(long param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  uVar2 = (**(code **)(*param_3 + 0x98))(param_3);
  FUN_0128ab58(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x290),uVar1,uVar2);
  return;
}


