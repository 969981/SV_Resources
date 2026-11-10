/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00339224; name: FUN_00339224
 */


void FUN_00339224(void)

{
  if (DAT_047ef500 != (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  DAT_047ef500 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x28);
  if (DAT_047ef500 != (undefined8 *)0x0) {
    *DAT_047ef500 = 0;
  }
  return;
}


