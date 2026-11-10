/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ed09bc; name: FUN_02ed09bc
 */


void FUN_02ed09bc(long *param_1,long *param_2,undefined8 *param_3)

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
  long *plVar15;
  long lVar16;
  byte *pbVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined4 uVar23;
  long lVar24;
  byte *pbVar25;
  undefined8 *puVar26;
  long *plVar27;
  int iVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  float fVar38;
  int iVar39;
  float fVar40;
  int iVar41;
  float fVar42;
  int iVar43;
  float fVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  long lVar55;
  ulong uVar56;
  undefined2 local_138 [8];
  undefined8 local_128;
  undefined8 local_120;
  long local_118;
  uint local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  ulong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined2 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 local_98;
  uint local_90;
  undefined1 local_8c;
  undefined2 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  
  if ((int)param_1[1] != 0) {
    lVar22 = param_1[2];
    lVar16 = param_1[4];
    iVar28 = -(uint)((float)param_3[2] <= (float)lVar16);
    iVar33 = -(uint)((float)((ulong)param_3[2] >> 0x20) <= (float)((ulong)lVar16 >> 0x20));
    iVar34 = -(uint)((float)param_3[3] <= (float)param_1[5]);
    iVar35 = -(uint)((float)lVar22 <= (float)param_3[4]);
    iVar36 = -(uint)((float)((ulong)lVar22 >> 0x20) <= (float)((ulong)param_3[4] >> 0x20));
    iVar37 = -(uint)((float)param_1[3] <= (float)param_3[5]);
    if (CONCAT13((byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar33 >> 0x18) &
                 (byte)((uint)iVar35 >> 0x18) & (byte)((uint)iVar28 >> 0x18) &
                 (byte)((uint)iVar37 >> 0x18) & (byte)((uint)iVar34 >> 0x18),
                 CONCAT12((byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar33 >> 0x10) &
                          (byte)((uint)iVar35 >> 0x10) & (byte)((uint)iVar28 >> 0x10) &
                          (byte)((uint)iVar37 >> 0x10) & (byte)((uint)iVar34 >> 0x10),
                          CONCAT11((byte)((uint)iVar36 >> 8) & (byte)((uint)iVar33 >> 8) &
                                   (byte)((uint)iVar35 >> 8) & (byte)((uint)iVar28 >> 8) &
                                   (byte)((uint)iVar37 >> 8) & (byte)((uint)iVar34 >> 8),
                                   (byte)iVar36 & (byte)iVar33 & (byte)iVar35 & (byte)iVar28 &
                                   (byte)iVar37 & (byte)iVar34))) != 0) {
      lVar9 = param_2[1];
      uVar19 = 0;
      puVar26 = (undefined8 *)((ulong)&local_100 | 4);
      pbVar25 = (byte *)(*param_1 + (long)param_1);
      uVar13 = param_1[5];
      uVar56 = param_1[3];
LAB_02ed0a70:
      bVar4 = pbVar25[3];
      if ((char)bVar4 < '\0') goto LAB_02ed0e20;
      plVar27 = (long *)*param_3;
      uVar3 = (uint)CONCAT12(bVar4,*(undefined2 *)(pbVar25 + 4));
      uVar10 = (**(code **)(**(long **)(*plVar27 + 0x50) + 0x70))(*(long **)(*plVar27 + 0x50),uVar3)
      ;
      uVar11 = (**(code **)(**(long **)(*plVar27 + 0x50) + 0x78))(*(long **)(*plVar27 + 0x50),uVar3)
      ;
      iVar28 = (**(code **)(**(long **)(*plVar27 + 0x50) + 0x20))();
      uVar14 = 1;
      if (iVar28 <= (int)uVar3 && (~uVar11 & 7) != 0) {
        uVar14 = 2;
      }
      uVar11 = 0;
      if (uVar14 < 2) {
        uVar14 = 1;
      }
      do {
        plVar15 = (long *)plVar27[4];
        uVar5 = ((uVar11 | uVar3 << 1) + 1 <<
                (ulong)(-((uint)*(byte *)(*plVar27 + 0x1c) + *(int *)((long)plVar15 + 0x1c)) & 0x1f)
                ) - 1 | *(uint *)(PTR_DAT_047d1a60 + (long)*(int *)((long)plVar15 + 0x1c) * 4) &
                        *(uint *)(plVar15 + 3);
        if (*(long *)plVar27[2] == 0) {
          lVar16 = *plVar15;
          plVar15 = (long *)plVar27[6];
          lVar22 = *(long *)plVar27[3];
          uVar23 = 0xffffff;
          local_b0 = 0xffff;
          local_ac = 0;
          local_88 = 0xffff;
          local_84 = 0;
          uStack_80 = 0;
          uStack_7c = 0;
          uStack_a8 = 0;
          uStack_a4 = 0;
          if (lVar22 == 0) {
            local_c8 = 0xffffffffffffffff;
          }
          else {
            local_c8 = *(undefined8 *)(lVar22 + 0xb0);
            uVar23 = *(undefined4 *)(lVar22 + 0x50);
          }
          local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar23);
          if (lVar16 == 0) {
            local_98 = 0xffffff;
            local_a0 = 0xffffffffffffffff;
          }
          else {
            local_a0 = *(undefined8 *)(lVar16 + 0xb0);
            local_98 = *(undefined4 *)(lVar16 + 0x50);
          }
        }
        else {
          local_100 = *(undefined8 *)plVar27[5];
          uStack_f8 = ((undefined8 *)plVar27[5])[1];
          plVar12 = *(long **)plVar27[2];
          (**(code **)(*plVar12 + 0x40))
                    (plVar12,uVar10,6,*plVar15,plVar15[1],*plVar27,uVar5,0,&local_100);
          lVar16 = plVar27[2];
          if (*(long *)(lVar16 + 8) != 0) {
            local_f0 = CONCAT62(local_f0._2_6_,*(undefined2 *)(lVar16 + 0x10));
            uVar20 = *(undefined8 *)(lVar16 + 0x14);
            *(undefined4 *)((undefined8 *)((ulong)&local_f0 | 4) + 1) =
                 *(undefined4 *)(lVar16 + 0x1c);
            *(undefined8 *)((ulong)&local_f0 | 4) = uVar20;
            puVar21 = (undefined8 *)plVar27[3];
            local_e0 = *puVar21;
            local_d8 = puVar21[1];
            local_d0 = puVar21[2];
            local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(puVar21 + 3));
            local_138[0] = (undefined2)local_100;
            uVar20 = *puVar26;
            local_c0 = 0;
            *(undefined4 *)((undefined8 *)((ulong)local_138 | 4) + 1) = *(undefined4 *)(puVar26 + 1)
            ;
            *(undefined8 *)((ulong)local_138 | 4) = uVar20;
            local_128 = *(undefined8 *)plVar27[4];
            local_120 = ((undefined8 *)plVar27[4])[1];
            local_118 = *plVar27;
            local_108 = 0;
            local_110 = uVar5;
            uVar13 = (**(code **)(**(long **)(lVar16 + 8) + 0x40))
                               (*(long **)(lVar16 + 8),6,1,&local_f0,local_138);
            if ((uVar13 & 1) == 0) break;
            lVar16 = plVar27[2];
          }
          plVar15 = (long *)plVar27[6];
          lVar24 = *(long *)plVar27[3];
          lVar22 = *(long *)plVar27[4];
          uVar23 = 0xffffff;
          if (lVar24 == 0) {
            local_c8 = 0xffffffffffffffff;
          }
          else {
            local_c8 = *(undefined8 *)(lVar24 + 0xb0);
            uVar23 = *(undefined4 *)(lVar24 + 0x50);
          }
          local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar23);
          local_b0 = *(undefined2 *)(lVar16 + 0x10);
          uStack_a4 = *(undefined4 *)(lVar16 + 0x1c);
          local_ac = (undefined4)*(undefined8 *)(lVar16 + 0x14);
          uStack_a8 = (undefined4)((ulong)*(undefined8 *)(lVar16 + 0x14) >> 0x20);
          if (lVar22 == 0) {
            local_98 = 0xffffff;
            local_a0 = 0xffffffffffffffff;
          }
          else {
            local_a0 = *(undefined8 *)(lVar22 + 0xb0);
            local_98 = *(undefined4 *)(lVar22 + 0x50);
          }
          uStack_7c = *(undefined4 *)(puVar26 + 1);
          local_88 = (undefined2)local_100;
          local_84 = (undefined4)*puVar26;
          uStack_80 = (undefined4)((ulong)*puVar26 >> 0x20);
        }
        uStack_74 = 0;
        local_78 = 6;
        local_8c = 0xf;
        local_b4 = 0xf;
        local_b8 = 0xffffffff;
        local_d0 = local_d0 & 0xffffffff00000000;
        local_d8 = 0;
        local_e0 = 0;
        uStack_e8 = 0;
        local_f0 = 0;
        local_90 = uVar5;
        (**(code **)(*plVar15 + 0x28))(plVar15,&local_f0);
        uVar11 = uVar11 + 1;
      } while (uVar14 != uVar11);
      goto LAB_02ed0dd8;
    }
  }
  return;
