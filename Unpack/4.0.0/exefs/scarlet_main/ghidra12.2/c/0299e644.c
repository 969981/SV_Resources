/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0299e644; name: FUN_0299e644
 */


bool FUN_0299e644(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x60) + 0xb8))
                    (*(long **)(param_1 + 0x60),*(undefined8 *)(param_2 + 8));
  return iVar1 == 1;
}


