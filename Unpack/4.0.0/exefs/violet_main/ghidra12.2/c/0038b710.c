/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038b710; name: FUN_0038b710
 */


uint FUN_0038b710(byte *param_1,ulong param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  
  param_3 = (uint)param_2 ^ param_3;
  if (param_2 < 4) {
joined_r0x0038b81c:
    for (; 3 < param_2; param_2 = param_2 - 4) {
      param_3 = (*(int *)param_1 * 0x5bd1e995 ^ (uint)(*(int *)param_1 * 0x5bd1e995) >> 0x18) *
                0x5bd1e995 ^ param_3 * 0x5bd1e995;
      param_1 = param_1 + 4;
    }
    if (param_2 != 1) {
      if (param_2 != 2) {
        if (param_2 != 3) goto switchD_0038b7e8_default;
        param_3 = param_3 ^ (uint)param_1[2] << 0x10;
      }
      param_3 = param_3 ^ (uint)param_1[1] << 8;
    }
    bVar2 = *param_1;
LAB_0038b904:
    param_3 = param_3 ^ bVar2;
  }
  else {
    uVar5 = (uint)param_1 & 3;
    uVar6 = (ulong)uVar5;
    if (((ulong)param_1 & 3) == 0) goto joined_r0x0038b81c;
    uVar7 = 0;
    if (uVar5 == 3) {
LAB_0038b758:
      uVar7 = uVar7 | *param_1;
    }
    else {
      if (uVar5 == 2) {
LAB_0038b750:
        uVar7 = uVar7 | (uint)param_1[1] << 8;
        goto LAB_0038b758;
      }
      if (uVar5 == 1) {
        uVar7 = (uint)param_1[2] << 0x10;
        goto LAB_0038b750;
      }
    }
    uVar3 = uVar5 << 3;
    uVar7 = uVar7 << (ulong)uVar3;
    uVar4 = 4 - uVar5;
    param_2 = param_2 - uVar4;
    puVar9 = (uint *)(param_1 + uVar4);
    uVar4 = uVar4 * 8;
    puVar8 = puVar9;
    uVar10 = uVar7;
    if (3 < param_2) {
      do {
        puVar9 = puVar8 + 1;
        uVar7 = *puVar8;
        uVar10 = (uVar7 << (ulong)(uVar4 & 0x1f) | uVar10 >> (ulong)uVar3) * 0x5bd1e995;
        param_2 = param_2 - 4;
        param_3 = (uVar10 ^ uVar10 >> 0x18) * 0x5bd1e995 ^ param_3 * 0x5bd1e995;
        puVar8 = puVar9;
        uVar10 = uVar7;
      } while (3 < param_2);
      lVar11 = param_2 - uVar6;
      if (param_2 < uVar6) goto LAB_0038b7c0;
LAB_0038b880:
      uVar10 = 0;
      if (uVar5 == 1) {
LAB_0038b8ac:
        uVar10 = uVar10 | (byte)*puVar9;
      }
      else {
        if (uVar5 == 2) {
LAB_0038b8a4:
          uVar10 = uVar10 | (uint)*(byte *)((long)puVar9 + 1) << 8;
          goto LAB_0038b8ac;
        }
        if (uVar5 == 3) {
          uVar10 = (uint)*(byte *)((long)puVar9 + 2) << 0x10;
          goto LAB_0038b8a4;
        }
      }
      uVar5 = (uVar10 << (ulong)(uVar4 & 0x1f) | uVar7 >> (ulong)uVar3) * 0x5bd1e995;
      param_3 = (uVar5 ^ uVar5 >> 0x18) * 0x5bd1e995 ^ param_3 * 0x5bd1e995;
      pbVar1 = (byte *)((long)puVar9 + uVar6);
      if (lVar11 != 1) {
        if (lVar11 != 2) {
          if (lVar11 != 3) goto switchD_0038b7e8_default;
          param_3 = param_3 ^ (uint)pbVar1[2] << 0x10;
        }
        param_3 = param_3 ^ (uint)pbVar1[1] << 8;
      }
      bVar2 = *pbVar1;
      goto LAB_0038b904;
    }
    lVar11 = param_2 - uVar6;
    if (uVar6 <= param_2) goto LAB_0038b880;
LAB_0038b7c0:
    uVar5 = 0;
    uVar10 = 0;
    uVar12 = 0;
    switch(param_2) {
    case 3:
      uVar5 = (uint)*(byte *)((long)puVar9 + 2) << 0x10;
    case 2:
      uVar10 = uVar5 | (uint)*(byte *)((long)puVar9 + 1) << 8;
    case 1:
      uVar12 = uVar10 | (byte)*puVar9;
    case 0:
      param_3 = (uVar12 << (ulong)(uVar4 & 0x1f) | uVar7 >> (ulong)uVar3) ^ param_3;
      break;
    default:
      goto switchD_0038b7e8_default;
    }
  }
  param_3 = param_3 * 0x5bd1e995;
switchD_0038b7e8_default:
  uVar5 = (param_3 ^ param_3 >> 0xd) * 0x5bd1e995;
  return uVar5 ^ uVar5 >> 0xf;
}


