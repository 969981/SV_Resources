/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d06ee8; name: FUN_01d06ee8
 */


void FUN_01d06ee8(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047cfbf8 + 0x10);
  if ((*(byte *)(param_1 + 0x12) & 1) != 0) {
    (**(code **)(*(long *)param_1[0x15] + 0x18))
              ((long *)param_1[0x15],param_1[0x14],param_1[0x12] & 0xfffffffffffffffe,1);
  }
  if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
    (**(code **)(*(long *)param_1[0x11] + 0x18))
              ((long *)param_1[0x11],param_1[0x10],param_1[0xe] & 0xfffffffffffffffe,1);
  }
  if ((*(byte *)(param_1 + 10) & 1) != 0) {
    (**(code **)(*(long *)param_1[0xd] + 0x18))
              ((long *)param_1[0xd],param_1[0xc],param_1[10] & 0xfffffffffffffffe,1);
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    (**(code **)(*(long *)param_1[8] + 0x18))
              ((long *)param_1[8],param_1[7],param_1[5] & 0xfffffffffffffffe,1);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01d06fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[4] + 0x18))
            ((long *)param_1[4],param_1[3],param_1[1] & 0xfffffffffffffffe,1);
  return;
}


