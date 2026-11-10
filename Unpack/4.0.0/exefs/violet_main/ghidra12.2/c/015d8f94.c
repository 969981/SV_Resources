/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015d8f94; name: FUN_015d8f94
 */


void FUN_015d8f94(undefined8 param_1,undefined1 *param_2,uint param_3)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  ulong uVar5;
  uint uVar6;
  byte bVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  undefined1 *puVar14;
  byte local_4c [12];
  
  if (param_3 < 2) {
    return;
  }
  if (10 < param_3) {
    param_3 = 0xb;
  }
  uVar12 = (ulong)param_3;
  bVar7 = FUN_015d9a08(param_1,*param_2);
  local_4c[0] = bVar7 & 1;
  if (param_3 != 1) {
    bVar7 = FUN_015d9a08(param_1,param_2[1]);
    local_4c[1] = bVar7 & 1;
    if (param_3 != 2) {
      bVar7 = FUN_015d9a08(param_1,param_2[2]);
      local_4c[2] = bVar7 & 1;
      if (param_3 != 3) {
        lVar8 = uVar12 - 3;
        pbVar13 = (byte *)((ulong)local_4c | 3);
        puVar14 = param_2 + 3;
        do {
          bVar7 = FUN_015d9a08(param_1,*puVar14);
          lVar8 = lVar8 + -1;
          *pbVar13 = bVar7 & 1;
          pbVar13 = pbVar13 + 1;
          puVar14 = puVar14 + 1;
        } while (lVar8 != 0);
      }
    }
  }
  lVar8 = 1;
  uVar10 = 0;
  do {
    bVar7 = local_4c[uVar10];
    uVar1 = uVar10 + 1;
    if (uVar1 < uVar12) {
      bVar2 = local_4c[lVar8];
      uVar9 = (uint)uVar1;
      if (bVar2 <= bVar7) {
        uVar9 = (uint)uVar10;
      }
      uVar11 = (ulong)uVar9;
      if (bVar2 <= bVar7) {
        bVar2 = bVar7;
      }
      if (lVar8 + 1U != uVar12) {
        bVar3 = local_4c[lVar8 + 1];
        if (bVar2 < bVar3) {
          uVar9 = (uint)uVar1 + 1;
        }
        else {
          bVar3 = bVar2;
        }
        for (uVar5 = lVar8 + 2; uVar11 = (ulong)uVar9, uVar5 != uVar12; uVar5 = uVar5 + 1) {
          bVar2 = local_4c[uVar5];
          uVar6 = (uint)uVar5;
          if (local_4c[uVar5] <= bVar3) {
            bVar2 = bVar3;
            uVar6 = uVar9;
          }
          uVar9 = uVar6;
          bVar3 = bVar2;
        }
      }
    }
    else {
      uVar11 = uVar10 & 0xffffffff;
    }
    if (uVar10 != (uVar11 & 0xff)) {
      uVar11 = uVar11 & 0xff;
      local_4c[uVar10] = local_4c[uVar11];
      local_4c[uVar11] = bVar7;
      uVar4 = param_2[uVar10];
      param_2[uVar10] = param_2[uVar11];
      param_2[uVar11] = uVar4;
    }
    lVar8 = lVar8 + 1;
    uVar10 = uVar1;
  } while (uVar1 != uVar12);
  return;
}


