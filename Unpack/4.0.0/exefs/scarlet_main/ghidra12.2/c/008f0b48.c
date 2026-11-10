/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008f0b48; name: FUN_008f0b48
 */


void FUN_008f0b48(long param_1,long param_2)

{
  (**(code **)PTR_DAT_047d2830)
            (*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_2 + 8),
             *(undefined8 *)(param_2 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x008f0b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_047d2838)
            (*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_2 + 4),
             *(undefined8 *)(param_2 + 0x10));
  return;
}


