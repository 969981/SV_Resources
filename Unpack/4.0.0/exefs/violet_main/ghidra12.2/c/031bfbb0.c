/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031bfbb0; name: FUN_031bfbb0
 */


void FUN_031bfbb0(uint *param_1,uint *param_2,uint param_3,uint *param_4,uint param_5)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  
  uVar7 = *param_2;
  uVar2 = *param_4;
  bVar1 = uVar2 < uVar7;
  *param_1 = (uint)bVar1;
  puVar3 = param_1 + 6;
  *(uint **)puVar3 = param_2;
  puVar4 = param_1 + 8;
  *(uint **)puVar4 = param_4;
  puVar5 = param_1 + 10;
  *puVar5 = param_3;
  puVar6 = param_1 + 0xb;
  *puVar6 = param_5;
  puVar8 = puVar4;
  if (uVar7 <= uVar2) {
    puVar8 = puVar3;
  }
  puVar8 = *(uint **)puVar8;
  if (uVar7 <= uVar2) {
    param_2 = param_4;
  }
  *(uint **)(param_1 + 2) = puVar8;
  *(uint **)(param_1 + 4) = param_2;
  while( true ) {
    uVar7 = (uint)bVar1;
    if (*param_2 < puVar8[4]) {
      do {
        if (-1 < (int)(param_2[5] - puVar8[1] | puVar8[5] - param_2[1] | puVar8[6] - param_2[2] |
                      param_2[6] - puVar8[2])) {
          *(uint **)(param_1 + 2) = puVar8;
          *(uint **)(param_1 + 4) = param_2;
          *param_1 = uVar7;
          return;
        }
        param_2 = param_2 + 8;
      } while (*param_2 < puVar8[4]);
    }
    puVar8 = puVar3;
    if (uVar7 != 0) {
      puVar8 = puVar4;
    }
    *(long *)puVar8 = *(long *)puVar8 + 0x20;
    puVar8 = puVar5;
    if (uVar7 != 0) {
      puVar8 = puVar6;
    }
    *puVar8 = *puVar8 - 1;
    if ((int)*puVar5 < 1) break;
    puVar9 = *(uint **)puVar3;
    puVar10 = *(uint **)puVar4;
    puVar8 = puVar10;
    param_2 = puVar9;
    if (*puVar9 <= *puVar10) {
      puVar8 = puVar9;
      param_2 = puVar10;
    }
    bVar1 = *puVar10 < *puVar9;
    if ((int)*puVar6 < 1) {
      return;
    }
  }
  return;
}


