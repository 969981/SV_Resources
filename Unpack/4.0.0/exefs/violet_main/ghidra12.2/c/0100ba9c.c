/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0100ba9c; name: FUN_0100ba9c
 */


void FUN_0100ba9c(undefined8 param_1)

{
  if (0x3ff < DAT_04865a18) {
                    /* WARNING: Subroutine does not return */
    FUN_01dace90();
  }
  *(undefined8 *)(&DAT_04863a18 + (ulong)DAT_04865a18 * 8) = param_1;
  DAT_04865a18 = DAT_04865a18 + 1;
  return;
}


