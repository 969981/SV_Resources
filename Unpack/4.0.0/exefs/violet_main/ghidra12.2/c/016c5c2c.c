/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016c5c2c; name: FUN_016c5c2c
 */


void FUN_016c5c2c(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *__src;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  undefined1 auVar8 [16];
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  void *__dest;
  float *pfVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  uint uVar25;
  int iVar26;
  long lVar27;
  long *plVar28;
  undefined *puVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 uVar38;
  undefined1 auVar37 [16];
  float fVar39;
  undefined8 uVar41;
  undefined1 auVar40 [16];
  float fVar42;
  undefined *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  float local_f8;
  float local_f4;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  ulong uStack_e8;
  undefined8 local_e0;
  ulong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  
  if (*(char *)(param_1 + 0x100) != '\x02') {
    plVar1 = (long *)(param_1 + 200);
    FUN_02eac7a4(plVar1,*(undefined2 *)(param_1 + 0xe4));
    FUN_02eae788(plVar1);
    uVar5 = *(ushort *)(param_1 + 0xe4);
    if ((ulong)uVar5 == 0) {
      return;
    }
    lVar27 = *plVar1;
    lVar21 = 0;
    if (lVar27 != 0) {
      lVar21 = lVar27 + (long)plVar1;
    }
    lVar21 = lVar21 + (ulong)uVar5 * 0x20;
    uVar6 = *(ushort *)(lVar21 + 0x1c);
    uVar19 = (ulong)uVar6;
    if (uVar6 == 0) {
      *(ushort *)
       (param_1 + 0x48 + (ulong)*(ushort *)(lVar21 + 0x1e) * 0x40 + *(long *)(param_1 + 0x48) + 0x1c
       ) = uVar5;
      return;
    }
    do {
      lVar21 = lVar27 + (long)plVar1;
      lVar22 = 0;
      if (lVar27 != 0) {
        lVar22 = lVar21;
      }
      lVar22 = lVar22 + uVar19 * 0x20;
      if (*(short *)(lVar22 + 0x1c) == 0) {
        *(short *)(param_1 + 0x48 +
                  (ulong)*(ushort *)(lVar22 + 0x1e) * 0x40 + *(long *)(param_1 + 0x48) + 0x1c) =
             (short)uVar19;
        lVar27 = *plVar1;
        lVar21 = lVar27 + (long)plVar1;
      }
      lVar22 = 0;
      if (lVar27 != 0) {
        lVar22 = lVar21;
      }
      uVar6 = *(ushort *)(lVar22 + uVar19 * 0x20 + 0x1c);
      uVar25 = (uint)uVar6;
      if (uVar6 == 0) {
        do {
          uVar25 = *(uint *)(lVar22 + uVar19 * 0x20 + 0xc);
          uVar23 = (ulong)uVar25 & 0xffff;
          uVar20 = (uint)uVar19;
          if ((uint)uVar5 == (uVar25 & 0xffff)) {
            bVar30 = 1;
            goto LAB_016c60f0;
          }
          uVar19 = uVar23;
        } while (*(ushort *)(lVar22 + uVar23 * 0x20 + 0x1e) == uVar20);
        bVar30 = 0;
LAB_016c60f0:
        uVar25 = uVar20;
        if ((int)uVar23 != 0) {
          uVar25 = (uint)*(ushort *)(lVar22 + uVar23 * 0x20 + 0x1e);
        }
        if ((bool)(bVar30 & uVar25 == uVar20)) {
          return;
        }
      }
      uVar19 = (ulong)uVar25;
      if (uVar25 == 0) {
        return;
      }
    } while( true );
  }
  iVar26 = *(int *)(param_1 + 0x5c);
  plVar1 = (long *)(param_1 + 0xe8);
  if (iVar26 < 5) {
    uVar25 = *(uint *)(param_1 + 0xf0);
    if (uVar25 != 3) {
      uVar20 = *(uint *)(param_1 + 0xf4);
      if (*(uint *)(param_1 + 0xf4) == 0) {
        *(uint *)(param_1 + 0xf4) = uVar25;
        uVar20 = uVar25;
      }
      puVar29 = PTR_DAT_047d1a08;
      if ((int)uVar25 < 3) {
        uVar9 = uVar20 & 0x7fffffff;
        if ((int)(uVar20 & 0x7fffffff) <= (int)uVar25) {
          uVar9 = uVar25;
        }
        if ((int)uVar9 < 3) {
          local_110 = (undefined *)0x200;
          __dest = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_110,0);
          __src = (void *)0x0;
          if (*(long *)(param_1 + 0xe8) != 0) {
            __src = (void *)(*(long *)(param_1 + 0xe8) + (long)plVar1);
          }
          memcpy(__dest,__src,(long)*(int *)(param_1 + 0xf0) << 7);
          if (*(int *)(param_1 + 0xf4) < 0) {
            lVar21 = 0;
            if (*plVar1 != 0) {
              lVar21 = *plVar1 + (long)plVar1;
            }
            (**(code **)(puVar29 + 8))(0,lVar21,0);
          }
          lVar21 = 0;
          if (__dest != (void *)0x0) {
            lVar21 = (long)__dest - (long)plVar1;
          }
          *(long *)(param_1 + 0xe8) = lVar21;
          *(undefined4 *)(param_1 + 0xf4) = 0x80000004;
        }
      }
      *(undefined4 *)(param_1 + 0xf0) = 3;
    }
    auVar40._8_4_ = 0x7f7fffee;
    auVar40._0_8_ = 0x7f7fffee7f7fffee;
    auVar40._12_4_ = 0x7f7fffee;
    auVar37._8_4_ = 0xff7fffee;
    auVar37._0_8_ = 0xff7fffeeff7fffee;
    auVar37._12_4_ = 0xff7fffee;
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0xe8) + (long)plVar1);
    *(undefined2 *)(puVar3 + 0xe) = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    uVar41 = auVar40._8_8_;
    puVar3[1] = uVar41;
    *puVar3 = 0x7f7fffee7f7fffee;
    uVar38 = auVar37._8_8_;
    puVar3[3] = uVar38;
    puVar3[2] = 0xff7fffeeff7fffee;
    puVar3[5] = uVar41;
    puVar3[4] = 0x7f7fffee7f7fffee;
    puVar3[7] = uVar38;
    puVar3[6] = 0xff7fffeeff7fffee;
    plVar2 = (long *)(param_1 + 0x48);
    puVar3[9] = uVar41;
    puVar3[8] = 0x7f7fffee7f7fffee;
    puVar3[0xb] = uVar38;
    puVar3[10] = 0xff7fffeeff7fffee;
    lVar21 = *(long *)(param_1 + 0xe8);
    *(undefined8 *)((long)plVar1 + lVar21 + 0xe0) = 0;
    *(undefined8 *)((long)plVar1 + lVar21 + 0xe8) = 0;
    *(undefined2 *)((long)plVar1 + lVar21 + 0xf0) = 0;
    *(undefined8 *)((long)plVar1 + lVar21 + 0x88) = uVar41;
    *(undefined8 *)((long)plVar1 + lVar21 + 0x80) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)plVar1 + lVar21 + 0x98) = uVar38;
    *(undefined8 *)((long)plVar1 + lVar21 + 0x90) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)plVar1 + lVar21 + 0xa8) = uVar41;
    *(undefined8 *)((long)plVar1 + lVar21 + 0xa0) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)plVar1 + lVar21 + 0xb8) = uVar38;
    *(undefined8 *)((long)plVar1 + lVar21 + 0xb0) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)plVar1 + lVar21 + 200) = uVar41;
    *(undefined8 *)((long)plVar1 + lVar21 + 0xc0) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)plVar1 + lVar21 + 0xd8) = uVar38;
    *(undefined8 *)((long)plVar1 + lVar21 + 0xd0) = 0xff7fffeeff7fffee;
    lVar21 = *(long *)(param_1 + 0xe8);
    *(undefined1 *)((long)plVar1 + lVar21 + 0x170) = 1;
    *(undefined8 *)((long)plVar1 + lVar21 + 0x168) = 0xffffffffffffffff;
    *(undefined8 *)((long)plVar1 + lVar21 + 0x160) = 0xffffffffffffffff;
    *(undefined8 *)((long)plVar1 + lVar21 + 0x108) = uVar41;
    *(undefined8 *)((long)plVar1 + lVar21 + 0x100) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)plVar1 + lVar21 + 0x118) = uVar38;
    *(undefined8 *)((long)plVar1 + lVar21 + 0x110) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)plVar1 + lVar21 + 0x128) = uVar41;
    *(undefined8 *)((long)plVar1 + lVar21 + 0x120) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)plVar1 + lVar21 + 0x138) = uVar38;
    *(undefined8 *)((long)plVar1 + lVar21 + 0x130) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)plVar1 + lVar21 + 0x148) = uVar41;
    *(undefined8 *)((long)plVar1 + lVar21 + 0x140) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)plVar1 + lVar21 + 0x158) = uVar38;
    *(undefined8 *)((long)plVar1 + lVar21 + 0x150) = 0xff7fffeeff7fffee;
    *(undefined1 *)(param_1 + 0xf8) = 1;
    puVar29 = PTR_DAT_047d19f0;
    uVar25 = 0;
    do {
      uVar20 = uVar25;
      if ((*(uint *)(param_1 + 0x50) & ((int)*(uint *)(param_1 + 0x50) >> 0x1f ^ 0xffffffffU)) ==
          uVar20) {
        return;
      }
      lVar21 = *plVar2;
      uVar25 = uVar20 + 1;
    } while ((*(byte *)((long)plVar2 + (ulong)(uVar20 & 0xffff) * 0x40 + lVar21 + 0x1e) & 1) != 0);
    if (uVar20 + 1 == 0) {
      return;
    }
    lVar27 = 0;
    do {
      puVar3 = (undefined8 *)((long)plVar2 + (ulong)(uVar20 & 0xffff) * 0x40 + lVar21);
      local_e0 = puVar3[2];
      fVar14 = (float)*puVar3;
      fVar15 = (float)((ulong)*puVar3 >> 0x20);
      fVar34 = fVar15 + fVar15;
      fVar39 = (float)puVar3[1];
      fVar35 = fVar39 + fVar39;
      fVar36 = (fVar14 + fVar14) * fVar14;
      fVar16 = (float)((ulong)puVar3[1] >> 0x20);
      local_f8 = (fVar14 + fVar14) * fVar16;
      fVar39 = 1.0 - fVar39 * fVar35;
      fVar42 = fVar35 * fVar15 - local_f8;
      local_f8 = fVar35 * fVar15 + local_f8;
      local_f4 = fVar35 * fVar14 + fVar34 * fVar16;
      uStack_108 = CONCAT44(fVar42,fVar35 * fVar14 - fVar34 * fVar16);
      local_110 = (undefined *)CONCAT44(fVar34 * fVar14 + fVar35 * fVar16,fVar39 - fVar34 * fVar15);
      local_100 = CONCAT44(fVar39 - fVar36,fVar34 * fVar14 - fVar35 * fVar16);
      uStack_e8 = (ulong)(uint)((1.0 - fVar36) - fVar34 * fVar15);
      uStack_f0 = SUB41(local_f4,0);
      uStack_ef = (undefined7)(CONCAT44(fVar42,local_f4) >> 8);
      local_d8 = puVar3[3] & 0xffffffff;
      lVar22 = puVar3[6];
      lVar21 = 0;
      if (lVar22 != 0) {
        lVar21 = lVar22 + (long)(puVar3 + 6);
      }
      if ((*(byte *)((long)puVar3 + 0x1e) >> 3 & 1) == 0) {
        (**(code **)(*(long *)puVar29 + (ulong)*(byte *)(lVar21 + 0x18) * 0x200 + 0x18))
                  (lVar21,&local_110,&local_b0);
      }
      else {
        local_c0 = puVar3[4];
        uStack_b8 = CONCAT17(0x3f,CONCAT16(0x80,(uint6)(uint)puVar3[5]));
        FUN_02f07fe8(lVar21,&local_110,&local_c0,(*(byte *)((long)puVar3 + 0x1e) >> 5 ^ 0xff) & 1,
                     &local_b0);
      }
      auVar13._4_4_ = local_b0._4_4_;
      auVar13._0_4_ = (float)local_b0;
      auVar13[8] = fStack_a8._0_1_;
      auVar8._4_4_ = fStack_9c;
      auVar8._0_4_ = local_a0;
      auVar8[8] = local_98._0_1_;
      lVar21 = *plVar1;
      iVar26 = (int)lVar27;
      if (iVar26 == 0) {
        *(float *)((long)plVar1 + lVar21 + 0x100) = (float)local_b0;
        *(float *)((long)plVar1 + lVar21 + 0x110) = local_a0;
        *(float *)((long)plVar1 + lVar21 + 0x120) = local_b0._4_4_;
        *(float *)((long)plVar1 + lVar21 + 0x130) = fStack_9c;
        *(float *)((long)plVar1 + lVar21 + 0x140) = fStack_a8;
        pfVar17 = (float *)((long)plVar1 + lVar21 + 0x150);
      }
      else if (iVar26 == 1) {
        *(float *)((long)plVar1 + lVar21 + 0x104) = (float)local_b0;
        *(float *)((long)plVar1 + lVar21 + 0x114) = local_a0;
        *(float *)((long)plVar1 + lVar21 + 0x124) = local_b0._4_4_;
        *(float *)((long)plVar1 + lVar21 + 0x134) = fStack_9c;
        *(float *)((long)plVar1 + lVar21 + 0x144) = fStack_a8;
        pfVar17 = (float *)((long)plVar1 + lVar21 + 0x154);
      }
      else if (iVar26 == 2) {
        *(float *)((long)plVar1 + lVar21 + 0x108) = (float)local_b0;
        *(float *)((long)plVar1 + lVar21 + 0x118) = local_a0;
        *(float *)((long)plVar1 + lVar21 + 0x128) = local_b0._4_4_;
        *(float *)((long)plVar1 + lVar21 + 0x138) = fStack_9c;
        *(float *)((long)plVar1 + lVar21 + 0x148) = fStack_a8;
        pfVar17 = (float *)((long)plVar1 + lVar21 + 0x158);
      }
      else {
        *(float *)((long)plVar1 + lVar21 + 0x10c) = (float)local_b0;
        *(float *)((long)plVar1 + lVar21 + 0x11c) = local_a0;
        *(float *)((long)plVar1 + lVar21 + 300) = local_b0._4_4_;
        *(float *)((long)plVar1 + lVar21 + 0x13c) = fStack_9c;
        *(float *)((long)plVar1 + lVar21 + 0x14c) = fStack_a8;
        pfVar17 = (float *)((long)plVar1 + lVar21 + 0x15c);
      }
      *pfVar17 = local_98;
      auVar13[9] = (char)((uint)fStack_a8 >> 8);
      auVar13[10] = (char)((uint)fStack_a8 >> 0x10);
      auVar13[0xb] = (char)((uint)fStack_a8 >> 0x18);
      auVar13[0xc] = SUB41(fStack_a4,0);
      auVar13[0xd] = (char)((uint)fStack_a4 >> 8);
      auVar13[0xe] = (char)((uint)fStack_a4 >> 0x10);
      auVar13[0xf] = (char)((uint)fStack_a4 >> 0x18);
      auVar40 = NEON_fmin(auVar40,auVar13,4);
      auVar8[9] = (char)((uint)local_98 >> 8);
      auVar8[10] = (char)((uint)local_98 >> 0x10);
      auVar8[0xb] = (char)((uint)local_98 >> 0x18);
      auVar8[0xc] = SUB41(fStack_94,0);
      auVar8[0xd] = (char)((uint)fStack_94 >> 8);
      auVar8[0xe] = (char)((uint)fStack_94 >> 0x10);
      auVar8[0xf] = (char)((uint)fStack_94 >> 0x18);
      auVar37 = NEON_fmax(auVar37,auVar8,4);
      lVar21 = lVar27 * 4;
      lVar27 = lVar27 + 1;
      *(uint *)((long)plVar1 + lVar21 + *(long *)(param_1 + 0xe8) + 0x160) = uVar20 & 0xffff;
      uVar25 = uVar20 + 1;
      do {
        uVar20 = uVar25;
        if (*(int *)(param_1 + 0x50) <= (int)uVar20) goto LAB_016c61b4;
        lVar21 = *plVar2;
        uVar25 = uVar20 + 1;
      } while ((*(byte *)((long)plVar2 + (ulong)(uVar20 & 0xffff) * 0x40 + lVar21 + 0x1e) & 1) != 0)
      ;
    } while (uVar20 + 1 != 0);
