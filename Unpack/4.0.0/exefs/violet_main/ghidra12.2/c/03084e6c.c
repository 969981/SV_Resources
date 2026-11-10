/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03084e6c; name: FUN_03084e6c
 */


void FUN_03084e6c(long *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  byte *pbVar17;
  ulong uVar18;
  byte *pbVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  uint uVar23;
  long lVar24;
  ulong uVar25;
  int iVar26;
  float fVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  float fVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  int iVar55;
  float fVar56;
  float fVar57;
  int iVar58;
  float fVar59;
  int iVar60;
  float fVar61;
  int iVar62;
  float fVar63;
  int iVar64;
  float fVar65;
  int iVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  long local_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  uint local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  uint local_78;
  uint local_70 [4];
  
  local_78 = *(uint *)((long)param_1 + 0x1c);
  uVar25 = (ulong)local_78;
  if (local_78 != 0 && (int)param_2[1] != 0) {
    uVar4 = *(uint *)(param_3 + 1);
    lVar20 = *param_1;
    lVar16 = 0;
    if (lVar20 != 0) {
      lVar16 = lVar20 + (long)param_1;
    }
    local_80 = (undefined8 *)(lVar16 + uVar25 * 0x30);
    uStack_98 = local_80[1];
    local_a0 = *local_80;
    uStack_88 = local_80[3];
    local_90 = local_80[2];
    lStack_c8 = param_2[3];
    local_d0 = param_2[2];
    lStack_b8 = param_2[5];
    lStack_c0 = param_2[4];
    iVar26 = -(uint)((float)local_a0 <= (float)lStack_c0);
    fVar31 = (float)((ulong)lStack_c0 >> 0x20);
    iVar28 = -(uint)((float)((ulong)local_a0 >> 0x20) <= fVar31);
    fVar27 = (float)lStack_b8;
    iVar29 = -(uint)((float)uStack_98 <= fVar27);
    iVar30 = -(uint)((float)local_d0 <= (float)local_90);
    fVar43 = (float)((ulong)local_d0 >> 0x20);
    iVar34 = -(uint)(fVar43 <= (float)((ulong)local_90 >> 0x20));
    fVar32 = (float)lStack_c8;
    iVar35 = -(uint)(fVar32 <= (float)uStack_88);
    lVar16 = *param_2;
    local_b0 = 0;
    if (CONCAT13((byte)((uint)iVar28 >> 0x18) & (byte)((uint)iVar34 >> 0x18) &
                 (byte)((uint)iVar26 >> 0x18) & (byte)((uint)iVar30 >> 0x18) &
                 (byte)((uint)iVar29 >> 0x18) & (byte)((uint)iVar35 >> 0x18),
                 CONCAT12((byte)((uint)iVar28 >> 0x10) & (byte)((uint)iVar34 >> 0x10) &
                          (byte)((uint)iVar26 >> 0x10) & (byte)((uint)iVar30 >> 0x10) &
                          (byte)((uint)iVar29 >> 0x10) & (byte)((uint)iVar35 >> 0x10),
                          CONCAT11((byte)((uint)iVar28 >> 8) & (byte)((uint)iVar34 >> 8) &
                                   (byte)((uint)iVar26 >> 8) & (byte)((uint)iVar30 >> 8) &
                                   (byte)((uint)iVar29 >> 8) & (byte)((uint)iVar35 >> 8),
                                   (byte)iVar28 & (byte)iVar34 & (byte)iVar26 & (byte)iVar30 &
                                   (byte)iVar29 & (byte)iVar35))) != 0) {
      lVar24 = 0;
      uVar18 = (ulong)uVar4;
      local_a8 = lVar16;
      while( true ) {
        lVar15 = lStack_b8;
        lVar14 = lStack_c0;
        lVar13 = lStack_c8;
        lVar12 = local_d0;
        local_a8 = local_a8 + (long)param_2;
        iVar26 = (int)uVar18;
        uVar5 = *(uint *)((long)local_80 + 0x24);
        fVar71 = (float)lStack_c0;
        fVar68 = (float)((ulong)lStack_c0 >> 0x20);
        fVar33 = (float)lStack_b8;
        fVar72 = (float)local_d0;
        fVar69 = (float)((ulong)local_d0 >> 0x20);
        fVar70 = (float)lStack_c8;
        uVar23 = (uint)lVar24;
        if (uVar5 == 0) {
          bVar7 = *(byte *)(local_a8 + 3);
          if ((char)bVar7 < '\0') {
            pbVar19 = (byte *)((long)param_2 + ((long)(int)uVar23 + 1) * 6 + lVar16);
            iVar26 = ((bVar7 & 0x7f) << 0x11 | (uint)*(ushort *)(local_a8 + 4) << 1) + uVar23;
            pbVar17 = (byte *)((long)param_2 + (long)iVar26 * 6 + lVar16);
            fVar49 = (fVar71 - fVar72) * 0.0044247787;
            fVar68 = (fVar68 - fVar69) * 0.0044247787;
            fVar33 = (fVar33 - fVar70) * 0.0044247787;
            bVar7 = pbVar19[2] & 0xf;
            bVar10 = *pbVar19 >> 4;
            bVar9 = *pbVar19 & 0xf;
            bVar11 = pbVar19[1] >> 4;
            fVar69 = fVar72 + (float)(byte)(bVar10 * bVar10) * fVar49;
            bVar8 = pbVar19[2] >> 4;
            fVar56 = fVar43 + (float)(byte)(bVar11 * bVar11) * fVar68;
            bVar10 = pbVar19[1] & 0xf;
            fVar70 = fVar32 + (float)(byte)(bVar8 * bVar8) * fVar33;
            fVar50 = fVar71 - (float)(byte)(bVar9 * bVar9) * fVar49;
            bVar9 = *pbVar17 >> 4;
            fVar51 = fVar31 - (float)(byte)(bVar10 * bVar10) * fVar68;
            bVar10 = pbVar17[1] >> 4;
            fVar52 = fVar27 - (float)(byte)(bVar7 * bVar7) * fVar33;
            bVar8 = pbVar17[2] >> 4;
            bVar7 = pbVar17[2] & 0xf;
            fVar72 = fVar72 + (float)(byte)(bVar9 * bVar9) * fVar49;
            bVar9 = *pbVar17 & 0xf;
            fVar43 = fVar43 + (float)(byte)(bVar10 * bVar10) * fVar68;
            fVar32 = fVar32 + (float)(byte)(bVar8 * bVar8) * fVar33;
            fVar71 = fVar71 - (float)(byte)(bVar9 * bVar9) * fVar49;
            bVar9 = pbVar17[1] & 0xf;
            fVar31 = fVar31 - (float)(byte)(bVar9 * bVar9) * fVar68;
            fVar27 = fVar27 - (float)(byte)(bVar7 * bVar7) * fVar33;
            iVar42 = -(uint)(fVar69 <= (float)local_90);
            fVar33 = (float)((ulong)local_90 >> 0x20);
            iVar45 = -(uint)(fVar56 <= fVar33);
            iVar47 = -(uint)(fVar70 <= (float)uStack_88);
            iVar37 = -(uint)((float)local_a0 <= fVar50);
            fVar68 = (float)((ulong)local_a0 >> 0x20);
            iVar38 = -(uint)(fVar68 <= fVar51);
            iVar40 = -(uint)((float)uStack_98 <= fVar52);
            iVar28 = -(uint)((float)local_a0 <= fVar71);
            iVar29 = -(uint)(fVar68 <= fVar31);
            iVar30 = -(uint)((float)uStack_98 <= fVar27);
            iVar34 = -(uint)(fVar72 <= (float)local_90);
            iVar35 = -(uint)(fVar43 <= fVar33);
            iVar36 = -(uint)(fVar32 <= (float)uStack_88);
            if (CONCAT13((byte)((uint)iVar35 >> 0x18) & (byte)((uint)iVar29 >> 0x18) &
                         (byte)((uint)iVar34 >> 0x18) & (byte)((uint)iVar28 >> 0x18) &
                         (byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar30 >> 0x18),
                         CONCAT12((byte)((uint)iVar35 >> 0x10) & (byte)((uint)iVar29 >> 0x10) &
                                  (byte)((uint)iVar34 >> 0x10) & (byte)((uint)iVar28 >> 0x10) &
                                  (byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar30 >> 0x10),
                                  CONCAT11((byte)((uint)iVar35 >> 8) & (byte)((uint)iVar29 >> 8) &
                                           (byte)((uint)iVar34 >> 8) & (byte)((uint)iVar28 >> 8) &
                                           (byte)((uint)iVar36 >> 8) & (byte)((uint)iVar30 >> 8),
                                           (byte)iVar35 & (byte)iVar29 & (byte)iVar34 & (byte)iVar28
                                           & (byte)iVar36 & (byte)iVar30))) != 0) {
              iVar28 = (int)param_3[1];
              lVar16 = (long)iVar28;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar28) {
                FUN_03085748(param_3,lVar16 + 1);
                iVar28 = (int)param_3[1];
              }
              puVar3 = (undefined4 *)(*param_3 + (long)iVar28 * 0x40);
              *(int *)(param_3 + 1) = (int)(lVar16 + 1);
              *puVar3 = (int)uVar25;
              puVar3[0xc] = iVar26;
              *(ulong *)(puVar3 + 6) = (ulong)(uint)fVar32;
              *(ulong *)(puVar3 + 4) = CONCAT44(fVar43,fVar72);
              *(ulong *)(puVar3 + 10) = (ulong)(uint)fVar27;
              *(ulong *)(puVar3 + 8) = CONCAT44(fVar31,fVar71);
            }
            if (CONCAT13((byte)((uint)iVar45 >> 0x18) & (byte)((uint)iVar38 >> 0x18) &
                         (byte)((uint)iVar42 >> 0x18) & (byte)((uint)iVar37 >> 0x18) &
                         (byte)((uint)iVar47 >> 0x18) & (byte)((uint)iVar40 >> 0x18),
                         CONCAT12((byte)((uint)iVar45 >> 0x10) & (byte)((uint)iVar38 >> 0x10) &
                                  (byte)((uint)iVar42 >> 0x10) & (byte)((uint)iVar37 >> 0x10) &
                                  (byte)((uint)iVar47 >> 0x10) & (byte)((uint)iVar40 >> 0x10),
                                  CONCAT11((byte)((uint)iVar45 >> 8) & (byte)((uint)iVar38 >> 8) &
                                           (byte)((uint)iVar42 >> 8) & (byte)((uint)iVar37 >> 8) &
                                           (byte)((uint)iVar47 >> 8) & (byte)((uint)iVar40 >> 8),
                                           (byte)iVar45 & (byte)iVar38 & (byte)iVar42 & (byte)iVar37
                                           & (byte)iVar47 & (byte)iVar40))) != 0) {
              iVar26 = (int)param_3[1];
              lVar16 = (long)iVar26;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar26) {
                FUN_03085748(param_3,lVar16 + 1);
                iVar26 = (int)param_3[1];
              }
              puVar3 = (undefined4 *)(*param_3 + (long)iVar26 * 0x40);
              *(int *)(param_3 + 1) = (int)(lVar16 + 1);
              *puVar3 = (int)uVar25;
              puVar3[0xc] = (int)((long)(int)uVar23 + 1);
              *(ulong *)(puVar3 + 6) = (ulong)(uint)fVar70;
              *(ulong *)(puVar3 + 4) = CONCAT44(fVar56,fVar69);
              *(ulong *)(puVar3 + 10) = (ulong)(uint)fVar52;
              *(ulong *)(puVar3 + 8) = CONCAT44(fVar51,fVar50);
            }
          }
          else {
            local_70[0] = (uint)CONCAT12(bVar7,*(undefined2 *)(local_a8 + 4));
            (**(code **)**(undefined8 **)*param_4)
                      (*(undefined8 **)*param_4,local_70,&local_d0,&local_a0);
          }
        }
        else {
          uVar6 = *(uint *)(local_80 + 5);
          lVar24 = 0;
          if (lVar20 != 0) {
            lVar24 = lVar20 + (long)param_1;
          }
          puVar22 = (undefined8 *)(lVar24 + (ulong)uVar5 * 0x30);
          puVar21 = (undefined8 *)(lVar24 + (ulong)uVar6 * 0x30);
          fVar61 = (float)*puVar22;
          fVar63 = (float)((ulong)*puVar22 >> 0x20);
          fVar54 = (float)puVar22[2];
          fVar57 = (float)((ulong)puVar22[2] >> 0x20);
          fVar52 = (float)*puVar21;
          fVar56 = (float)((ulong)*puVar21 >> 0x20);
          fVar49 = (float)puVar21[2];
          fVar50 = (float)((ulong)puVar21[2] >> 0x20);
          fVar51 = (float)puVar21[3];
          fVar59 = (float)puVar22[3];
          fVar65 = (float)puVar22[1];
          fVar53 = (float)puVar21[1];
          if (*(char *)(local_a8 + 3) < 0) {
            pbVar19 = (byte *)((long)param_2 + ((long)(int)uVar23 + 1) * 6 + lVar16);
            fVar67 = (fVar71 - fVar72) * 0.0044247787;
            fVar68 = (fVar68 - fVar69) * 0.0044247787;
            fVar69 = (fVar33 - fVar70) * 0.0044247787;
            uVar1 = (((int)*(char *)(local_a8 + 3) & 0x7fU) << 0x11 |
                    (uint)*(ushort *)(local_a8 + 4) << 1) + uVar23;
            pbVar17 = (byte *)((long)param_2 + (long)(int)uVar1 * 6 + lVar16);
            bVar9 = *pbVar17 >> 4;
            bVar7 = *pbVar19 >> 4;
            fVar70 = fVar72 + (float)(byte)(bVar7 * bVar7) * fVar67;
            bVar7 = *pbVar19 & 0xf;
            fVar72 = fVar72 + (float)(byte)(bVar9 * bVar9) * fVar67;
            bVar9 = *pbVar17 & 0xf;
            fVar73 = fVar71 - (float)(byte)(bVar9 * bVar9) * fVar67;
            fVar71 = fVar71 - (float)(byte)(bVar7 * bVar7) * fVar67;
            bVar9 = pbVar19[1] >> 4;
            bVar10 = pbVar17[1] >> 4;
            bVar7 = pbVar17[1] & 0xf;
            fVar67 = fVar43 + (float)(byte)(bVar9 * bVar9) * fVar68;
            fVar43 = fVar43 + (float)(byte)(bVar10 * bVar10) * fVar68;
            fVar74 = fVar31 - (float)(byte)(bVar7 * bVar7) * fVar68;
            bVar7 = pbVar19[1] & 0xf;
            bVar8 = pbVar19[2] >> 4;
            bVar11 = pbVar17[2] >> 4;
            bVar9 = pbVar19[2] & 0xf;
            bVar10 = pbVar17[2] & 0xf;
            fVar31 = fVar31 - (float)(byte)(bVar7 * bVar7) * fVar68;
            fVar68 = fVar32 + (float)(byte)(bVar8 * bVar8) * fVar69;
            fVar32 = fVar32 + (float)(byte)(bVar11 * bVar11) * fVar69;
            fVar33 = fVar27 - (float)(byte)(bVar10 * bVar10) * fVar69;
            fVar27 = fVar27 - (float)(byte)(bVar9 * bVar9) * fVar69;
            iVar44 = -(uint)(fVar70 <= fVar49);
            iVar46 = -(uint)(fVar67 <= fVar50);
            iVar48 = -(uint)(fVar68 <= fVar51);
            iVar36 = -(uint)(fVar70 <= fVar54);
            iVar38 = -(uint)(fVar67 <= fVar57);
            iVar42 = -(uint)(fVar68 <= fVar59);
            iVar55 = -(uint)(fVar72 <= fVar54);
            iVar58 = -(uint)(fVar43 <= fVar57);
            iVar60 = -(uint)(fVar32 <= fVar59);
            iVar26 = -(uint)(fVar61 <= fVar71);
            iVar29 = -(uint)(fVar63 <= fVar31);
            iVar34 = -(uint)(fVar65 <= fVar27);
            iVar47 = -(uint)(fVar52 <= fVar71);
            iVar39 = -(uint)(fVar56 <= fVar31);
            iVar41 = -(uint)(fVar53 <= fVar27);
            iVar62 = -(uint)(fVar61 <= fVar73);
            iVar64 = -(uint)(fVar63 <= fVar74);
            iVar66 = -(uint)(fVar65 <= fVar33);
            iVar37 = -(uint)(fVar52 <= fVar73);
            iVar40 = -(uint)(fVar56 <= fVar74);
            iVar45 = -(uint)(fVar53 <= fVar33);
            iVar28 = -(uint)(fVar72 <= fVar49);
            iVar30 = -(uint)(fVar43 <= fVar50);
            iVar35 = -(uint)(fVar32 <= fVar51);
            if (CONCAT13((byte)((uint)iVar40 >> 0x18) & (byte)((uint)iVar30 >> 0x18) &
                         (byte)((uint)iVar37 >> 0x18) & (byte)((uint)iVar28 >> 0x18) &
                         (byte)((uint)iVar45 >> 0x18) & (byte)((uint)iVar35 >> 0x18),
                         CONCAT12((byte)((uint)iVar40 >> 0x10) & (byte)((uint)iVar30 >> 0x10) &
                                  (byte)((uint)iVar37 >> 0x10) & (byte)((uint)iVar28 >> 0x10) &
                                  (byte)((uint)iVar45 >> 0x10) & (byte)((uint)iVar35 >> 0x10),
                                  CONCAT11((byte)((uint)iVar40 >> 8) & (byte)((uint)iVar30 >> 8) &
                                           (byte)((uint)iVar37 >> 8) & (byte)((uint)iVar28 >> 8) &
                                           (byte)((uint)iVar45 >> 8) & (byte)((uint)iVar35 >> 8),
                                           (byte)iVar40 & (byte)iVar30 & (byte)iVar37 & (byte)iVar28
                                           & (byte)iVar45 & (byte)iVar35))) != 0) {
              iVar28 = (int)param_3[1];
              lVar16 = (long)iVar28;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar28) {
                FUN_03085748(param_3,lVar16 + 1);
                iVar28 = (int)param_3[1];
              }
              puVar2 = (uint *)(*param_3 + (long)iVar28 * 0x40);
              *(int *)(param_3 + 1) = (int)(lVar16 + 1);
              *puVar2 = uVar6;
              puVar2[0xc] = uVar1;
              *(ulong *)(puVar2 + 6) = (ulong)(uint)fVar32;
              *(ulong *)(puVar2 + 4) = CONCAT44(fVar43,fVar72);
              *(ulong *)(puVar2 + 10) = (ulong)(uint)fVar33;
              *(ulong *)(puVar2 + 8) = CONCAT44(fVar74,fVar73);
            }
            uVar23 = (uint)((long)(int)uVar23 + 1);
            if (CONCAT13((byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar46 >> 0x18) &
                         (byte)((uint)iVar47 >> 0x18) & (byte)((uint)iVar44 >> 0x18) &
                         (byte)((uint)iVar41 >> 0x18) & (byte)((uint)iVar48 >> 0x18),
                         CONCAT12((byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar46 >> 0x10) &
                                  (byte)((uint)iVar47 >> 0x10) & (byte)((uint)iVar44 >> 0x10) &
                                  (byte)((uint)iVar41 >> 0x10) & (byte)((uint)iVar48 >> 0x10),
                                  CONCAT11((byte)((uint)iVar39 >> 8) & (byte)((uint)iVar46 >> 8) &
                                           (byte)((uint)iVar47 >> 8) & (byte)((uint)iVar44 >> 8) &
                                           (byte)((uint)iVar41 >> 8) & (byte)((uint)iVar48 >> 8),
                                           (byte)iVar39 & (byte)iVar46 & (byte)iVar47 & (byte)iVar44
                                           & (byte)iVar41 & (byte)iVar48))) != 0) {
              iVar28 = (int)param_3[1];
              lVar16 = (long)iVar28;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar28) {
                FUN_03085748(param_3,lVar16 + 1);
                iVar28 = (int)param_3[1];
              }
              puVar2 = (uint *)(*param_3 + (long)iVar28 * 0x40);
              *(int *)(param_3 + 1) = (int)(lVar16 + 1);
              *(ulong *)(puVar2 + 6) = (ulong)(uint)fVar68;
              *(ulong *)(puVar2 + 4) = CONCAT44(fVar67,fVar70);
              *(ulong *)(puVar2 + 10) = (ulong)(uint)fVar27;
              *(ulong *)(puVar2 + 8) = CONCAT44(fVar31,fVar71);
              *puVar2 = uVar6;
              puVar2[0xc] = uVar23;
            }
            if (CONCAT13((byte)((uint)iVar64 >> 0x18) & (byte)((uint)iVar58 >> 0x18) &
                         (byte)((uint)iVar62 >> 0x18) & (byte)((uint)iVar55 >> 0x18) &
                         (byte)((uint)iVar66 >> 0x18) & (byte)((uint)iVar60 >> 0x18),
                         CONCAT12((byte)((uint)iVar64 >> 0x10) & (byte)((uint)iVar58 >> 0x10) &
                                  (byte)((uint)iVar62 >> 0x10) & (byte)((uint)iVar55 >> 0x10) &
                                  (byte)((uint)iVar66 >> 0x10) & (byte)((uint)iVar60 >> 0x10),
                                  CONCAT11((byte)((uint)iVar64 >> 8) & (byte)((uint)iVar58 >> 8) &
                                           (byte)((uint)iVar62 >> 8) & (byte)((uint)iVar55 >> 8) &
                                           (byte)((uint)iVar66 >> 8) & (byte)((uint)iVar60 >> 8),
                                           (byte)iVar64 & (byte)iVar58 & (byte)iVar62 & (byte)iVar55
                                           & (byte)iVar66 & (byte)iVar60))) != 0) {
              iVar28 = (int)param_3[1];
              lVar16 = (long)iVar28;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar28) {
                FUN_03085748(param_3,lVar16 + 1);
                iVar28 = (int)param_3[1];
              }
              puVar2 = (uint *)(*param_3 + (long)iVar28 * 0x40);
              *(int *)(param_3 + 1) = (int)(lVar16 + 1);
              *puVar2 = uVar5;
              puVar2[0xc] = uVar1;
              *(ulong *)(puVar2 + 6) = (ulong)(uint)fVar32;
              *(ulong *)(puVar2 + 4) = CONCAT44(fVar43,fVar72);
              *(ulong *)(puVar2 + 10) = (ulong)(uint)fVar33;
              *(ulong *)(puVar2 + 8) = CONCAT44(fVar74,fVar73);
            }
            if (CONCAT13((byte)((uint)iVar29 >> 0x18) & (byte)((uint)iVar38 >> 0x18) &
                         (byte)((uint)iVar26 >> 0x18) & (byte)((uint)iVar36 >> 0x18) &
                         (byte)((uint)iVar34 >> 0x18) & (byte)((uint)iVar42 >> 0x18),
                         CONCAT12((byte)((uint)iVar29 >> 0x10) & (byte)((uint)iVar38 >> 0x10) &
                                  (byte)((uint)iVar26 >> 0x10) & (byte)((uint)iVar36 >> 0x10) &
                                  (byte)((uint)iVar34 >> 0x10) & (byte)((uint)iVar42 >> 0x10),
                                  CONCAT11((byte)((uint)iVar29 >> 8) & (byte)((uint)iVar38 >> 8) &
                                           (byte)((uint)iVar26 >> 8) & (byte)((uint)iVar36 >> 8) &
                                           (byte)((uint)iVar34 >> 8) & (byte)((uint)iVar42 >> 8),
                                           (byte)iVar29 & (byte)iVar38 & (byte)iVar26 & (byte)iVar36
                                           & (byte)iVar34 & (byte)iVar42))) != 0) {
              iVar26 = (int)param_3[1];
              lVar16 = (long)iVar26;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar26) {
                FUN_03085748(param_3,lVar16 + 1);
                iVar26 = (int)param_3[1];
              }
              puVar2 = (uint *)(*param_3 + (long)iVar26 * 0x40);
              *(int *)(param_3 + 1) = (int)(lVar16 + 1);
              *(ulong *)(puVar2 + 6) = (ulong)(uint)fVar68;
              *(ulong *)(puVar2 + 4) = CONCAT44(fVar67,fVar70);
              *(ulong *)(puVar2 + 10) = (ulong)(uint)fVar27;
              *(ulong *)(puVar2 + 8) = CONCAT44(fVar31,fVar71);
              *puVar2 = uVar5;
              puVar2[0xc] = uVar23;
            }
          }
          else {
            iVar28 = -(uint)(fVar61 <= fVar71);
            iVar29 = -(uint)(fVar63 <= fVar68);
            iVar30 = -(uint)(fVar65 <= fVar33);
            iVar42 = -(uint)(fVar72 <= fVar54);
            iVar45 = -(uint)(fVar69 <= fVar57);
            iVar47 = -(uint)(fVar70 <= fVar59);
            iVar34 = -(uint)(fVar52 <= fVar71);
            iVar35 = -(uint)(fVar56 <= fVar68);
            iVar36 = -(uint)(fVar53 <= fVar33);
            iVar37 = -(uint)(fVar72 <= fVar49);
            iVar38 = -(uint)(fVar69 <= fVar50);
            iVar40 = -(uint)(fVar70 <= fVar51);
            if (CONCAT13((byte)((uint)iVar38 >> 0x18) & (byte)((uint)iVar35 >> 0x18) &
                         (byte)((uint)iVar37 >> 0x18) & (byte)((uint)iVar34 >> 0x18) &
                         (byte)((uint)iVar40 >> 0x18) & (byte)((uint)iVar36 >> 0x18),
                         CONCAT12((byte)((uint)iVar38 >> 0x10) & (byte)((uint)iVar35 >> 0x10) &
                                  (byte)((uint)iVar37 >> 0x10) & (byte)((uint)iVar34 >> 0x10) &
                                  (byte)((uint)iVar40 >> 0x10) & (byte)((uint)iVar36 >> 0x10),
                                  CONCAT11((byte)((uint)iVar38 >> 8) & (byte)((uint)iVar35 >> 8) &
                                           (byte)((uint)iVar37 >> 8) & (byte)((uint)iVar34 >> 8) &
                                           (byte)((uint)iVar40 >> 8) & (byte)((uint)iVar36 >> 8),
                                           (byte)iVar38 & (byte)iVar35 & (byte)iVar37 & (byte)iVar34
                                           & (byte)iVar40 & (byte)iVar36))) != 0) {
              iVar34 = iVar26 + 1;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar26) {
                FUN_03085748(param_3,(long)iVar34);
                iVar26 = (int)param_3[1];
              }
              puVar2 = (uint *)(*param_3 + (long)iVar26 * 0x40);
              *(int *)(param_3 + 1) = iVar34;
              *puVar2 = uVar6;
              puVar2[0xc] = uVar23;
              *(long *)(puVar2 + 6) = lVar13;
              *(long *)(puVar2 + 4) = lVar12;
              *(long *)(puVar2 + 10) = lVar15;
              *(long *)(puVar2 + 8) = lVar14;
            }
            if (CONCAT13((byte)((uint)iVar45 >> 0x18) & (byte)((uint)iVar29 >> 0x18) &
                         (byte)((uint)iVar42 >> 0x18) & (byte)((uint)iVar28 >> 0x18) &
                         (byte)((uint)iVar47 >> 0x18) & (byte)((uint)iVar30 >> 0x18),
                         CONCAT12((byte)((uint)iVar45 >> 0x10) & (byte)((uint)iVar29 >> 0x10) &
                                  (byte)((uint)iVar42 >> 0x10) & (byte)((uint)iVar28 >> 0x10) &
                                  (byte)((uint)iVar47 >> 0x10) & (byte)((uint)iVar30 >> 0x10),
                                  CONCAT11((byte)((uint)iVar45 >> 8) & (byte)((uint)iVar29 >> 8) &
                                           (byte)((uint)iVar42 >> 8) & (byte)((uint)iVar28 >> 8) &
                                           (byte)((uint)iVar47 >> 8) & (byte)((uint)iVar30 >> 8),
                                           (byte)iVar45 & (byte)iVar29 & (byte)iVar42 & (byte)iVar28
                                           & (byte)iVar47 & (byte)iVar30))) != 0) {
              iVar26 = (int)param_3[1];
              lVar16 = (long)iVar26;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar26) {
                FUN_03085748(param_3,lVar16 + 1);
                iVar26 = (int)param_3[1];
              }
              puVar2 = (uint *)(*param_3 + (long)iVar26 * 0x40);
              *(int *)(param_3 + 1) = (int)(lVar16 + 1);
              *puVar2 = uVar5;
              puVar2[0xc] = uVar23;
              *(long *)(puVar2 + 6) = lVar13;
              *(long *)(puVar2 + 4) = lVar12;
              *(long *)(puVar2 + 10) = lVar15;
              *(long *)(puVar2 + 8) = lVar14;
            }
          }
        }
        if ((int)param_3[1] <= (int)uVar4) break;
        uVar18 = (long)(int)param_3[1] - 1;
        *(int *)(param_3 + 1) = (int)uVar18;
        puVar2 = (uint *)(*param_3 + uVar18 * 0x40);
        local_78 = *puVar2;
        uVar25 = (ulong)local_78;
        local_b0 = puVar2[0xc];
        lVar24 = (long)(int)local_b0;
        lStack_c8 = *(long *)(puVar2 + 6);
        local_d0 = *(long *)(puVar2 + 4);
        lStack_b8 = *(long *)(puVar2 + 10);
        lStack_c0 = *(long *)(puVar2 + 8);
        lVar20 = *param_1;
        lVar16 = 0;
        if (lVar20 != 0) {
          lVar16 = lVar20 + (long)param_1;
        }
        fVar43 = (float)((ulong)local_d0 >> 0x20);
        local_80 = (undefined8 *)(lVar16 + uVar25 * 0x30);
        fVar32 = (float)lStack_c8;
        fVar31 = (float)((ulong)lStack_c0 >> 0x20);
        uStack_98 = local_80[1];
        local_a0 = *local_80;
        uStack_88 = local_80[3];
        local_90 = local_80[2];
        fVar27 = (float)lStack_b8;
        lVar16 = *param_2;
        local_a8 = lVar24 * 6 + lVar16;
      }
    }
  }
  return;
}


