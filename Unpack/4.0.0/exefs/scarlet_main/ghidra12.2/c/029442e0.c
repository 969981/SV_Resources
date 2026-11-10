/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029442e0; name: FUN_029442e0
 */


void FUN_029442e0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_0126eb80();
  if ((cVar1 == '\x05') && (iVar2 = FUN_02944360(param_1,0x16), iVar2 == 9)) {
    cVar1 = FUN_02944360(param_1,0x1b);
    if ((byte)(cVar1 - 1U) < 2) {
      FUN_02944390(param_1,0x25,0x1b);
      return;
    }
  }
  return;
}


