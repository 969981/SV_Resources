/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298a5f0; name: FUN_0298a5f0
 */


int FUN_0298a5f0(long param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  
  bVar1 = *(byte *)(param_1 + 0x30);
  uVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x118))();
  if (bVar1 < 9) {
    uVar3 = (uint)bVar1;
    if (bVar1 < 9) {
      uVar3 = 8;
    }
    fVar6 = 1.0;
    piVar5 = (int *)(&DAT_03d6a648 + (ulong)(uint)bVar1 * 4);
    lVar4 = (ulong)(uVar3 + 1) - (ulong)bVar1;
    do {
      if ((int)(uVar2 & 0xff) <= *piVar5) break;
      fVar6 = fVar6 * 0.8;
      lVar4 = lVar4 + -1;
      piVar5 = piVar5 + 1;
    } while (lVar4 != 0);
  }
  else {
    fVar6 = 1.0;
  }
  fVar7 = 0.5;
  if (fVar6 <= 0.0) {
    fVar7 = -0.5;
  }
  return (int)(fVar6 * 4096.0 + fVar7);
}


