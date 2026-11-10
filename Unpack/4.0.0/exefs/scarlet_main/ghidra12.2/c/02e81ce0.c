/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e81ce0; name: FUN_02e81ce0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02e81ce0(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  undefined1 *puVar5;
  void *__src;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  uint uVar11;
  undefined8 uVar12;
  int iVar13;
  undefined2 uVar14;
  long *plVar15;
  void *__dest;
  char cVar16;
  undefined8 *puVar17;
  undefined1 (*pauVar18) [16];
  undefined8 uVar19;
  undefined1 (*pauVar20) [16];
  undefined8 uVar21;
  undefined *puVar22;
  long lVar23;
  undefined *puVar24;
  uint uVar25;
  int iVar26;
  long lVar27;
  long *plVar28;
  int *piVar29;
  int iVar30;
  ulong uVar31;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 local_480 [128];
  undefined8 *local_80;
  
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 3) = 0x4030c;
  param_1[2] = 1;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *param_1 = (long)(PTR_DAT_047e3350 + 0x10);
  param_1[1] = 0xffffffff;
  param_1[10] = 0;
  plVar15 = param_1 + 9;
  *plVar15 = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  piVar29 = (int *)((long)param_1 + 0x5c);
  piVar29[0] = 0;
  piVar29[1] = 0;
  *(byte *)((long)param_1 + 0x94) = *(byte *)((long)param_2 + 0x12) | *(byte *)(param_2 + 2);
  param_1[0x18] = 1;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  puVar22 = PTR_DAT_047e3358;
  param_1[0x16] = (long)(PTR_DAT_047e3358 + 0x10);
  param_1[0x17] = 0xffffffff;
  if (*(char *)((long)param_2 + 0x12) != '\0') {
    *(undefined2 *)((long)param_1 + 0x1a) = 0x8004;
  }
  iVar26 = (int)param_2[1];
  if ((int)param_2[1] <= *(int *)((long)param_2 + 0xc)) {
    iVar26 = *(int *)((long)param_2 + 0xc);
  }
  if ((param_3 == 0) || (*(int *)(param_3 + 4) == 0)) {
    if (iVar26 < 1) goto LAB_02e81e50;
    FUN_02e822e8(plVar15,iVar26);
    *(undefined1 *)((long)param_1 + 0x1c) = 0;
LAB_02e81e58:
    cVar16 = '\0';
    do {
      cVar16 = cVar16 + '\x01';
      iVar26 = iVar26 >> 1;
    } while (iVar26 != 0);
    *(char *)((long)param_1 + 0x1c) = cVar16;
    if (cVar16 != '\0') goto LAB_02e81e78;
  }
  else {
    lVar27 = (long)*(int *)(param_3 + 4) + (long)param_1;
    lVar23 = 0;
    if (lVar27 != 0) {
      lVar23 = lVar27 - (long)plVar15;
    }
    param_1[9] = lVar23;
    *(int *)(param_1 + 10) = iVar26;
    *(int *)((long)param_1 + 0x54) = iVar26;
    param_1[0xb] = 0;
    if (0 < iVar26) {
      uVar19 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x238);
      uVar21 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x230);
      uVar32 = NEON_fmov(0x3f800000,4);
      iVar30 = 1;
      while( true ) {
        puVar2 = (undefined8 *)((long)plVar15 + (ulong)(iVar30 - 1U & 0xffff) * 0x40 + lVar23);
        iVar6 = iVar30;
        if (iVar26 + -1 <= (int)(iVar30 - 1U)) {
          iVar6 = -1;
        }
        *puVar2 = uVar21;
        puVar2[1] = uVar19;
        puVar2[2] = 0;
        puVar2[3] = 0x1ffff00000000;
        puVar2[4] = uVar32;
        *(undefined4 *)(puVar2 + 5) = 0x3f800000;
        *(int *)((long)puVar2 + 0x2c) = iVar6;
        puVar2[6] = 0;
        puVar2[7] = 0;
        if (iVar26 == iVar30) break;
        lVar23 = *plVar15;
        iVar30 = iVar30 + 1;
      }
    }
LAB_02e81e50:
    *(undefined1 *)((long)param_1 + 0x1c) = 0;
    if (iVar26 != 0) goto LAB_02e81e58;
  }
  cVar16 = '\x01';
