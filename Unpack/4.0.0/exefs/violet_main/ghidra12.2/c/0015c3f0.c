/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0015c3f0; name: FUN_0015c3f0
 */


void FUN_0015c3f0(void)

{
  if (DAT_047eccf0 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0015c3fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_047eccf0)();
  return;
}


