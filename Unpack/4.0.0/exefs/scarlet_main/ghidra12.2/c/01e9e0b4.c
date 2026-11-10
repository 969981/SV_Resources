/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e9e0b4; name: FUN_01e9e0b4
 */


void FUN_01e9e0b4(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047cff40 + 0x10);
  if ((*(byte *)(param_1 + 7) & 1) != 0) {
    (**(code **)(*(long *)param_1[10] + 0x18))
              ((long *)param_1[10],param_1[9],param_1[7] & 0xfffffffffffffffe,1);
  }
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01e9e12c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[6] + 0x18))
            ((long *)param_1[6],param_1[5],param_1[3] & 0xfffffffffffffffe,1);
  return;
}


