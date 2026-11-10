/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00103810; name: FUN_00103810
 */


void FUN_00103810(void)

{
  if (DAT_047ec2a0 != 0) {
    FUN_001209d0(&DAT_047ec328);
  }
  if (DAT_047ec4c0 != 0) {
    DAT_047ec4c8 = 1;
    FUN_00120bc0(&DAT_047ec4d0,4);
    FUN_00120660(&DAT_047ec558);
    FUN_0011f610(DAT_047ec550);
    DAT_047ec550 = 0;
    FUN_00120aa0(&DAT_047ec4d0);
    DAT_047ec4c4 = 0;
    DAT_047ec4c0 = 0;
  }
  if (DAT_047ec2a0 == 0) {
    return;
  }
  FUN_00120750(&DAT_047ec328);
  return;
}


