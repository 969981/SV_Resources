/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029d6d3c; name: FUN_029d6d3c
 */


undefined8 FUN_029d6d3c(undefined8 param_1,int *param_2,long param_3)

{
  byte *pbVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  uint *puVar9;
  ushort *puVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  byte bVar15;
  float fVar16;
  undefined4 uVar17;
  
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0xd) ||
     (uVar6 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[6], uVar6 == 0)) {
    piVar8 = (int *)0x0;
  }
  else {
    puVar9 = (uint *)((long)param_2 + uVar6);
    piVar8 = (int *)((long)puVar9 + (ulong)*puVar9);
  }
  puVar10 = (ushort *)((long)piVar8 - (long)*piVar8);
  if (*puVar10 < 5) {
    lVar7 = 0;
LAB_029d6f88:
    puVar9 = (uint *)0x0;
  }
  else {
    lVar7 = 0;
    if ((ulong)puVar10[2] != 0) {
      puVar9 = (uint *)((long)piVar8 + (ulong)puVar10[2]);
      lVar7 = (long)puVar9 + (ulong)*puVar9;
    }
    if ((*puVar10 < 7) || ((ulong)puVar10[3] == 0)) goto LAB_029d6f88;
    puVar9 = (uint *)((long)piVar8 + (ulong)puVar10[3]);
    puVar9 = (uint *)((long)puVar9 + (ulong)*puVar9);
  }
  uVar4 = *puVar9;
  uVar11 = *(uint *)(param_3 + 4);
  if (-1 < (int)uVar11) {
    if (uVar4 <= uVar11) {
      return param_1;
    }
    if (*(char *)(param_3 + 2) == '\0') goto LAB_029d6e4c;
    bVar15 = *(byte *)(lVar7 + (ulong)uVar11 + 4);
    *(undefined1 *)(param_3 + 2) = 0;
    fVar16 = (float)NEON_ucvtf((uint)bVar15);
    if ((float)param_1 <= fVar16) goto LAB_029d6e4c;
    *(undefined4 *)(param_3 + 4) = 0xffffffff;
    *(undefined4 *)(param_3 + 0xc) = 1;
  }
  pbVar13 = (byte *)(lVar7 + 6);
  uVar6 = ~(ulong)pbVar13 + lVar7 + 4 + (ulong)uVar4;
  if (uVar6 != 0) {
    pbVar1 = pbVar13 + (uVar6 >> 1);
    bVar15 = *pbVar1;
    pbVar12 = pbVar13;
    while( true ) {
      uVar14 = uVar6 >> 1;
      pbVar13 = pbVar1 + 1;
      uVar6 = uVar6 + (uVar6 >> 1 ^ 0xffffffffffffffff);
      if ((float)param_1 <= (float)bVar15) {
        pbVar13 = pbVar12;
        uVar6 = uVar14;
      }
      if (uVar6 == 0) break;
      pbVar1 = pbVar13 + (uVar6 >> 1);
      bVar15 = *pbVar1;
      pbVar12 = pbVar13;
    }
  }
  uVar11 = ((int)pbVar13 - (int)(lVar7 + 4)) - 2;
LAB_029d6e4c:
  uVar6 = (ulong)uVar11;
  iVar3 = 0;
  if (uVar11 <= uVar4) {
    iVar3 = uVar4 - uVar11;
  }
  if (uVar11 <= uVar4 && uVar4 - uVar11 != 0) {
    lVar7 = lVar7 + 4;
    uVar17 = NEON_ucvtf((uint)*(byte *)(lVar7 + uVar6));
    param_1 = 0;
    uVar14 = (ulong)(*(int *)(param_3 + 0xc) + 2U & 4);
    *(undefined4 *)(param_3 + uVar14 * 4 + 0x10) = uVar17;
    uVar5 = *(undefined8 *)(puVar9 + uVar6 * 3 + 1);
    lVar2 = param_3 + uVar14 * 0x10;
    *(ulong *)(lVar2 + 0x38) = (ulong)(puVar9 + uVar6 * 3 + 1)[2];
    *(undefined8 *)(lVar2 + 0x30) = uVar5;
    if (iVar3 != 1) {
      uVar17 = NEON_ucvtf((uint)*(byte *)(lVar7 + uVar6 + 1));
      *(undefined4 *)(param_3 + (uVar14 | 1) * 4 + 0x10) = uVar17;
      uVar5 = *(undefined8 *)(puVar9 + (uVar6 + 1) * 3 + 1);
      lVar2 = param_3 + (uVar14 | 1) * 0x10;
      *(ulong *)(lVar2 + 0x38) = (ulong)(puVar9 + (uVar6 + 1) * 3 + 1)[2];
      *(undefined8 *)(lVar2 + 0x30) = uVar5;
      if (iVar3 != 2) {
        uVar17 = NEON_ucvtf((uint)*(byte *)(lVar7 + uVar6 + 2));
        *(undefined4 *)(param_3 + (uVar14 | 2) * 4 + 0x10) = uVar17;
        uVar5 = *(undefined8 *)(puVar9 + (uVar6 + 2) * 3 + 1);
        lVar2 = param_3 + (uVar14 | 2) * 0x10;
        *(ulong *)(lVar2 + 0x38) = (ulong)(puVar9 + (uVar6 + 2) * 3 + 1)[2];
        *(undefined8 *)(lVar2 + 0x30) = uVar5;
        if (iVar3 != 3) {
          uVar17 = NEON_ucvtf((uint)*(byte *)(lVar7 + uVar6 + 3));
          *(undefined4 *)(param_3 + (uVar14 | 3) * 4 + 0x10) = uVar17;
          param_1 = *(undefined8 *)(puVar9 + (uVar6 + 3) * 3 + 1);
          lVar7 = param_3 + (uVar14 | 3) * 0x10;
          *(ulong *)(lVar7 + 0x38) = (ulong)(puVar9 + (uVar6 + 3) * 3 + 1)[2];
          *(undefined8 *)(lVar7 + 0x30) = param_1;
        }
      }
    }
  }
  *(uint *)(param_3 + 4) = uVar11 + 4;
  return param_1;
}


