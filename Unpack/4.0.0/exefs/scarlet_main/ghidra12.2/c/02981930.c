/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02981930; name: FUN_02981930
 */


undefined4 FUN_02981930(long param_1,long *param_2,undefined2 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  uVar2 = (**(code **)(*param_2 + 0x590))(param_2);
  FUN_029819c0(*(undefined8 *)(param_1 + 0x20),uVar1,param_4,*param_3);
  FUN_02981b98(*(undefined8 *)(param_1 + 0x20),uVar1);
  FUN_02981ba8(param_1,param_2);
  return uVar2;
}


