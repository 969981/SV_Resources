/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0034bfb8; name: FUN_0034bfb8
 */


void FUN_0034bfb8(void)

{
  if (DAT_047ef590 != (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  DAT_047ef590 = (undefined8 *)FUN_0049e7b0(PTR_FUN_047cba38,0x30);
  if (DAT_047ef590 != (undefined8 *)0x0) {
    *DAT_047ef590 = 0;
    DAT_047ef590[3] = 0;
  }
  return;
}


