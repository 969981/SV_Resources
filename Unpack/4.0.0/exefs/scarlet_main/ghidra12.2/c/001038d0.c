/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001038d0; name: FUN_001038d0
 */


void FUN_001038d0(void)

{
  if (DAT_047ec2a0 != 0) {
    FUN_001209d0(&DAT_047ec3a8);
  }
  if (DAT_047ec42c != 0) {
    DAT_047ec75c = 1;
    FUN_00120bc0(&DAT_047ec430,4);
    FUN_00120660(&DAT_047ec768);
    FUN_0011f610(DAT_047ec760);
    DAT_047ec760 = 0;
    FUN_00120aa0(&DAT_047ec430);
    DAT_047ec758 = 0;
    DAT_047ec42c = 0;
  }
  if (DAT_047ec2a0 == 0) {
    return;
  }
  FUN_00120750(&DAT_047ec3a8);
  return;
}


