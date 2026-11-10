/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029443e0; name: FUN_029443e0
 */


void FUN_029443e0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_0126eb80();
  if ((cVar1 == '\x06') && (iVar2 = FUN_02944360(param_1,0x16), iVar2 == 10)) {
    cVar1 = FUN_02944360(param_1,0x1b);
    if ((byte)(cVar1 - 1U) < 2) {
      FUN_02944390(param_1,0x25,0x1c);
      return;
    }
  }
  return;
}


