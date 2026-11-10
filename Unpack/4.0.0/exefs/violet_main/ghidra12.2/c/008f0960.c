/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008f0960; name: FUN_008f0960
 */


void FUN_008f0960(long param_1)

{
  if ((*(byte *)(param_1 + 1) >> 1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x008f097c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_047d2778)(*(undefined8 *)(param_1 + 8));
  return;
}


