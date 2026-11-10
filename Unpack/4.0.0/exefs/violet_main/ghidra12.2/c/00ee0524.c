/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ee0524; name: FUN_00ee0524
 */


void FUN_00ee0524(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  short sVar2;
  short sVar3;
  ulong uVar4;
  undefined8 *puVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long lVar22;
  undefined8 uVar23;
  short sVar24;
  long lVar25;
  int iVar26;
  long *plVar27;
  short *psVar28;
  long lVar29;
  long lVar30;
  int iVar31;
  long *plVar32;
  short sVar33;
  undefined8 *puVar34;
  ulong uVar35;
  ulong *puVar36;
  short *psVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  short local_1ec [2];
  short local_1e8 [2];
  short local_1e4 [2];
  float local_1e0;
  undefined4 uStack_1dc;
  long *local_1c8;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined2 local_a8;
  float local_98;
  float afStack_94 [5];
  
  plVar1 = (long *)(param_1 + 0x30);
  FUN_00ee1ac4(plVar1,*param_2);
  plVar15 = (long *)(param_1 + 0x38);
  lVar22 = *plVar15;
  lVar25 = *(long *)(param_1 + 0x40);
  if (((((lVar25 != lVar22) && (FUN_00ee1834(lVar25 + -0x140), lVar25 + -0x140 != lVar22)) &&
       (FUN_00ee1834(lVar25 + -0x280), lVar25 + -0x280 != lVar22)) &&
      ((FUN_00ee1834(lVar25 + -0x3c0), lVar25 + -0x3c0 != lVar22 &&
       (FUN_00ee1834(lVar25 + -0x500), lVar25 + -0x500 != lVar22)))) &&
     (FUN_00ee1834(lVar25 + -0x640), lVar25 + -0x640 != lVar22)) {
    do {
      FUN_00ee1834(lVar25 + -0x780);
      lVar25 = lVar25 + -0x140;
    } while (lVar22 + 0x640 != lVar25);
  }
  *(long *)(param_1 + 0x40) = lVar22;
  FUN_00ee1a10(param_1 + 0x70);
  sVar8 = (**(code **)(*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x30) + 0x30) + 0x10))();
  uStack_148 = *(undefined8 *)(param_1 + 8);
  local_160 = 0;
  uStack_158 = 0;
  local_140 = 0xfffffffffffffff;
  uStack_138 = 0;
  local_150 = 0;
  local_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  local_108 = 0xfffffffffffffff;
  uStack_100 = 0;
  local_f8 = 0;
  local_e0 = 0;
  local_d0 = 0x3fffffffffffffff;
  uStack_c8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0x3f800000;
  local_a8 = 1;
  uStack_110 = uStack_148;
  uStack_d8 = uStack_148;
  FUN_00ee1b80(plVar15,(long)sVar8,&local_1e0);
  FUN_00ee1834(&local_1e0);
  if (sVar8 < 1) {
    return;
  }
  uVar35 = 0;
