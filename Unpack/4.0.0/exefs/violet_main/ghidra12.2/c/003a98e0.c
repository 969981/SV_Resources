/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003a98e0; name: FUN_003a98e0
 */


undefined8 FUN_003a98e0(void)

{
  int iVar1;
  
  FUN_0043b770();
  iVar1 = FUN_0043b710();
  if (((iVar1 - 0x2a0U < 4) || (iVar1 == 4)) || (iVar1 == 0x40)) {
    return 1;
  }
  return 0;
}