LAB_02ed0e20:
  uVar2 = (long)(int)uVar19 + 1;
  fVar49 = (float)lVar16;
  fVar44 = (float)lVar22;
  fVar31 = (float)((ulong)lVar16 >> 0x20);
  fVar29 = (float)((ulong)lVar22 >> 0x20);
  fVar32 = (float)uVar13;
  fVar30 = (float)uVar56;
  puVar1 = (ushort *)(pbVar25 + 4);
  pbVar25 = (byte *)((long)param_1 + uVar2 * 6 + *param_1);
  uVar3 = ((bVar4 & 0x7f) << 0x11 | (uint)*puVar1 << 1) + (int)uVar19;
  pbVar17 = (byte *)((long)param_1 + (long)(int)uVar3 * 6 + *param_1);
  fVar38 = (fVar49 - fVar44) * 0.0044247787;
  fVar40 = (fVar31 - fVar29) * 0.0044247787;
  fVar42 = (fVar32 - fVar30) * 0.0044247787;
  bVar6 = pbVar25[1] >> 4;
  bVar7 = *pbVar25 >> 4;
  bVar4 = *pbVar25 & 0xf;
  fVar48 = fVar44 + (float)(byte)(bVar7 * bVar7) * fVar38;
  bVar7 = pbVar25[2] >> 4;
  bVar8 = *pbVar17 >> 4;
  fVar50 = fVar29 + (float)(byte)(bVar6 * bVar6) * fVar40;
  lVar22 = CONCAT44(fVar50,fVar48);
  fVar54 = fVar30 + (float)(byte)(bVar7 * bVar7) * fVar42;
  fVar44 = fVar44 + (float)(byte)(bVar8 * bVar8) * fVar38;
  fVar51 = fVar49 - (float)(byte)(bVar4 * bVar4) * fVar38;
  bVar4 = pbVar25[1] & 0xf;
  uVar56 = (ulong)(uint)fVar54;
  bVar6 = pbVar25[2] & 0xf;
  bVar7 = *pbVar17 & 0xf;
  fVar52 = fVar31 - (float)(byte)(bVar4 * bVar4) * fVar40;
  lVar16 = CONCAT44(fVar52,fVar51);
  fVar49 = fVar49 - (float)(byte)(bVar7 * bVar7) * fVar38;
  fVar53 = fVar32 - (float)(byte)(bVar6 * bVar6) * fVar42;
  bVar4 = pbVar17[1] >> 4;
  uVar13 = (ulong)(uint)fVar53;
  bVar6 = pbVar17[2] >> 4;
  fVar29 = fVar29 + (float)(byte)(bVar4 * bVar4) * fVar40;
  lVar24 = CONCAT44(fVar29,fVar44);
  bVar4 = pbVar17[2] & 0xf;
  fVar30 = fVar30 + (float)(byte)(bVar6 * bVar6) * fVar42;
  bVar6 = pbVar17[1] & 0xf;
  fVar31 = fVar31 - (float)(byte)(bVar6 * bVar6) * fVar40;
  lVar55 = CONCAT44(fVar31,fVar49);
  fVar32 = fVar32 - (float)(byte)(bVar4 * bVar4) * fVar42;
  fVar42 = (float)param_3[4];
  iVar45 = -(uint)(fVar48 <= fVar42);
  fVar48 = (float)((ulong)param_3[4] >> 0x20);
  iVar46 = -(uint)(fVar50 <= fVar48);
  iVar47 = -(uint)(fVar54 <= (float)param_3[5]);
  fVar38 = (float)param_3[2];
  iVar39 = -(uint)(fVar38 <= fVar51);
  fVar40 = (float)((ulong)param_3[2] >> 0x20);
  iVar41 = -(uint)(fVar40 <= fVar52);
  iVar43 = -(uint)((float)param_3[3] <= fVar53);
  iVar28 = -(uint)(fVar38 <= fVar49);
  iVar33 = -(uint)(fVar40 <= fVar31);
  iVar34 = -(uint)((float)param_3[3] <= fVar32);
  iVar35 = -(uint)(fVar44 <= fVar42);
  iVar36 = -(uint)(fVar29 <= fVar48);
  iVar37 = -(uint)(fVar30 <= (float)param_3[5]);
  bVar4 = CONCAT13((byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar41 >> 0x18) &
                   (byte)((uint)iVar45 >> 0x18) & (byte)((uint)iVar39 >> 0x18) &
                   (byte)((uint)iVar47 >> 0x18) & (byte)((uint)iVar43 >> 0x18),
                   CONCAT12((byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar41 >> 0x10) &
                            (byte)((uint)iVar45 >> 0x10) & (byte)((uint)iVar39 >> 0x10) &
                            (byte)((uint)iVar47 >> 0x10) & (byte)((uint)iVar43 >> 0x10),
                            CONCAT11((byte)((uint)iVar46 >> 8) & (byte)((uint)iVar41 >> 8) &
                                     (byte)((uint)iVar45 >> 8) & (byte)((uint)iVar39 >> 8) &
                                     (byte)((uint)iVar47 >> 8) & (byte)((uint)iVar43 >> 8),
                                     (byte)iVar46 & (byte)iVar41 & (byte)iVar45 & (byte)iVar39 &
                                     (byte)iVar47 & (byte)iVar43))) != 0 |
          (CONCAT13((byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar33 >> 0x18) &
                    (byte)((uint)iVar35 >> 0x18) & (byte)((uint)iVar28 >> 0x18) &
                    (byte)((uint)iVar37 >> 0x18) & (byte)((uint)iVar34 >> 0x18),
                    CONCAT12((byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar33 >> 0x10) &
                             (byte)((uint)iVar35 >> 0x10) & (byte)((uint)iVar28 >> 0x10) &
                             (byte)((uint)iVar37 >> 0x10) & (byte)((uint)iVar34 >> 0x10),
                             CONCAT11((byte)((uint)iVar36 >> 8) & (byte)((uint)iVar33 >> 8) &
                                      (byte)((uint)iVar35 >> 8) & (byte)((uint)iVar28 >> 8) &
                                      (byte)((uint)iVar37 >> 8) & (byte)((uint)iVar34 >> 8),
                                      (byte)iVar36 & (byte)iVar33 & (byte)iVar35 & (byte)iVar28 &
                                      (byte)iVar37 & (byte)iVar34))) != 0) << 1;
  uVar19 = uVar2 & 0xffffffff;
  if (bVar4 != 1) {
    if (bVar4 == 3) {
      iVar28 = (int)param_2[1];
      lVar18 = (long)iVar28;
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar28) {
        FUN_02ec1dcc(param_2,PTR_PTR_047d1a50,lVar18 + 1);
        iVar28 = (int)param_2[1];
      }
      plVar27 = (long *)(*param_2 + (long)iVar28 * 0x30);
      *(int *)(param_2 + 1) = (int)(lVar18 + 1);
      *(uint *)(plVar27 + 4) = uVar3;
      uVar19 = uVar2 & 0xffffffff;
      plVar27[1] = (ulong)(uint)fVar30;
      *plVar27 = lVar24;
      plVar27[3] = (ulong)(uint)fVar32;
      plVar27[2] = lVar55;
    }
    else if (bVar4 == 2) {
      uVar19 = (ulong)uVar3;
      pbVar25 = pbVar17;
      lVar16 = lVar55;
      uVar13 = (ulong)(uint)fVar32;
      lVar22 = lVar24;
      uVar56 = (ulong)(uint)fVar30;
    }
    else {
LAB_02ed0dd8:
      if ((int)param_2[1] <= (int)lVar9) {
        return;
      }
      iVar28 = (int)param_2[1] + -1;
      *(int *)(param_2 + 1) = iVar28;
      plVar27 = (long *)(*param_2 + (long)iVar28 * 0x30);
      uVar19 = (ulong)(int)plVar27[4];
      pbVar25 = (byte *)((long)param_1 + uVar19 * 6 + *param_1);
      lVar16 = plVar27[2];
      uVar13 = plVar27[3];
      lVar22 = *plVar27;
      uVar56 = plVar27[1];
    }
  }
  goto LAB_02ed0a70;
}


