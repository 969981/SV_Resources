/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ecfca0; name: FUN_02ecfca0
 */


void FUN_02ecfca0(long *param_1,long *param_2,undefined8 *param_3)

{
  ushort *puVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  long lVar9;
  undefined4 uVar10;
  uint uVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  undefined8 *puVar15;
  long lVar16;
  byte *pbVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  long *plVar21;
  byte *pbVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  float fVar33;
  int iVar34;
  float fVar35;
  int iVar36;
  float fVar37;
  int iVar38;
  float fVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  long lVar49;
  float fVar50;
  long lVar51;
  long lVar52;
  ulong uVar53;
  undefined2 local_e8 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  long local_c8;
  uint local_c0;
  undefined8 local_b8;
  undefined2 local_b0 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  if ((int)param_1[1] != 0) {
    lVar52 = param_1[2];
    lVar16 = param_1[4];
    iVar23 = -(uint)((float)param_3[2] <= (float)lVar16);
    iVar28 = -(uint)((float)((ulong)param_3[2] >> 0x20) <= (float)((ulong)lVar16 >> 0x20));
    iVar29 = -(uint)((float)param_3[3] <= (float)param_1[5]);
    iVar30 = -(uint)((float)lVar52 <= (float)param_3[4]);
    iVar31 = -(uint)((float)((ulong)lVar52 >> 0x20) <= (float)((ulong)param_3[4] >> 0x20));
    iVar32 = -(uint)((float)param_1[3] <= (float)param_3[5]);
    if (CONCAT13((byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar28 >> 0x18) &
                 (byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar23 >> 0x18) &
                 (byte)((uint)iVar32 >> 0x18) & (byte)((uint)iVar29 >> 0x18),
                 CONCAT12((byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar28 >> 0x10) &
                          (byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar23 >> 0x10) &
                          (byte)((uint)iVar32 >> 0x10) & (byte)((uint)iVar29 >> 0x10),
                          CONCAT11((byte)((uint)iVar31 >> 8) & (byte)((uint)iVar28 >> 8) &
                                   (byte)((uint)iVar30 >> 8) & (byte)((uint)iVar23 >> 8) &
                                   (byte)((uint)iVar32 >> 8) & (byte)((uint)iVar29 >> 8),
                                   (byte)iVar31 & (byte)iVar28 & (byte)iVar30 & (byte)iVar23 &
                                   (byte)iVar32 & (byte)iVar29))) != 0) {
      lVar9 = param_2[1];
      uVar19 = 0;
      pbVar22 = (byte *)(*param_1 + (long)param_1);
      uVar13 = param_1[5];
      uVar53 = param_1[3];
LAB_02ecfd48:
      bVar4 = pbVar22[3];
      if ((char)bVar4 < '\0') goto LAB_02ecff9c;
      plVar21 = (long *)*param_3;
      uVar3 = (uint)CONCAT12(bVar4,*(undefined2 *)(pbVar22 + 4));
      uVar10 = (**(code **)(**(long **)(*plVar21 + 0x50) + 0x70))(*(long **)(*plVar21 + 0x50),uVar3)
      ;
      uVar11 = (**(code **)(**(long **)(*plVar21 + 0x50) + 0x78))(*(long **)(*plVar21 + 0x50),uVar3)
      ;
      iVar23 = (**(code **)(**(long **)(*plVar21 + 0x50) + 0x20))();
      uVar14 = 1;
      if (iVar23 <= (int)uVar3 && (~uVar11 & 7) != 0) {
        uVar14 = 2;
      }
      uVar11 = 0;
      if (uVar14 < 2) {
        uVar14 = 1;
      }
      do {
        puVar15 = (undefined8 *)plVar21[4];
        uVar5 = ((uVar11 | uVar3 << 1) + 1 <<
                (ulong)(-((uint)*(byte *)(*plVar21 + 0x1c) + *(int *)((long)puVar15 + 0x1c)) & 0x1f)
                ) - 1 | *(uint *)(PTR_DAT_047d1a60 + (long)*(int *)((long)puVar15 + 0x1c) * 4) &
                        *(uint *)(puVar15 + 3);
        if (*(long *)plVar21[2] != 0) {
          local_78 = *(undefined8 *)plVar21[5];
          uStack_70 = ((undefined8 *)plVar21[5])[1];
          plVar12 = *(long **)plVar21[2];
          (**(code **)(*plVar12 + 0x40))
                    (plVar12,uVar10,6,*puVar15,puVar15[1],*plVar21,uVar5,0,&local_78);
          lVar16 = plVar21[2];
          if (*(long *)(lVar16 + 8) != 0) {
            local_b0[0] = *(undefined2 *)(lVar16 + 0x10);
            uVar20 = *(undefined8 *)(lVar16 + 0x14);
            *(undefined4 *)((undefined8 *)((ulong)local_b0 | 4) + 1) =
                 *(undefined4 *)(lVar16 + 0x1c);
            *(undefined8 *)((ulong)local_b0 | 4) = uVar20;
            puVar15 = (undefined8 *)plVar21[3];
            local_a0 = *puVar15;
            local_98 = puVar15[1];
            local_90 = puVar15[2];
            local_88 = *(undefined4 *)(puVar15 + 3);
            local_e8[0] = (undefined2)local_78;
            uVar20 = *(undefined8 *)((ulong)&local_78 | 4);
            local_80 = 0;
            *(undefined4 *)((undefined8 *)((ulong)local_e8 | 4) + 1) =
                 *(undefined4 *)((undefined8 *)((ulong)&local_78 | 4) + 1);
            *(undefined8 *)((ulong)local_e8 | 4) = uVar20;
            local_d8 = *(undefined8 *)plVar21[4];
            local_d0 = ((undefined8 *)plVar21[4])[1];
            local_c8 = *plVar21;
            local_b8 = 0;
            local_c0 = uVar5;
            uVar13 = (**(code **)(**(long **)(lVar16 + 8) + 0x40))
                               (*(long **)(lVar16 + 8),6,1,local_b0,local_e8);
            if ((uVar13 & 1) == 0) break;
          }
        }
        plVar12 = (long *)plVar21[6];
        iVar23 = (int)plVar12[1];
        lVar16 = (long)iVar23;
        if ((int)(*(uint *)((long)plVar12 + 0xc) & 0x7fffffff) <= iVar23) {
          FUN_02e931c8(plVar12,PTR_PTR_047d1a50,lVar16 + 1);
          iVar23 = (int)plVar12[1];
        }
        uVar11 = uVar11 + 1;
        *(uint *)(*plVar12 + (long)iVar23 * 4) = uVar5;
        *(int *)(plVar12 + 1) = (int)(lVar16 + 1);
      } while (uVar14 != uVar11);
      goto LAB_02ecff54;
    }
  }
  return;
LAB_02ecff9c:
  uVar2 = (long)(int)uVar19 + 1;
  fVar44 = (float)lVar16;
  fVar39 = (float)lVar52;
  fVar26 = (float)((ulong)lVar16 >> 0x20);
  fVar24 = (float)((ulong)lVar52 >> 0x20);
  fVar27 = (float)uVar13;
  fVar25 = (float)uVar53;
  puVar1 = (ushort *)(pbVar22 + 4);
  pbVar22 = (byte *)((long)param_1 + uVar2 * 6 + *param_1);
  uVar3 = ((bVar4 & 0x7f) << 0x11 | (uint)*puVar1 << 1) + (int)uVar19;
  pbVar17 = (byte *)((long)param_1 + (long)(int)uVar3 * 6 + *param_1);
  fVar33 = (fVar44 - fVar39) * 0.0044247787;
  fVar35 = (fVar26 - fVar24) * 0.0044247787;
  fVar37 = (fVar27 - fVar25) * 0.0044247787;
  bVar6 = pbVar22[1] >> 4;
  bVar7 = *pbVar22 >> 4;
  bVar4 = *pbVar22 & 0xf;
  fVar43 = fVar39 + (float)(byte)(bVar7 * bVar7) * fVar33;
  bVar7 = pbVar22[2] >> 4;
  bVar8 = *pbVar17 >> 4;
  fVar45 = fVar24 + (float)(byte)(bVar6 * bVar6) * fVar35;
  lVar52 = CONCAT44(fVar45,fVar43);
  fVar50 = fVar25 + (float)(byte)(bVar7 * bVar7) * fVar37;
  fVar39 = fVar39 + (float)(byte)(bVar8 * bVar8) * fVar33;
  fVar46 = fVar44 - (float)(byte)(bVar4 * bVar4) * fVar33;
  bVar4 = pbVar22[1] & 0xf;
  uVar53 = (ulong)(uint)fVar50;
  bVar6 = pbVar22[2] & 0xf;
  bVar7 = *pbVar17 & 0xf;
  fVar47 = fVar26 - (float)(byte)(bVar4 * bVar4) * fVar35;
  lVar16 = CONCAT44(fVar47,fVar46);
  fVar44 = fVar44 - (float)(byte)(bVar7 * bVar7) * fVar33;
  fVar48 = fVar27 - (float)(byte)(bVar6 * bVar6) * fVar37;
  bVar4 = pbVar17[1] >> 4;
  uVar13 = (ulong)(uint)fVar48;
  bVar6 = pbVar17[2] >> 4;
  fVar24 = fVar24 + (float)(byte)(bVar4 * bVar4) * fVar35;
  lVar49 = CONCAT44(fVar24,fVar39);
  bVar4 = pbVar17[2] & 0xf;
  fVar25 = fVar25 + (float)(byte)(bVar6 * bVar6) * fVar37;
  bVar6 = pbVar17[1] & 0xf;
  fVar26 = fVar26 - (float)(byte)(bVar6 * bVar6) * fVar35;
  lVar51 = CONCAT44(fVar26,fVar44);
  fVar27 = fVar27 - (float)(byte)(bVar4 * bVar4) * fVar37;
  fVar37 = (float)param_3[4];
  iVar40 = -(uint)(fVar43 <= fVar37);
  fVar43 = (float)((ulong)param_3[4] >> 0x20);
  iVar41 = -(uint)(fVar45 <= fVar43);
  iVar42 = -(uint)(fVar50 <= (float)param_3[5]);
  fVar33 = (float)param_3[2];
  iVar34 = -(uint)(fVar33 <= fVar46);
  fVar35 = (float)((ulong)param_3[2] >> 0x20);
  iVar36 = -(uint)(fVar35 <= fVar47);
  iVar38 = -(uint)((float)param_3[3] <= fVar48);
  iVar23 = -(uint)(fVar33 <= fVar44);
  iVar28 = -(uint)(fVar35 <= fVar26);
  iVar29 = -(uint)((float)param_3[3] <= fVar27);
  iVar30 = -(uint)(fVar39 <= fVar37);
  iVar31 = -(uint)(fVar24 <= fVar43);
  iVar32 = -(uint)(fVar25 <= (float)param_3[5]);
  bVar4 = CONCAT13((byte)((uint)iVar41 >> 0x18) & (byte)((uint)iVar36 >> 0x18) &
                   (byte)((uint)iVar40 >> 0x18) & (byte)((uint)iVar34 >> 0x18) &
                   (byte)((uint)iVar42 >> 0x18) & (byte)((uint)iVar38 >> 0x18),
                   CONCAT12((byte)((uint)iVar41 >> 0x10) & (byte)((uint)iVar36 >> 0x10) &
                            (byte)((uint)iVar40 >> 0x10) & (byte)((uint)iVar34 >> 0x10) &
                            (byte)((uint)iVar42 >> 0x10) & (byte)((uint)iVar38 >> 0x10),
                            CONCAT11((byte)((uint)iVar41 >> 8) & (byte)((uint)iVar36 >> 8) &
                                     (byte)((uint)iVar40 >> 8) & (byte)((uint)iVar34 >> 8) &
                                     (byte)((uint)iVar42 >> 8) & (byte)((uint)iVar38 >> 8),
                                     (byte)iVar41 & (byte)iVar36 & (byte)iVar40 & (byte)iVar34 &
                                     (byte)iVar42 & (byte)iVar38))) != 0 |
          (CONCAT13((byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar28 >> 0x18) &
                    (byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar23 >> 0x18) &
                    (byte)((uint)iVar32 >> 0x18) & (byte)((uint)iVar29 >> 0x18),
                    CONCAT12((byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar28 >> 0x10) &
                             (byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar23 >> 0x10) &
                             (byte)((uint)iVar32 >> 0x10) & (byte)((uint)iVar29 >> 0x10),
                             CONCAT11((byte)((uint)iVar31 >> 8) & (byte)((uint)iVar28 >> 8) &
                                      (byte)((uint)iVar30 >> 8) & (byte)((uint)iVar23 >> 8) &
                                      (byte)((uint)iVar32 >> 8) & (byte)((uint)iVar29 >> 8),
                                      (byte)iVar31 & (byte)iVar28 & (byte)iVar30 & (byte)iVar23 &
                                      (byte)iVar32 & (byte)iVar29))) != 0) << 1;
  uVar19 = uVar2 & 0xffffffff;
  if (bVar4 != 1) {
    if (bVar4 == 3) {
      iVar23 = (int)param_2[1];
      lVar18 = (long)iVar23;
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar23) {
        FUN_02ec1dcc(param_2,PTR_PTR_047d1a50,lVar18 + 1);
        iVar23 = (int)param_2[1];
      }
      plVar21 = (long *)(*param_2 + (long)iVar23 * 0x30);
      *(int *)(param_2 + 1) = (int)(lVar18 + 1);
      *(uint *)(plVar21 + 4) = uVar3;
      uVar19 = uVar2 & 0xffffffff;
      plVar21[1] = (ulong)(uint)fVar25;
      *plVar21 = lVar49;
      plVar21[3] = (ulong)(uint)fVar27;
      plVar21[2] = lVar51;
    }
    else if (bVar4 == 2) {
      uVar19 = (ulong)uVar3;
      pbVar22 = pbVar17;
      lVar16 = lVar51;
      uVar13 = (ulong)(uint)fVar27;
      lVar52 = lVar49;
      uVar53 = (ulong)(uint)fVar25;
    }
    else {
LAB_02ecff54:
      if ((int)param_2[1] <= (int)lVar9) {
        return;
      }
      iVar23 = (int)param_2[1] + -1;
      *(int *)(param_2 + 1) = iVar23;
      plVar21 = (long *)(*param_2 + (long)iVar23 * 0x30);
      uVar19 = (ulong)(int)plVar21[4];
      pbVar22 = (byte *)((long)param_1 + uVar19 * 6 + *param_1);
      lVar16 = plVar21[2];
      uVar13 = plVar21[3];
      lVar52 = *plVar21;
      uVar53 = plVar21[1];
    }
  }
  goto LAB_02ecfd48;
}


