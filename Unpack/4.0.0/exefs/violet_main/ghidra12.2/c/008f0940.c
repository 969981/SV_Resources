/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008f0940; name: FUN_008f0940
 */


void FUN_008f0940(long param_1)

{
  if ((*(byte *)(param_1 + 1) >> 1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x008f095c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_047d2770)(*(undefined8 *)(param_1 + 8));
  return;
}


