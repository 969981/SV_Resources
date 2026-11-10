/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03406050; name: FUN_03406050
 */


uint * FUN_03406050(long *param_1,long *param_2,uint *param_3)

{
  uint uVar1;
  ulong *puVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  uint *puVar20;
  uint local_64;
  
  bVar5 = *(byte *)(param_1 + 1);
  uVar18 = (ulong)bVar5 + 1;
  lVar19 = *(long *)(param_1[3] + 0x40);
  uVar12 = *(uint *)*param_1;
  uVar11 = (uint)uVar18 & 0x1f;
  uVar18 = uVar18 >> 5;
  puVar2 = (ulong *)((uint *)*param_1 + uVar18);
  lVar16 = param_2[7];
  *(char *)(param_1 + 1) = (char)uVar11;
  iVar17 = *(int *)((long)param_1 + 0xc) - (int)uVar18;
  *(int *)((long)param_1 + 0xc) = iVar17;
  *param_1 = (long)puVar2;
  puVar10 = PTR_DAT_047e6c20;
  if ((uVar12 >> (ulong)(bVar5 & 0x1f) & 1) == 0) {
    param_3 = (uint *)0x0;
  }
  else {
    iVar3 = *(int *)(&DAT_03cabdec + (long)(int)lVar16 * 4);
    iVar9 = iVar3 + -1;
    uVar12 = 0;
    if (iVar9 != 0) {
      uVar12 = 0x20 - (int)LZCOUNT(iVar9);
    }
    uVar18 = *puVar2;
    uVar4 = *(uint *)(PTR_DAT_047e6c20 + (ulong)uVar12 * 4);
    uVar1 = uVar12 + uVar11;
    *(byte *)(param_1 + 1) = (byte)uVar1 & 0x1f;
    *(uint *)((long)param_1 + 0xc) = iVar17 - (uVar1 >> 5);
    *param_1 = (long)((long)puVar2 + (ulong)(uVar1 >> 5) * 4);
    *param_3 = uVar4 & (uint)(uVar18 >> uVar11);
    uVar11 = *(uint *)(puVar10 + (ulong)uVar12 * 4);
    bVar5 = *(byte *)(param_1 + 1);
    uVar14 = *(ulong *)*param_1;
    uVar18 = (ulong)uVar12 + (ulong)bVar5;
    uVar15 = uVar18 >> 5;
    *(byte *)(param_1 + 1) = (byte)uVar18 & 0x1f;
    *param_1 = *param_1 + uVar15 * 4;
    *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) - (int)uVar15;
    param_3[1] = uVar11 & (uint)(uVar14 >> ((ulong)bVar5 & 0x3f));
    if (0 < (int)param_2[6]) {
      lVar16 = 0;
      local_64 = 2;
      do {
        uVar14 = (ulong)*(byte *)(param_2[1] + lVar16);
        pbVar13 = (byte *)(*param_2 + uVar14 * 0xb);
        bVar5 = *pbVar13;
        uVar18 = (ulong)bVar5;
        bVar6 = pbVar13[1];
        if (bVar6 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = FUN_03407b60(lVar19 + (ulong)*(byte *)(*param_2 + uVar14 * 0xb + 2) * 0x20,
                                param_1);
        }
        if (bVar5 != 0) {
          puVar20 = param_3 + local_64;
          do {
            uVar12 = uVar11 & ~(-1 << (ulong)(bVar6 & 0x1f));
            uVar11 = (int)uVar11 >> (bVar6 & 0x1f);
            uVar15 = (ulong)*(byte *)(*param_2 + uVar14 * 0xb + (long)(int)uVar12 + 3);
            if (uVar15 == 0xff) {
              uVar12 = 0;
            }
            else {
              uVar12 = FUN_03407b60(lVar19 + uVar15 * 0x20,param_1);
            }
            uVar18 = uVar18 - 1;
            *puVar20 = uVar12;
            puVar20 = puVar20 + 1;
          } while (uVar18 != 0);
        }
        local_64 = local_64 + bVar5;
        lVar16 = lVar16 + 1;
      } while (lVar16 < (int)param_2[6]);
    }
    if (2 < *(int *)((long)param_2 + 0x34)) {
      lVar16 = 0;
      do {
        lVar19 = param_2[2];
        iVar9 = (param_3[*(byte *)(param_2[4] + lVar16)] & 0x7fff) -
                (param_3[*(byte *)(param_2[5] + lVar16)] & 0x7fff);
        uVar11 = (uint)*(ushort *)(lVar19 + (ulong)*(byte *)(param_2[5] + lVar16) * 2);
        iVar17 = -iVar9;
        if (-1 < iVar9) {
          iVar17 = iVar9;
        }
        iVar8 = *(ushort *)(lVar19 + (ulong)*(byte *)(param_2[4] + lVar16) * 2) - uVar11;
        iVar7 = 0;
        if (iVar8 != 0) {
          iVar7 = (int)(iVar17 * (*(ushort *)(lVar19 + lVar16 * 2 + 4) - uVar11)) / iVar8;
        }
        iVar17 = -iVar7;
        if (-1 < iVar9) {
          iVar17 = iVar7;
        }
        uVar11 = iVar17 + (param_3[*(byte *)(param_2[5] + lVar16)] & 0x7fff);
        uVar12 = param_3[lVar16 + 2];
        if (uVar12 == 0) {
          param_3[lVar16 + 2] = uVar11 | 0x8000;
        }
        else {
          uVar4 = iVar3 - uVar11;
          uVar1 = uVar4;
          if ((int)uVar11 <= (int)uVar4) {
            uVar1 = uVar11;
          }
          if ((int)uVar12 < (int)(uVar1 * 2)) {
            if ((uVar12 & 1) == 0) {
              iVar17 = (int)uVar12 >> 1;
            }
            else {
              iVar17 = -((int)(uVar12 + 1) >> 1);
            }
          }
          else {
            iVar17 = uVar4 + ~uVar12;
            if ((int)uVar11 < (int)uVar4) {
              iVar17 = uVar12 - uVar11;
            }
          }
          param_3[lVar16 + 2] = iVar17 + uVar11;
          param_3[*(byte *)(param_2[5] + lVar16)] = param_3[*(byte *)(param_2[5] + lVar16)] & 0x7fff
          ;
          param_3[*(byte *)(param_2[4] + lVar16)] = param_3[*(byte *)(param_2[4] + lVar16)] & 0x7fff
          ;
        }
        lVar19 = lVar16 + 3;
        lVar16 = lVar16 + 1;
      } while (lVar19 < *(int *)((long)param_2 + 0x34));
    }
  }
  return param_3;
}


