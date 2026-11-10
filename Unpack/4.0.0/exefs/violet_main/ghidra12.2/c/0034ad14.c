/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0034ad14; name: FUN_0034ad14
 */


void FUN_0034ad14(void)

{
  long lVar1;
  
  lVar1 = DAT_047ef570;
  if (DAT_047ef570 == 0) {
    return;
  }
  FUN_0034b060(DAT_047ef570 + 0x20,*(undefined8 *)(DAT_047ef570 + 0x28));
                    /* try { // try from 0034ad30 to 0034ad37 has its CatchHandler @ 0034ad54 */
  FUN_0038db20(lVar1);
  FUN_0049e790(PTR_LAB_047cba48,lVar1);
  return;
}


