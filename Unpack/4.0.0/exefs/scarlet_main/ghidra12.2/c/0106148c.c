/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0106148c; name: FUN_0106148c
 */


undefined8 FUN_0106148c(long param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  if ((ulong)(long)param_2 < (ulong)(*(long *)(param_1 + 0x2a8) - *(long *)(param_1 + 0x2a0) >> 3))
  {
    uVar1 = FUN_010614bc(*(undefined8 *)(*(long *)(param_1 + 0x2a0) + (long)param_2 * 8),param_3,
                         param_4);
    return uVar1;
  }
  return 0;
}


