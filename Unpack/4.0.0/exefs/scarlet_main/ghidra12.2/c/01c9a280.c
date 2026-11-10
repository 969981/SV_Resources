/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c9a280; name: FUN_01c9a280
 */


byte FUN_01c9a280(void)

{
  byte bVar1;
  
  if (DAT_04839fc0 == 1) {
    bVar1 = 1;
  }
  else {
    if (DAT_0485e950 == '\x01') {
      bVar1 = nn::nifm::IsNetworkAvailable();
    }
    else {
      bVar1 = 0;
    }
    bVar1 = bVar1 & DAT_04839fc0 != 0;
  }
  return bVar1;
}


