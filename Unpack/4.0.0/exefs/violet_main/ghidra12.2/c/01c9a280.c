/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


