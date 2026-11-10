/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01400b7c; name: FUN_01400b7c
 */


int FUN_01400b7c(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_01400ba8(*(undefined8 *)(param_1 + 0x70));
  iVar1 = 0x1b;
  if ((iVar2 - 1U & 0xff) < 0x1a) {
    iVar1 = iVar2;
  }
  return iVar1;
}