LAB_00ee0688:
  sVar2 = (short)uVar35;
  *(short *)(*plVar15 + uVar35 * 0x140 + 0x134) = sVar2;
  plVar12 = (long *)(*(long *)(*plVar1 + 0x30) + 0x30);
  (**(code **)(*plVar12 + 0x30))(plVar12,uVar35 & 0xffffffff,local_1e4,local_1e8,local_1ec);
  lVar22 = *plVar15 + uVar35 * 0x140;
  plVar12 = (long *)(lVar22 + 0x80);
  lVar25 = *plVar12;
  uVar19 = (int)local_1e4[0] * (int)local_1e8[0] * (int)local_1ec[0];
  plVar27 = (long *)(lVar22 + 0x90);
  if ((ulong)(*plVar27 - lVar25 >> 4) < (ulong)(long)(int)uVar19) {
    lVar22 = *plVar15 + uVar35 * 0x140;
    plVar32 = (long *)(lVar22 + 0x88);
    lVar17 = *plVar32;
    puVar34 = (undefined8 *)(lVar22 + 0x98);
    lVar22 = (**(code **)(*(long *)*puVar34 + 0x10))
                       ((long *)*puVar34,(long)((ulong)uVar19 << 0x20) >> 0x1c,0x10);
    if (lVar22 == 0) {
      (**(code **)(*(long *)*puVar34 + 0xe8))();
    }
    lVar30 = *plVar12;
    lVar25 = lVar22 + (lVar17 - lVar25 >> 4) * 0x10;
    lVar29 = *plVar32;
    lVar17 = lVar25;
    if (lVar29 != lVar30) {
      do {
        uVar23 = *puVar34;
        if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar13 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar13 == 0) {
          *(undefined8 *)(lVar17 + -8) = *(undefined8 *)(lVar29 + -8);
          *(undefined8 *)(lVar17 + -0x10) = *(undefined8 *)(lVar29 + -0x10);
        }
        else {
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00ee1194;
          *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar23;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          *(undefined8 *)(lVar17 + -8) = *(undefined8 *)(lVar29 + -8);
          *(undefined8 *)(lVar17 + -0x10) = *(undefined8 *)(lVar29 + -0x10);
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
        }
        lVar29 = lVar29 + -0x10;
        lVar17 = lVar17 + -0x10;
      } while (lVar30 != lVar29);
      lVar30 = *plVar12;
    }
    *plVar12 = lVar17;
    *plVar32 = lVar25;
    lVar25 = *plVar27;
    *plVar27 = lVar22 + (long)(int)uVar19 * 0x10;
    if (lVar30 != 0) {
      plVar12 = (long *)*puVar34;
      uVar14 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar14 & 1) == 0) || (lVar22 = FUN_00c4e600(), *(int *)(lVar22 + 0x12c8) < 1)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,lVar30,lVar25 - lVar30,0x10);
      }
      else {
        FUN_00c48fe8(plVar12,lVar30,lVar25 - lVar30,0x10);
      }
    }
  }
  sVar7 = local_1e4[0];
  sVar6 = local_1e8[0];
  sVar9 = local_1ec[0];
  iVar11 = (int)local_1ec[0];
  lVar22 = (long)sVar2;
  if (0 < local_1ec[0]) {
    iVar31 = (int)local_1e4[0];
    iVar26 = (int)local_1e8[0];
    sVar3 = 0;
    do {
      if ((0 < iVar26) && (0 < iVar31)) {
        sVar24 = 0;
        fVar38 = (0.01 / (float)(iVar11 + -1)) * (float)(int)sVar3 + -0.005;
        do {
          fVar40 = (0.01 / (float)(iVar26 + -1)) * (float)(int)sVar24 + -0.005;
          sVar33 = 0;
          do {
            lVar25 = *(long *)(param_1 + 0x38);
            lVar17 = lVar25 + lVar22 * 0x140;
            fVar39 = (0.01 / (float)(iVar31 + -1)) * (float)(int)sVar33 + -0.005;
            puVar36 = (ulong *)(lVar17 + 0x88);
            puVar34 = (undefined8 *)*puVar36;
            local_1e0 = fVar39;
            local_98 = fVar38;
            afStack_94[0] = fVar40;
            if (puVar34 < *(undefined8 **)(lVar17 + 0x90)) {
              uVar23 = *(undefined8 *)(lVar25 + lVar22 * 0x140 + 0x98);
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar25 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar25 == 0) {
                puVar34[1] = (ulong)(uint)fVar38;
                *puVar34 = CONCAT44(fVar40,fVar39);
              }
              else {
                if (0xf < *(ulong *)(lVar25 + 0x80)) goto LAB_00ee1194;
                *(undefined8 *)(lVar25 + *(ulong *)(lVar25 + 0x80) * 8) = uVar23;
                *(long *)(lVar25 + 0x80) = *(long *)(lVar25 + 0x80) + 1;
                puVar34[1] = (ulong)(uint)fVar38;
                *puVar34 = CONCAT44(fVar40,fVar39);
                *(long *)(lVar25 + 0x80) = *(long *)(lVar25 + 0x80) + -1;
              }
              *puVar36 = (ulong)(puVar34 + 2);
            }
            else {
              FUN_00ee1518(lVar25 + lVar22 * 0x140 + 0x80,&local_1e0,afStack_94,&local_98);
            }
            sVar33 = sVar33 + 1;
          } while (sVar33 < sVar7);
          sVar24 = sVar24 + 1;
        } while (sVar24 < sVar6);
      }
      sVar3 = sVar3 + 1;
    } while (sVar3 < sVar9);
  }
  plVar12 = (long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x30) + 0x30);
  uVar14 = (**(code **)(*plVar12 + 0x38))(plVar12,uVar35 & 0xffffffff);
  if ((uVar14 & 1) != 0) {
    lVar17 = *(long *)(param_1 + 0x38) + lVar22 * 0x140;
    lVar25 = *(long *)(lVar17 + 0x80);
    plVar12 = (long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x30) + 0x30);
    lVar29 = *(long *)(lVar17 + 0x88) - lVar25;
    lVar17 = (**(code **)(*plVar12 + 0x40))(plVar12,uVar35 & 0xffffffff);
    if (lVar29 != 0) {
      uVar14 = lVar29 >> 4;
      if (uVar14 < 2) {
        uVar14 = 1;
      }
      uVar16 = uVar14 & 3;
      if (uVar14 - 1 < 3) {
        uVar18 = 0;
      }
      else {
        uVar18 = 0;
        puVar34 = (undefined8 *)(lVar17 + 0x20);
        puVar20 = (undefined8 *)(lVar25 + 0x20);
        do {
          uVar18 = uVar18 + 4;
          uVar23 = puVar34[-4];
          puVar20[-3] = CONCAT44((float)((ulong)puVar34[-3] >> 0x20) -
                                 (float)((ulong)puVar20[-3] >> 0x20),
                                 (float)puVar34[-3] - (float)puVar20[-3]);
          puVar20[-4] = CONCAT44((float)((ulong)uVar23 >> 0x20) -
                                 (float)((ulong)puVar20[-4] >> 0x20),
                                 (float)uVar23 - (float)puVar20[-4]);
          uVar23 = puVar34[-2];
          puVar20[-1] = CONCAT44((float)((ulong)puVar34[-1] >> 0x20) -
                                 (float)((ulong)puVar20[-1] >> 0x20),
                                 (float)puVar34[-1] - (float)puVar20[-1]);
          puVar20[-2] = CONCAT44((float)((ulong)uVar23 >> 0x20) -
                                 (float)((ulong)puVar20[-2] >> 0x20),
                                 (float)uVar23 - (float)puVar20[-2]);
          uVar23 = *puVar34;
          puVar20[1] = CONCAT44((float)((ulong)puVar34[1] >> 0x20) -
                                (float)((ulong)puVar20[1] >> 0x20),
                                (float)puVar34[1] - (float)puVar20[1]);
          *puVar20 = CONCAT44((float)((ulong)uVar23 >> 0x20) - (float)((ulong)*puVar20 >> 0x20),
                              (float)uVar23 - (float)*puVar20);
          puVar5 = puVar34 + 3;
          uVar23 = puVar34[2];
          puVar34 = puVar34 + 8;
          puVar20[3] = CONCAT44((float)((ulong)*puVar5 >> 0x20) - (float)((ulong)puVar20[3] >> 0x20)
                                ,(float)*puVar5 - (float)puVar20[3]);
          puVar20[2] = CONCAT44((float)((ulong)uVar23 >> 0x20) - (float)((ulong)puVar20[2] >> 0x20),
                                (float)uVar23 - (float)puVar20[2]);
          puVar20 = puVar20 + 8;
        } while ((uVar14 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar16 != 0) {
        puVar34 = (undefined8 *)(lVar25 + uVar18 * 0x10);
        puVar20 = (undefined8 *)(lVar17 + uVar18 * 0x10);
        do {
          uVar16 = uVar16 - 1;
          uVar23 = *puVar20;
          puVar34[1] = CONCAT44((float)((ulong)puVar20[1] >> 0x20) -
                                (float)((ulong)puVar34[1] >> 0x20),
                                (float)puVar20[1] - (float)puVar34[1]);
          *puVar34 = CONCAT44((float)((ulong)uVar23 >> 0x20) - (float)((ulong)*puVar34 >> 0x20),
                              (float)uVar23 - (float)*puVar34);
          puVar34 = puVar34 + 2;
          puVar20 = puVar20 + 2;
        } while (uVar16 != 0);
      }
    }
    *(undefined4 *)(*(long *)(param_1 + 0x38) + lVar22 * 0x140 + 0x130) = 0;
  }
  lVar22 = *plVar15 + uVar35 * 0x140;
  plVar12 = (long *)(lVar22 + 0xb8);
  lVar25 = *plVar12;
  plVar27 = (long *)(lVar22 + 0xc0);
  uVar16 = *plVar27 - lVar25 >> 4;
  uVar14 = (ulong)((int)local_1e4[0] * (int)local_1e8[0] * (int)local_1ec[0]);
  if (uVar16 < uVar14) {
    FUN_00ee11e0(plVar12,uVar14 - uVar16);
  }
  else if (uVar14 < uVar16) {
    *plVar27 = lVar25 + uVar14 * 0x10;
  }
  plVar12 = (long *)(*(long *)(*plVar1 + 0x30) + 0x30);
  sVar9 = (**(code **)(*plVar12 + 0x48))(plVar12,uVar35 & 0xffffffff);
  if (0 < sVar9) {
    FUN_00ee22e4(param_1,uVar35 & 0xffffffff,param_3);
  }
  plVar12 = (long *)(*(long *)(*plVar1 + 0x30) + 0x30);
  sVar9 = (**(code **)(*plVar12 + 0x58))(plVar12,uVar35 & 0xffffffff);
  if (0 < sVar9) {
    lVar22 = *(long *)(param_1 + 0x30);
    plVar12 = (long *)(*(long *)(lVar22 + 0x30) + 0x30);
    (**(code **)(*plVar12 + 0x60))(&local_1e0,plVar12,uVar35 & 0xffffffff,0);
    uVar14 = *(ulong *)(lVar22 + 0x40);
    if (uVar14 == 0) {
LAB_00ee0c00:
      sVar9 = -1;
    }
    else {
      uVar16 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
      uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
      uVar18 = CONCAT44(uStack_1dc,local_1e0);
      uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar16 < 2) {
        uVar21 = uVar14 - 1 & uVar18;
      }
      else if (uVar18 < uVar14) {
        uVar21 = uVar18;
      }
      else {
        uVar21 = 0;
        if (uVar14 != 0) {
          uVar21 = uVar18 / uVar14;
        }
        uVar21 = uVar18 - uVar21 * uVar14;
      }
      plVar12 = *(long **)(*(long *)(lVar22 + 0x38) + uVar21 * 8);
      if ((plVar12 == (long *)0x0) || (plVar12 = (long *)*plVar12, plVar12 == (long *)0x0))
      goto LAB_00ee0c00;
      if (1 < uVar16) {
        do {
          uVar16 = plVar12[1];
          if (uVar16 == uVar18) {
            if (plVar12[2] == uVar18) goto LAB_00ee0c08;
          }
          else {
            if (uVar14 <= uVar16) {
              uVar4 = 0;
              if (uVar14 != 0) {
                uVar4 = uVar16 / uVar14;
              }
              uVar16 = uVar16 - uVar4 * uVar14;
            }
            if (uVar16 != uVar21) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
        goto LAB_00ee0c00;
      }
      do {
        if (plVar12[1] == uVar18) {
          if (plVar12[2] == uVar18) goto LAB_00ee0c08;
        }
        else if ((plVar12[1] & uVar14 - 1) != uVar21) goto LAB_00ee0c00;
        plVar12 = (long *)*plVar12;
        sVar9 = -1;
      } while (plVar12 != (long *)0x0);
    }
    goto LAB_00ee0c0c;
  }
  goto LAB_00ee0de8;
LAB_00ee0c08:
  sVar9 = (short)plVar12[6];
LAB_00ee0c0c:
  if (local_1c8 != (long *)0x0) {
    (**(code **)(*local_1c8 + 0x20))();
  }
  lVar22 = *(long *)(param_1 + 0x38) + (long)sVar9 * 0x140;
  plVar12 = (long *)(lVar22 + 0xf8);
  psVar28 = (short *)*plVar12;
  puVar34 = (undefined8 *)(lVar22 + 0x108);
  if (psVar28 < *(short **)(lVar22 + 0x100)) {
    uVar23 = *puVar34;
    if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar22 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar22 == 0) {
      *psVar28 = sVar2;
      psVar28[1] = 0;
    }
    else {
      if (0xf < *(ulong *)(lVar22 + 0x80)) goto LAB_00ee1194;
      *(undefined8 *)(lVar22 + *(ulong *)(lVar22 + 0x80) * 8) = uVar23;
      *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + 1;
      *psVar28 = sVar2;
      psVar28[1] = 0;
      *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + -1;
    }
    *plVar12 = (long)(psVar28 + 2);
  }
  else {
    plVar27 = (long *)(lVar22 + 0xf0);
    uVar16 = *(ulong *)(*(long *)(param_1 + 0x38) + (long)sVar9 * 0x140 + 0x110);
    lVar25 = (long)psVar28 - *plVar27 >> 2;
    uVar14 = lVar25 + 1;
    if (0x7ffffffffffffffe < uVar16) {
      uVar16 = 0x7fffffffffffffff;
    }
    if (uVar16 < uVar14) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar17 = (long)*(short **)(lVar22 + 0x100) - *plVar27;
    uVar18 = lVar17 >> 1;
    if (uVar14 <= uVar18) {
      uVar14 = uVar18;
    }
    if (uVar16 >> 1 <= (ulong)(lVar17 >> 2)) {
      uVar14 = uVar16;
    }
    if (uVar14 == 0) {
      lVar17 = 0;
    }
    else {
      lVar17 = (**(code **)(*(long *)*puVar34 + 0x10))((long *)*puVar34,uVar14 << 2,2);
      if (lVar17 == 0) {
        (**(code **)(*(long *)*puVar34 + 0xe8))();
      }
    }
    uVar23 = *puVar34;
    psVar28 = (short *)(lVar17 + lVar25 * 4);
    if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar25 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar25 == 0) {
      *psVar28 = sVar2;
      psVar28[1] = 0;
    }
    else {
      if (0xf < *(ulong *)(lVar25 + 0x80)) {
LAB_00ee1194:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar25 + *(ulong *)(lVar25 + 0x80) * 8) = uVar23;
      *(long *)(lVar25 + 0x80) = *(long *)(lVar25 + 0x80) + 1;
      *psVar28 = sVar2;
      psVar28[1] = 0;
      *(long *)(lVar25 + 0x80) = *(long *)(lVar25 + 0x80) + -1;
    }
    lVar29 = *plVar27;
    lVar25 = *plVar12;
    psVar37 = psVar28;
    if (lVar25 != lVar29) {
      do {
        uVar23 = *puVar34;
        if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar30 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar30 == 0) {
          *(undefined4 *)(psVar37 + -2) = *(undefined4 *)(lVar25 + -4);
        }
        else {
          if (0xf < *(ulong *)(lVar30 + 0x80)) goto LAB_00ee1194;
          *(undefined8 *)(lVar30 + *(ulong *)(lVar30 + 0x80) * 8) = uVar23;
          *(long *)(lVar30 + 0x80) = *(long *)(lVar30 + 0x80) + 1;
          *(undefined4 *)(psVar37 + -2) = *(undefined4 *)(lVar25 + -4);
          *(long *)(lVar30 + 0x80) = *(long *)(lVar30 + 0x80) + -1;
        }
        lVar25 = lVar25 + -4;
        psVar37 = psVar37 + -2;
      } while (lVar29 != lVar25);
      lVar29 = *plVar27;
    }
    *plVar27 = (long)psVar37;
    *plVar12 = (long)(psVar28 + 2);
    lVar25 = *(long *)(lVar22 + 0x100);
    *(long *)(lVar22 + 0x100) = lVar17 + uVar14 * 4;
    if (lVar29 != 0) {
      lVar25 = lVar25 - lVar29;
      plVar12 = (long *)*puVar34;
      uVar14 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar14 & 1) == 0) || (lVar22 = FUN_00c4e600(), *(int *)(lVar22 + 0x12c8) < 1)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,lVar29,lVar25,2);
      }
      else {
        FUN_00c48fe8(plVar12,lVar29,lVar25,2);
      }
    }
  }
LAB_00ee0de8:
  uVar35 = uVar35 + 1;
  if (uVar35 == ((ulong)(uint)(int)sVar8 & 0xffff)) {
    return;
  }
  goto LAB_00ee0688;
}


