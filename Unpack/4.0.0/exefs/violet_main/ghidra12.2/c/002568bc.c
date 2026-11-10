/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002568bc; name: FUN_002568bc
 */


void FUN_002568bc(long param_1)

{
  byte bVar1;
  
  bVar1 = nn::nifm::IsNetworkAvailable();
  if (((bVar1 & 1) != 0) && (*(char *)(param_1 + 0x30) == '\0')) {
                    /* try { // try from 002568e0 to 002568e3 has its CatchHandler @ 002568f8 */
    FUN_00270fa0(*(undefined8 *)(param_1 + 0x10));
  }
  *(byte *)(param_1 + 0x30) = bVar1 & 1;
  return;
}


