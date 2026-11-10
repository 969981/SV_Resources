/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f5b6fc; name: FUN_00f5b6fc
 */


ulong FUN_00f5b6fc(long *param_1,long param_2,long param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  ulong uVar9;
  uint uVar10;
  
  if ((char)param_1[10] == '\0') {
    if ((char)param_1[0xb] == '\0') {
      *(undefined1 *)(param_1 + 0xb) = 1;
    }
    uVar9 = param_1[10];
    goto LAB_00f5b7c0;
  }
  uVar10 = *(uint *)((long)param_1 + 0x54);
  lVar6 = param_1[8];
  if (lVar6 == 0) {
    if (param_1[9] != 0) {
      uVar4 = (**(code **)(*param_1 + 0x88))(param_1);
      uVar3 = 0;
      if (uVar4 != 0) {
        uVar3 = uVar10 / uVar4;
      }
      uVar5 = (**(code **)(*param_1 + 0x88))(param_1);
      uVar4 = 0;
      if (uVar5 != 0) {
        uVar4 = uVar10 / uVar5;
      }
      uVar10 = uVar10 - uVar4 * uVar5;
      lVar6 = *(long *)(param_1[9] + (ulong)uVar3 * 8);
      goto LAB_00f5b730;
    }
  }
  else {
LAB_00f5b730:
    if (lVar6 != 0) {
      pbVar8 = *(byte **)(param_2 + 8);
      puVar7 = &DAT_cbf29ce484222645;
      bVar1 = *pbVar8;
      while (bVar1 != 0) {
        pbVar8 = pbVar8 + 1;
        puVar7 = (undefined1 *)(((ulong)puVar7 ^ (ulong)bVar1) * 0x100000001b3);
        bVar1 = *pbVar8;
      }
      *(undefined1 **)(lVar6 + (ulong)uVar10 * 0x10) = puVar7;
    }
  }
  uVar10 = *(int *)((long)param_1 + 0x54) + 1;
  uVar9 = param_1[10];
  *(uint *)((long)param_1 + 0x54) = uVar10;
  iVar2 = (**(code **)(*param_1 + 0x88))(param_1);
  uVar3 = (**(code **)(*param_1 + 0xa0))(param_1);
  if (iVar2 * (uVar3 & 0xffff) <= uVar10) {
    *(undefined1 *)(param_1 + 10) = 0;
  }
LAB_00f5b7c0:
  if ((uVar9 & 1) != 0) {
    if (param_1[8] == 0) {
      if (param_1[9] == 0) {
        return uVar9;
      }
      uVar3 = (**(code **)(*param_1 + 0x88))(param_1);
      uVar10 = 0;
      uVar4 = (uint)(uVar9 >> 0x20);
      if (uVar3 != 0) {
        uVar10 = uVar4 / uVar3;
      }
      uVar5 = (**(code **)(*param_1 + 0x88))(param_1);
      uVar3 = 0;
      if (uVar5 != 0) {
        uVar3 = uVar4 / uVar5;
      }
      lVar6 = *(long *)(param_1[9] + (ulong)uVar10 * 8) + (ulong)(uVar4 - uVar3 * uVar5) * 0x10;
    }
    else {
      lVar6 = param_1[8] + (uVar9 >> 0x20) * 0x10;
    }
    if (lVar6 != 0) {
      *(undefined1 *)(lVar6 + 8) = *(undefined1 *)(param_3 + 8);
    }
  }
  return uVar9;
}


