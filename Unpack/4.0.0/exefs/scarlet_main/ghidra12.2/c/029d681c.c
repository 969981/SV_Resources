/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029d681c; name: FUN_029d681c
 */


void FUN_029d681c(float param_1,int *param_2,long param_3)

{
  byte *pbVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  uint *puVar8;
  ushort *puVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulong uVar13;
  undefined4 uVar14;
  byte bVar15;
  float fVar16;
  
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0xd) ||
     (uVar5 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[6], uVar5 == 0)) {
    piVar7 = (int *)0x0;
  }
  else {
    puVar8 = (uint *)((long)param_2 + uVar5);
    piVar7 = (int *)((long)puVar8 + (ulong)*puVar8);
  }
  puVar9 = (ushort *)((long)piVar7 - (long)*piVar7);
  if (*puVar9 < 5) {
    lVar6 = 0;
LAB_029d69fc:
    puVar8 = (uint *)0x0;
  }
  else {
    lVar6 = 0;
    if ((ulong)puVar9[2] != 0) {
      puVar8 = (uint *)((long)piVar7 + (ulong)puVar9[2]);
      lVar6 = (long)puVar8 + (ulong)*puVar8;
    }
    if ((*puVar9 < 7) || ((ulong)puVar9[3] == 0)) goto LAB_029d69fc;
    puVar8 = (uint *)((long)piVar7 + (ulong)puVar9[3]);
    puVar8 = (uint *)((long)puVar8 + (ulong)*puVar8);
  }
  uVar4 = *puVar8;
  uVar10 = *(uint *)(param_3 + 4);
  if (-1 < (int)uVar10) {
    if (uVar4 <= uVar10) {
      return;
    }
    if (*(char *)(param_3 + 2) == '\0') goto LAB_029d692c;
    bVar15 = *(byte *)(lVar6 + (ulong)uVar10 + 4);
    *(undefined1 *)(param_3 + 2) = 0;
    fVar16 = (float)NEON_ucvtf((uint)bVar15);
    if (param_1 <= fVar16) goto LAB_029d692c;
    *(undefined4 *)(param_3 + 4) = 0xffffffff;
    *(undefined4 *)(param_3 + 0xc) = 1;
  }
  pbVar12 = (byte *)(lVar6 + 6);
  uVar5 = ~(ulong)pbVar12 + lVar6 + 4 + (ulong)uVar4;
  if (uVar5 != 0) {
    pbVar1 = pbVar12 + (uVar5 >> 1);
    bVar15 = *pbVar1;
    pbVar11 = pbVar12;
    while( true ) {
      uVar13 = uVar5 >> 1;
      pbVar12 = pbVar1 + 1;
      uVar5 = uVar5 + (uVar5 >> 1 ^ 0xffffffffffffffff);
      if (param_1 <= (float)bVar15) {
        pbVar12 = pbVar11;
        uVar5 = uVar13;
      }
      if (uVar5 == 0) break;
      pbVar1 = pbVar12 + (uVar5 >> 1);
      bVar15 = *pbVar1;
      pbVar11 = pbVar12;
    }
  }
  uVar10 = ((int)pbVar12 - (int)(lVar6 + 4)) - 2;
LAB_029d692c:
  uVar5 = (ulong)uVar10;
  iVar3 = 0;
  if (uVar10 <= uVar4) {
    iVar3 = uVar4 - uVar10;
  }
  if (uVar10 <= uVar4 && uVar4 - uVar10 != 0) {
    uVar13 = (ulong)(*(int *)(param_3 + 0xc) + 2U & 4);
    lVar6 = lVar6 + 4;
    uVar14 = NEON_ucvtf((uint)*(byte *)(lVar6 + uVar5));
    lVar2 = param_3 + uVar13 * 4;
    *(undefined4 *)(lVar2 + 0x10) = uVar14;
    *(uint *)(lVar2 + 0x30) = puVar8[uVar5 + 1];
    if (iVar3 != 1) {
      uVar13 = uVar13 << 2;
      uVar14 = NEON_ucvtf((uint)*(byte *)(lVar6 + uVar5 + 1));
      lVar2 = param_3 + (uVar13 | 4);
      *(undefined4 *)(lVar2 + 0x10) = uVar14;
      *(uint *)(lVar2 + 0x30) = puVar8[uVar5 + 2];
      if (iVar3 != 2) {
        uVar14 = NEON_ucvtf((uint)*(byte *)(lVar6 + uVar5 + 2));
        lVar2 = param_3 + (uVar13 | 8);
        *(undefined4 *)(lVar2 + 0x10) = uVar14;
        *(uint *)(lVar2 + 0x30) = puVar8[uVar5 + 3];
        if (iVar3 != 3) {
          uVar14 = NEON_ucvtf((uint)*(byte *)(lVar6 + uVar5 + 3));
          lVar6 = param_3 + (uVar13 | 0xc);
          *(undefined4 *)(lVar6 + 0x10) = uVar14;
          *(uint *)(lVar6 + 0x30) = puVar8[uVar5 + 4];
        }
      }
    }
  }
  *(uint *)(param_3 + 4) = uVar10 + 4;
  return;
}


