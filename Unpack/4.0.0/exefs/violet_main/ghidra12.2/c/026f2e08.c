/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026f2e08; name: FUN_026f2e08
 */


void FUN_026f2e08(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -0x7a;
  if (param_1 != (int)param_1) {
    iVar2 = -0x79;
  }
  iVar1 = 0x85;
  if (param_1 != (short)param_1) {
    iVar1 = iVar2;
  }
  iVar2 = 0x84;
  if (param_1 != (char)param_1) {
    iVar2 = iVar1;
  }
  if (param_1 + 0x40U < 0xc0) {
    iVar2 = (int)param_1;
  }
  FUN_0111b030(iVar2);
  return;
}


