/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0299e528; name: FUN_0299e528
 */


bool FUN_0299e528(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  int iVar1;
  undefined8 local_18;
  
  local_18 = *(undefined8 *)(param_3 + 8);
  iVar1 = (**(code **)(**(long **)(param_1 + 0x60) + 0x108))
                    (*(long **)(param_1 + 0x60),param_2,&local_18,1,param_4,param_5);
  return iVar1 == 1;
}


