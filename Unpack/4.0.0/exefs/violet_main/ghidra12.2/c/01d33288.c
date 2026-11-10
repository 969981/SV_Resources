/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d33288; name: FUN_01d33288
 */


char FUN_01d33288(long param_1)

{
  char cVar1;
  char cVar2;
  
  cVar2 = FUN_01400ba8(*(undefined8 *)(param_1 + 0x70));
  cVar1 = '\x1b';
  if ((byte)(cVar2 - 1U) < 0x1a) {
    cVar1 = cVar2;
  }
  return cVar1;
}


