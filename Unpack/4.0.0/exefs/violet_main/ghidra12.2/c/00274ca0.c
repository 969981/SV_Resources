/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00274ca0; name: FUN_00274ca0
 */


void FUN_00274ca0(void)

{
  undefined1 auVar1 [16];
  
  FUN_0038dcd0(&DAT_047ee798,&LAB_002749d0);
  FUN_0038db40(&DAT_047ee7b0);
  if ((DAT_047ee79c != 1) || ((DAT_047ee790 & 1) == 0)) {
                    /* try { // try from 00274ce0 to 00274d23 has its CatchHandler @ 00274d3c */
    auVar1 = FUN_0038dd60(1);
    FUN_0038dbe0(&DAT_047ee7a8,&DAT_047ee7b0,auVar1._0_8_,auVar1._8_8_);
    if ((DAT_047ee79c != 1) || (DAT_047ee790 != 1)) goto LAB_00274d24;
  }
  DAT_047ee79c = 0;
  FUN_00274a20();
LAB_00274d24:
                    /* try { // try from 00274d24 to 00274d2f has its CatchHandler @ 00274d38 */
  FUN_0038db60(&DAT_047ee7b0);
  return;
}


