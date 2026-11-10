/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f9de94; name: FUN_01f9de94
 */


float FUN_01f9de94(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  
  if (*(char *)(param_1 + 0x143) == '\0') {
    if (*(long *)(param_1 + 0x138) == 0) {
      fVar4 = 1.0;
    }
    else {
      lVar3 = *(long *)(*(long *)(param_1 + 0x138) + 0x70);
      if (*(long *)(lVar3 + 8) == 0) {
        uVar1 = FUN_00f13ef0();
        uVar1 = uVar1 & 0xffff;
      }
      else {
        uVar1 = FUN_00d75438(lVar3);
      }
      lVar3 = *(long *)(*(long *)(param_1 + 0x138) + 0x70);
      if (*(long *)(lVar3 + 8) == 0) {
        uVar2 = FUN_00f13ef0();
        uVar2 = uVar2 & 0xffff;
      }
      else {
        uVar2 = FUN_00ddf348(lVar3);
      }
      fVar4 = (float)uVar2 / (float)uVar1;
    }
  }
  else {
    fVar4 = *(float *)(param_1 + 0x150);
  }
  return fVar4;
}


