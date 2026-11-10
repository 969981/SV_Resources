/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00da9c58; name: FUN_00da9c58
 */


ulong FUN_00da9c58(long param_1,long param_2,undefined8 param_3,long param_4,uint param_5,
                  int param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  undefined *puVar4;
  long lVar5;
  size_t sVar6;
  void *pvVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  char *pcVar13;
  ulong uVar14;
  byte bVar19;
  float fVar15;
  byte bVar17;
  byte bVar18;
  byte bVar20;
  byte bVar23;
  byte bVar24;
  undefined8 uVar16;
  byte bVar25;
  int iVar21;
  float fVar22;
  byte bVar30;
  float fVar26;
  byte bVar28;
  byte bVar29;
  byte bVar31;
  byte bVar33;
  byte bVar34;
  undefined8 uVar27;
  byte bVar35;
  int iVar32;
  int iVar36;
  undefined8 uVar37;
  int iVar38;
  int iVar39;
  undefined8 uVar40;
  int iVar41;
  undefined *local_5b0;
  byte local_5a8;
  uint local_5a4;
  undefined8 local_5a0;
  undefined1 local_598;
  undefined1 *local_590;
  undefined8 local_588;
  undefined1 local_570 [1296];
  
  puVar4 = PTR_DAT_047ddb00;
  uVar40 = *(undefined8 *)(param_2 + 0x48);
  uVar37 = *(undefined8 *)(param_2 + 0x40);
  uVar27 = (*(undefined8 **)PTR_PTR_047d1bb0)[1];
  uVar16 = **(undefined8 **)PTR_PTR_047d1bb0;
  bVar17 = (byte)((ulong)uVar16 >> 8);
  bVar18 = (byte)((ulong)uVar16 >> 0x10);
  bVar19 = (byte)((ulong)uVar16 >> 0x18);
  iVar32 = CONCAT13(bVar19 & (byte)((ulong)uVar37 >> 0x18),
                    CONCAT12(bVar18 & (byte)((ulong)uVar37 >> 0x10),
                             CONCAT11(bVar17 & (byte)((ulong)uVar37 >> 8),
                                      (byte)uVar16 & (byte)uVar37)));
  bVar20 = (byte)((ulong)uVar16 >> 0x20);
  bVar23 = (byte)((ulong)uVar16 >> 0x28);
  bVar24 = (byte)((ulong)uVar16 >> 0x30);
  bVar25 = (byte)((ulong)uVar16 >> 0x38);
  bVar28 = (byte)((ulong)uVar27 >> 8);
  bVar29 = (byte)((ulong)uVar27 >> 0x10);
  bVar30 = (byte)((ulong)uVar27 >> 0x18);
  iVar41 = CONCAT13(bVar30 & (byte)((ulong)uVar40 >> 0x18),
                    CONCAT12(bVar29 & (byte)((ulong)uVar40 >> 0x10),
                             CONCAT11(bVar28 & (byte)((ulong)uVar40 >> 8),
                                      (byte)uVar27 & (byte)uVar40)));
  bVar31 = (byte)((ulong)uVar27 >> 0x20);
  bVar33 = (byte)((ulong)uVar27 >> 0x28);
  bVar34 = (byte)((ulong)uVar27 >> 0x30);
  bVar35 = (byte)((ulong)uVar27 >> 0x38);
  iVar36 = -(uint)(iVar32 == (int)uVar16);
  iVar21 = (int)((ulong)uVar16 >> 0x20);
  iVar38 = -(uint)((int)(CONCAT17(bVar25 & (byte)((ulong)uVar37 >> 0x38),
                                  CONCAT16(bVar24 & (byte)((ulong)uVar37 >> 0x30),
                                           CONCAT15(bVar23 & (byte)((ulong)uVar37 >> 0x28),
                                                    CONCAT14(bVar20 & (byte)((ulong)uVar37 >> 0x20),
                                                             iVar32)))) >> 0x20) == iVar21);
  iVar39 = -(uint)(iVar41 == (int)uVar27);
  iVar32 = (int)((ulong)uVar27 >> 0x20);
  iVar41 = -(uint)((int)(CONCAT17(bVar35 & (byte)((ulong)uVar40 >> 0x38),
                                  CONCAT16(bVar34 & (byte)((ulong)uVar40 >> 0x30),
                                           CONCAT15(bVar33 & (byte)((ulong)uVar40 >> 0x28),
                                                    CONCAT14(bVar31 & (byte)((ulong)uVar40 >> 0x20),
                                                             iVar41)))) >> 0x20) == iVar32);
  if (CONCAT13(~(byte)((uint)iVar38 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18) &
               ~(byte)((uint)iVar39 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18),
               CONCAT12(~(byte)((uint)iVar38 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10) &
                        ~(byte)((uint)iVar39 >> 0x10) & ~(byte)((uint)iVar41 >> 0x10),
                        CONCAT11(~(byte)((uint)iVar38 >> 8) & ~(byte)((uint)iVar36 >> 8) &
                                 ~(byte)((uint)iVar39 >> 8) & ~(byte)((uint)iVar41 >> 8),
                                 ~(byte)iVar38 & ~(byte)iVar36 & ~(byte)iVar39 & ~(byte)iVar41))) !=
      0) {
    uVar40 = *(undefined8 *)(param_2 + 0x58);
    uVar37 = *(undefined8 *)(param_2 + 0x50);
    iVar38 = CONCAT13((byte)((ulong)uVar37 >> 0x18) & bVar19,
                      CONCAT12((byte)((ulong)uVar37 >> 0x10) & bVar18,
                               CONCAT11((byte)((ulong)uVar37 >> 8) & bVar17,
                                        (byte)uVar37 & (byte)uVar16)));
    iVar41 = CONCAT13((byte)((ulong)uVar40 >> 0x18) & bVar30,
                      CONCAT12((byte)((ulong)uVar40 >> 0x10) & bVar29,
                               CONCAT11((byte)((ulong)uVar40 >> 8) & bVar28,
                                        (byte)uVar40 & (byte)uVar27)));
    iVar36 = -(uint)(iVar38 == (int)uVar16);
    iVar21 = -(uint)((int)(CONCAT17((byte)((ulong)uVar37 >> 0x38) & bVar25,
                                    CONCAT16((byte)((ulong)uVar37 >> 0x30) & bVar24,
                                             CONCAT15((byte)((ulong)uVar37 >> 0x28) & bVar23,
                                                      CONCAT14((byte)((ulong)uVar37 >> 0x20) &
                                                               bVar20,iVar38)))) >> 0x20) == iVar21)
    ;
    iVar38 = -(uint)(iVar41 == (int)uVar27);
    iVar32 = -(uint)((int)(CONCAT17((byte)((ulong)uVar40 >> 0x38) & bVar35,
                                    CONCAT16((byte)((ulong)uVar40 >> 0x30) & bVar34,
                                             CONCAT15((byte)((ulong)uVar40 >> 0x28) & bVar33,
                                                      CONCAT14((byte)((ulong)uVar40 >> 0x20) &
                                                               bVar31,iVar41)))) >> 0x20) == iVar32)
    ;
    if (CONCAT13(~(byte)((uint)iVar21 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18) &
                 ~(byte)((uint)iVar38 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                 CONCAT12(~(byte)((uint)iVar21 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10) &
                          ~(byte)((uint)iVar38 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10),
                          CONCAT11(~(byte)((uint)iVar21 >> 8) & ~(byte)((uint)iVar36 >> 8) &
                                   ~(byte)((uint)iVar38 >> 8) & ~(byte)((uint)iVar32 >> 8),
                                   ~(byte)iVar21 & ~(byte)iVar36 & ~(byte)iVar38 & ~(byte)iVar32)))
        != 0) {
      local_5a8 = 0;
      local_5a4 = 0;
      local_598 = 0;
      local_5b0 = PTR_DAT_047ddb00 + 0x10;
      local_590 = local_570;
      local_588 = -0x7ffffff600000000;
      local_5a0 = 0x5f7ffff05f7ffff0;
      FUN_00c7a7ac(&local_5b0);
      local_5a8 = local_5a8 | 0x40;
      (**(code **)(**(long **)(param_1 + 8) + 0x3f8))
                (*(long **)(param_1 + 8),param_2,param_3,&local_5b0,0);
      if (1 < (int)local_588) {
        FUN_00daa150(local_590,0,(int)local_588 + -1);
      }
      if (param_6 == 0) {
        if (local_5a4 == 0) {
          uVar10 = 0;
        }
        else {
          lVar11 = 0;
          uVar8 = 0;
          uVar10 = 0;
          do {
            puVar1 = (undefined8 *)(local_590 + lVar11);
            uVar12 = (ulong)*(ushort *)(puVar1 + 0xd);
            if (uVar12 != 0xffff) {
              lVar5 = (**(code **)(**(long **)(param_1 + 8) + 0xa0))();
              lVar5 = *(long *)(lVar5 + 0x48);
              if (*(char *)(lVar5 + uVar12 * 0x50 + 0x18) == '\0') {
                if ((uint)uVar10 < param_5) {
                  uVar16 = *puVar1;
                  puVar2 = (undefined8 *)(param_4 + uVar10 * 0x40);
                  puVar2[1] = puVar1[1] & 0xffffffff;
                  *puVar2 = uVar16;
                  uVar16 = puVar1[2];
                  puVar2[3] = puVar1[3] & 0xffffffff;
                  puVar2[2] = uVar16;
                  *(undefined4 *)((long)puVar2 + 0x24) = *(undefined4 *)(puVar1 + 0xb);
                  fVar15 = (float)*(undefined8 *)(param_2 + 0x50);
                  fVar22 = (float)((ulong)*(undefined8 *)(param_2 + 0x50) >> 0x20);
                  fVar26 = (float)*(undefined8 *)(param_2 + 0x58);
                  *(float *)(puVar2 + 4) =
                       *(float *)(puVar1 + 4) *
                       SQRT(fVar15 * fVar15 + fVar22 * fVar22 + fVar26 * fVar26);
                  lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x38) + (puVar1[0xb] & 0xffffff) * 0xc0
                  ;
                  puVar2[5] = *(undefined8 *)(lVar9 + 0x98);
                  *(uint *)(puVar2 + 6) = *(uint *)(lVar9 + 0x8c) & 0x3f;
                  uVar14 = puVar2[7];
                  pcVar13 = (char *)(*(ulong *)(lVar5 + uVar12 * 0x50) & 0xfffffffffffffffe);
                  if ((char *)(uVar14 & 0xfffffffffffffffe) != pcVar13) {
                    if (pcVar13 == (char *)0x0) {
                      uVar12 = 0;
                    }
                    else {
                      sVar6 = strlen(pcVar13);
                      pvVar7 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))();
                      memcpy(pvVar7,pcVar13,(long)((int)sVar6 + 1));
                      uVar12 = (ulong)pvVar7 | 1;
                    }
                    puVar2[7] = uVar12;
                    if ((uVar14 & 1) != 0) {
                      (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar14 - 1,0);
                    }
                  }
                }
                uVar10 = (ulong)((uint)uVar10 + 1);
              }
            }
            uVar8 = uVar8 + 1;
            lVar11 = lVar11 + 0x80;
          } while (uVar8 < local_5a4);
        }
      }
      else {
        if (local_5a4 <= param_5) {
          param_5 = local_5a4;
        }
        if (param_5 == 0) {
          iVar21 = 0;
        }
        else {
          lVar11 = 0;
          uVar10 = 0;
          iVar21 = 0;
          do {
            puVar1 = (undefined8 *)(local_590 + lVar11);
            uVar3 = *(ushort *)(puVar1 + 0xd);
            if ((ulong)uVar3 == 0xffff) {
              iVar21 = iVar21 + 1;
            }
            else {
              lVar5 = (**(code **)(**(long **)(param_1 + 8) + 0xa0))();
              uVar16 = *puVar1;
              puVar2 = (undefined8 *)(param_4 + (ulong)(uint)((int)uVar10 - iVar21) * 0x40);
              lVar5 = *(long *)(lVar5 + 0x48);
              puVar2[1] = puVar1[1] & 0xffffffff;
              *puVar2 = uVar16;
              uVar16 = puVar1[2];
              puVar2[3] = puVar1[3] & 0xffffffff;
              puVar2[2] = uVar16;
              *(undefined4 *)((long)puVar2 + 0x24) = *(undefined4 *)(puVar1 + 0xb);
              fVar15 = (float)*(undefined8 *)(param_2 + 0x50);
              fVar22 = (float)((ulong)*(undefined8 *)(param_2 + 0x50) >> 0x20);
              fVar26 = (float)*(undefined8 *)(param_2 + 0x58);
              *(float *)(puVar2 + 4) =
                   *(float *)(puVar1 + 4) *
                   SQRT(fVar15 * fVar15 + fVar22 * fVar22 + fVar26 * fVar26);
              lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x38) + (puVar1[0xb] & 0xffffff) * 0xc0;
              puVar2[5] = *(undefined8 *)(lVar9 + 0x98);
              *(uint *)(puVar2 + 6) = *(uint *)(lVar9 + 0x8c) & 0x3f;
              uVar8 = puVar2[7];
              pcVar13 = (char *)(*(ulong *)(lVar5 + (ulong)uVar3 * 0x50) & 0xfffffffffffffffe);
              if ((char *)(uVar8 & 0xfffffffffffffffe) != pcVar13) {
                if (pcVar13 == (char *)0x0) {
                  uVar12 = 0;
                }
                else {
                  sVar6 = strlen(pcVar13);
                  sVar6 = (size_t)((int)sVar6 + 1);
                  pvVar7 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                             (PTR_PTR_047d1a50,sVar6);
                  memcpy(pvVar7,pcVar13,sVar6);
                  uVar12 = (ulong)pvVar7 | 1;
                }
                puVar2[7] = uVar12;
                if ((uVar8 & 1) != 0) {
                  (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar8 - 1,0);
                }
              }
            }
            uVar10 = uVar10 + 1;
            lVar11 = lVar11 + 0x80;
          } while (param_5 != uVar10);
        }
        uVar10 = (ulong)(local_5a4 - iVar21);
      }
      local_5b0 = puVar4 + 0x10;
      FUN_00c7a7ac(&local_5b0);
      lVar11 = local_588;
      uVar8 = (ulong)local_588._4_4_;
      local_588 = (ulong)local_588._4_4_ << 0x20;
      if (lVar11 < 0) {
        return uVar10;
      }
      if (local_590 == (undefined1 *)0x0) {
        return uVar10;
      }
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_590,uVar8 << 7);
      return uVar10;
    }
  }
  return 0;
}


