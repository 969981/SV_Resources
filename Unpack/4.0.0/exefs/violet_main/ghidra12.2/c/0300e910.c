/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0300e910; name: FUN_0300e910
 */


void FUN_0300e910(long param_1,undefined8 *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long lVar18;
  float fVar19;
  int iVar20;
  undefined8 uVar21;
  float fVar22;
  int iVar23;
  float fVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  
  lVar15 = *(long *)(param_1 + 8);
  uVar2 = *(uint *)(param_1 + 0x2c);
  if (*(int *)(param_1 + 0x28) == 0) {
    return;
  }
  uVar1 = uVar2 + 1;
  if ((~*(uint *)(lVar15 + 8) & 0xffffff) == 0) {
    uVar14 = 0;
    if (uVar1 < 2) {
      uVar2 = 0;
    }
    do {
      if (uVar2 == uVar14) {
        return;
      }
      uVar14 = uVar14 + 1;
    } while ((~*(uint *)(lVar15 + (uVar14 & 0xffffffff) * 0x10 + 8) & 0xffffff) == 0);
    if ((int)uVar14 == -1) {
      return;
    }
  }
  else {
    uVar14 = 0;
  }
  do {
    lVar18 = *(long *)(lVar15 + (uVar14 & 0xffffffff) * 0x10);
    iVar7 = (int)param_3[1];
    lVar8 = (long)iVar7;
    if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar7) {
      FUN_0300f3bc(param_3,lVar8 + 1);
      iVar7 = (int)param_3[1];
    }
    lVar9 = *param_3;
    *(int *)(param_3 + 1) = (int)(lVar8 + 1);
    lVar8 = lVar9 + (long)iVar7 * 0x18;
    plVar12 = (long *)(lVar8 + 8);
    *plVar12 = 0;
    piVar17 = (int *)(lVar8 + 0x10);
    piVar17[0] = 0;
    piVar17[1] = -0x80000000;
    uVar2 = *(uint *)(lVar18 + 0x15d4);
    if (uVar2 == 0) {
LAB_0300eb0c:
      lVar8 = param_3[1];
      iVar7 = (int)lVar8 + -1;
      lVar18 = *param_3 + (long)iVar7 * 0x18;
      uVar2 = *(uint *)(lVar18 + 0x14);
      *(undefined4 *)(lVar18 + 0x10) = 0;
      if ((-1 < (int)uVar2) && (lVar9 = *(long *)(lVar18 + 8), lVar9 != 0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,lVar9,(ulong)uVar2 << 2);
      }
      *(long *)(lVar18 + 8) = 0;
      *(uint *)(lVar18 + 0x14) = 0x80000000;
      lVar18 = param_3[1];
      iVar5 = (int)lVar18 + -1;
      *(int *)(param_3 + 1) = iVar5;
      if ((int)lVar18 != (int)lVar8) {
        puVar11 = (undefined4 *)(*param_3 + (long)iVar5 * 0x18);
        puVar10 = (undefined4 *)(*param_3 + (long)iVar7 * 0x18);
        *puVar10 = *puVar11;
        *(undefined8 *)(puVar10 + 2) = 0;
        *(undefined8 *)(puVar10 + 4) = 0x8000000000000000;
        FUN_01339774(puVar11 + 2,PTR_PTR_047d1a50);
        *(undefined8 *)(puVar10 + 2) = *(undefined8 *)(puVar11 + 2);
        uVar3 = puVar11[5];
        puVar10[4] = puVar11[4];
        puVar10[5] = uVar3;
        *(undefined8 *)(puVar11 + 2) = 0;
        *(undefined8 *)(puVar11 + 4) = 0;
        puVar11[5] = 0x80000000;
      }
    }
    else {
      iVar5 = 0;
      uVar16 = 0;
      do {
        if (*(char *)(lVar18 + 0x1688) == '\0') {
          uVar13 = uVar16 & 0xffffffff;
        }
        else {
          uVar13 = (ulong)*(uint *)(*(long *)(lVar18 + 0x16a8) + uVar16 * 4);
        }
        puVar4 = (undefined8 *)
                 (*(long *)(lVar18 + 0x108) + (-(uVar13 >> 0x1f) & 0xffffffe000000000 | uVar13 << 5)
                 );
        uVar21 = *puVar4;
        fVar19 = (float)uVar21;
        iVar26 = -(uint)((float)*param_2 <= fVar19);
        fVar22 = (float)((ulong)uVar21 >> 0x20);
        iVar27 = -(uint)((float)((ulong)*param_2 >> 0x20) <= fVar22);
        fVar24 = (float)puVar4[1];
        iVar28 = -(uint)((float)param_2[1] <= fVar24);
        iVar20 = -(uint)(fVar19 <= (float)param_2[2]);
        iVar23 = -(uint)(fVar22 <= (float)((ulong)param_2[2] >> 0x20));
        iVar25 = -(uint)(fVar24 <= (float)param_2[3]);
        if (CONCAT13((byte)((uint)iVar23 >> 0x18) & (byte)((uint)iVar27 >> 0x18) &
                     (byte)((uint)iVar20 >> 0x18) & (byte)((uint)iVar26 >> 0x18) &
                     (byte)((uint)iVar25 >> 0x18) & (byte)((uint)iVar28 >> 0x18),
                     CONCAT12((byte)((uint)iVar23 >> 0x10) & (byte)((uint)iVar27 >> 0x10) &
                              (byte)((uint)iVar20 >> 0x10) & (byte)((uint)iVar26 >> 0x10) &
                              (byte)((uint)iVar25 >> 0x10) & (byte)((uint)iVar28 >> 0x10),
                              CONCAT11((byte)((uint)iVar23 >> 8) & (byte)((uint)iVar27 >> 8) &
                                       (byte)((uint)iVar20 >> 8) & (byte)((uint)iVar26 >> 8) &
                                       (byte)((uint)iVar25 >> 8) & (byte)((uint)iVar28 >> 8),
                                       (byte)iVar23 & (byte)iVar27 & (byte)iVar20 & (byte)iVar26 &
                                       (byte)iVar25 & (byte)iVar28))) == 0) {
          iVar20 = iVar5 + 1;
          if ((int)(*(uint *)(lVar8 + 0x14) & 0x7fffffff) <= iVar5) {
            FUN_0133bb88(plVar12,PTR_PTR_047d1a50,(long)iVar20);
            iVar5 = *piVar17;
          }
          *(int *)(*plVar12 + (long)iVar5 * 4) = (int)uVar13;
          *piVar17 = iVar20;
          iVar5 = iVar20;
        }
        uVar16 = uVar16 + 1;
      } while (uVar2 != uVar16);
      if (iVar5 == 0) goto LAB_0300eb0c;
      *(undefined4 *)(lVar9 + (long)iVar7 * 0x18) = *(undefined4 *)(lVar18 + 0x150);
    }
    puVar6 = (uint *)(lVar15 + 8 + (ulong)((int)uVar14 + 1) * 0x10);
    do {
      uVar2 = (int)uVar14 + 1;
      uVar14 = (ulong)uVar2;
      if (uVar1 <= uVar2) {
        return;
      }
      uVar2 = *puVar6;
      puVar6 = puVar6 + 4;
    } while ((~uVar2 & 0xffffff) == 0);
  } while( true );
}


