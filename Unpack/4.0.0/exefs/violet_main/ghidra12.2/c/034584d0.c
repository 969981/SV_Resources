/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034584d0; name: FUN_034584d0
 */


undefined8 FUN_034584d0(long param_1,uint param_2,int param_3,int param_4,int param_5)

{
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  size_t sVar12;
  int local_64;
  
  puVar3 = PTR_DAT_047e2fd0;
  local_64 = *(int *)(PTR_DAT_047e70a8 + (ulong)param_2 * 4);
  pbVar6 = *(byte **)(param_1 + 0x20);
  if (pbVar6 == (byte *)0x0) {
    if (*(int *)(PTR_DAT_047e70a8 + (ulong)param_2 * 4) == param_3) goto LAB_03458638;
    sVar12 = 0;
  }
  else {
    bVar2 = *pbVar6;
    sVar12 = (size_t)bVar2;
    uVar10 = (uint)bVar2;
    uVar11 = uVar10;
    if (bVar2 < 2) {
      uVar11 = 1;
    }
    uVar5 = (ulong)uVar11;
    pbVar9 = pbVar6 + ((ulong)(uVar10 + 4) & 0x1fc);
    uVar8 = uVar5;
    pbVar7 = pbVar6;
    do {
      pbVar7 = pbVar7 + 1;
      if ((uint)*pbVar7 == (param_2 & 0xff)) goto LAB_0345855c;
      pbVar9 = pbVar9 + 4;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    pbVar9 = (byte *)0x0;
LAB_0345855c:
    pbVar7 = (byte *)&local_64;
    if (pbVar9 != (byte *)0x0) {
      pbVar7 = pbVar9;
    }
    if (*(int *)pbVar7 == param_3) goto LAB_03458638;
    pbVar9 = pbVar6 + ((ulong)(uVar10 + 4) & 0x1fc);
    do {
      pbVar6 = pbVar6 + 1;
      if ((uint)*pbVar6 == (param_2 & 0xff)) goto LAB_03458634;
      pbVar9 = pbVar9 + 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  uVar11 = (int)sVar12 + 5U & 0x1fc;
  lVar1 = sVar12 + 1;
  puVar4 = (undefined1 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(1,uVar11 + (int)lVar1 * 4);
  if (puVar4 == (undefined1 *)0x0) {
    return 2;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    memcpy(puVar4 + 1,(void *)(*(long *)(param_1 + 0x20) + 1),sVar12);
    memcpy(puVar4 + uVar11,(void *)(*(long *)(param_1 + 0x20) + (ulong)((int)sVar12 + 4U & 0x1fc)),
           sVar12 << 2);
    (**(code **)(puVar3 + 0x30))(1,*(undefined8 *)(param_1 + 0x20));
  }
  pbVar9 = puVar4 + sVar12 * 4 + (ulong)uVar11;
  puVar4[lVar1] = (char)param_2;
  *puVar4 = (char)lVar1;
  *(undefined1 **)(param_1 + 0x20) = puVar4;
LAB_03458634:
  *(int *)pbVar9 = param_3;
LAB_03458638:
  puVar3 = PTR_DAT_047e2fd0;
  pbVar6 = *(byte **)(param_1 + 0x28);
  if (param_5 == 0 && param_4 == 0) {
    if (pbVar6 != (byte *)0x0) {
      bVar2 = *pbVar6;
      uVar11 = (uint)bVar2;
      if (bVar2 < 2) {
        uVar11 = 1;
      }
      uVar8 = (ulong)uVar11;
      pbVar9 = pbVar6;
      do {
        pbVar9 = pbVar9 + 1;
        if ((uint)*pbVar9 == (param_2 & 0xff)) goto LAB_0345864c;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    return 1;
  }
  if (pbVar6 == (byte *)0x0) {
    sVar12 = 0;
  }
  else {
    bVar2 = *pbVar6;
LAB_0345864c:
    sVar12 = (size_t)bVar2;
    uVar10 = (uint)bVar2;
    uVar11 = uVar10 + 4;
    if (uVar10 < 2) {
      uVar10 = 1;
    }
    uVar8 = (ulong)uVar10;
    pbVar9 = pbVar6 + ((ulong)uVar11 & 0x1fc);
    do {
      pbVar6 = pbVar6 + 1;
      if ((uint)*pbVar6 == (param_2 & 0xff)) goto LAB_03458740;
      pbVar9 = pbVar9 + 8;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar11 = (int)sVar12 + 5U & 0x1fc;
  lVar1 = sVar12 + 1;
  puVar4 = (undefined1 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(1,uVar11 + (int)lVar1 * 8);
  if (puVar4 == (undefined1 *)0x0) {
    return 2;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    memcpy(puVar4 + 1,(void *)(*(long *)(param_1 + 0x28) + 1),sVar12);
    memcpy(puVar4 + uVar11,(void *)(*(long *)(param_1 + 0x28) + (ulong)((int)sVar12 + 4U & 0x1fc)),
           sVar12 << 3);
    (**(code **)(puVar3 + 0x30))(1,*(undefined8 *)(param_1 + 0x28));
  }
  pbVar9 = puVar4 + sVar12 * 8 + (ulong)uVar11;
  puVar4[lVar1] = (char)param_2;
  *puVar4 = (char)lVar1;
  *(undefined1 **)(param_1 + 0x28) = puVar4;
LAB_03458740:
  *(int *)pbVar9 = param_4;
  *(int *)(pbVar9 + 4) = param_5;
  return 1;
}