LAB_016c61b4:
    lVar21 = *plVar1;
    uVar38 = *(undefined8 *)((long)plVar1 + lVar21 + 0x80);
    uVar41 = *(undefined8 *)((long)plVar1 + lVar21 + 0x90);
    *(undefined8 *)((long)plVar1 + lVar21 + 0xa8) = *(undefined8 *)((long)plVar1 + lVar21 + 0xa8);
    *(ulong *)((long)plVar1 + lVar21 + 0xa0) =
         CONCAT44((int)((ulong)*(undefined8 *)((long)plVar1 + lVar21 + 0xa0) >> 0x20),auVar40._4_4_)
    ;
    *(undefined8 *)((long)plVar1 + lVar21 + 0xb8) = *(undefined8 *)((long)plVar1 + lVar21 + 0xb8);
    *(ulong *)((long)plVar1 + lVar21 + 0xb0) =
         CONCAT44((int)((ulong)*(undefined8 *)((long)plVar1 + lVar21 + 0xb0) >> 0x20),auVar37._4_4_)
    ;
    *(undefined8 *)((long)plVar1 + lVar21 + 0x88) = *(undefined8 *)((long)plVar1 + lVar21 + 0x88);
    *(ulong *)((long)plVar1 + lVar21 + 0x80) =
         CONCAT17((char)((ulong)uVar38 >> 0x38),
                  CONCAT16((char)((ulong)uVar38 >> 0x30),
                           CONCAT15((char)((ulong)uVar38 >> 0x28),
                                    CONCAT14((char)((ulong)uVar38 >> 0x20),auVar40._0_4_))));
    *(undefined8 *)((long)plVar1 + lVar21 + 0x98) = *(undefined8 *)((long)plVar1 + lVar21 + 0x98);
    *(ulong *)((long)plVar1 + lVar21 + 0x90) =
         CONCAT17((char)((ulong)uVar41 >> 0x38),
                  CONCAT16((char)((ulong)uVar41 >> 0x30),
                           CONCAT15((char)((ulong)uVar41 >> 0x28),
                                    CONCAT14((char)((ulong)uVar41 >> 0x20),auVar37._0_4_))));
    uVar38 = *(undefined8 *)((long)plVar1 + lVar21 + 0xc0);
    *(undefined8 *)((long)plVar1 + lVar21 + 200) = *(undefined8 *)((long)plVar1 + lVar21 + 200);
    *(ulong *)((long)plVar1 + lVar21 + 0xc0) =
         CONCAT17((char)((ulong)uVar38 >> 0x38),
                  CONCAT16((char)((ulong)uVar38 >> 0x30),
                           CONCAT15((char)((ulong)uVar38 >> 0x28),
                                    CONCAT14((char)((ulong)uVar38 >> 0x20),auVar40._8_4_))));
    *(undefined8 *)((long)plVar1 + lVar21 + 0xd8) = *(undefined8 *)((long)plVar1 + lVar21 + 0xd8);
    *(ulong *)((long)plVar1 + lVar21 + 0xd0) =
         CONCAT44((int)((ulong)*(undefined8 *)((long)plVar1 + lVar21 + 0xd0) >> 0x20),auVar37._8_4_)
    ;
    *(undefined4 *)((long)plVar1 + *plVar1 + 0xe0) = 2;
    return;
  }
  iVar7 = *(int *)(param_1 + 0x50);
  lVar21 = tpidr_el0;
  lVar27 = *(long *)(lVar21 + 0x1000b8);
  if (lVar27 == 0) {
    lVar27 = FUN_00e5d3b4();
    *(long *)(lVar21 + 0x1000b8) = lVar27;
  }
  lVar21 = *(long *)(*(long *)(lVar27 + 0x3d0) + 0x10);
  if (*(long *)(lVar21 + 8) == 0) {
    lVar27 = (long)iVar7 * 0x20;
    if (lVar21 != 0) {
      local_110 = (undefined *)(lVar27 + 0x3fU & 0xffffffffffffffc0);
      local_b0 = (undefined *)lVar27;
      if (local_110 <= *(undefined **)(lVar21 + 0x28)) {
        lVar22 = *(long *)(lVar21 + 0x38);
        if (local_110 + lVar22 <= *(undefined **)(lVar21 + 0x40)) {
          *(undefined **)(lVar21 + 0x38) = local_110 + lVar22;
          goto LAB_016c6264;
        }
      }
      lVar22 = FUN_031cf3b4(lVar21,&local_110);
      goto LAB_016c6264;
    }
  }
  else {
    lVar27 = (long)iVar7 << 5;
  }
  local_b0 = (undefined *)lVar27;
  lVar22 = (**(code **)PTR_DAT_047d1a08)(1,&local_b0,0x40);
  lVar21 = 0;
