/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029fe094; name: FUN_029fe094
 */


uint FUN_029fe094(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    uVar3 = 0;
    fVar5 = 3.40282e+38;
    uVar4 = 0xffffffff;
    do {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar3 * 0x10);
      uVar7 = *puVar1;
      fVar6 = (float)uVar7 - (float)*param_2;
      fVar8 = (float)((ulong)uVar7 >> 0x20) - (float)((ulong)*param_2 >> 0x20);
      fVar9 = (float)puVar1[1] - (float)param_2[1];
      fVar6 = fVar6 * fVar6 + fVar8 * fVar8 + fVar9 * fVar9;
      uVar2 = (uint)uVar3;
      if (fVar5 <= fVar6) {
        fVar6 = fVar5;
        uVar2 = uVar4;
      }
      uVar4 = uVar2;
      fVar5 = fVar6;
      uVar3 = uVar3 + 1;
    } while (*(uint *)(param_1 + 0x20) != uVar3);
    if (-1 < (int)uVar4) {
      return uVar4 | (*(uint *)(param_1 + 0x60) &
                     ((int)*(uint *)(param_1 + 0x60) >> 0x1f ^ 0xffffffffU)) << 0x16;
    }
  }
  return 0xffffffff;
}


