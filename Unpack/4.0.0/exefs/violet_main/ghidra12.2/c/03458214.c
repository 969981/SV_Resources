/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03458214; name: FUN_03458214
 */


undefined8 FUN_03458214(float param_1,float param_2,float param_3,long param_4,uint param_5)

{
  long lVar1;
  float *pfVar2;
  byte bVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  float *pfVar10;
  uint uVar11;
  uint uVar12;
  size_t sVar13;
  float local_64;
  
  puVar4 = PTR_DAT_047e2fd0;
  local_64 = *(float *)(PTR_DAT_047e70a8 + (ulong)param_5 * 4);
  pbVar7 = *(byte **)(param_4 + 0x20);
  if (pbVar7 == (byte *)0x0) {
    if (*(float *)(PTR_DAT_047e70a8 + (ulong)param_5 * 4) == param_1) goto LAB_03458384;
    sVar13 = 0;
  }
  else {
    bVar3 = *pbVar7;
    sVar13 = (size_t)bVar3;
    uVar11 = (uint)bVar3;
    uVar12 = uVar11;
    if (bVar3 < 2) {
      uVar12 = 1;
    }
    uVar6 = (ulong)uVar12;
    pfVar10 = (float *)(pbVar7 + ((ulong)(uVar11 + 4) & 0x1fc));
    uVar9 = uVar6;
    pbVar8 = pbVar7;
    do {
      pbVar8 = pbVar8 + 1;
      if ((uint)*pbVar8 == (param_5 & 0xff)) goto LAB_034582a4;
      pfVar10 = pfVar10 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    pfVar10 = (float *)0x0;
LAB_034582a4:
    pfVar2 = &local_64;
    if (pfVar10 != (float *)0x0) {
      pfVar2 = pfVar10;
    }
    if (*pfVar2 == param_1) goto LAB_03458384;
    pfVar10 = (float *)(pbVar7 + ((ulong)(uVar11 + 4) & 0x1fc));
    do {
      pbVar7 = pbVar7 + 1;
      if ((uint)*pbVar7 == (param_5 & 0xff)) goto LAB_03458380;
      pfVar10 = pfVar10 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar12 = (int)sVar13 + 5U & 0x1fc;
  lVar1 = sVar13 + 1;
  puVar5 = (undefined1 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(1,uVar12 + (int)lVar1 * 4);
  if (puVar5 == (undefined1 *)0x0) {
    return 2;
  }
  if (*(long *)(param_4 + 0x20) != 0) {
    memcpy(puVar5 + 1,(void *)(*(long *)(param_4 + 0x20) + 1),sVar13);
    memcpy(puVar5 + uVar12,(void *)(*(long *)(param_4 + 0x20) + (ulong)((int)sVar13 + 4U & 0x1fc)),
           sVar13 << 2);
    (**(code **)(puVar4 + 0x30))(1,*(undefined8 *)(param_4 + 0x20));
  }
  pfVar10 = (float *)(puVar5 + sVar13 * 4 + (ulong)uVar12);
  puVar5[lVar1] = (char)param_5;
  *puVar5 = (char)lVar1;
  *(undefined1 **)(param_4 + 0x20) = puVar5;
LAB_03458380:
  *pfVar10 = param_1;
LAB_03458384:
  puVar4 = PTR_DAT_047e2fd0;
  pbVar7 = *(byte **)(param_4 + 0x28);
  if (param_2 == 0.0 && param_3 == 0.0) {
    if (pbVar7 != (byte *)0x0) {
      bVar3 = *pbVar7;
      uVar12 = (uint)bVar3;
      if (bVar3 < 2) {
        uVar12 = 1;
      }
      uVar9 = (ulong)uVar12;
      pbVar8 = pbVar7;
      do {
        pbVar8 = pbVar8 + 1;
        if ((uint)*pbVar8 == (param_5 & 0xff)) goto LAB_034583a8;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    return 1;
  }
  if (pbVar7 == (byte *)0x0) {
    sVar13 = 0;
  }
  else {
    bVar3 = *pbVar7;
LAB_034583a8:
    sVar13 = (size_t)bVar3;
    uVar11 = (uint)bVar3;
    uVar12 = uVar11 + 4;
    if (uVar11 < 2) {
      uVar11 = 1;
    }
    uVar9 = (ulong)uVar11;
    pfVar10 = (float *)(pbVar7 + ((ulong)uVar12 & 0x1fc));
    do {
      pbVar7 = pbVar7 + 1;
      if ((uint)*pbVar7 == (param_5 & 0xff)) goto LAB_0345849c;
      pfVar10 = pfVar10 + 2;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar12 = (int)sVar13 + 5U & 0x1fc;
  lVar1 = sVar13 + 1;
  puVar5 = (undefined1 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(1,uVar12 + (int)lVar1 * 8);
  if (puVar5 == (undefined1 *)0x0) {
    return 2;
  }
  if (*(long *)(param_4 + 0x28) != 0) {
    memcpy(puVar5 + 1,(void *)(*(long *)(param_4 + 0x28) + 1),sVar13);
    memcpy(puVar5 + uVar12,(void *)(*(long *)(param_4 + 0x28) + (ulong)((int)sVar13 + 4U & 0x1fc)),
           sVar13 << 3);
    (**(code **)(puVar4 + 0x30))(1,*(undefined8 *)(param_4 + 0x28));
  }
  pfVar10 = (float *)(puVar5 + sVar13 * 8 + (ulong)uVar12);
  puVar5[lVar1] = (char)param_5;
  *puVar5 = (char)lVar1;
  *(undefined1 **)(param_4 + 0x28) = puVar5;
LAB_0345849c:
  *pfVar10 = param_2;
  pfVar10[1] = param_3;
  return 1;
}