LAB_016c6264:
  plVar28 = (long *)PTR_PTR_047d1a50;
  puVar29 = PTR_DAT_047d1a40;
  local_100 = 0;
  local_f8 = 1.4013e-45;
  local_110 = PTR_DAT_047d1a40 + 0x10;
  local_f4 = 1.4013e-45;
  uStack_f0 = 0;
  uStack_e8 = 0;
  local_e0 = -0x8000000000000000;
  local_c8 = 0;
  uStack_108 = 0;
  local_d8 = 0;
  local_d0 = -0x8000000000000000;
  FUN_02e7ff18(&uStack_e8,PTR_PTR_047d1a50,iVar26);
  plVar2 = (long *)(param_1 + 0x48);
  uVar25 = 0;
  do {
    uVar20 = uVar25;
    if ((*(uint *)(param_1 + 0x50) & ((int)*(uint *)(param_1 + 0x50) >> 0x1f ^ 0xffffffffU)) ==
        uVar20) goto LAB_016c64b0;
    lVar18 = *plVar2;
    uVar25 = uVar20 + 1;
  } while ((*(byte *)((long)plVar2 + (ulong)(uVar20 & 0xffff) * 0x40 + lVar18 + 0x1e) & 1) != 0);
  if (uVar20 + 1 != 0) {
    do {
      uVar25 = uVar20 & 0xffff;
      puVar3 = (undefined8 *)((long)plVar2 + (ulong)uVar25 * 0x40 + lVar18);
      uStack_80 = puVar3[2];
      fVar14 = (float)*puVar3;
      fVar15 = (float)((ulong)*puVar3 >> 0x20);
      fVar34 = fVar15 + fVar15;
      fVar39 = (float)puVar3[1];
      fVar35 = fVar39 + fVar39;
      puVar4 = (undefined8 *)(lVar22 + (ulong)uVar25 * 0x20);
      fVar36 = (fVar14 + fVar14) * fVar14;
      fVar16 = (float)((ulong)puVar3[1] >> 0x20);
      local_98 = (fVar14 + fVar14) * fVar16;
      fStack_9c = 1.0 - fVar39 * fVar35;
      fStack_a4 = fVar35 * fVar15 - local_98;
      local_b0._0_4_ = fStack_9c - fVar34 * fVar15;
      fStack_9c = fStack_9c - fVar36;
      local_b0._4_4_ = fVar34 * fVar14 + fVar35 * fVar16;
      local_a0 = fVar34 * fVar14 - fVar35 * fVar16;
      local_98 = fVar35 * fVar15 + local_98;
      fStack_a8 = fVar35 * fVar14 - fVar34 * fVar16;
      fStack_94 = fVar35 * fVar14 + fVar34 * fVar16;
      local_90 = CONCAT44(fStack_a4,fStack_94);
      uStack_88 = (ulong)(uint)((1.0 - fVar36) - fVar34 * fVar15);
      uStack_78 = puVar3[3] & 0xffffffff;
      lVar24 = puVar3[6];
      lVar18 = 0;
      if (lVar24 != 0) {
        lVar18 = lVar24 + (long)(puVar3 + 6);
      }
      if ((*(byte *)((long)puVar3 + 0x1e) >> 3 & 1) == 0) {
        (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar18 + 0x18) * 0x200 + 0x18))
                  (lVar18,&local_b0,puVar4);
      }
      else {
        local_c0 = puVar3[4];
        uStack_b8 = CONCAT17(0x3f,CONCAT16(0x80,(uint6)(uint)puVar3[5]));
        FUN_02f07fe8(lVar18,&local_b0,&local_c0,(*(byte *)((long)puVar3 + 0x1e) >> 5 ^ 0xff) & 1,
                     puVar4);
      }
      fVar14 = (float)*puVar4 + (float)puVar4[2];
      bVar30 = (byte)((uint)fVar14 >> 0x18);
      fVar15 = (float)((ulong)*puVar4 >> 0x20) + (float)((ulong)puVar4[2] >> 0x20);
      bVar31 = (byte)((uint)fVar15 >> 0x18);
      fVar39 = (float)puVar4[1] + (float)puVar4[3];
      bVar32 = (byte)((uint)fVar39 >> 0x18);
      fVar16 = (float)((ulong)puVar4[1] >> 0x20) + (float)((ulong)puVar4[3] >> 0x20);
      bVar33 = (byte)((uint)fVar16 >> 0x18);
      lVar18 = (long)(int)local_e0;
      if ((int)(local_e0._4_4_ & 0x7fffffff) <= (int)local_e0) {
        FUN_02eaf0f8(&uStack_e8,PTR_PTR_047d1a50,lVar18 + 1);
      }
      puVar3 = (undefined8 *)(uStack_e8 + (long)(int)local_e0 * 0x10);
      uVar9 = CONCAT13((char)bVar30 >> 7,(int3)((int)(char)bVar30 >> 7)) >> 1;
      uVar10 = CONCAT13((char)bVar31 >> 7,(int3)((int)(char)bVar31 >> 7)) >> 1;
      uVar11 = CONCAT13((char)bVar32 >> 7,(int3)((int)(char)bVar32 >> 7)) >> 1;
      uVar12 = CONCAT13((char)bVar33 >> 7,(int3)((int)(char)bVar33 >> 7)) >> 1;
      puVar3[1] = CONCAT17((byte)((char)bVar33 >> 7) >> 1 ^ bVar33,
                           CONCAT16((byte)(uVar12 >> 0x10) ^ (byte)((uint)fVar16 >> 0x10),
                                    CONCAT15((byte)(uVar12 >> 8) ^ (byte)((uint)fVar16 >> 8),
                                             CONCAT14((byte)uVar12 ^ SUB41(fVar16,0),
                                                      CONCAT13((byte)((char)bVar32 >> 7) >> 1 ^
                                                               bVar32,CONCAT12((byte)(uVar11 >> 0x10
                                                                                     ) ^ (byte)((
                                                  uint)fVar39 >> 0x10),
                                                  CONCAT11((byte)(uVar11 >> 8) ^
                                                           (byte)((uint)fVar39 >> 8),
                                                           (byte)uVar11 ^ SUB41(fVar39,0))))))));
      *puVar3 = CONCAT17((byte)((char)bVar31 >> 7) >> 1 ^ bVar31,
                         CONCAT16((byte)(uVar10 >> 0x10) ^ (byte)((uint)fVar15 >> 0x10),
                                  CONCAT15((byte)(uVar10 >> 8) ^ (byte)((uint)fVar15 >> 8),
                                           CONCAT14((byte)uVar10 ^ SUB41(fVar15,0),
                                                    CONCAT13((byte)((char)bVar30 >> 7) >> 1 ^ bVar30
                                                             ,CONCAT12((byte)(uVar9 >> 0x10) ^
                                                                       (byte)((uint)fVar14 >> 0x10),
                                                                       CONCAT11((byte)(uVar9 >> 8) ^
                                                                                (byte)((uint)fVar14
                                                                                      >> 8),
                                                                                (byte)uVar9 ^
                                                                                SUB41(fVar14,0))))))
                                 ));
      *(uint *)((long)puVar3 + 0xc) = uVar25;
      local_e0 = CONCAT44(local_e0._4_4_,(int)(lVar18 + 1));
      uVar25 = uVar20 + 1;
      do {
        uVar20 = uVar25;
        plVar28 = (long *)PTR_PTR_047d1a50;
        puVar29 = PTR_DAT_047d1a40;
        if (*(int *)(param_1 + 0x50) <= (int)uVar20) goto LAB_016c64b0;
        lVar18 = *plVar2;
        uVar25 = uVar20 + 1;
      } while ((*(byte *)((long)plVar2 + (ulong)(uVar20 & 0xffff) * 0x40 + lVar18 + 0x1e) & 1) != 0)
      ;
    } while (uVar20 + 1 != 0);
  }
