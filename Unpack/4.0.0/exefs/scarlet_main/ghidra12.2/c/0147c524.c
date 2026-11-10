/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0147c524; name: FUN_0147c524
 */


undefined8
FUN_0147c524(long param_1,long param_2,undefined8 param_3,undefined8 *param_4,int param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  size_t sVar4;
  void *pvVar5;
  uint uVar6;
  ulong uVar7;
  char *pcVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  float fVar12;
  byte bVar16;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  int iVar17;
  float fVar18;
  byte bVar26;
  float fVar22;
  byte bVar24;
  byte bVar25;
  byte bVar27;
  byte bVar29;
  byte bVar30;
  undefined8 uVar23;
  byte bVar31;
  int iVar28;
  int iVar32;
  undefined8 uVar33;
  int iVar34;
  int iVar35;
  undefined8 uVar36;
  int iVar37;
  undefined *local_5b0;
  byte local_5a8;
  uint local_5a4;
  undefined8 local_5a0;
  undefined1 local_598;
  float *local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  ulong uStack_578;
  float local_570 [2];
  undefined8 uStack_568;
  undefined4 local_560;
  undefined4 uStack_558;
  undefined1 uStack_554;
  undefined2 local_550;
  undefined4 local_54c;
  undefined8 local_548;
  undefined8 uStack_540;
  uint local_538;
  undefined4 local_530;
  undefined1 local_52c;
  ushort local_528;
  undefined4 local_524;
  undefined8 local_520;
  undefined8 local_518;
  
  puVar2 = PTR_DAT_047ddb00;
  uVar36 = *(undefined8 *)(param_2 + 0x48);
  uVar33 = *(undefined8 *)(param_2 + 0x40);
  uVar23 = (*(undefined8 **)PTR_PTR_047d1bb0)[1];
  uVar9 = **(undefined8 **)PTR_PTR_047d1bb0;
  bVar13 = (byte)((ulong)uVar9 >> 8);
  bVar14 = (byte)((ulong)uVar9 >> 0x10);
  bVar15 = (byte)((ulong)uVar9 >> 0x18);
  iVar28 = CONCAT13(bVar15 & (byte)((ulong)uVar33 >> 0x18),
                    CONCAT12(bVar14 & (byte)((ulong)uVar33 >> 0x10),
                             CONCAT11(bVar13 & (byte)((ulong)uVar33 >> 8),(byte)uVar9 & (byte)uVar33
                                     )));
  bVar16 = (byte)((ulong)uVar9 >> 0x20);
  bVar19 = (byte)((ulong)uVar9 >> 0x28);
  bVar20 = (byte)((ulong)uVar9 >> 0x30);
  bVar21 = (byte)((ulong)uVar9 >> 0x38);
  bVar24 = (byte)((ulong)uVar23 >> 8);
  bVar25 = (byte)((ulong)uVar23 >> 0x10);
  bVar26 = (byte)((ulong)uVar23 >> 0x18);
  iVar37 = CONCAT13(bVar26 & (byte)((ulong)uVar36 >> 0x18),
                    CONCAT12(bVar25 & (byte)((ulong)uVar36 >> 0x10),
                             CONCAT11(bVar24 & (byte)((ulong)uVar36 >> 8),
                                      (byte)uVar23 & (byte)uVar36)));
  bVar27 = (byte)((ulong)uVar23 >> 0x20);
  bVar29 = (byte)((ulong)uVar23 >> 0x28);
  bVar30 = (byte)((ulong)uVar23 >> 0x30);
  bVar31 = (byte)((ulong)uVar23 >> 0x38);
  iVar32 = -(uint)(iVar28 == (int)uVar9);
  iVar17 = (int)((ulong)uVar9 >> 0x20);
  iVar34 = -(uint)((int)(CONCAT17(bVar21 & (byte)((ulong)uVar33 >> 0x38),
                                  CONCAT16(bVar20 & (byte)((ulong)uVar33 >> 0x30),
                                           CONCAT15(bVar19 & (byte)((ulong)uVar33 >> 0x28),
                                                    CONCAT14(bVar16 & (byte)((ulong)uVar33 >> 0x20),
                                                             iVar28)))) >> 0x20) == iVar17);
  iVar35 = -(uint)(iVar37 == (int)uVar23);
  iVar28 = (int)((ulong)uVar23 >> 0x20);
  iVar37 = -(uint)((int)(CONCAT17(bVar31 & (byte)((ulong)uVar36 >> 0x38),
                                  CONCAT16(bVar30 & (byte)((ulong)uVar36 >> 0x30),
                                           CONCAT15(bVar29 & (byte)((ulong)uVar36 >> 0x28),
                                                    CONCAT14(bVar27 & (byte)((ulong)uVar36 >> 0x20),
                                                             iVar37)))) >> 0x20) == iVar28);
  if (CONCAT13(~(byte)((uint)iVar34 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18) &
               ~(byte)((uint)iVar35 >> 0x18) & ~(byte)((uint)iVar37 >> 0x18),
               CONCAT12(~(byte)((uint)iVar34 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10) &
                        ~(byte)((uint)iVar35 >> 0x10) & ~(byte)((uint)iVar37 >> 0x10),
                        CONCAT11(~(byte)((uint)iVar34 >> 8) & ~(byte)((uint)iVar32 >> 8) &
                                 ~(byte)((uint)iVar35 >> 8) & ~(byte)((uint)iVar37 >> 8),
                                 ~(byte)iVar34 & ~(byte)iVar32 & ~(byte)iVar35 & ~(byte)iVar37))) !=
      0) {
    uVar36 = *(undefined8 *)(param_2 + 0x58);
    uVar33 = *(undefined8 *)(param_2 + 0x50);
    iVar34 = CONCAT13((byte)((ulong)uVar33 >> 0x18) & bVar15,
                      CONCAT12((byte)((ulong)uVar33 >> 0x10) & bVar14,
                               CONCAT11((byte)((ulong)uVar33 >> 8) & bVar13,
                                        (byte)uVar33 & (byte)uVar9)));
    iVar37 = CONCAT13((byte)((ulong)uVar36 >> 0x18) & bVar26,
                      CONCAT12((byte)((ulong)uVar36 >> 0x10) & bVar25,
                               CONCAT11((byte)((ulong)uVar36 >> 8) & bVar24,
                                        (byte)uVar36 & (byte)uVar23)));
    iVar32 = -(uint)(iVar34 == (int)uVar9);
    iVar17 = -(uint)((int)(CONCAT17((byte)((ulong)uVar33 >> 0x38) & bVar21,
                                    CONCAT16((byte)((ulong)uVar33 >> 0x30) & bVar20,
                                             CONCAT15((byte)((ulong)uVar33 >> 0x28) & bVar19,
                                                      CONCAT14((byte)((ulong)uVar33 >> 0x20) &
                                                               bVar16,iVar34)))) >> 0x20) == iVar17)
    ;
    iVar34 = -(uint)(iVar37 == (int)uVar23);
    iVar28 = -(uint)((int)(CONCAT17((byte)((ulong)uVar36 >> 0x38) & bVar31,
                                    CONCAT16((byte)((ulong)uVar36 >> 0x30) & bVar30,
                                             CONCAT15((byte)((ulong)uVar36 >> 0x28) & bVar29,
                                                      CONCAT14((byte)((ulong)uVar36 >> 0x20) &
                                                               bVar27,iVar37)))) >> 0x20) == iVar28)
    ;
    if (CONCAT13(~(byte)((uint)iVar17 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18) &
                 ~(byte)((uint)iVar34 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18),
                 CONCAT12(~(byte)((uint)iVar17 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10) &
                          ~(byte)((uint)iVar34 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10),
                          CONCAT11(~(byte)((uint)iVar17 >> 8) & ~(byte)((uint)iVar32 >> 8) &
                                   ~(byte)((uint)iVar34 >> 8) & ~(byte)((uint)iVar28 >> 8),
                                   ~(byte)iVar17 & ~(byte)iVar32 & ~(byte)iVar34 & ~(byte)iVar28)))
        != 0) {
      if (param_5 != 1) {
        local_5a8 = 0;
        local_5a4 = 0;
        local_598 = 0;
        local_5b0 = PTR_DAT_047ddb00 + 0x10;
        local_590 = local_570;
        uStack_588 = -0x7ffffff600000000;
        local_5a0 = 0x5f7ffff05f7ffff0;
        FUN_00c7a7ac(&local_5b0);
        local_5a8 = local_5a8 | 0x40;
        (**(code **)(**(long **)(param_1 + 8) + 0x3f8))
                  (*(long **)(param_1 + 8),param_2,param_3,&local_5b0,0);
        if (1 < (int)uStack_588) {
          FUN_00daa150(local_590,0,(int)uStack_588 + -1);
        }
        if (local_5a4 == 0) {
          uVar9 = 0;
        }
        else {
          lVar11 = 0;
          uVar7 = 0;
          uVar6 = local_5a4;
          do {
            puVar1 = (undefined8 *)((long)local_590 + lVar11);
            uVar10 = (ulong)*(ushort *)(puVar1 + 0xd);
            if (uVar10 != 0xffff) {
              lVar3 = (**(code **)(**(long **)(param_1 + 8) + 0xa0))();
              lVar3 = *(long *)(lVar3 + 0x48);
              if (*(char *)(lVar3 + uVar10 * 0x50 + 0x18) == '\0') {
                uVar9 = *puVar1;
                param_4[1] = puVar1[1] & 0xffffffff;
                *param_4 = uVar9;
                uVar9 = puVar1[2];
                param_4[3] = puVar1[3] & 0xffffffff;
                param_4[2] = uVar9;
                *(undefined4 *)((long)param_4 + 0x24) = *(undefined4 *)(puVar1 + 0xb);
                fVar12 = (float)*(undefined8 *)(param_2 + 0x50);
                fVar18 = (float)((ulong)*(undefined8 *)(param_2 + 0x50) >> 0x20);
                fVar22 = (float)*(undefined8 *)(param_2 + 0x58);
                *(float *)(param_4 + 4) =
                     *(float *)(puVar1 + 4) *
                     SQRT(fVar12 * fVar12 + fVar18 * fVar18 + fVar22 * fVar22);
                uVar7 = param_4[7];
                lVar11 = *(long *)(*(long *)(param_1 + 8) + 0x38) + (puVar1[0xb] & 0xffffff) * 0xc0;
                param_4[5] = *(undefined8 *)(lVar11 + 0x98);
                *(uint *)(param_4 + 6) = *(uint *)(lVar11 + 0x8c) & 0x3f;
                pcVar8 = (char *)(*(ulong *)(lVar3 + uVar10 * 0x50) & 0xfffffffffffffffe);
                if ((char *)(uVar7 & 0xfffffffffffffffe) != pcVar8) {
                  if (pcVar8 == (char *)0x0) {
                    uVar10 = 0;
                  }
                  else {
                    sVar4 = strlen(pcVar8);
                    sVar4 = (size_t)((int)sVar4 + 1);
                    pvVar5 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                               (PTR_PTR_047d1a50,sVar4);
                    memcpy(pvVar5,pcVar8,sVar4);
                    uVar10 = (ulong)pvVar5 | 1;
                  }
                  param_4[7] = uVar10;
                  if ((uVar7 & 1) != 0) {
                    (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar7 - 1,0);
                  }
                }
                uVar9 = 1;
                break;
              }
              uVar6 = local_5a4;
            }
            uVar7 = uVar7 + 1;
            uVar9 = 0;
            lVar11 = lVar11 + 0x80;
          } while (uVar7 < uVar6);
        }
        local_5b0 = puVar2 + 0x10;
        FUN_00c7a7ac(&local_5b0);
        lVar11 = uStack_588;
        uVar7 = (ulong)uStack_588._4_4_;
        uStack_588 = (ulong)uStack_588._4_4_ << 0x20;
        if (lVar11 < 0) {
          return uVar9;
        }
        if (local_590 == (float *)0x0) {
          return uVar9;
        }
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_590,uVar7 << 7);
        return uVar9;
      }
      local_5a8 = 0;
      local_5a4 = 0;
      local_598 = 0;
      local_54c = 0;
      local_590 = (float *)0x0;
      uStack_588 = 0;
      local_5b0 = PTR_DAT_047ddb88 + 0x10;
      local_570[0] = 3.40282e+38;
      local_560 = 0xffffff;
      local_550 = 0xffff;
      local_538 = 0xffffff;
      local_528 = 0xffff;
      local_5a0 = 0x5f7ffff05f7ffff0;
      uStack_568 = 0xffffffffffffffff;
      uStack_558 = 0xffffffff;
      uStack_554 = 0xf;
      local_530 = 0xffffffff;
      local_52c = 0xf;
      local_524 = 0;
      local_580 = 0;
      uStack_578 = 0;
      local_548 = 0;
      uStack_540 = 0xffffffffffffffff;
      local_520 = 0;
      local_518 = 0;
      FUN_00c7a7cc(&local_5b0);
      (**(code **)(**(long **)(param_1 + 8) + 0x3f8))
                (*(long **)(param_1 + 8),param_2,param_3,&local_5b0,0);
      if ((local_5a4 != 0) && (uVar7 = (ulong)local_528, uVar7 != 0xffff)) {
        lVar11 = (**(code **)(**(long **)(param_1 + 8) + 0xa0))();
        lVar11 = *(long *)(lVar11 + 0x48);
        uVar10 = param_4[7];
        param_4[1] = uStack_588 & 0xffffffff;
        *param_4 = local_590;
        param_4[3] = uStack_578 & 0xffffffff;
        param_4[2] = local_580;
        *(uint *)((long)param_4 + 0x24) = local_538;
        fVar12 = (float)*(undefined8 *)(param_2 + 0x50);
        fVar18 = (float)((ulong)*(undefined8 *)(param_2 + 0x50) >> 0x20);
        fVar22 = (float)*(undefined8 *)(param_2 + 0x58);
        *(float *)(param_4 + 4) =
             local_570[0] * SQRT(fVar12 * fVar12 + fVar18 * fVar18 + fVar22 * fVar22);
        lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x38) + ((ulong)local_538 & 0xffffff) * 0xc0;
        param_4[5] = *(undefined8 *)(lVar3 + 0x98);
        *(uint *)(param_4 + 6) = *(uint *)(lVar3 + 0x8c) & 0x3f;
        pcVar8 = (char *)(*(ulong *)(lVar11 + uVar7 * 0x50) & 0xfffffffffffffffe);
        if ((char *)(uVar10 & 0xfffffffffffffffe) != pcVar8) {
          if (pcVar8 == (char *)0x0) {
            uVar7 = 0;
          }
          else {
            sVar4 = strlen(pcVar8);
            sVar4 = (size_t)((int)sVar4 + 1);
            pvVar5 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar4)
            ;
            memcpy(pvVar5,pcVar8,sVar4);
            uVar7 = (ulong)pvVar5 | 1;
          }
          param_4[7] = uVar7;
          if ((uVar10 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar10 - 1,0);
          }
        }
        return 1;
      }
    }
  }
  return 0;
}


