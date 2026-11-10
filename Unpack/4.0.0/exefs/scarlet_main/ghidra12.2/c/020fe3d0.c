/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020fe3d0; name: FUN_020fe3d0
 */


void FUN_020fe3d0(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_01498af4(*(undefined8 *)(param_1 + 0x30));
  if (((uVar1 & 1) == 0) &&
     (uVar1 = FUN_01497d90(*(undefined8 *)(param_1 + 0x48)), (uVar1 & 1) != 0)) {
    FUN_021009c0(param_1,param_2,param_3);
    return;
  }
  *param_2 = 0x2ae;
  *param_3 = 1;
  return;
}


