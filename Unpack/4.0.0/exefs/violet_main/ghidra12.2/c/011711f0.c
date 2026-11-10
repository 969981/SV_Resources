/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011711f0; name: FUN_011711f0
 */


void FUN_011711f0(long *param_1,undefined1 param_2 [16],undefined8 *param_3,undefined8 *param_4)

{
  float *pfVar1;
  undefined *puVar2;
  undefined1 (*pauVar3) [12];
  long *plVar4;
  ulong uVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [12];
  bool bVar12;
  int iVar13;
  undefined1 *puVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  uint uVar20;
  ulong *puVar21;
  uint uVar22;
  ulong uVar23;
  int iVar24;
  ulong uVar25;
  undefined4 uVar26;
  undefined1 auVar27 [12];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  undefined1 auVar37 [12];
  undefined8 uVar36;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  float fVar49;
  undefined1 auVar47 [16];
  float fVar50;
  undefined1 auVar48 [16];
  float fVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  float fVar54;
  undefined8 local_750;
  undefined8 uStack_748;
  undefined8 local_740;
  ulong uStack_738;
  float local_730;
  float fStack_72c;
  float fStack_728;
  float fStack_724;
  undefined8 local_720;
  undefined8 uStack_718;
  undefined *local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined1 *local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined1 local_558;
  long *local_550;
  long local_548;
  long local_540;
  undefined8 uStack_538;
  long local_530;
  undefined8 uStack_528;
  undefined1 *local_520;
  undefined8 uStack_518;
  undefined1 local_510 [12];
  float fStack_504;
  float fStack_4f4;
  long *local_108;
  undefined1 auStack_100 [48];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined2 local_c0;
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined7 uStack_90;
  undefined1 local_89;
  undefined7 uStack_88;
  ulong *local_80;
  undefined8 local_78;
  float local_64;
  
  puVar2 = PTR_PTR_047d1a50;
  auVar43._0_8_ = param_2._0_8_;
  local_64 = param_2._0_4_;
  uVar36 = param_2._8_8_;
  local_80 = (ulong *)*param_3;
  local_78 = param_3[1];
  local_c0 = *(undefined2 *)(param_4 + 2);
  local_d0 = *param_4;
  uStack_c8 = param_4[1];
  local_a8 = 1;
  local_b8 = PTR_DAT_047ddc10 + 0x10;
  uStack_b0 = 0xffffffff;
  local_a0 = param_4[6];
  local_98 = *(undefined4 *)(param_4 + 7);
  lVar16 = param_4[8];
  uStack_88 = (undefined7)((ulong)*(undefined8 *)((long)param_4 + 0x47) >> 8);
  uStack_90 = (undefined7)lVar16;
  local_89 = (undefined1)((ulong)lVar16 >> 0x38);
  if (lVar16 != 0) {
    uVar20 = (uint)local_78;
    if ((int)(uint)local_78 < 1) {
      uVar20 = 0;
      puVar14 = (undefined1 *)0x0;
      uVar22 = 0x80000000;
    }
    else {
      puVar14 = (undefined1 *)
                (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                          (PTR_PTR_047d1a50,(local_78 & 0xffffffff) << 4);
      lVar16 = 0;
      do {
        pfVar1 = (float *)((long)local_80 + (long)(local_78._4_4_ * (int)lVar16));
        fVar51 = *pfVar1;
        fVar46 = pfVar1[1];
        uVar7 = *(undefined8 *)pfVar1;
        fVar35 = pfVar1[2];
        fVar54 = 0.0;
        if (0xf < local_78._4_4_) {
          fVar54 = pfVar1[3];
        }
        *(ulong *)((long)(puVar14 + lVar16 * 0x10) + 8) = CONCAT44(fVar54,fVar35);
        *(undefined8 *)(puVar14 + lVar16 * 0x10) = uVar7;
        puVar10 = (undefined8 *)CONCAT17(local_89,uStack_90);
        auVar38._0_8_ =
             CONCAT44((float)((ulong)puVar10[6] >> 0x20) +
                      (float)((ulong)puVar10[4] >> 0x20) * fVar35 +
                      (float)((ulong)*puVar10 >> 0x20) * fVar51 +
                      (float)((ulong)puVar10[2] >> 0x20) * fVar46,
                      (float)puVar10[6] +
                      (float)puVar10[4] * fVar35 +
                      (float)*puVar10 * fVar51 + (float)puVar10[2] * fVar46);
        auVar38._8_4_ =
             (float)puVar10[7] +
             (float)puVar10[5] * fVar35 + (float)puVar10[1] * fVar51 + (float)puVar10[3] * fVar46;
        auVar38._12_4_ =
             (float)((ulong)puVar10[7] >> 0x20) +
             (float)((ulong)puVar10[5] >> 0x20) * fVar35 +
             (float)((ulong)puVar10[1] >> 0x20) * fVar51 +
             (float)((ulong)puVar10[3] >> 0x20) * fVar46;
        *(long *)((long)(puVar14 + lVar16 * 0x10) + 8) = auVar38._8_8_;
        *(undefined8 *)(puVar14 + lVar16 * 0x10) = auVar38._0_8_;
        lVar16 = lVar16 + 1;
        uVar22 = uVar20;
      } while (lVar16 < (int)(uint)local_78);
    }
    auVar43._8_8_ = uVar36;
    uStack_90 = 0;
    local_89 = 0;
    uStack_518 = CONCAT44(0x10,uVar20);
    local_520 = puVar14;
    FUN_011711f0(param_1,auVar43,&local_520,&local_d0);
    if ((int)uVar22 < 0) {
      return;
    }
    if (puVar14 == (undefined1 *)0x0) {
      return;
    }
    (**(code **)(*(long *)puVar2 + 0x20))(puVar2,puVar14,(ulong)uVar22 << 4);
    return;
  }
  uStack_c8._4_4_ = (float)((ulong)uStack_c8 >> 0x20);
  bVar12 = 0.0 <= uStack_c8._4_4_;
  if (bVar12) {
    fVar54 = (float)FUN_0325fb44(&local_520,&local_80);
    if (uStack_c8._4_4_ <= fVar54) {
      local_750 = CONCAT44(0.0 - fStack_504,0.0 - uStack_518._4_4_);
      local_740 = CONCAT44(fStack_504 + 0.0,uStack_518._4_4_ + 0.0);
      uStack_748 = (ulong)(uint)(0.0 - fStack_4f4);
      uStack_738 = (ulong)(uint)(fStack_4f4 + 0.0);
      auVar28._8_8_ = uVar36;
      auVar28._0_8_ = auVar43._0_8_;
      uStack_90 = SUB87(&local_520,0);
      local_89 = (undefined1)((ulong)&local_520 >> 0x38);
      FUN_00cb4bd8(param_1,auVar28,&local_750,&local_d0);
      return;
    }
  }
  FUN_0084f3cc(auStack_100);
  puVar2 = PTR_PTR_047d1a50;
  local_520 = local_510;
  local_108 = (long *)0x0;
  uStack_518._0_4_ = 0;
  uStack_518._4_4_ = -8.96831e-44;
  if ((char)local_c0 == '\0') {
    if ((int)(uint)local_78 < 0xfd) {
      if (0 < (int)(uint)local_78) {
        iVar13 = 1;
        puVar21 = local_80;
        uVar20 = 0x40;
        while( true ) {
          uVar22 = (uint)uStack_518 + 1;
          if ((int)(uVar20 & 0x7fffffff) <= (int)(uint)uStack_518) {
            FUN_02e8df28(&local_520,puVar2,(long)(int)uVar22);
          }
          uVar18 = *puVar21;
          *(ulong *)((long)(local_520 + (long)(int)(uint)uStack_518 * 0x10) + 8) =
               CONCAT44((int)puVar21[1],(int)puVar21[1]);
          *(ulong *)(local_520 + (long)(int)(uint)uStack_518 * 0x10) = uVar18;
          uStack_518._0_4_ = uVar22;
          if ((int)(uint)local_78 <= iVar13) break;
          puVar21 = (ulong *)((long)local_78._4_4_ + (long)puVar21);
          iVar13 = iVar13 + 1;
          uVar20 = (uint)uStack_518._4_4_;
        }
      }
    }
    else {
      iVar13 = FUN_02ee6334(&local_80,&local_64,&local_d0,auStack_100,&local_108);
      if (iVar13 < 0) {
        local_580 = 1;
        uStack_578 = 0;
        uStack_568 = 0;
        local_590 = PTR_DAT_047e34b8 + 0x10;
        uStack_588 = 0xffffffff;
        local_560 = 0x1bf;
        local_558 = 0;
        local_570 = (undefined1 *)&local_750;
        memset(&local_750,0,0x1c0);
        FUN_0322bd4c(&local_590,
                     "Couldn\'t create and simplify the hull from provided vertices! Dropping anything after 252nd vertex!"
                     ,99);
        FUN_03226c50(0xabba3579,&local_750,
                     "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Physics/Physics/Collide/Shape/Convex/hknpConvexShape.cpp"
                     ,0x20c);
        puVar2 = PTR_PTR_047d1a50;
        if (0 < (int)(uint)local_78) {
          iVar13 = 0;
          puVar21 = local_80;
          do {
            lVar16 = (long)(int)(uint)uStack_518;
            if ((int)((uint)uStack_518._4_4_ & 0x7fffffff) <= (int)(uint)uStack_518) {
              FUN_02e8df28(&local_520,puVar2,lVar16 + 1);
            }
            uVar20 = (uint)(lVar16 + 1);
            uVar18 = *puVar21;
            iVar13 = iVar13 + 1;
            *(ulong *)((long)(local_520 + (long)(int)(uint)uStack_518 * 0x10) + 8) =
                 CONCAT44((int)puVar21[1],(int)puVar21[1]);
            *(ulong *)(local_520 + (long)(int)(uint)uStack_518 * 0x10) = uVar18;
            puVar21 = (ulong *)((long)local_78._4_4_ + (long)puVar21);
            iVar24 = (uint)local_78;
            if (0xfb < (int)(uint)local_78) {
              iVar24 = 0xfc;
            }
            uStack_518._0_4_ = uVar20;
          } while (iVar13 < iVar24);
        }
        plVar15 = local_108;
        local_108 = (long *)0x0;
        if ((plVar15 == (long *)0x0) || (plVar15[1] == 0)) goto LAB_01171894;
        plVar19 = plVar15 + 2;
        do {
          lVar16 = *plVar19 + -1;
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar12) {
            *plVar19 = lVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        goto LAB_01171884;
      }
      FUN_00857760(auStack_100,1,&local_520);
    }
  }
  else {
    *param_1 = 0;
    if ((uint)local_78 == 3) {
      uVar52 = 0;
      uVar26 = 0;
      local_750 = *local_80;
      if (0xf < local_78._4_4_) {
        uVar52 = *(undefined4 *)((long)local_80 + 0xc);
      }
      plVar15 = (long *)((long)local_80 + (long)local_78._4_4_);
      uVar53 = 0;
      uStack_748 = CONCAT44(uVar52,(int)local_80[1]);
      local_530 = *plVar15;
      if (0xf < local_78._4_4_) {
        uVar53 = *(undefined4 *)((long)plVar15 + 0xc);
      }
      pauVar3 = (undefined1 (*) [12])((long)local_80 + (long)local_78._4_4_ * 2);
      uStack_528 = CONCAT44(uVar53,(int)plVar15[1]);
      auVar27 = *pauVar3;
      if (0xf < local_78._4_4_) {
        uVar26 = *(undefined4 *)pauVar3[1];
      }
      auVar39._12_4_ = uVar26;
      auVar39._0_12_ = auVar27;
      auVar29._8_8_ = uVar36;
      auVar29._0_8_ = auVar43._0_8_;
      uStack_538 = auVar39._8_8_;
      local_540 = auVar27._0_8_;
      FUN_02ee486c(&local_548,auVar29,&local_750,&local_530,&local_540);
LAB_01171700:
      *param_1 = local_548;
      if ((local_548 != 0) && (local_c0._1_1_ != '\0')) {
        FUN_02ef656c(local_548,&local_b8);
      }
LAB_01171720:
      if (local_548 != 0) goto LAB_01171ba0;
    }
    else {
      if ((uint)local_78 == 2) {
        uVar52 = 0;
        uVar26 = 0;
        local_750 = *local_80;
        if (0xf < local_78._4_4_) {
          uVar52 = *(undefined4 *)((long)local_80 + 0xc);
        }
        uStack_748 = CONCAT44(uVar52,(int)local_80[1]);
        auVar27 = *(undefined1 (*) [12])((long)local_80 + (long)local_78._4_4_);
        if (0xf < local_78._4_4_) {
          uVar26 = *(undefined4 *)((undefined1 (*) [12])((long)local_80 + (long)local_78._4_4_))[1];
        }
        auVar40._12_4_ = uVar26;
        auVar40._0_12_ = auVar27;
        auVar30._8_8_ = uVar36;
        auVar30._0_8_ = auVar43._0_8_;
        uStack_528 = auVar40._8_8_;
        local_530 = auVar27._0_8_;
        FUN_00cb1efc(&local_540,auVar30,&local_750,&local_530);
        local_548 = local_540;
        goto LAB_01171700;
      }
      if ((uint)local_78 == 1) {
        local_750 = *local_80;
        if (local_78._4_4_ < 0x10) {
          uVar52 = 0;
        }
        else {
          uVar52 = *(undefined4 *)((long)local_80 + 0xc);
        }
        uStack_748 = CONCAT44(uVar52,(int)local_80[1]);
        auVar31._8_8_ = uVar36;
        auVar31._0_8_ = auVar43._0_8_;
        FUN_00e81a84(&local_530,auVar31,&local_750);
        local_548 = local_530;
        goto LAB_01171700;
      }
      iVar13 = FUN_02ee6334(&local_80,&local_64,&local_d0,auStack_100,&local_108);
      if (-1 < iVar13) {
        local_550 = local_108;
        if ((local_108 != (long *)0x0) && (local_108[1] != 0)) {
          plVar15 = local_108 + 2;
          do {
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar12) {
              *plVar15 = *plVar15 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        local_548 = FUN_02ee6ca4(auStack_100,&local_550,&local_d0);
        if (local_548 != 0) {
          *param_1 = local_548;
        }
        if ((local_550 != (long *)0x0) && (local_550[1] != 0)) {
          plVar15 = local_550 + 2;
          do {
            lVar16 = *plVar15;
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar12) {
              *plVar15 = lVar16 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar16 + -1 == 0) {
            (**(code **)(*local_550 + 0x18))();
          }
        }
        goto LAB_01171720;
      }
    }
    FUN_00857760(auStack_100,1,&local_520);
    plVar15 = local_108;
    local_108 = (long *)0x0;
    if ((plVar15 != (long *)0x0) && (plVar15[1] != 0)) {
      plVar19 = plVar15 + 2;
      do {
        lVar16 = *plVar19 + -1;
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar12) {
          *plVar19 = lVar16;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_01171884:
      local_108 = (long *)0x0;
      if (lVar16 == 0) {
        (**(code **)(*plVar15 + 0x18))();
      }
    }
  }
LAB_01171894:
  uVar20 = (uint)uStack_518;
  puVar2 = PTR_DAT_047d1a08;
  uVar23 = (ulong)(int)((uint)uStack_518 * 0xc + 0x8f & 0xfffffff0);
  local_750 = uVar23;
  plVar15 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_750,0);
  uVar18 = local_750;
  uVar25 = local_750 >> 2;
  if (((ulong)plVar15 & 0xf) == 0) {
    plVar19 = plVar15;
    uVar17 = uVar25;
  }
  else {
    uVar17 = 4 - (((ulong)plVar15 & 0xf) >> 2);
    uVar5 = uVar25;
    if (uVar17 <= uVar25) {
      uVar5 = uVar17;
    }
    plVar19 = (long *)((long)plVar15 + uVar5 * 4);
    uVar17 = uVar25 - uVar5;
    if (plVar15 < plVar19) {
      memset(plVar15,0,uVar5 << 2);
    }
    else {
      plVar19 = plVar15;
    }
  }
  if ((3 < uVar17) && (0 < (long)(uVar17 & 0xfffffffffffffffc))) {
    plVar4 = (long *)((long)plVar19 + (uVar17 & 0xfffffffffffffffc) * 4);
    if (plVar4 <= plVar19 + 2) {
      plVar4 = plVar19 + 2;
    }
    memset(plVar19,0,(long)plVar4 + ~(ulong)plVar19 + 0x10 & 0xfffffffffffffff0);
    plVar19 = (long *)((long)plVar19 + ((long)plVar4 + ~(ulong)plVar19 & 0xfffffffffffffff0) + 0x10)
    ;
  }
  if (plVar19 < (long *)((long)plVar15 + uVar25 * 4)) {
    memset(plVar19,0,
           (long)plVar15 + (uVar18 & 0xfffffffffffffffc) + ~(ulong)plVar19 + 4 & 0xfffffffffffffffc)
    ;
  }
  if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
    (**(code **)(puVar2 + 0x10))(plVar15,"hknpConvexShape");
  }
  plVar15[2] = 1;
  *(undefined4 *)(plVar15 + 3) = 0x10200;
  *(undefined1 *)((long)plVar15 + 0x1c) = 0;
  plVar15[5] = 0;
  plVar15[6] = 0;
  plVar15[7] = 0;
  puVar2 = PTR_DAT_047e34a8 + 0x10;
  *(float *)(plVar15 + 4) = local_64;
  *plVar15 = (long)puVar2;
  plVar15[1] = uVar23;
  *(undefined2 *)(plVar15 + 0xe) = 0x7f7f;
  *(undefined4 *)(plVar15 + 8) = 0x40;
  *(uint *)((long)plVar15 + 0x44) = uVar20 & 0xffff;
  plVar15[0xd] = 0;
  plVar15[9] = 0;
  plVar15[10] = 0;
  plVar15[0xb] = 0;
  plVar15[0xc] = 0;
  if ((uint)uStack_518 == 1) {
    *(undefined2 *)((long)plVar15 + 0x1a) = 0x11;
LAB_01171a2c:
    lVar16 = 0;
    auVar32._8_4_ = 0x7f7fffee;
    auVar32._0_8_ = 0x7f7fffee7f7fffee;
    auVar32._12_4_ = 0x7f7fffee;
    auVar41._8_4_ = 0xff7fffee;
    auVar41._0_8_ = 0xff7fffeeff7fffee;
    auVar41._12_4_ = 0xff7fffee;
    plVar19 = plVar15 + 0x11;
    do {
      lVar8 = *(long *)(local_520 + lVar16 * 0x10);
      lVar9 = *(long *)((long)(local_520 + lVar16 * 0x10) + 8);
      plVar19[-1] = lVar8;
      auVar47._8_4_ = (undefined4)lVar9;
      auVar47._12_4_ = auVar47._8_4_;
      *(undefined4 *)plVar19 = auVar47._8_4_;
      plVar19 = (long *)((long)plVar19 + 0xc);
      lVar16 = lVar16 + 1;
      auVar47._0_8_ = lVar8;
      auVar32 = NEON_fmin(auVar32,auVar47,4);
      auVar27 = auVar32._0_12_;
      auVar41 = NEON_fmax(auVar41,auVar47,4);
      auVar37 = auVar41._0_12_;
    } while (lVar16 < (int)(uint)uStack_518);
    fVar54 = *(float *)(plVar15 + 4);
  }
  else {
    if (0 < (int)(uint)uStack_518) goto LAB_01171a2c;
    auVar37._8_4_ = 0xff7fffee;
    auVar37._0_8_ = 0xff7fffeeff7fffee;
    auVar27._8_4_ = 0x7f7fffee;
    auVar27._0_8_ = 0x7f7fffee7f7fffee;
    fVar54 = local_64;
  }
  uVar36 = CONCAT44((auVar37._4_4_ - auVar27._4_4_) * 0.5,(auVar37._0_4_ - auVar27._0_4_) * 0.5);
  fVar35 = (auVar37._8_4_ - auVar27._8_4_) * 0.5;
  uVar36 = NEON_fminp(uVar36,uVar36,4);
  uVar36 = NEON_fmin(CONCAT44(fVar35,fVar35),uVar36,4);
  *(short *)(plVar15 + 0xe) =
       (short)((uint)(DAT_0460e1e0 * (fVar54 + (float)uVar36) * 1.0039062) >> 0x10);
  if (local_c0._1_1_ != '\0') {
    if (local_108 == (long *)0x0) {
      FUN_02ef656c(plVar15,&local_b8);
    }
    else {
      lVar16 = local_108[6];
      auVar42._0_8_ =
           CONCAT17((char)((ulong)lVar16 >> 0x18),
                    CONCAT16((char)((ulong)lVar16 >> 0x10),
                             (uint6)(ushort)((ushort)lVar16 ^ 0x8000) << 0x10)) ^ 0x8000000000000000
      ;
      auVar42._8_2_ = 0;
      auVar42[10] = (undefined1)((ulong)lVar16 >> 0x20);
      auVar42[0xb] = (byte)((ulong)lVar16 >> 0x28) ^ 0x80;
      auVar42._12_2_ = 0;
      auVar42[0xe] = (undefined1)((ulong)lVar16 >> 0x30);
      auVar42[0xf] = (byte)((ulong)lVar16 >> 0x38) ^ 0x80;
      auVar43 = NEON_scvtf(auVar42,4);
      fVar46 = auVar43._0_4_ * 5.086263e-10;
      fVar51 = auVar43._4_4_ * 5.086263e-10;
      fVar49 = auVar43._8_4_ * 5.086263e-10;
      fVar50 = auVar43._12_4_ * 5.086263e-10;
      auVar44._0_4_ = fVar46 * fVar46;
      auVar44._4_4_ = fVar51 * fVar51;
      auVar44._8_4_ = fVar49 * fVar49;
      auVar44._12_4_ = fVar50 * fVar50;
      auVar43 = NEON_ext(auVar44,auVar44,8,1);
      fVar35 = auVar43._0_4_ + auVar43._4_4_;
      fVar54 = auVar44._0_4_ + auVar44._4_4_ + fVar35;
      auVar45 = ZEXT816(0);
      if (fVar54 != 0.0) {
        fVar54 = SQRT(fVar54);
        fVar35 = SQRT(auVar44._0_4_ + auVar44._4_4_ + fVar35);
        auVar45._0_4_ = fVar46 / fVar54;
        auVar45._4_4_ = fVar51 / fVar35;
        auVar45._8_4_ = fVar49 / fVar54;
        auVar45._12_4_ = fVar50 / fVar35;
      }
      lVar16 = local_108[5];
      auVar48._0_6_ = (uint6)(ushort)lVar16 << 0x10;
      auVar48._6_2_ = (short)((ulong)lVar16 >> 0x10);
      auVar48._8_2_ = 0;
      auVar48._10_2_ = (short)((ulong)lVar16 >> 0x20);
      auVar48._12_2_ = 0;
      auVar48._14_2_ = (short)((ulong)lVar16 >> 0x30);
      auVar43 = NEON_scvtf(auVar48,4);
      fStack_724 = auVar48._12_4_;
      local_730 = auVar43._0_4_ * fStack_724;
      fStack_72c = auVar43._4_4_ * fStack_724;
      fStack_728 = auVar43._8_4_ * fStack_724;
      fStack_724 = auVar43._12_4_ * fStack_724;
      lVar16 = local_108[4];
      auVar11._2_10_ = SUB1410(ZEXT814(0),4);
      auVar11._0_2_ = (short)lVar16;
      auVar33._0_6_ = auVar11._0_6_ << 0x10;
      auVar33._6_2_ = (short)((ulong)lVar16 >> 0x10);
      auVar33._8_2_ = 0;
      auVar33._10_2_ = (short)((ulong)lVar16 >> 0x20);
      auVar33._12_2_ = 0;
      auVar33._14_2_ = (short)((ulong)lVar16 >> 0x30);
      auVar43 = NEON_scvtf(auVar33,4);
      fVar54 = auVar33._12_4_;
      auVar34._0_8_ = CONCAT44(auVar43._4_4_ * fVar54,auVar43._0_4_ * fVar54);
      auVar34._8_4_ = auVar43._8_4_ * fVar54;
      auVar34._12_4_ = auVar43._12_4_ * fVar54;
      uStack_738 = auVar34._8_8_;
      local_750 = CONCAT44((int)local_108[7],*(undefined4 *)((long)local_108 + 0x3c));
      uStack_718 = auVar45._8_8_;
      local_720 = auVar45._0_8_;
      local_740 = auVar34._0_8_;
      FUN_02ef67b0(plVar15,&local_750);
    }
  }
  *param_1 = (long)plVar15;
LAB_01171ba0:
  uVar20 = (uint)uStack_518._4_4_;
  uVar18 = (ulong)(uint)uStack_518._4_4_;
  uStack_518 = (ulong)(uint)uStack_518._4_4_ << 0x20;
  if ((-1 < (int)uVar20) && (local_520 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_520,uVar18 << 4);
  }
  if ((local_108 != (long *)0x0) && (local_108[1] != 0)) {
    plVar15 = local_108 + 2;
    do {
      lVar16 = *plVar15;
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar12) {
        *plVar15 = lVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar16 + -1 == 0) {
      (**(code **)(*local_108 + 0x18))();
    }
  }
  FUN_0084f57c(auStack_100);
  return;
}


