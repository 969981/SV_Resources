/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030858cc; name: FUN_030858cc
 */


void FUN_030858cc(long *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  ulong uVar18;
  byte *pbVar19;
  undefined8 *puVar20;
  long lVar21;
  long lVar22;
  undefined4 uVar23;
  ulong uVar24;
  int iVar25;
  float fVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  float fVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  int iVar49;
  float fVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  int iVar59;
  float fVar60;
  int iVar61;
  int iVar62;
  float fVar63;
  float fVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  ulong uVar70;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 *local_b0;
  uint local_a8;
  long local_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  int local_80;
  long local_78;
  uint local_70 [4];
  
  local_a8 = *(uint *)((long)param_2 + 0x1c);
  uVar24 = (ulong)local_a8;
  if ((int)param_1[1] != 0 && local_a8 != 0) {
    lStack_98 = param_1[3];
    local_a0 = param_1[2];
    lStack_88 = param_1[5];
    lStack_90 = param_1[4];
    uVar3 = *(uint *)(param_3 + 1);
    lVar15 = *param_1;
    local_80 = 0;
    lVar21 = *param_2;
    lVar22 = 0;
    if (lVar21 != 0) {
      lVar22 = lVar21 + (long)param_2;
    }
    local_b0 = (undefined8 *)(lVar22 + uVar24 * 0x30);
    uStack_c8 = local_b0[1];
    local_d0 = *local_b0;
    uStack_b8 = local_b0[3];
    local_c0 = local_b0[2];
    fVar42 = (float)lStack_90;
    iVar25 = -(uint)((float)local_d0 <= fVar42);
    fVar34 = (float)((ulong)lStack_90 >> 0x20);
    iVar27 = -(uint)((float)((ulong)local_d0 >> 0x20) <= fVar34);
    fVar26 = (float)lStack_88;
    iVar28 = -(uint)((float)uStack_c8 <= fVar26);
    fVar55 = (float)local_a0;
    iVar31 = -(uint)(fVar55 <= (float)local_c0);
    fVar43 = (float)((ulong)local_a0 >> 0x20);
    iVar35 = -(uint)(fVar43 <= (float)((ulong)local_c0 >> 0x20));
    fVar41 = (float)lStack_98;
    iVar38 = -(uint)(fVar41 <= (float)uStack_b8);
    if (CONCAT13((byte)((uint)iVar35 >> 0x18) & (byte)((uint)iVar27 >> 0x18) &
                 (byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar25 >> 0x18) &
                 (byte)((uint)iVar38 >> 0x18) & (byte)((uint)iVar28 >> 0x18),
                 CONCAT12((byte)((uint)iVar35 >> 0x10) & (byte)((uint)iVar27 >> 0x10) &
                          (byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar25 >> 0x10) &
                          (byte)((uint)iVar38 >> 0x10) & (byte)((uint)iVar28 >> 0x10),
                          CONCAT11((byte)((uint)iVar35 >> 8) & (byte)((uint)iVar27 >> 8) &
                                   (byte)((uint)iVar31 >> 8) & (byte)((uint)iVar25 >> 8) &
                                   (byte)((uint)iVar38 >> 8) & (byte)((uint)iVar28 >> 8),
                                   (byte)iVar35 & (byte)iVar27 & (byte)iVar31 & (byte)iVar25 &
                                   (byte)iVar38 & (byte)iVar28))) != 0) {
      lVar22 = 0;
      uVar18 = (ulong)uVar3;
      local_78 = lVar15;
      do {
        lVar14 = lStack_88;
        lVar13 = lStack_90;
        lVar12 = lStack_98;
        lVar2 = local_a0;
        local_78 = local_78 + (long)param_1;
        iVar25 = (int)uVar18;
        bVar6 = *(byte *)(local_78 + 3);
        fVar44 = (float)local_a0;
        fVar45 = (float)((ulong)local_a0 >> 0x20);
        fVar50 = (float)lStack_98;
        fVar46 = (float)lStack_90;
        fVar47 = (float)((ulong)lStack_90 >> 0x20);
        fVar56 = (float)lStack_88;
        iVar27 = (int)lVar22;
        if ((char)bVar6 < '\0') {
          pbVar17 = (byte *)((long)param_1 + ((long)iVar27 + 1) * 6 + lVar15);
          fVar46 = (fVar46 - fVar44) * 0.0044247787;
          fVar47 = (fVar47 - fVar45) * 0.0044247787;
          fVar50 = (fVar56 - fVar50) * 0.0044247787;
          iVar25 = ((bVar6 & 0x7f) << 0x11 | (uint)*(ushort *)(local_78 + 4) << 1) + iVar27;
          pbVar19 = (byte *)((long)param_1 + (long)iVar25 * 6 + lVar15);
          bVar7 = *pbVar17 >> 4;
          bVar8 = *pbVar19 >> 4;
          bVar6 = *pbVar19 & 0xf;
          bVar10 = *pbVar17 & 0xf;
          bVar9 = pbVar17[1] >> 4;
          bVar11 = pbVar17[1] & 0xf;
          fVar63 = (float)(byte)(bVar7 * bVar7) * fVar46 + fVar55;
          fVar55 = (float)(byte)(bVar8 * bVar8) * fVar46 + fVar55;
          fVar64 = fVar42 - (float)(byte)(bVar10 * bVar10) * fVar46;
          fVar56 = fVar43 + (float)(byte)(bVar9 * bVar9) * fVar47;
          fVar57 = fVar34 - (float)(byte)(bVar11 * bVar11) * fVar47;
          bVar10 = pbVar19[1] >> 4;
          bVar11 = pbVar17[2] >> 4;
          fVar43 = fVar43 + (float)(byte)(bVar10 * bVar10) * fVar47;
          uVar68 = CONCAT44(fVar43,fVar55);
          fVar44 = fVar41 + (float)(byte)(bVar11 * bVar11) * fVar50;
          bVar10 = pbVar17[2] & 0xf;
          fVar45 = fVar26 - (float)(byte)(bVar10 * bVar10) * fVar50;
          bVar10 = pbVar19[2] >> 4;
          fVar41 = fVar41 + (float)(byte)(bVar10 * bVar10) * fVar50;
          uVar18 = (ulong)(uint)fVar41;
          fVar42 = fVar42 - (float)(byte)(bVar6 * bVar6) * fVar46;
          bVar6 = pbVar19[1] & 0xf;
          bVar10 = pbVar19[2] & 0xf;
          fVar34 = fVar34 - (float)(byte)(bVar6 * bVar6) * fVar47;
          uVar69 = CONCAT44(fVar34,fVar42);
          uVar4 = *(uint *)((long)local_b0 + 0x24);
          fVar26 = fVar26 - (float)(byte)(bVar10 * bVar10) * fVar50;
          uVar70 = (ulong)(uint)fVar26;
          uVar23 = (undefined4)((long)iVar27 + 1);
          if (uVar4 == 0) {
            iVar30 = -(uint)(fVar63 <= (float)local_c0);
            fVar50 = (float)((ulong)local_c0 >> 0x20);
            iVar32 = -(uint)(fVar56 <= fVar50);
            iVar33 = -(uint)(fVar44 <= (float)uStack_b8);
            iVar36 = -(uint)((float)local_d0 <= fVar42);
            fVar42 = (float)((ulong)local_d0 >> 0x20);
            iVar37 = -(uint)(fVar42 <= fVar34);
            iVar39 = -(uint)((float)uStack_c8 <= fVar26);
            iVar35 = -(uint)((float)local_d0 <= fVar64);
            iVar38 = -(uint)(fVar42 <= fVar57);
            iVar29 = -(uint)((float)uStack_c8 <= fVar45);
            iVar27 = -(uint)(fVar55 <= (float)local_c0);
            iVar28 = -(uint)(fVar43 <= fVar50);
            iVar31 = -(uint)(fVar41 <= (float)uStack_b8);
            if (CONCAT13((byte)((uint)iVar37 >> 0x18) & (byte)((uint)iVar28 >> 0x18) &
                         (byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar27 >> 0x18) &
                         (byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar31 >> 0x18),
                         CONCAT12((byte)((uint)iVar37 >> 0x10) & (byte)((uint)iVar28 >> 0x10) &
                                  (byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar27 >> 0x10) &
                                  (byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar31 >> 0x10),
                                  CONCAT11((byte)((uint)iVar37 >> 8) & (byte)((uint)iVar28 >> 8) &
                                           (byte)((uint)iVar36 >> 8) & (byte)((uint)iVar27 >> 8) &
                                           (byte)((uint)iVar39 >> 8) & (byte)((uint)iVar31 >> 8),
                                           (byte)iVar37 & (byte)iVar28 & (byte)iVar36 & (byte)iVar27
                                           & (byte)iVar39 & (byte)iVar31))) != 0) {
              iVar27 = (int)param_3[1];
              lVar22 = (long)iVar27;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar27) {
                FUN_03086074(param_3,lVar22 + 1);
                iVar27 = (int)param_3[1];
              }
              puVar16 = (undefined8 *)(*param_3 + (long)iVar27 * 0x40);
              *(int *)(param_3 + 1) = (int)(lVar22 + 1);
              *(int *)(puVar16 + 4) = iVar25;
              *(int *)(puVar16 + 6) = (int)uVar24;
              puVar16[1] = uVar18;
              *puVar16 = uVar68;
              puVar16[3] = uVar70;
              puVar16[2] = uVar69;
            }
            if (CONCAT13((byte)((uint)iVar38 >> 0x18) & (byte)((uint)iVar32 >> 0x18) &
                         (byte)((uint)iVar35 >> 0x18) & (byte)((uint)iVar30 >> 0x18) &
                         (byte)((uint)iVar29 >> 0x18) & (byte)((uint)iVar33 >> 0x18),
                         CONCAT12((byte)((uint)iVar38 >> 0x10) & (byte)((uint)iVar32 >> 0x10) &
                                  (byte)((uint)iVar35 >> 0x10) & (byte)((uint)iVar30 >> 0x10) &
                                  (byte)((uint)iVar29 >> 0x10) & (byte)((uint)iVar33 >> 0x10),
                                  CONCAT11((byte)((uint)iVar38 >> 8) & (byte)((uint)iVar32 >> 8) &
                                           (byte)((uint)iVar35 >> 8) & (byte)((uint)iVar30 >> 8) &
                                           (byte)((uint)iVar29 >> 8) & (byte)((uint)iVar33 >> 8),
                                           (byte)iVar38 & (byte)iVar32 & (byte)iVar35 & (byte)iVar30
                                           & (byte)iVar29 & (byte)iVar33))) != 0) {
              iVar25 = (int)param_3[1];
              lVar22 = (long)iVar25;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar25) {
                FUN_03086074(param_3,lVar22 + 1);
                iVar25 = (int)param_3[1];
              }
              puVar16 = (undefined8 *)(*param_3 + (long)iVar25 * 0x40);
              *(int *)(param_3 + 1) = (int)(lVar22 + 1);
              *(undefined4 *)(puVar16 + 4) = uVar23;
              *(int *)(puVar16 + 6) = (int)uVar24;
              goto LAB_03085fc0;
            }
          }
          else {
            uVar5 = *(uint *)(local_b0 + 5);
            lVar22 = 0;
            if (*param_2 != 0) {
              lVar22 = *param_2 + (long)param_2;
            }
            puVar20 = (undefined8 *)(lVar22 + (ulong)uVar4 * 0x30);
            puVar16 = (undefined8 *)(lVar22 + (ulong)uVar5 * 0x30);
            fVar50 = (float)puVar20[2];
            iVar30 = -(uint)(fVar63 <= fVar50);
            fVar46 = (float)((ulong)puVar20[2] >> 0x20);
            iVar32 = -(uint)(fVar56 <= fVar46);
            iVar33 = -(uint)(fVar44 <= (float)puVar20[3]);
            fVar47 = (float)puVar16[2];
            iVar52 = -(uint)(fVar63 <= fVar47);
            fVar48 = (float)((ulong)puVar16[2] >> 0x20);
            iVar53 = -(uint)(fVar56 <= fVar48);
            iVar54 = -(uint)(fVar44 <= (float)puVar16[3]);
            iVar35 = -(uint)(fVar55 <= fVar50);
            iVar38 = -(uint)(fVar43 <= fVar46);
            iVar29 = -(uint)(fVar41 <= (float)puVar20[3]);
            fVar50 = (float)*puVar20;
            iVar36 = -(uint)(fVar50 <= fVar64);
            fVar46 = (float)((ulong)*puVar20 >> 0x20);
            iVar37 = -(uint)(fVar46 <= fVar57);
            iVar39 = -(uint)((float)puVar20[1] <= fVar45);
            fVar58 = (float)*puVar16;
            iVar65 = -(uint)(fVar58 <= fVar42);
            fVar60 = (float)((ulong)*puVar16 >> 0x20);
            iVar66 = -(uint)(fVar60 <= fVar34);
            iVar67 = -(uint)((float)puVar16[1] <= fVar26);
            iVar59 = -(uint)(fVar58 <= fVar64);
            iVar61 = -(uint)(fVar60 <= fVar57);
            iVar62 = -(uint)((float)puVar16[1] <= fVar45);
            iVar27 = -(uint)(fVar50 <= fVar42);
            iVar28 = -(uint)(fVar46 <= fVar34);
            iVar31 = -(uint)((float)puVar20[1] <= fVar26);
            iVar40 = -(uint)(fVar55 <= fVar47);
            iVar49 = -(uint)(fVar43 <= fVar48);
            iVar51 = -(uint)(fVar41 <= (float)puVar16[3]);
            if (CONCAT13((byte)((uint)iVar49 >> 0x18) & (byte)((uint)iVar66 >> 0x18) &
                         (byte)((uint)iVar40 >> 0x18) & (byte)((uint)iVar65 >> 0x18) &
                         (byte)((uint)iVar51 >> 0x18) & (byte)((uint)iVar67 >> 0x18),
                         CONCAT12((byte)((uint)iVar49 >> 0x10) & (byte)((uint)iVar66 >> 0x10) &
                                  (byte)((uint)iVar40 >> 0x10) & (byte)((uint)iVar65 >> 0x10) &
                                  (byte)((uint)iVar51 >> 0x10) & (byte)((uint)iVar67 >> 0x10),
                                  CONCAT11((byte)((uint)iVar49 >> 8) & (byte)((uint)iVar66 >> 8) &
                                           (byte)((uint)iVar40 >> 8) & (byte)((uint)iVar65 >> 8) &
                                           (byte)((uint)iVar51 >> 8) & (byte)((uint)iVar67 >> 8),
                                           (byte)iVar49 & (byte)iVar66 & (byte)iVar40 & (byte)iVar65
                                           & (byte)iVar51 & (byte)iVar67))) != 0) {
              iVar40 = (int)param_3[1];
              lVar22 = (long)iVar40;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar40) {
                FUN_03086074(param_3,lVar22 + 1);
                iVar40 = (int)param_3[1];
              }
              puVar16 = (undefined8 *)(*param_3 + (long)iVar40 * 0x40);
              *(int *)(param_3 + 1) = (int)(lVar22 + 1);
              *(int *)(puVar16 + 4) = iVar25;
              *(uint *)(puVar16 + 6) = uVar5;
              puVar16[1] = uVar18;
              *puVar16 = uVar68;
              puVar16[3] = uVar70;
              puVar16[2] = uVar69;
            }
            if (CONCAT13((byte)((uint)iVar38 >> 0x18) & (byte)((uint)iVar28 >> 0x18) &
                         (byte)((uint)iVar35 >> 0x18) & (byte)((uint)iVar27 >> 0x18) &
                         (byte)((uint)iVar29 >> 0x18) & (byte)((uint)iVar31 >> 0x18),
                         CONCAT12((byte)((uint)iVar38 >> 0x10) & (byte)((uint)iVar28 >> 0x10) &
                                  (byte)((uint)iVar35 >> 0x10) & (byte)((uint)iVar27 >> 0x10) &
                                  (byte)((uint)iVar29 >> 0x10) & (byte)((uint)iVar31 >> 0x10),
                                  CONCAT11((byte)((uint)iVar38 >> 8) & (byte)((uint)iVar28 >> 8) &
                                           (byte)((uint)iVar35 >> 8) & (byte)((uint)iVar27 >> 8) &
                                           (byte)((uint)iVar29 >> 8) & (byte)((uint)iVar31 >> 8),
                                           (byte)iVar38 & (byte)iVar28 & (byte)iVar35 & (byte)iVar27
                                           & (byte)iVar29 & (byte)iVar31))) != 0) {
              iVar27 = (int)param_3[1];
              lVar22 = (long)iVar27;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar27) {
                FUN_03086074(param_3,lVar22 + 1);
                iVar27 = (int)param_3[1];
              }
              puVar16 = (undefined8 *)(*param_3 + (long)iVar27 * 0x40);
              *(int *)(param_3 + 1) = (int)(lVar22 + 1);
              *(int *)(puVar16 + 4) = iVar25;
              *(uint *)(puVar16 + 6) = uVar4;
              puVar16[1] = uVar18;
              *puVar16 = uVar68;
              puVar16[3] = uVar70;
              puVar16[2] = uVar69;
            }
            if (CONCAT13((byte)((uint)iVar53 >> 0x18) & (byte)((uint)iVar61 >> 0x18) &
                         (byte)((uint)iVar52 >> 0x18) & (byte)((uint)iVar59 >> 0x18) &
                         (byte)((uint)iVar54 >> 0x18) & (byte)((uint)iVar62 >> 0x18),
                         CONCAT12((byte)((uint)iVar53 >> 0x10) & (byte)((uint)iVar61 >> 0x10) &
                                  (byte)((uint)iVar52 >> 0x10) & (byte)((uint)iVar59 >> 0x10) &
                                  (byte)((uint)iVar54 >> 0x10) & (byte)((uint)iVar62 >> 0x10),
                                  CONCAT11((byte)((uint)iVar53 >> 8) & (byte)((uint)iVar61 >> 8) &
                                           (byte)((uint)iVar52 >> 8) & (byte)((uint)iVar59 >> 8) &
                                           (byte)((uint)iVar54 >> 8) & (byte)((uint)iVar62 >> 8),
                                           (byte)iVar53 & (byte)iVar61 & (byte)iVar52 & (byte)iVar59
                                           & (byte)iVar54 & (byte)iVar62))) != 0) {
              iVar25 = (int)param_3[1];
              lVar22 = (long)iVar25;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar25) {
                FUN_03086074(param_3,lVar22 + 1);
                iVar25 = (int)param_3[1];
              }
              puVar16 = (undefined8 *)(*param_3 + (long)iVar25 * 0x40);
              *(int *)(param_3 + 1) = (int)(lVar22 + 1);
              *(undefined4 *)(puVar16 + 4) = uVar23;
              *(uint *)(puVar16 + 6) = uVar5;
              puVar16[1] = (ulong)(uint)fVar44;
              *puVar16 = CONCAT44(fVar56,fVar63);
              puVar16[3] = (ulong)(uint)fVar45;
              puVar16[2] = CONCAT44(fVar57,fVar64);
            }
            if (CONCAT13((byte)((uint)iVar32 >> 0x18) & (byte)((uint)iVar37 >> 0x18) &
                         (byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar36 >> 0x18) &
                         (byte)((uint)iVar33 >> 0x18) & (byte)((uint)iVar39 >> 0x18),
                         CONCAT12((byte)((uint)iVar32 >> 0x10) & (byte)((uint)iVar37 >> 0x10) &
                                  (byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar36 >> 0x10) &
                                  (byte)((uint)iVar33 >> 0x10) & (byte)((uint)iVar39 >> 0x10),
                                  CONCAT11((byte)((uint)iVar32 >> 8) & (byte)((uint)iVar37 >> 8) &
                                           (byte)((uint)iVar30 >> 8) & (byte)((uint)iVar36 >> 8) &
                                           (byte)((uint)iVar33 >> 8) & (byte)((uint)iVar39 >> 8),
                                           (byte)iVar32 & (byte)iVar37 & (byte)iVar30 & (byte)iVar36
                                           & (byte)iVar33 & (byte)iVar39))) != 0) {
              iVar25 = (int)param_3[1];
              lVar22 = (long)iVar25;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar25) {
                FUN_03086074(param_3,lVar22 + 1);
                iVar25 = (int)param_3[1];
              }
              puVar16 = (undefined8 *)(*param_3 + (long)iVar25 * 0x40);
              *(int *)(param_3 + 1) = (int)(lVar22 + 1);
              *(undefined4 *)(puVar16 + 4) = uVar23;
              *(uint *)(puVar16 + 6) = uVar4;
LAB_03085fc0:
              puVar16[1] = (ulong)(uint)fVar44;
              *puVar16 = CONCAT44(fVar56,fVar63);
              puVar16[3] = (ulong)(uint)fVar45;
              puVar16[2] = CONCAT44(fVar57,fVar64);
            }
          }
        }
        else {
          uVar4 = *(uint *)((long)local_b0 + 0x24);
          if (uVar4 == 0) {
            local_70[0] = (uint)CONCAT12(bVar6,*(undefined2 *)(local_78 + 4));
            (**(code **)**(undefined8 **)*param_4)
                      (*(undefined8 **)*param_4,local_70,&local_a0,&local_d0);
          }
          else {
            uVar5 = *(uint *)(local_b0 + 5);
            lVar22 = 0;
            if (lVar21 != 0) {
              lVar22 = lVar21 + (long)param_2;
            }
            puVar20 = (undefined8 *)(lVar22 + (ulong)uVar4 * 0x30);
            puVar16 = (undefined8 *)(lVar22 + (ulong)uVar5 * 0x30);
            iVar32 = -(uint)(fVar44 <= (float)puVar20[2]);
            iVar36 = -(uint)(fVar45 <= (float)((ulong)puVar20[2] >> 0x20));
            iVar39 = -(uint)(fVar50 <= (float)puVar20[3]);
            iVar28 = -(uint)((float)*puVar20 <= fVar46);
            iVar35 = -(uint)((float)((ulong)*puVar20 >> 0x20) <= fVar47);
            iVar29 = -(uint)((float)puVar20[1] <= fVar56);
            iVar33 = -(uint)(fVar44 <= (float)puVar16[2]);
            iVar37 = -(uint)(fVar45 <= (float)((ulong)puVar16[2] >> 0x20));
            iVar40 = -(uint)(fVar50 <= (float)puVar16[3]);
            iVar31 = -(uint)((float)*puVar16 <= fVar46);
            iVar38 = -(uint)((float)((ulong)*puVar16 >> 0x20) <= fVar47);
            iVar30 = -(uint)((float)puVar16[1] <= fVar56);
            if (CONCAT13((byte)((uint)iVar37 >> 0x18) & (byte)((uint)iVar38 >> 0x18) &
                         (byte)((uint)iVar33 >> 0x18) & (byte)((uint)iVar31 >> 0x18) &
                         (byte)((uint)iVar40 >> 0x18) & (byte)((uint)iVar30 >> 0x18),
                         CONCAT12((byte)((uint)iVar37 >> 0x10) & (byte)((uint)iVar38 >> 0x10) &
                                  (byte)((uint)iVar33 >> 0x10) & (byte)((uint)iVar31 >> 0x10) &
                                  (byte)((uint)iVar40 >> 0x10) & (byte)((uint)iVar30 >> 0x10),
                                  CONCAT11((byte)((uint)iVar37 >> 8) & (byte)((uint)iVar38 >> 8) &
                                           (byte)((uint)iVar33 >> 8) & (byte)((uint)iVar31 >> 8) &
                                           (byte)((uint)iVar40 >> 8) & (byte)((uint)iVar30 >> 8),
                                           (byte)iVar37 & (byte)iVar38 & (byte)iVar33 & (byte)iVar31
                                           & (byte)iVar40 & (byte)iVar30))) != 0) {
              iVar31 = iVar25 + 1;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar25) {
                FUN_03086074(param_3,(long)iVar31);
                iVar25 = (int)param_3[1];
              }
              plVar1 = (long *)(*param_3 + (long)iVar25 * 0x40);
              *(int *)(param_3 + 1) = iVar31;
              *(int *)(plVar1 + 4) = iVar27;
              *(uint *)(plVar1 + 6) = uVar5;
              plVar1[1] = lVar12;
              *plVar1 = lVar2;
              plVar1[3] = lVar14;
              plVar1[2] = lVar13;
            }
            if (CONCAT13((byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar35 >> 0x18) &
                         (byte)((uint)iVar32 >> 0x18) & (byte)((uint)iVar28 >> 0x18) &
                         (byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar29 >> 0x18),
                         CONCAT12((byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar35 >> 0x10) &
                                  (byte)((uint)iVar32 >> 0x10) & (byte)((uint)iVar28 >> 0x10) &
                                  (byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar29 >> 0x10),
                                  CONCAT11((byte)((uint)iVar36 >> 8) & (byte)((uint)iVar35 >> 8) &
                                           (byte)((uint)iVar32 >> 8) & (byte)((uint)iVar28 >> 8) &
                                           (byte)((uint)iVar39 >> 8) & (byte)((uint)iVar29 >> 8),
                                           (byte)iVar36 & (byte)iVar35 & (byte)iVar32 & (byte)iVar28
                                           & (byte)iVar39 & (byte)iVar29))) != 0) {
              iVar25 = (int)param_3[1];
              lVar22 = (long)iVar25;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar25) {
                FUN_03086074(param_3,lVar22 + 1);
                iVar25 = (int)param_3[1];
              }
              plVar1 = (long *)(*param_3 + (long)iVar25 * 0x40);
              *(int *)(param_3 + 1) = (int)(lVar22 + 1);
              *(int *)(plVar1 + 4) = iVar27;
              *(uint *)(plVar1 + 6) = uVar4;
              plVar1[1] = lVar12;
              *plVar1 = lVar2;
              plVar1[3] = lVar14;
              plVar1[2] = lVar13;
            }
          }
        }
        if ((int)param_3[1] <= (int)uVar3) {
          return;
        }
        uVar18 = (long)(int)param_3[1] - 1;
        *(int *)(param_3 + 1) = (int)uVar18;
        plVar1 = (long *)(*param_3 + uVar18 * 0x40);
        local_80 = (int)plVar1[4];
        lVar22 = (long)local_80;
        local_a8 = *(uint *)(plVar1 + 6);
        uVar24 = (ulong)local_a8;
        lStack_98 = plVar1[1];
        local_a0 = *plVar1;
        lStack_88 = plVar1[3];
        lStack_90 = plVar1[2];
        lVar15 = *param_1;
        fVar42 = (float)lStack_90;
        fVar43 = (float)((ulong)local_a0 >> 0x20);
        fVar34 = (float)((ulong)lStack_90 >> 0x20);
        fVar55 = (float)local_a0;
        fVar41 = (float)lStack_98;
        local_78 = lVar22 * 6 + lVar15;
        lVar21 = *param_2;
        lVar2 = 0;
        if (lVar21 != 0) {
          lVar2 = lVar21 + (long)param_2;
        }
        local_b0 = (undefined8 *)(lVar2 + uVar24 * 0x30);
        uStack_c8 = local_b0[1];
        local_d0 = *local_b0;
        uStack_b8 = local_b0[3];
        local_c0 = local_b0[2];
        fVar26 = (float)lStack_88;
      } while( true );
    }
  }
  return;
}


