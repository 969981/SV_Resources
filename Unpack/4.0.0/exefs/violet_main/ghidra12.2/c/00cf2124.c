/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cf2124; name: FUN_00cf2124
 */


uint FUN_00cf2124(long param_1,long param_2,long param_3,uint param_4,int param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long lVar4;
  size_t sVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  char *pcVar12;
  long lVar13;
  byte bVar18;
  float fVar14;
  byte bVar16;
  byte bVar17;
  byte bVar19;
  byte bVar22;
  byte bVar23;
  undefined8 uVar15;
  byte bVar24;
  int iVar20;
  float fVar21;
  byte bVar29;
  float fVar25;
  byte bVar27;
  byte bVar28;
  byte bVar30;
  byte bVar32;
  byte bVar33;
  undefined8 uVar26;
  byte bVar34;
  int iVar31;
  int iVar35;
  undefined8 uVar36;
  int iVar37;
  int iVar38;
  undefined8 uVar39;
  int iVar40;
  undefined *local_5b0;
  byte local_5a8;
  uint local_5a4;
  undefined8 local_5a0;
  undefined1 local_598;
  undefined1 *local_590;
  undefined8 local_588;
  undefined1 local_570 [1296];
  
  uVar39 = *(undefined8 *)(param_2 + 0x48);
  uVar36 = *(undefined8 *)(param_2 + 0x40);
  uVar26 = (*(undefined8 **)PTR_PTR_047d1bb0)[1];
  uVar15 = **(undefined8 **)PTR_PTR_047d1bb0;
  bVar16 = (byte)((ulong)uVar15 >> 8);
  bVar17 = (byte)((ulong)uVar15 >> 0x10);
  bVar18 = (byte)((ulong)uVar15 >> 0x18);
  iVar31 = CONCAT13(bVar18 & (byte)((ulong)uVar36 >> 0x18),
                    CONCAT12(bVar17 & (byte)((ulong)uVar36 >> 0x10),
                             CONCAT11(bVar16 & (byte)((ulong)uVar36 >> 8),
                                      (byte)uVar15 & (byte)uVar36)));
  bVar19 = (byte)((ulong)uVar15 >> 0x20);
  bVar22 = (byte)((ulong)uVar15 >> 0x28);
  bVar23 = (byte)((ulong)uVar15 >> 0x30);
  bVar24 = (byte)((ulong)uVar15 >> 0x38);
  bVar27 = (byte)((ulong)uVar26 >> 8);
  bVar28 = (byte)((ulong)uVar26 >> 0x10);
  bVar29 = (byte)((ulong)uVar26 >> 0x18);
  iVar40 = CONCAT13(bVar29 & (byte)((ulong)uVar39 >> 0x18),
                    CONCAT12(bVar28 & (byte)((ulong)uVar39 >> 0x10),
                             CONCAT11(bVar27 & (byte)((ulong)uVar39 >> 8),
                                      (byte)uVar26 & (byte)uVar39)));
  bVar30 = (byte)((ulong)uVar26 >> 0x20);
  bVar32 = (byte)((ulong)uVar26 >> 0x28);
  bVar33 = (byte)((ulong)uVar26 >> 0x30);
  bVar34 = (byte)((ulong)uVar26 >> 0x38);
  iVar35 = -(uint)(iVar31 == (int)uVar15);
  iVar20 = (int)((ulong)uVar15 >> 0x20);
  iVar37 = -(uint)((int)(CONCAT17(bVar24 & (byte)((ulong)uVar36 >> 0x38),
                                  CONCAT16(bVar23 & (byte)((ulong)uVar36 >> 0x30),
                                           CONCAT15(bVar22 & (byte)((ulong)uVar36 >> 0x28),
                                                    CONCAT14(bVar19 & (byte)((ulong)uVar36 >> 0x20),
                                                             iVar31)))) >> 0x20) == iVar20);
  iVar38 = -(uint)(iVar40 == (int)uVar26);
  iVar31 = (int)((ulong)uVar26 >> 0x20);
  iVar40 = -(uint)((int)(CONCAT17(bVar34 & (byte)((ulong)uVar39 >> 0x38),
                                  CONCAT16(bVar33 & (byte)((ulong)uVar39 >> 0x30),
                                           CONCAT15(bVar32 & (byte)((ulong)uVar39 >> 0x28),
                                                    CONCAT14(bVar30 & (byte)((ulong)uVar39 >> 0x20),
                                                             iVar40)))) >> 0x20) == iVar31);
  if (CONCAT13(~(byte)((uint)iVar37 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18) &
               ~(byte)((uint)iVar38 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
               CONCAT12(~(byte)((uint)iVar37 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10) &
                        ~(byte)((uint)iVar38 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10),
                        CONCAT11(~(byte)((uint)iVar37 >> 8) & ~(byte)((uint)iVar35 >> 8) &
                                 ~(byte)((uint)iVar38 >> 8) & ~(byte)((uint)iVar40 >> 8),
                                 ~(byte)iVar37 & ~(byte)iVar35 & ~(byte)iVar38 & ~(byte)iVar40))) !=
      0) {
    uVar39 = *(undefined8 *)(param_2 + 0x58);
    uVar36 = *(undefined8 *)(param_2 + 0x50);
    iVar37 = CONCAT13((byte)((ulong)uVar36 >> 0x18) & bVar18,
                      CONCAT12((byte)((ulong)uVar36 >> 0x10) & bVar17,
                               CONCAT11((byte)((ulong)uVar36 >> 8) & bVar16,
                                        (byte)uVar36 & (byte)uVar15)));
    iVar40 = CONCAT13((byte)((ulong)uVar39 >> 0x18) & bVar29,
                      CONCAT12((byte)((ulong)uVar39 >> 0x10) & bVar28,
                               CONCAT11((byte)((ulong)uVar39 >> 8) & bVar27,
                                        (byte)uVar39 & (byte)uVar26)));
    iVar35 = -(uint)(iVar37 == (int)uVar15);
    iVar20 = -(uint)((int)(CONCAT17((byte)((ulong)uVar36 >> 0x38) & bVar24,
                                    CONCAT16((byte)((ulong)uVar36 >> 0x30) & bVar23,
                                             CONCAT15((byte)((ulong)uVar36 >> 0x28) & bVar22,
                                                      CONCAT14((byte)((ulong)uVar36 >> 0x20) &
                                                               bVar19,iVar37)))) >> 0x20) == iVar20)
    ;
    iVar37 = -(uint)(iVar40 == (int)uVar26);
    iVar31 = -(uint)((int)(CONCAT17((byte)((ulong)uVar39 >> 0x38) & bVar34,
                                    CONCAT16((byte)((ulong)uVar39 >> 0x30) & bVar33,
                                             CONCAT15((byte)((ulong)uVar39 >> 0x28) & bVar32,
                                                      CONCAT14((byte)((ulong)uVar39 >> 0x20) &
                                                               bVar30,iVar40)))) >> 0x20) == iVar31)
    ;
    if (CONCAT13(~(byte)((uint)iVar20 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18) &
                 ~(byte)((uint)iVar37 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18),
                 CONCAT12(~(byte)((uint)iVar20 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10) &
                          ~(byte)((uint)iVar37 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10),
                          CONCAT11(~(byte)((uint)iVar20 >> 8) & ~(byte)((uint)iVar35 >> 8) &
                                   ~(byte)((uint)iVar37 >> 8) & ~(byte)((uint)iVar31 >> 8),
                                   ~(byte)iVar20 & ~(byte)iVar35 & ~(byte)iVar37 & ~(byte)iVar31)))
        != 0) {
      local_5a8 = 0;
      local_5a4 = 0;
      local_598 = 0;
      local_5b0 = PTR_DAT_047ddb00 + 0x10;
      local_590 = local_570;
      local_5a0 = 0x5f7ffff05f7ffff0;
      local_588 = -0x7ffffff600000000;
      FUN_00c7a7ac(&local_5b0);
      local_5a8 = local_5a8 | 0x40;
      (**(code **)(**(long **)(param_1 + 8) + 0x3f0))(*(long **)(param_1 + 8),param_2,&local_5b0);
      if (1 < (int)local_588) {
        FUN_00daa150(local_590,0,(int)local_588 + -1);
      }
      if (param_5 == 0) {
        if (local_5a4 == 0) {
          uVar9 = 0;
        }
        else {
          lVar13 = 0;
          uVar10 = 0;
          uVar9 = 0;
          do {
            puVar1 = (undefined8 *)(local_590 + lVar13);
            uVar11 = (ulong)*(ushort *)(puVar1 + 0xd);
            if (uVar11 != 0xffff) {
              lVar4 = (**(code **)(**(long **)(param_1 + 8) + 0xa0))();
              lVar4 = *(long *)(lVar4 + 0x48);
              if (*(char *)(lVar4 + uVar11 * 0x50 + 0x18) == '\0') {
                if (uVar9 < param_4) {
                  uVar15 = *puVar1;
                  puVar2 = (undefined8 *)(param_3 + (ulong)uVar9 * 0x40);
                  puVar2[1] = puVar1[1] & 0xffffffff;
                  *puVar2 = uVar15;
                  uVar15 = puVar1[2];
                  puVar2[3] = puVar1[3] & 0xffffffff;
                  puVar2[2] = uVar15;
                  fVar14 = (float)*(undefined8 *)(param_2 + 0x50);
                  fVar21 = (float)((ulong)*(undefined8 *)(param_2 + 0x50) >> 0x20);
                  fVar25 = (float)*(undefined8 *)(param_2 + 0x58);
                  *(float *)(puVar2 + 4) =
                       *(float *)(puVar1 + 4) *
                       SQRT(fVar14 * fVar14 + fVar21 * fVar21 + fVar25 * fVar25);
                  *(undefined4 *)((long)puVar2 + 0x24) = *(undefined4 *)(puVar1 + 0xb);
                  lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x38) + (puVar1[0xb] & 0xffffff) * 0xc0
                  ;
                  puVar2[5] = *(undefined8 *)(lVar7 + 0x98);
                  *(uint *)(puVar2 + 6) = *(uint *)(lVar7 + 0x8c) & 0x3f;
                  uVar8 = puVar2[7];
                  pcVar12 = (char *)(*(ulong *)(lVar4 + uVar11 * 0x50) & 0xfffffffffffffffe);
                  if ((char *)(uVar8 & 0xfffffffffffffffe) != pcVar12) {
                    if (pcVar12 == (char *)0x0) {
                      uVar11 = 0;
                    }
                    else {
                      sVar5 = strlen(pcVar12);
                      sVar5 = (size_t)((int)sVar5 + 1);
                      pvVar6 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                                 (PTR_PTR_047d1a50,sVar5);
                      memcpy(pvVar6,pcVar12,sVar5);
                      uVar11 = (ulong)pvVar6 | 1;
                    }
                    puVar2[7] = uVar11;
                    if ((uVar8 & 1) != 0) {
                      (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar8 - 1,0);
                    }
                  }
                }
                uVar9 = uVar9 + 1;
              }
            }
            uVar10 = uVar10 + 1;
            lVar13 = lVar13 + 0x80;
          } while (uVar10 < local_5a4);
        }
      }
      else {
        if (local_5a4 <= param_4) {
          param_4 = local_5a4;
        }
        if (param_4 == 0) {
          iVar20 = 0;
        }
        else {
          lVar13 = 0;
          uVar10 = 0;
          iVar20 = 0;
          do {
            puVar1 = (undefined8 *)(local_590 + lVar13);
            uVar3 = *(ushort *)(puVar1 + 0xd);
            if ((ulong)uVar3 == 0xffff) {
              iVar20 = iVar20 + 1;
            }
            else {
              lVar4 = (**(code **)(**(long **)(param_1 + 8) + 0xa0))();
              uVar15 = *puVar1;
              puVar2 = (undefined8 *)(param_3 + (ulong)(uint)((int)uVar10 - iVar20) * 0x40);
              lVar4 = *(long *)(lVar4 + 0x48);
              puVar2[1] = puVar1[1] & 0xffffffff;
              *puVar2 = uVar15;
              uVar15 = puVar1[2];
              puVar2[3] = puVar1[3] & 0xffffffff;
              puVar2[2] = uVar15;
              fVar14 = (float)*(undefined8 *)(param_2 + 0x50);
              fVar21 = (float)((ulong)*(undefined8 *)(param_2 + 0x50) >> 0x20);
              fVar25 = (float)*(undefined8 *)(param_2 + 0x58);
              *(float *)(puVar2 + 4) =
                   *(float *)(puVar1 + 4) *
                   SQRT(fVar14 * fVar14 + fVar21 * fVar21 + fVar25 * fVar25);
              *(undefined4 *)((long)puVar2 + 0x24) = *(undefined4 *)(puVar1 + 0xb);
              lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x38) + (puVar1[0xb] & 0xffffff) * 0xc0;
              puVar2[5] = *(undefined8 *)(lVar7 + 0x98);
              *(uint *)(puVar2 + 6) = *(uint *)(lVar7 + 0x8c) & 0x3f;
              uVar11 = puVar2[7];
              pcVar12 = (char *)(*(ulong *)(lVar4 + (ulong)uVar3 * 0x50) & 0xfffffffffffffffe);
              if ((char *)(uVar11 & 0xfffffffffffffffe) != pcVar12) {
                if (pcVar12 == (char *)0x0) {
                  uVar8 = 0;
                }
                else {
                  sVar5 = strlen(pcVar12);
                  sVar5 = (size_t)((int)sVar5 + 1);
                  pvVar6 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                             (PTR_PTR_047d1a50,sVar5);
                  memcpy(pvVar6,pcVar12,sVar5);
                  uVar8 = (ulong)pvVar6 | 1;
                }
                puVar2[7] = uVar8;
                if ((uVar11 & 1) != 0) {
                  (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar11 - 1,0);
                }
              }
            }
            uVar10 = uVar10 + 1;
            lVar13 = lVar13 + 0x80;
          } while (param_4 != uVar10);
        }
        uVar9 = local_5a4 - iVar20;
      }
      local_5b0 = PTR_DAT_047ddb00 + 0x10;
      FUN_00c7a7ac(&local_5b0);
      lVar13 = local_588;
      uVar10 = (ulong)local_588._4_4_;
      local_588 = (ulong)local_588._4_4_ << 0x20;
      if (lVar13 < 0) {
        return uVar9;
      }
      if (local_590 == (undefined1 *)0x0) {
        return uVar9;
      }
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_590,uVar10 << 7);
      return uVar9;
    }
  }
  return 0;
}


