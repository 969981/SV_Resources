/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01924c80; name: FUN_01924c80
 */


byte FUN_01924c80(long param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = 0;
  if (*(long *)(param_1 + 0x2a8) != 0) {
    if ((*(byte *)(*(long *)(param_1 + 0x2a8) + 0x1e8) & 1) == 0) {
      bVar1 = 0;
    }
    else {
      bVar1 = 0;
      if (*(long *)(param_1 + 0x2e8) != 0) {
        bVar1 = *(byte *)(*(long *)(param_1 + 0x2e8) + 0x1e8) & 1;
      }
    }
  }
  bVar2 = 0;
  if (*(long *)(param_1 + 0x328) != 0) {
    if ((*(byte *)(*(long *)(param_1 + 0x328) + 0x1e8) & 1) == 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = 0;
      if (*(long *)(param_1 + 0x368) != 0) {
        bVar2 = *(byte *)(*(long *)(param_1 + 0x368) + 0x1e8) & 1;
      }
    }
  }
  return bVar1 & bVar2;
}


