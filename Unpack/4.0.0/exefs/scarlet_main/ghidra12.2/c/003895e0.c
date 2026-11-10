/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003895e0; name: FUN_003895e0
 */


void FUN_003895e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not emulate address calculation at 0x00389608 */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_00389620 +
            (ulong)*(ushort *)(&DAT_03cdb716 + (ulong)(*(byte *)(param_4 + 10) - 1) * 2) * 4))
            (param_2);
  return;
}


