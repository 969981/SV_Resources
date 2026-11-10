/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0170ad3c; name: FUN_0170ad3c
 */


bool FUN_0170ad3c(long param_1)

{
  char cVar1;
  char cVar2;
  
  cVar1 = FUN_0170ad84(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290),0);
  cVar2 = FUN_0170ad84(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290),1);
  return cVar1 != cVar2;
}


