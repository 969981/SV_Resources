/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0299e5b0; name: FUN_0299e5b0
 */


bool FUN_0299e5b0(long param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  
  if (param_4 == -1) {
    return false;
  }
  iVar1 = (**(code **)(**(long **)(param_1 + 0x60) + 0x80))
                    (*(long **)(param_1 + 0x60),param_4,param_2,param_3);
  return iVar1 == 1;
}