LAB_016c64b0:
  local_a0 = (float)lVar22;
  fStack_9c = (float)((ulong)lVar22 >> 0x20);
  local_b0 = PTR_DAT_047e3470 + 0x10;
  fStack_a8 = 0.0;
  fStack_a4 = 0.0;
  FUN_0325109c(&local_110,plVar1,&local_b0);
  lVar18 = local_d0;
  local_110 = puVar29 + 0x10;
  uVar19 = (ulong)local_d0._4_4_;
  local_d0 = (ulong)local_d0._4_4_ << 0x20;
  if ((-1 < lVar18) && (local_d8 != 0)) {
    (**(code **)(*plVar28 + 0x20))(plVar28,local_d8,uVar19 << 5);
  }
  lVar18 = local_e0;
  local_d0 = CONCAT44(0x80000000,(undefined4)local_d0);
  uVar19 = (ulong)local_e0._4_4_;
  local_d8 = 0;
  local_e0 = (ulong)local_e0._4_4_ << 0x20;
  if ((-1 < lVar18) && (uStack_e8 != 0)) {
    (**(code **)(*plVar28 + 0x20))(plVar28,uStack_e8,uVar19 << 4);
  }
  if (lVar21 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar22,lVar27);
    return;
  }
  uVar19 = lVar27 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(lVar21 + 0x28) < uVar19) || (*(long *)(lVar21 + 0x38) != uVar19 + lVar22)) {
    if (lVar22 == 0) {
      return;
    }
    if (*(ulong *)(lVar21 + 0x28) < uVar19 + 0x40) {
      *(int *)(*(long *)(lVar21 + 0x30) + 0x20) = *(int *)(*(long *)(lVar21 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(lVar21 + 0x10) + 0x18))
                (*(long **)(lVar21 + 0x10),lVar22 - *(int *)(lVar22 + -4),uVar19 + 0x44);
      return;
    }
    if (*(long *)(lVar21 + 0x38) != uVar19 + lVar22) {
      FUN_031cf778(lVar21,lVar22);
      return;
    }
    *(long *)(lVar21 + 0x38) = lVar22;
  }
  else {
    *(long *)(lVar21 + 0x38) = lVar22;
    if (*(long *)(lVar21 + 0x48) != lVar22) {
      return;
    }
  }
  FUN_031cf578(lVar21);
  return;
}


