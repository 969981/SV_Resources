/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f9f30; name: FUN_001f9f30
 */


long FUN_001f9f30(long param_1)

{
  long lVar1;
  long lVar2;
  
  for (; (*(long *)(param_1 + 0xa8) == 0 || ((*(byte *)(param_1 + 0xe4) & 0xc) != 0));
      param_1 = param_1 + -0x10) {
    param_1 = FUN_001f9384(param_1 + 0x18);
    if (param_1 == 0) {
      return 0;
    }
  }
  lVar2 = *(long *)(param_1 + 0x70);
  if (lVar2 == 0) {
    return *(long *)(param_1 + 0xa8);
  }
  lVar1 = param_1;
  do {
    *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)(lVar1 + 0x58);
    lVar1 = *(long *)(lVar1 + 0x70);
    lVar2 = *(long *)(lVar1 + 0x70);
  } while (lVar2 != 0);
  return *(long *)(param_1 + 0xa8);
}


