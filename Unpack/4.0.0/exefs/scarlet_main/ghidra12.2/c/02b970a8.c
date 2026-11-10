/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b970a8; name: FUN_02b970a8
 */


void FUN_02b970a8(long *param_1,long param_2)

{
  *(ulong *)(param_2 + 0x2d0) = *(ulong *)(param_2 + 0x2d0) & 0xfffffffffffffffc | 0x10;
  *param_1 = param_2 + 0x120;
                    /* WARNING: Could not recover jumptable at 0x02b970cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x120) + 0x10))(param_2 + 0x120);
  return;
}


