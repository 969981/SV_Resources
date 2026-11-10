/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02172f38; name: FUN_02172f38
 */


void FUN_02172f38(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_02172f98(param_1,param_1 + 0xe8,param_2);
  if (((uVar1 & 1) != 0) || (uVar1 = FUN_02172f98(param_1,param_1 + 0xec,param_3), (uVar1 & 1) != 0)
     ) {
    *(undefined4 *)(param_1 + 0xe8) = *param_2;
    *(undefined4 *)(param_1 + 0xec) = *param_3;
  }
  return;
}


