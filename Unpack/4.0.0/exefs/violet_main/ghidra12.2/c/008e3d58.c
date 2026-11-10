/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008e3d58; name: FUN_008e3d58
 */


void FUN_008e3d58(undefined8 param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  
  lVar11 = *(long *)(param_2 + 0x418);
  fVar14 = *(float *)(param_2 + 0x4c);
  lVar12 = *(long *)(lVar11 + 0x18);
  if ((lVar12 == 0) || (*(char *)(lVar11 + 0x10) == '\0')) {
    return;
  }
  lVar9 = *(long *)(*(long *)(param_2 + 0x238) + 0x338);
  lVar4 = FUN_008ee7bc(param_2 + 0x7a8,*(undefined4 *)(lVar11 + 0x38));
  lVar10 = 0;
  do {
    iVar5 = *(int *)(lVar12 + 0x70);
    iVar2 = *(int *)(lVar12 + 0x7c);
    iVar3 = *(int *)(lVar11 + 0x20);
    lVar13 = *(long *)(lVar12 + 0x68);
    if (0 < iVar5) {
      fVar15 = *(float *)(lVar9 + 0x34) + (1.0 - fVar14) * (1.0 - *(float *)(lVar9 + 0x34));
      lVar7 = *(long *)(lVar12 + 0x58);
      iVar6 = 0;
      do {
        iVar6 = iVar6 + 1;
        uVar17 = *(undefined8 *)(lVar9 + 0x38);
        lVar7 = *(long *)(lVar7 + 0x58);
        *(ulong *)(lVar7 + 0x18) =
             CONCAT44(fVar15 * ((float)((ulong)*(undefined8 *)(lVar7 + 0x18) >> 0x20) + fVar14 * 0.0
                               ),
                      fVar15 * ((float)*(undefined8 *)(lVar7 + 0x18) +
                               fVar14 * *(float *)(lVar9 + 0x40)));
        *(ulong *)(lVar7 + 0x10) =
             CONCAT44(fVar15 * ((float)((ulong)*(undefined8 *)(lVar7 + 0x10) >> 0x20) +
                               fVar14 * (float)((ulong)uVar17 >> 0x20)),
                      fVar15 * ((float)*(undefined8 *)(lVar7 + 0x10) + fVar14 * (float)uVar17));
        iVar5 = *(int *)(lVar12 + 0x70);
      } while (iVar6 < iVar5);
      if (0 < iVar5) {
        puVar8 = *(undefined8 **)(lVar12 + 0x58);
        iVar6 = 0;
        do {
          puVar8 = (undefined8 *)puVar8[0xb];
          iVar6 = iVar6 + 1;
          puVar8[1] = CONCAT44((float)((ulong)puVar8[1] >> 0x20) +
                               fVar14 * (float)((ulong)puVar8[3] >> 0x20),
                               (float)puVar8[1] + fVar14 * (float)puVar8[3]);
          *puVar8 = CONCAT44((float)((ulong)*puVar8 >> 0x20) +
                             fVar14 * (float)((ulong)puVar8[2] >> 0x20),
                             (float)*puVar8 + fVar14 * (float)puVar8[2]);
          iVar5 = *(int *)(lVar12 + 0x70);
        } while (iVar6 < iVar5);
      }
    }
    iVar6 = iVar5 + -1;
    fVar15 = *(float *)(param_2 + 0x4c) + *(float *)(lVar12 + 0x80);
    fVar16 = *(float *)(lVar12 + 0x88);
    *(float *)(lVar12 + 0x80) = fVar15;
    *(float *)(lVar12 + 0x88) = fVar15;
    if (iVar6 == 0 || iVar5 < 1) {
      plVar1 = (long *)(lVar11 + 0x18);
      if (lVar10 != 0) {
        plVar1 = (long *)(lVar10 + 0x68);
      }
      *plVar1 = lVar13;
      lVar7 = *(long *)PTR_DAT_047d2630;
      fVar15 = *(float *)(*(long *)(*(long *)(param_2 + 0x238) + 0x338) + 0x18);
      uVar17 = *(undefined8 *)(lVar12 + 0x50);
      *(int *)(param_2 + 0x838) = *(int *)(param_2 + 0x838) + -1;
      *(ulong *)(param_2 + 0x830) =
           *(long *)(param_2 + 0x830) - ((ulong)(uint)(int)fVar15 * 0x70 + 0xff & 0xffffffff00);
      FUN_008d4410(uVar17,1);
      *(undefined8 *)(lVar12 + 0x50) = 0;
      *(undefined1 *)(lVar12 + 0x90) = 0;
      *(int *)(lVar7 + 0x2c) = *(int *)(lVar7 + 0x2c) + -1;
    }
    else {
      lVar7 = lVar4 + (long)(iVar3 * iVar2) * 0x50;
      if (0.0 < (float)(int)fVar15 - (float)(int)fVar16) {
        *(int *)(lVar12 + 0x70) = iVar6;
        iVar5 = iVar6;
      }
      lVar10 = lVar12;
      if (*(int *)(lVar9 + 0x28) == 0) {
        FUN_008e3540(param_1,lVar7,lVar12,param_2,lVar9);
      }
      else {
        FUN_008e388c((float)(*(int *)(lVar12 + 0x74) - iVar5) * (float)(*(int *)(lVar9 + 0x28) + 1),
                     param_1,lVar7,lVar12,param_2,lVar9);
      }
    }
    lVar12 = lVar13;
  } while (lVar13 != 0);
  FUN_008ee7c8(param_2 + 0x7a8);
  return;
}


