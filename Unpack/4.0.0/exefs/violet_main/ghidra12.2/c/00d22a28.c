/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d22a28; name: FUN_00d22a28
 */


void FUN_00d22a28(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  uint *puVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  double local_60;
  double dStack_58;
  double local_50;
  double dStack_48;
  
  lVar1 = **(long **)(param_1 + 0xc0) + param_2 * 0x80;
  local_b0 = 0;
  uStack_a8 = 0;
  puVar3 = (undefined8 *)
           (*(long *)(*(long *)(param_1 + 0x18) + 0x38) + (*(ulong *)(lVar1 + 8) & 0xffffff) * 0xc0)
  ;
  fVar13 = (float)*(undefined8 *)(lVar1 + 0x40);
  fVar7 = (float)((ulong)*(undefined8 *)(lVar1 + 0x40) >> 0x20);
  fVar9 = fVar7 + fVar7;
  fVar14 = (float)*(undefined8 *)(lVar1 + 0x48);
  fVar10 = fVar14 + fVar14;
  fVar11 = (fVar13 + fVar13) * fVar13;
  fVar8 = (float)((ulong)*(undefined8 *)(lVar1 + 0x48) >> 0x20);
  fVar6 = (fVar13 + fVar13) * fVar8;
  fVar16 = (float)((ulong)*(undefined8 *)(lVar1 + 0x30) >> 0x20);
  fVar22 = (float)puVar3[2];
  fVar23 = (float)((ulong)puVar3[2] >> 0x20);
  fVar24 = (float)puVar3[3];
  fVar25 = (float)((ulong)puVar3[3] >> 0x20);
  fVar14 = 1.0 - fVar14 * fVar10;
  fVar15 = (float)*(undefined8 *)(lVar1 + 0x30);
  fVar18 = (float)*puVar3;
  fVar19 = (float)((ulong)*puVar3 >> 0x20);
  fVar20 = (float)puVar3[1];
  fVar21 = (float)((ulong)puVar3[1] >> 0x20);
  fVar17 = (float)*(undefined8 *)(lVar1 + 0x38);
  fVar28 = (float)puVar3[4];
  fVar29 = (float)((ulong)puVar3[4] >> 0x20);
  fVar30 = (float)puVar3[5];
  fVar31 = (float)((ulong)puVar3[5] >> 0x20);
  fVar27 = fVar10 * fVar7 - fVar6;
  fVar6 = fVar10 * fVar7 + fVar6;
  fVar26 = fVar10 * fVar13 + fVar9 * fVar8;
  fVar12 = fVar14 - fVar11;
  fVar11 = (1.0 - fVar11) - fVar9 * fVar7;
  uStack_78 = CONCAT44(fVar31 * fVar11 + fVar21 * fVar26 + fVar25 * fVar27,
                       fVar30 * fVar11 + fVar20 * fVar26 + fVar24 * fVar27);
  local_80 = CONCAT44(fVar29 * fVar11 + fVar19 * fVar26 + fVar23 * fVar27,
                      fVar28 * fVar11 + fVar18 * fVar26 + fVar22 * fVar27);
  fVar26 = fVar9 * fVar13 - fVar10 * fVar8;
  fVar11 = fVar9 * fVar13 + fVar10 * fVar8;
  uStack_90 = CONCAT44(fVar29 * fVar6 + fVar19 * fVar26 + fVar23 * fVar12,
                       fVar28 * fVar6 + fVar18 * fVar26 + fVar22 * fVar12);
  uStack_88 = CONCAT44(fVar31 * fVar6 + fVar21 * fVar26 + fVar25 * fVar12,
                       fVar30 * fVar6 + fVar20 * fVar26 + fVar24 * fVar12);
  fVar14 = fVar14 - fVar9 * fVar7;
  fVar13 = fVar10 * fVar13 - fVar9 * fVar8;
  local_a0 = CONCAT44(fVar29 * fVar13 + fVar19 * fVar14 + fVar23 * fVar11,
                      fVar28 * fVar13 + fVar18 * fVar14 + fVar22 * fVar11);
  uStack_98 = CONCAT44(fVar31 * fVar13 + fVar21 * fVar14 + fVar25 * fVar11,
                       fVar30 * fVar13 + fVar20 * fVar14 + fVar24 * fVar11);
  fVar13 = fVar28 * fVar17 + fVar18 * fVar15 + fVar22 * fVar16 + (float)puVar3[6];
  fVar6 = fVar29 * fVar17 + fVar19 * fVar15 + fVar23 * fVar16 + (float)((ulong)puVar3[6] >> 0x20);
  local_70 = CONCAT44(fVar6,fVar13);
  fVar7 = fVar30 * fVar17 + fVar20 * fVar15 + fVar24 * fVar16 + (float)puVar3[7];
  fVar14 = fVar31 * fVar17 + fVar21 * fVar15 + fVar25 * fVar16 + (float)((ulong)puVar3[7] >> 0x20);
  uStack_68 = CONCAT44(fVar14,fVar7);
  local_60 = (double)fVar13;
  dStack_58 = (double)fVar6;
  local_50 = (double)fVar7;
  dStack_48 = (double)fVar14;
  plVar2 = (long *)(*(long *)(param_1 + 0x18) + 0x18);
  (**(code **)(*plVar2 + 0x88))(plVar2,*(undefined8 *)(lVar1 + 0x10),&local_a0,&local_60,0);
  (**(code **)(**(long **)(param_1 + 0x18) + 400))
            (*(long **)(param_1 + 0x18),*(undefined8 *)(lVar1 + 0x10),&local_b0,&local_b0,0);
  puVar4 = (uint *)(lVar1 + 0x60);
  if (*puVar4 != 0) {
    FUN_00d22a28(param_1,(long)**(int **)(lVar1 + 0x58));
    if (1 < *puVar4) {
      uVar5 = 1;
      do {
        FUN_00d22a28(param_1,(long)*(int *)(*(long *)(lVar1 + 0x58) + uVar5 * 4));
        uVar5 = uVar5 + 1;
      } while (uVar5 < (ulong)(long)(int)*puVar4);
    }
  }
  return;
}


