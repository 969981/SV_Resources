/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00274c30; name: FUN_00274c30
 */


void FUN_00274c30(void)

{
  int iVar1;
  
  FUN_0038db40(&DAT_047ee7b0);
  iVar1 = DAT_047ee79c + -1;
  if (DAT_047ee79c + -1 == 0) {
    DAT_047ee790 = (undefined1)DAT_047ee79c;
                    /* try { // try from 00274c64 to 00274c6b has its CatchHandler @ 00274c80 */
    FUN_0038dcb0(&DAT_047ee7a8);
    iVar1 = DAT_047ee79c;
  }
                    /* try { // try from 00274c6c to 00274c77 has its CatchHandler @ 00274c9c */
  DAT_047ee79c = iVar1;
  FUN_0038db60(&DAT_047ee7b0);
  return;
}


