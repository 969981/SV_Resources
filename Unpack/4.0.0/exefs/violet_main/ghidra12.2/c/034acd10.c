/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034acd10; name: FUN_034acd10
 */


void FUN_034acd10(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  ulong uVar6;
  uint uVar7;
  undefined *puVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  long lVar14;
  byte *pbVar15;
  ushort *puVar16;
  ushort *puVar17;
  float *pfVar18;
  ushort *puVar19;
  ulong uVar20;
  float fVar21;
  
  puVar8 = PTR_DAT_047e7180;
  pbVar12 = *(byte **)(param_1 + 0xb0);
  if (pbVar12 == (byte *)0x0) {
    pbVar13 = (byte *)0x0;
    pfVar18 = (float *)0x0;
    goto LAB_034acd7c;
  }
  pbVar13 = pbVar12 + 1;
  pfVar18 = (float *)(pbVar12 + ((ulong)(*pbVar12 + 4) & 0x1fc));
  do {
    pbVar15 = pbVar12 + (ulong)*pbVar12 + 1;
    while( true ) {
      if (pbVar13 == pbVar15) {
        if ((*(ulong **)(param_1 + 0x40) == (ulong *)0x0) ||
           (uVar20 = **(ulong **)(param_1 + 0x40), uVar20 == 0)) goto LAB_034acef4;
        iVar11 = 0;
        plVar9 = (long *)PTR_DAT_047e6fd8;
        goto LAB_034ace1c;
      }
      bVar5 = *pbVar13;
      if (((bVar5 < 0x4a) &&
          ((*(uint *)(param_2 + ((ulong)(bVar5 >> 3) & 0x1c) + 0x80) >> ((ulong)bVar5 & 0x1f) & 1)
           != 0)) && (uVar3 = *(uint *)(puVar8 + (ulong)bVar5 * 4), uVar3 != 0x1b)) {
        *(float *)(param_2 + (ulong)uVar3 * 4) = *(float *)(param_2 + (ulong)uVar3 * 4) + *pfVar18;
        pbVar12 = *(byte **)(param_1 + 0xb0);
      }
      pbVar13 = pbVar13 + 1;
      pfVar18 = pfVar18 + 1;
      if (pbVar12 != (byte *)0x0) break;
LAB_034acd7c:
      pbVar15 = (byte *)0x0;
    }
  } while( true );
LAB_034ace1c:
  uVar6 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
  uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
  uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
  uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
  lVar14 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20);
  uVar3 = iVar11 + (int)lVar14;
  uVar20 = uVar20 >> (lVar14 + 1U & 0x3f);
  if (((0xfffbffc018e78ffU >> ((ulong)uVar3 & 0x3f) & 1) != 0) &&
     (uVar4 = *(uint *)(&DAT_03d982b4 + (ulong)uVar3 * 4),
     (*(uint *)(param_2 + ((ulong)(uVar4 >> 3) & 0x1ffffffc) + 0x80) >> ((ulong)uVar4 & 0x1f) & 1)
     != 0)) {
    lVar14 = *plVar9;
    fVar21 = 0.0;
    uVar2 = *(uint *)(lVar14 + 0x20);
    if (uVar2 != 0) {
      uVar1 = uVar3 + (int)(param_1 + 0x38);
      uVar7 = 0;
      if (uVar2 != 0) {
        uVar7 = uVar1 / uVar2;
      }
      fVar21 = 0.0;
      plVar10 = *(long **)(*(long *)(lVar14 + 0x18) + (ulong)(uVar1 - uVar7 * uVar2) * 8);
      if (plVar10 != (long *)0x0) {
        do {
          if ((*plVar10 == param_1 + 0x38) && (*(uint *)(plVar10 + 1) == uVar3)) {
            if (*(int *)((long)plVar10 + 0x4c) == 3) {
              fVar21 = (float)FUN_0348209c();
            }
            else {
              fVar21 = (float)FUN_03482338(lVar14,plVar10,param_3);
            }
            plVar9 = (long *)PTR_DAT_047e6fd8;
            goto LAB_034aced4;
          }
          plVar10 = (long *)plVar10[2];
        } while (plVar10 != (long *)0x0);
        fVar21 = 0.0;
      }
    }
LAB_034aced4:
    uVar4 = *(uint *)(puVar8 + (ulong)uVar4 * 4);
    if (uVar4 != 0x1b) {
      *(float *)(param_2 + (ulong)uVar4 * 4) = *(float *)(param_2 + (ulong)uVar4 * 4) + fVar21;
    }
  }
  iVar11 = uVar3 + 1;
  if (uVar20 == 0) {
LAB_034acef4:
    if ((*(char *)(param_1 + 0x28) != '\0') &&
       (plVar9 = (long *)(**(code **)(*(long *)(param_1 + 0x20) + 0x80))(), plVar9 != (long *)0x0))
    {
      for (lVar14 = *plVar9; lVar14 != 0; lVar14 = *(long *)(lVar14 + 0x10)) {
        puVar16 = *(ushort **)(lVar14 + 0x20);
        if (puVar16 == (ushort *)0x0) {
          puVar17 = (ushort *)0x0;
          pfVar18 = (float *)0x0;
        }
        else {
          puVar17 = puVar16 + 1;
          pfVar18 = (float *)((long)puVar16 + ((ulong)((uint)*puVar16 * 2 + 5) & 0x3fffc));
        }
        while( true ) {
          if (puVar16 == (ushort *)0x0) {
            puVar19 = (ushort *)0x0;
          }
          else {
            puVar19 = puVar16 + (ulong)*puVar16 + 1;
          }
          if (puVar17 == puVar19) break;
          if ((((0xfffbffc018e78ffU >> ((ulong)*puVar17 & 0x3f) & 1) != 0) &&
              (uVar3 = *(uint *)(&DAT_03d982b4 + (ulong)*puVar17 * 4),
              (*(uint *)(param_2 + ((ulong)(uVar3 >> 3) & 0x1ffffffc) + 0x80) >>
               ((ulong)uVar3 & 0x1f) & 1) != 0)) &&
             (uVar3 = *(uint *)(puVar8 + (ulong)uVar3 * 4), uVar3 != 0x1b)) {
            *(float *)(param_2 + (ulong)uVar3 * 4) =
                 *(float *)(param_2 + (ulong)uVar3 * 4) + *pfVar18;
            puVar16 = *(ushort **)(lVar14 + 0x20);
          }
          puVar17 = puVar17 + 1;
          pfVar18 = pfVar18 + 4;
        }
      }
    }
    return;
  }
  goto LAB_034ace1c;
}


