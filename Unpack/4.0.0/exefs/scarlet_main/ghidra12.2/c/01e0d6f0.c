/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e0d6f0; name: FUN_01e0d6f0
 */


bool FUN_01e0d6f0(long param_1)

{
  bool bVar1;
  short sVar2;
  
  if (*(long *)(param_1 + 0x138) == 0) {
    bVar1 = false;
  }
  else {
    sVar2 = FUN_00c80208(*(undefined8 *)(*(long *)(param_1 + 0x138) + 0x70));
    bVar1 = sVar2 != 0;
  }
  return bVar1;
}


