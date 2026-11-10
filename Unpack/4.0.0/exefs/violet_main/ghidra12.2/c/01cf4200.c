/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01cf4200; name: FUN_01cf4200
 */


bool FUN_01cf4200(void)

{
  bool bVar1;
  
  FUN_019b511c();
  DAT_0483a570 = DAT_0483a578;
  if (DAT_0483a578 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(DAT_0483a578 + 0x30) != 0;
  }
  return bVar1;
}


