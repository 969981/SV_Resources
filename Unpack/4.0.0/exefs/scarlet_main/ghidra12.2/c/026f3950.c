/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f3950; name: FUN_026f3950
 */


undefined4 FUN_026f3950(long param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x1f0) + (ulong)param_2 * 4);
  }
  return uVar1;
}