LAB_02e81e78:
  *(char *)((long)param_1 + 0x1c) = cVar16;
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (0 < (int)param_2[1]) {
    lVar23 = 0;
    lVar27 = 0;
    do {
      uVar14 = FUN_02e82464(param_1,*param_2 + lVar23);
      if (param_2[4] != 0) {
        *(undefined2 *)(param_2[4] + lVar27 * 2) = uVar14;
      }
      lVar27 = lVar27 + 1;
      lVar23 = lVar23 + 0x40;
    } while (lVar27 < (int)param_2[1]);
  }
  auVar33._8_4_ = 0x7f7fffee;
  auVar33._0_8_ = 0x7f7fffee7f7fffee;
  auVar33._12_4_ = 0x7f7fffee;
  lVar27 = auVar33._8_8_;
  param_1[0xf] = lVar27;
  param_1[0xe] = 0x7f7fffee7f7fffee;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x11] = -0x80001100800012;
  param_1[0x10] = -0x80001100800012;
  if ((param_3 == 0) || (iVar26 = *(int *)(param_3 + 0xc), iVar26 == 0)) {
    uVar7 = *(undefined4 *)((long)param_2 + 0x14);
    plVar28 = param_1 + 0x1d;
    *plVar28 = 0;
    param_1[0x1a] = 0;
    param_1[0x16] = (long)(puVar22 + 0x10);
    param_1[0x17] = 0xffffffff;
    *(undefined2 *)(param_1 + 0x1b) = 0;
    *(undefined2 *)((long)param_1 + 0xe4) = 0;
    *(undefined8 *)((long)param_1 + 0xdc) = 0;
    param_1[0x18] = 1;
    param_1[0x19] = 0;
    puVar22 = PTR_DAT_047d1a08;
    param_1[0x1e] = 0;
    local_480[0] = 0x100;
    __dest = (void *)(**(code **)puVar22)(0,local_480,0);
    __src = (void *)0x0;
    if (*plVar28 != 0) {
      __src = (void *)(*plVar28 + (long)plVar28);
    }
    memcpy(__dest,__src,(long)(int)param_1[0x1e] << 7);
    if (*(int *)((long)param_1 + 0xf4) < 0) {
      lVar23 = 0;
      if (*plVar28 != 0) {
        lVar23 = *plVar28 + (long)plVar28;
      }
      (**(code **)(puVar22 + 8))(0,lVar23,0);
    }
    lVar23 = 0;
    if (__dest != (void *)0x0) {
      lVar23 = (long)__dest - (long)plVar28;
    }
    param_1[0x1d] = lVar23;
    param_1[0x1e] = -0x7ffffffdfffffffe;
    puVar2 = (undefined8 *)(lVar23 + (long)plVar28);
    *(undefined2 *)(puVar2 + 0xe) = 0;
    puVar2[1] = lVar27;
    *puVar2 = 0x7f7fffee7f7fffee;
    puVar2[3] = 0xff7fffeeff7fffee;
    puVar2[2] = 0xff7fffeeff7fffee;
    puVar2[5] = lVar27;
    puVar2[4] = 0x7f7fffee7f7fffee;
    puVar2[7] = 0xff7fffeeff7fffee;
    puVar2[6] = 0xff7fffeeff7fffee;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[9] = lVar27;
    puVar2[8] = 0x7f7fffee7f7fffee;
    puVar2[0xb] = 0xff7fffeeff7fffee;
    puVar2[10] = 0xff7fffeeff7fffee;
    lVar23 = param_1[0x1d];
    *(undefined2 *)((long)plVar28 + lVar23 + 0xf0) = 0;
    *(undefined8 *)((long)plVar28 + lVar23 + 0xe0) = 0;
    *(undefined8 *)((long)plVar28 + lVar23 + 0xe8) = 0;
    *(long *)((long)plVar28 + lVar23 + 0x88) = lVar27;
    *(undefined8 *)((long)plVar28 + lVar23 + 0x80) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)plVar28 + lVar23 + 0x98) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)plVar28 + lVar23 + 0x90) = 0xff7fffeeff7fffee;
    *(long *)((long)plVar28 + lVar23 + 0xa8) = lVar27;
    *(undefined8 *)((long)plVar28 + lVar23 + 0xa0) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)plVar28 + lVar23 + 0xb8) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)plVar28 + lVar23 + 0xb0) = 0xff7fffeeff7fffee;
    *(long *)((long)plVar28 + lVar23 + 200) = lVar27;
    *(undefined8 *)((long)plVar28 + lVar23 + 0xc0) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)plVar28 + lVar23 + 0xd8) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)plVar28 + lVar23 + 0xd0) = 0xff7fffeeff7fffee;
    *(undefined1 *)(param_1 + 0x1f) = 1;
    *(char *)(param_1 + 0x20) = (char)uVar7;
  }
  else {
    *(char *)(param_1 + 0x20) = (char)*(undefined4 *)((long)param_2 + 0x14);
    plVar28 = param_1 + 0x1d;
    lVar27 = (long)iVar26 + (long)param_1;
    uVar7 = *(undefined4 *)(param_3 + 0x10);
    if (*(int *)((long)param_1 + 0xf4) < 0) {
      lVar23 = 0;
      if (*plVar28 != 0) {
        lVar23 = *plVar28 + (long)plVar28;
      }
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar23,0);
    }
    *(undefined4 *)(param_1 + 0x1e) = uVar7;
    *(undefined4 *)((long)param_1 + 0xf4) = uVar7;
    lVar23 = 0;
    if (lVar27 != 0) {
      lVar23 = lVar27 - (long)plVar28;
    }
    param_1[0x1d] = lVar23;
    *(undefined1 *)(param_1 + 0x1f) = 1;
  }
  FUN_02eaac90(param_1,*(undefined4 *)((long)param_2 + 0x14));
  uVar21 = _UNK_03cab278;
  uVar19 = _DAT_03cab270;
  if (((*(char *)((long)param_2 + 0x11) != '\0') && ((char)param_1[0x20] == '\x02')) &&
     (1 < *piVar29)) {
    lVar27 = *param_2;
    local_480[0] = CONCAT44(local_480[0]._4_4_,1);
    local_80 = (undefined8 *)((ulong)local_480 | 4);
    uVar25 = 0;
    puVar22 = PTR_DAT_047d1aa0;
    puVar24 = PTR_DAT_047d1aa8;
    do {
      puVar17 = (undefined8 *)((long)local_80 + -4);
      puVar2 = (undefined8 *)
               ((long)(param_1 + 0x1d) + (long)*(int *)((long)local_80 + -4) * 0x80 + param_1[0x1d])
      ;
      iVar26 = -(uint)((float)*puVar2 <= (float)puVar2[2]);
      iVar30 = -(uint)((float)((ulong)*puVar2 >> 0x20) <= (float)((ulong)puVar2[2] >> 0x20));
      iVar6 = -(uint)((float)puVar2[1] <= (float)puVar2[3]);
      iVar13 = -(uint)((float)((ulong)puVar2[1] >> 0x20) <= (float)((ulong)puVar2[3] >> 0x20));
      uVar11 = CONCAT13((byte)((uint)iVar26 >> 0x18) & (byte)((ulong)uVar19 >> 0x18),
                        CONCAT12((byte)((uint)iVar26 >> 0x10) & (byte)((ulong)uVar19 >> 0x10),
                                 CONCAT11((byte)((uint)iVar26 >> 8) & (byte)((ulong)uVar19 >> 8),
                                          (byte)iVar26 & (byte)uVar19))) +
               CONCAT13((byte)((uint)iVar30 >> 0x18) & (byte)((ulong)uVar19 >> 0x38),
                        CONCAT12((byte)((uint)iVar30 >> 0x10) & (byte)((ulong)uVar19 >> 0x30),
                                 CONCAT11((byte)((uint)iVar30 >> 8) & (byte)((ulong)uVar19 >> 0x28),
                                          (byte)iVar30 & (byte)((ulong)uVar19 >> 0x20)))) +
               CONCAT13((byte)((uint)iVar6 >> 0x18) & (byte)((ulong)uVar21 >> 0x18),
                        CONCAT12((byte)((uint)iVar6 >> 0x10) & (byte)((ulong)uVar21 >> 0x10),
                                 CONCAT11((byte)((uint)iVar6 >> 8) & (byte)((ulong)uVar21 >> 8),
                                          (byte)iVar6 & (byte)uVar21))) +
               CONCAT13((byte)((uint)iVar13 >> 0x18) & (byte)((ulong)uVar21 >> 0x38),
                        CONCAT12((byte)((uint)iVar13 >> 0x10) & (byte)((ulong)uVar21 >> 0x30),
                                 CONCAT11((byte)((uint)iVar13 >> 8) & (byte)((ulong)uVar21 >> 0x28),
                                          (byte)iVar13 & (byte)((ulong)uVar21 >> 0x20))));
      uVar32 = *(undefined8 *)((long)(puVar22 + (ulong)uVar11 * 0x10) + 8);
      auVar10[9] = (char)((ulong)uVar32 >> 8);
      auVar10._0_9_ = *(unkbyte9 *)(puVar22 + (ulong)uVar11 * 0x10);
      auVar10[10] = (char)((ulong)uVar32 >> 0x10);
      auVar10[0xb] = (char)((ulong)uVar32 >> 0x18);
      auVar10[0xc] = (char)((ulong)uVar32 >> 0x20);
      auVar10[0xd] = (char)((ulong)uVar32 >> 0x28);
      auVar10[0xe] = (char)((ulong)uVar32 >> 0x30);
      auVar10[0xf] = (char)((ulong)uVar32 >> 0x38);
      auVar33 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(puVar2 + 0xc),auVar10);
      uVar8 = *(uint *)(puVar24 + (ulong)uVar11 * 4);
      if (*(char *)(puVar2 + 0xe) == '\0') {
        *(long *)((long)local_80 + 4) = auVar33._8_8_;
        *puVar17 = auVar33._0_8_;
        local_80 = (undefined8 *)((long)puVar17 + (long)(int)uVar8 * 4);
      }
      else {
        local_80 = puVar17;
        if (uVar11 != 0) {
          uVar31 = 0;
          do {
            iVar30 = (int)uVar31;
            iVar26 = auVar33._4_4_;
            if (((iVar30 != 1) && (iVar26 = auVar33._12_4_, iVar30 != 3)) &&
               (iVar26 = auVar33._8_4_, iVar30 != 2)) {
              iVar26 = auVar33._0_4_;
            }
            *(uint *)((long)puVar2 + uVar31 * 4 + 0x60) = uVar25;
            pauVar3 = (undefined1 (*) [16])(lVar27 + (long)iVar26 * 0x40);
            pauVar4 = (undefined1 (*) [16])
                      ((long)plVar15 + (ulong)(uVar25 & 0xffff) * 0x40 + *plVar15);
            if (pauVar3 != pauVar4) {
              pauVar20 = pauVar4 + 3;
              auVar10 = *pauVar3;
              pauVar18 = pauVar3 + 3;
              uVar12 = *(undefined8 *)(pauVar3[3] + 8);
              uVar32 = *(undefined8 *)*pauVar18;
              plVar28 = (long *)0x0;
              if (*(long *)*pauVar20 != 0) {
                plVar28 = (long *)(*pauVar20 + *(long *)*pauVar20);
              }
              uVar35 = *(undefined8 *)(pauVar3[1] + 8);
              uVar34 = *(undefined8 *)pauVar3[1];
              uVar37 = *(undefined8 *)(pauVar3[2] + 8);
              uVar36 = *(undefined8 *)pauVar3[2];
              *(long *)(*pauVar4 + 8) = auVar10._8_8_;
              *(long *)*pauVar4 = auVar10._0_8_;
              *(undefined8 *)(pauVar4[1] + 8) = uVar35;
              *(undefined8 *)pauVar4[1] = uVar34;
              *(undefined8 *)(pauVar4[2] + 8) = uVar37;
              *(undefined8 *)pauVar4[2] = uVar36;
              *(undefined8 *)(pauVar4[3] + 8) = uVar12;
              *(undefined8 *)*pauVar20 = uVar32;
              lVar23 = 0;
              if (*(long *)*pauVar18 != 0) {
                lVar23 = (long)pauVar18 + (*(long *)*pauVar18 - (long)pauVar20);
              }
              puVar5 = *pauVar20 + lVar23;
              *(long *)*pauVar20 = lVar23;
              if ((lVar23 != 0 && puVar5 != (undefined1 *)0x0) && (*(long *)(puVar5 + 8) != 0)) {
                plVar1 = (long *)(puVar5 + 0x10);
                do {
                  cVar16 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar9) {
                    *plVar1 = *plVar1 + 1;
                    cVar16 = ExclusiveMonitorsStatus();
                  }
                } while (cVar16 != '\0');
              }
              if ((plVar28 != (long *)0x0) && (plVar28[1] != 0)) {
                plVar1 = plVar28 + 2;
                do {
                  lVar23 = *plVar1;
                  cVar16 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar9) {
                    *plVar1 = lVar23 + -1;
                    cVar16 = ExclusiveMonitorsStatus();
                  }
                } while (cVar16 != '\0');
                if (lVar23 + -1 == 0) {
                  (**(code **)(*plVar28 + 0x18))();
                }
              }
            }
            if (param_2[4] != 0) {
              *(short *)(param_2[4] + (long)iVar26 * 2) = (short)uVar25;
            }
            uVar31 = uVar31 + 1;
            uVar25 = uVar25 + 1;
          } while (uVar31 != uVar8);
          puVar22 = PTR_DAT_047d1aa0;
          puVar24 = PTR_DAT_047d1aa8;
        }
      }
    } while (local_480 != local_80);
  }
  if ((int)param_2[1] < 1) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  else {
    FUN_00cb2110(param_1);
    if (param_2[3] != 0) {
      FUN_02ef656c(param_1);
    }
  }
  return;
}


