/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0347f9cc; name: FUN_0347f9cc
 */


int FUN_0347f9cc(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0347eeb8();
  if (iVar1 == 1) {
    iVar1 = FUN_0347d824(param_1 + 0x14,param_2,param_3);
  }
  (**(code **)(*param_1 + 0x40))(param_1);
  return iVar1;
}


