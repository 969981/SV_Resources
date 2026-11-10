/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f62f64; name: FUN_01f62f64
 */


void FUN_01f62f64(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(long **)(param_2 + 8) + 0x10))(*(long **)(param_2 + 8),0x158,8);
  FUN_00f329b4(*(undefined8 *)(param_2 + 0x50),uVar1);
  FUN_01692b7c(param_1,param_2,uVar1,0x158,param_3,0);
  return;
}


