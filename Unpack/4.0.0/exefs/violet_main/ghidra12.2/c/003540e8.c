/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003540e8; name: FUN_003540e8
 */


void FUN_003540e8(void)

{
  if (DAT_047ef618 == 0) {
    if (DAT_047ef620 != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    FUN_003535e0(DAT_047ef618,0);
    FUN_003535e0(DAT_047ef620,0);
    if (DAT_047ef618 != 0) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
    if (DAT_047ef620 != 0) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
    DAT_047ef618 = 0;
    DAT_047ef620 = 0;
  }
  return;
}


