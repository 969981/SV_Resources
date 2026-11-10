/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fdfed8; name: FUN_00fdfed8
 */


undefined8 FUN_00fdfed8(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  if (((*(int *)(param_1 + 0x40) == 0) && (*(long *)(param_1 + 0x50) != 0)) &&
     ((*(ulong *)(param_1 + 0x80) >> 2) * (*(ulong *)(param_1 + 0x88) >> 2) * 8 <= param_3)) {
    *(undefined8 *)(param_1 + 0x98) = param_2;
    FUN_00fe14d4(param_1);
    uVar1 = 1;
    *(undefined4 *)(param_1 + 0x40) = 4;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


