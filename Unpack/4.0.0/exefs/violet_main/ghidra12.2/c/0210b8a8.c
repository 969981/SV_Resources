/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0210b8a8; name: FUN_0210b8a8
 */


bool FUN_0210b8a8(long param_1,byte param_2)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  undefined1 *puVar4;
  
  iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x36c);
  bVar2 = *(byte *)(*(long *)(param_1 + 0x10) + 0x95);
  if (iVar1 == 2) {
    if (4 < bVar2) {
      return false;
    }
    puVar4 = &DAT_03d6a45a;
  }
  else if (iVar1 == 1) {
    if (4 < bVar2) {
      return false;
    }
    puVar4 = &DAT_03d6a455;
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    if (4 < bVar2) {
      return false;
    }
    puVar4 = &DAT_03d6a450;
  }
  bVar2 = puVar4[bVar2];
  if (1 < bVar2) {
    return false;
  }
  if ((bVar2 == param_2) || (param_2 == 3)) {
    return true;
  }
  if (param_2 == 5) {
    bVar3 = bVar2 == 1;
  }
  else {
    if (param_2 != 4) {
      return false;
    }
    bVar3 = bVar2 == 0;
  }
  return !bVar3;
}


