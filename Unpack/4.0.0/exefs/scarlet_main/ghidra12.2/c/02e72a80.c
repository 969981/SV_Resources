/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e72a80; name: FUN_02e72a80
 */


void FUN_02e72a80(long param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  byte bVar14;
  float fVar13;
  byte bVar15;
  float fVar16;
  byte bVar17;
  float fVar18;
  undefined4 uVar20;
  undefined8 uVar19;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *local_108;
  long *plStack_100;
  undefined1 *local_f8;
  undefined4 local_f0;
  uint local_ec;
  undefined1 auStack_e8 [136];
  
  lVar9 = tpidr_el0;
  lVar6 = *(long *)(lVar9 + 0x1000b8);
  if (lVar6 == 0) {
    lVar6 = FUN_00e5d3b4();
    *(long *)(lVar9 + 0x1000b8) = lVar6;
  }
  plVar12 = *(long **)(lVar6 + 0x3e0);
  if (plVar12 != (long *)0x0) {
    lVar9 = *plVar12;
    if (*(code **)(lVar9 + 0x18) != (code *)0x0) {
      (**(code **)(lVar9 + 0x18))("BroadPhase",10,*(undefined8 *)(lVar9 + 0x28));
    }
    puVar1 = (undefined8 *)plVar12[2];
    uVar7 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar7 <= (ulong)plVar12[3]) && (plVar12[2] = uVar7, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "TtBroadPhase";
      uVar2 = nn::os::GetSystemTick();
      puVar1[1] = uVar2;
    }
    if (((*(byte *)(lVar9 + 0x38) & 1) != 0) && (plVar12[6] != 0)) {
      puVar1 = (undefined8 *)plVar12[2];
      uVar7 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar7 <= (ulong)plVar12[3]) && (plVar12[2] = uVar7, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar12[6] + 8);
      }
    }
    lVar9 = *plVar12;
    if (*(code **)(lVar9 + 0x18) != (code *)0x0) {
      (**(code **)(lVar9 + 0x18))("updateBodyAabbs",0xf,*(undefined8 *)(lVar9 + 0x28));
    }
    puVar1 = (undefined8 *)plVar12[2];
    uVar7 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar7 <= (ulong)plVar12[3]) && (plVar12[2] = uVar7, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "TtupdateBodyAabbs";
      uVar2 = nn::os::GetSystemTick();
      puVar1[1] = uVar2;
    }
    if (((*(byte *)(lVar9 + 0x38) & 1) != 0) && (plVar12[6] != 0)) {
      puVar1 = (undefined8 *)plVar12[2];
      uVar7 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar7 <= (ulong)plVar12[3]) && (plVar12[2] = uVar7, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar12[6] + 8);
      }
    }
  }
  local_108 = plVar12;
  plStack_100 = plVar12;
  if ((param_3 != 0) && (FUN_02e72238(*(undefined8 *)(param_1 + 8)), 0 < (int)param_3)) {
    uVar7 = 0;
    lVar9 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + 0x10);
    do {
      uVar8 = (ulong)*(uint *)(param_2 + uVar7 * 4) & 0xffffff;
      if ((*(byte *)(lVar9 + uVar8 * 0xc0 + 0x88) & 1) != 0) {
        uVar21 = *(uint *)(*(long *)(param_1 + 0x130) + uVar8 * 4);
        lVar6 = lVar9 + uVar8 * 0xc0;
        uStack_118 = *(undefined8 *)(lVar6 + 0x68);
        uStack_120 = *(undefined8 *)(lVar6 + 0x60);
        local_130 = *(undefined8 *)(lVar6 + 0x70);
        lVar10 = *(long *)(*(long *)(param_1 + 0x10) + ((ulong)uVar21 & 0x1f) * 8);
        puVar1 = (undefined8 *)(*(long *)(lVar10 + 0x50) + (ulong)(uVar21 >> 5) * 0x10);
        uVar20 = (undefined4)((ulong)uStack_118 >> 0x20);
        uStack_128 = CONCAT44(uVar20,uVar20);
        uVar19 = puVar1[1];
        uVar2 = *puVar1;
        local_f0 = 0;
        local_ec = 0x80000020;
        uVar21 = (uint)((int)uVar2 >> 0x1f) >> 1;
        uVar22 = (uint)((long)uVar2 >> 0x3f) >> 1;
        uVar23 = (uint)((int)uVar19 >> 0x1f) >> 1;
        uVar24 = (uint)((long)uVar19 >> 0x3f) >> 1;
        bVar14 = (byte)((ulong)uVar2 >> 0x18);
        bVar15 = (byte)((ulong)uVar2 >> 0x38);
        local_140 = CONCAT17((byte)((char)bVar15 >> 7) >> 1 ^ bVar15,
                             CONCAT16((byte)(uVar22 >> 0x10) ^ (byte)((ulong)uVar2 >> 0x30),
                                      CONCAT15((byte)(uVar22 >> 8) ^ (byte)((ulong)uVar2 >> 0x28),
                                               CONCAT14((byte)uVar22 ^ (byte)((ulong)uVar2 >> 0x20),
                                                        CONCAT13((byte)((char)bVar14 >> 7) >> 1 ^
                                                                 bVar14,CONCAT12((byte)(uVar21 >>
                                                                                       0x10) ^
                                                                                 (byte)((ulong)uVar2
                                                                                       >> 0x10),
                                                                                 CONCAT11((byte)(
                                                  uVar21 >> 8) ^ (byte)((ulong)uVar2 >> 8),
                                                  (byte)uVar21 ^ (byte)uVar2)))))));
        bVar14 = (byte)((ulong)uVar19 >> 0x18);
        bVar15 = (byte)((ulong)uVar19 >> 0x38);
        uStack_138 = CONCAT17((byte)((char)bVar15 >> 7) >> 1 ^ bVar15,
                              CONCAT16((byte)(uVar24 >> 0x10) ^ (byte)((ulong)uVar19 >> 0x30),
                                       CONCAT15((byte)(uVar24 >> 8) ^ (byte)((ulong)uVar19 >> 0x28),
                                                CONCAT14((byte)uVar24 ^
                                                         (byte)((ulong)uVar19 >> 0x20),
                                                         CONCAT13((byte)((char)bVar14 >> 7) >> 1 ^
                                                                  bVar14,CONCAT12((byte)(uVar23 >>
                                                                                        0x10) ^
                                                                                  (byte)((ulong)
                                                  uVar19 >> 0x10),
                                                  CONCAT11((byte)(uVar23 >> 8) ^
                                                           (byte)((ulong)uVar19 >> 8),
                                                           (byte)uVar23 ^ (byte)uVar19)))))));
        plVar3 = (long *)(lVar10 + 8);
        lVar6 = 0;
        if (*plVar3 != 0) {
          lVar6 = *plVar3 + (long)plVar3;
        }
        local_f8 = auStack_e8;
        uVar8 = FUN_0325b500(plVar3,&local_f8,lVar6 + 0x80,&local_140,&local_130);
        local_f0 = 0;
        if ((-1 < (int)local_ec) && (local_f8 != (undefined1 *)0x0)) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                    (PTR_PTR_047d1a50,local_f8,(ulong)local_ec << 2);
        }
        if ((uVar8 & 1) == 0) {
          iVar5 = *(int *)(param_1 + 0x18);
          if (0 < iVar5) {
            lVar6 = 0;
            do {
              lVar4 = *(long *)(*(long *)(param_1 + 0x10) + lVar6 * 8);
              if (lVar4 != lVar10) {
                uVar19 = puVar1[1];
                uVar2 = *puVar1;
                local_f0 = 0;
                local_ec = 0x80000020;
                uVar21 = (uint)((int)uVar2 >> 0x1f) >> 1;
                uVar22 = (uint)((long)uVar2 >> 0x3f) >> 1;
                uVar23 = (uint)((int)uVar19 >> 0x1f) >> 1;
                uVar24 = (uint)((long)uVar19 >> 0x3f) >> 1;
                bVar14 = (byte)((ulong)uVar2 >> 0x18);
                bVar15 = (byte)((ulong)uVar2 >> 0x38);
                local_140 = CONCAT17((byte)((char)bVar15 >> 7) >> 1 ^ bVar15,
                                     CONCAT16((byte)(uVar22 >> 0x10) ^ (byte)((ulong)uVar2 >> 0x30),
                                              CONCAT15((byte)(uVar22 >> 8) ^
                                                       (byte)((ulong)uVar2 >> 0x28),
                                                       CONCAT14((byte)uVar22 ^
                                                                (byte)((ulong)uVar2 >> 0x20),
                                                                CONCAT13((byte)((char)bVar14 >> 7)
                                                                         >> 1 ^ bVar14,
                                                                         CONCAT12((byte)(uVar21 >>
                                                                                        0x10) ^
                                                                                  (byte)((ulong)
                                                  uVar2 >> 0x10),
                                                  CONCAT11((byte)(uVar21 >> 8) ^
                                                           (byte)((ulong)uVar2 >> 8),
                                                           (byte)uVar21 ^ (byte)uVar2)))))));
                bVar14 = (byte)((ulong)uVar19 >> 0x18);
                bVar15 = (byte)((ulong)uVar19 >> 0x38);
                uStack_138 = CONCAT17((byte)((char)bVar15 >> 7) >> 1 ^ bVar15,
                                      CONCAT16((byte)(uVar24 >> 0x10) ^
                                               (byte)((ulong)uVar19 >> 0x30),
                                               CONCAT15((byte)(uVar24 >> 8) ^
                                                        (byte)((ulong)uVar19 >> 0x28),
                                                        CONCAT14((byte)uVar24 ^
                                                                 (byte)((ulong)uVar19 >> 0x20),
                                                                 CONCAT13((byte)((char)bVar14 >> 7)
                                                                          >> 1 ^ bVar14,
                                                                          CONCAT12((byte)(uVar23 >>
                                                                                         0x10) ^
                                                                                   (byte)((ulong)
                                                  uVar19 >> 0x10),
                                                  CONCAT11((byte)(uVar23 >> 8) ^
                                                           (byte)((ulong)uVar19 >> 8),
                                                           (byte)uVar23 ^ (byte)uVar19)))))));
                plVar3 = (long *)(lVar4 + 8);
                lVar4 = 0;
                if (*plVar3 != 0) {
                  lVar4 = *plVar3 + (long)plVar3;
                }
                local_f8 = auStack_e8;
                uVar8 = FUN_0325b500(plVar3,&local_f8,lVar4 + 0x80,&local_140,&local_130);
                local_f0 = 0;
                if ((-1 < (int)local_ec) && (local_f8 != (undefined1 *)0x0)) {
                  (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                            (PTR_PTR_047d1a50,local_f8,(ulong)local_ec << 2);
                }
                if ((uVar8 & 1) != 0) goto LAB_02e72d04;
                iVar5 = *(int *)(param_1 + 0x18);
              }
              lVar6 = lVar6 + 1;
            } while (lVar6 < iVar5);
          }
        }
        else {
LAB_02e72d04:
          fVar13 = ((float)local_130 + (float)uStack_120) * 0.5;
          fVar16 = ((float)((ulong)local_130 >> 0x20) + (float)((ulong)uStack_120 >> 0x20)) * 0.5;
          fVar18 = ((float)uStack_128 + (float)uStack_118) * 0.5;
          uVar21 = (uint)((int)fVar13 >> 0x1f) >> 1;
          uVar22 = (uint)((int)fVar16 >> 0x1f) >> 1;
          uVar23 = (uint)((int)fVar18 >> 0x1f) >> 1;
          bVar15 = (byte)((uint)fVar13 >> 0x18);
          bVar17 = (byte)((uint)fVar16 >> 0x18);
          bVar14 = (byte)((uint)fVar18 >> 0x18);
          *puVar1 = CONCAT17((byte)((char)bVar17 >> 7) >> 1 ^ bVar17,
                             CONCAT16((byte)(uVar22 >> 0x10) ^ (byte)((uint)fVar16 >> 0x10),
                                      CONCAT15((byte)(uVar22 >> 8) ^ (byte)((uint)fVar16 >> 8),
                                               CONCAT14((byte)uVar22 ^ SUB41(fVar16,0),
                                                        CONCAT13((byte)((char)bVar15 >> 7) >> 1 ^
                                                                 bVar15,CONCAT12((byte)(uVar21 >>
                                                                                       0x10) ^
                                                                                 (byte)((uint)fVar13
                                                                                       >> 0x10),
                                                                                 CONCAT11((byte)(
                                                  uVar21 >> 8) ^ (byte)((uint)fVar13 >> 8),
                                                  (byte)uVar21 ^ SUB41(fVar13,0))))))));
          *(uint *)(puVar1 + 1) =
               CONCAT13((byte)((char)bVar14 >> 7) >> 1 ^ bVar14,
                        CONCAT12((byte)(uVar23 >> 0x10) ^ (byte)((uint)fVar18 >> 0x10),
                                 CONCAT11((byte)(uVar23 >> 8) ^ (byte)((uint)fVar18 >> 8),
                                          (byte)uVar23 ^ SUB41(fVar18,0))));
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != param_3);
  }
  if (plVar12 == (long *)0x0) {
    return;
  }
  lVar9 = *plVar12;
  if (((*(byte *)(lVar9 + 0x38) & 1) != 0) && (plVar12[6] != 0)) {
    puVar1 = (undefined8 *)plVar12[2];
    uVar7 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar7 <= (ulong)plVar12[3]) && (plVar12[2] = uVar7, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &DAT_03c4e575;
      puVar1[1] = *(undefined8 *)(plVar12[6] + 8);
    }
  }
  puVar1 = (undefined8 *)plVar12[2];
  uVar7 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
  if ((uVar7 <= (ulong)plVar12[3]) && (plVar12[2] = uVar7, puVar1 != (undefined8 *)0x0)) {
    *puVar1 = &DAT_03c2d363;
    uVar2 = nn::os::GetSystemTick();
    puVar1[1] = uVar2;
  }
  if (*(code **)(lVar9 + 0x20) != (code *)0x0) {
    (**(code **)(lVar9 + 0x20))(*(undefined8 *)(lVar9 + 0x28));
  }
  lVar9 = *plVar12;
  if (((*(byte *)(lVar9 + 0x38) & 1) != 0) && (plVar12[6] != 0)) {
    puVar1 = (undefined8 *)plVar12[2];
    puVar11 = (undefined8 *)((long)puVar1 + 0x17U & 0xfffffffffffffff8);
    if (puVar11 <= (undefined8 *)plVar12[3]) {
      plVar12[2] = (long)puVar11;
      if (puVar1 == (undefined8 *)0x0) goto LAB_02e72ec0;
      *puVar1 = &DAT_03c4e575;
      puVar1[1] = *(undefined8 *)(plVar12[6] + 8);
    }
  }
  puVar11 = (undefined8 *)plVar12[2];
LAB_02e72ec0:
  uVar7 = (long)puVar11 + 0x17U & 0xfffffffffffffff8;
  if ((uVar7 <= (ulong)plVar12[3]) && (plVar12[2] = uVar7, puVar11 != (undefined8 *)0x0)) {
    *puVar11 = &DAT_03c2d363;
    uVar2 = nn::os::GetSystemTick();
    puVar11[1] = uVar2;
  }
  if (*(code **)(lVar9 + 0x20) != (code *)0x0) {
    (**(code **)(lVar9 + 0x20))(*(undefined8 *)(lVar9 + 0x28));
  }
  return;
}


