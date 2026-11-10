/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c9e08c; name: FUN_00c9e08c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_00c9e08c(undefined1 param_1 [16],undefined1 param_2 [16],long param_3,int param_4)

{
  undefined1 (*pauVar1) [12];
  long *plVar2;
  short *psVar3;
  long lVar4;
  short sVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [12];
  short sVar10;
  undefined8 *puVar11;
  bool bVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar36;
  undefined1 auVar31 [16];
  undefined1 auVar30 [16];
  undefined1 auVar29 [16];
  undefined1 auVar34 [16];
  undefined1 auVar33 [16];
  undefined1 auVar32 [16];
  undefined1 auVar35 [16];
  int iVar37;
  int iVar40;
  int iVar41;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  int iVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  undefined1 auVar53 [16];
  undefined1 auVar57 [16];
  undefined1 auVar56 [16];
  undefined1 auVar55 [16];
  undefined1 auVar54 [16];
  undefined1 auVar61 [16];
  undefined1 auVar60 [16];
  undefined1 auVar59 [16];
  undefined1 auVar58 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar67 [16];
  undefined1 auVar66 [16];
  undefined1 auVar65 [16];
  undefined1 auVar64 [16];
  undefined1 auVar71 [16];
  undefined1 auVar70 [16];
  undefined1 auVar69 [16];
  undefined1 auVar68 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  long *local_60;
  long *local_58;
  
  fStack_78 = param_2._8_4_;
  fStack_74 = param_2._12_4_;
  local_80 = param_2._0_4_;
  fStack_7c = param_2._4_4_;
  fStack_68 = param_1._8_4_;
  local_70 = param_1._0_4_;
  fStack_6c = param_1._4_4_;
  if (param_4 < 0) {
    return param_1;
  }
  sVar10 = FUN_00c9edd0(*(undefined8 *)(param_3 + 0x2d8));
  if (sVar10 < 0) {
    uStack_88 = _UNK_03caa5b8;
    local_90 = _DAT_03caa5b0;
    uStack_98 = _UNK_03cabe68;
    local_a0 = _DAT_03cabe60;
    uStack_a8 = DAT_03cab628;
    local_b0 = DAT_03cab620;
  }
  else {
    puVar11 = (undefined8 *)FUN_00c4c40c(*(undefined8 *)(param_3 + 0x2d8));
    local_b0 = *puVar11;
    uStack_a8 = puVar11[1];
    local_a0 = puVar11[2];
    uStack_98 = puVar11[3];
    uStack_88 = SUB168(*(undefined1 (*) [16])(puVar11 + 4),8);
    local_90 = SUB168(*(undefined1 (*) [16])(puVar11 + 4),0);
  }
  lVar13 = *(long *)(*(long *)(param_3 + 0x58) + 0x30);
  if (*(char *)(lVar13 + 0x246) == '\0') {
    FUN_00c9e664(&local_60,lVar13 + 0xe8);
    plVar16 = local_60;
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x58))(local_60);
    }
    if (local_58 != (long *)0x0) {
      plVar2 = local_58 + 5;
      do {
        lVar13 = *plVar2;
        iVar37 = (int)lVar13 + -1;
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar12) {
          *(int *)plVar2 = iVar37;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar37 == 0) {
        (**(code **)(*local_58 + 0x10))();
      }
      else if ((int)lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x60))();
    }
    if (plVar16 == (long *)0x0) goto LAB_00c9e588;
  }
  else {
    lVar13 = *(long *)(lVar13 + 0x130);
    if ((lVar13 != 0) && (*(short *)(lVar13 + 0x1a) != 0)) {
      psVar3 = (short *)(lVar13 + 0x1a);
      sVar10 = *(short *)(lVar13 + 0x1a);
      do {
        sVar5 = *psVar3;
        if (sVar5 == sVar10) {
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar12) {
            *psVar3 = sVar10 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_00c9e640;
          bVar12 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00c9e640:
          bVar12 = false;
        }
        if (bVar12) {
          if (*(long *)(lVar13 + 0x10) != 0) {
            plVar16 = (long *)(*(long *)(lVar13 + 0x10) + -0x28);
            goto LAB_00c9e160;
          }
          break;
        }
        sVar10 = sVar5;
      } while (sVar5 != 0);
    }
LAB_00c9e588:
    fStack_b8 = (float)_UNK_03caa5b8;
    fStack_b4 = (float)((ulong)_UNK_03caa5b8 >> 0x20);
    local_c0 = (float)_DAT_03caa5b0;
    fStack_bc = (float)((ulong)_DAT_03caa5b0 >> 0x20);
    uStack_c8 = _UNK_03cabe68;
    local_d0 = _DAT_03cabe60;
    lVar13 = *(long *)(*(long *)(*(long *)(param_3 + 0x58) + 0x30) + 0xe8);
    uStack_e8 = DAT_03cab628;
    local_f0 = DAT_03cab620;
    uStack_d8 = _UNK_03cabe58;
    local_e0 = _DAT_03cabe50;
    if ((lVar13 == 0) || (plVar16 = *(long **)(lVar13 + 0x48), plVar16 == (long *)0x0))
    goto LAB_00c9e1a0;
    (**(code **)(*plVar16 + 0x58))(plVar16);
  }
LAB_00c9e160:
  puVar11 = (undefined8 *)(**(code **)(*plVar16 + 0x68))(plVar16);
  local_f0 = *puVar11;
  uStack_e8 = puVar11[1];
  uStack_c8 = SUB168(*(undefined1 (*) [16])(puVar11 + 2),8);
  local_d0 = SUB168(*(undefined1 (*) [16])(puVar11 + 2),0);
  fStack_b8 = (float)puVar11[5];
  fStack_b4 = (float)((ulong)puVar11[5] >> 0x20);
  local_c0 = (float)puVar11[4];
  fStack_bc = (float)((ulong)puVar11[4] >> 0x20);
  uStack_d8 = SUB168(*(undefined1 (*) [16])(puVar11 + 6),8);
  local_e0 = SUB168(*(undefined1 (*) [16])(puVar11 + 6),0);
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x60))(plVar16);
  }
LAB_00c9e1a0:
  lVar17 = *(long *)(param_3 + 0x2d8);
  plVar16 = (long *)(lVar17 + 0x450);
  lVar13 = nn::os::GetCurrentThread();
  do {
    lVar14 = *plVar16;
    lVar15 = *(long *)(lVar17 + 0x458);
    cVar6 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar12) {
      *plVar16 = lVar14;
      *(long *)(lVar17 + 0x458) = lVar15;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_00c9e220:
  while ((lVar14 != 0 && (lVar13 != lVar14))) {
    nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x460));
    do {
      lVar14 = *plVar16;
      lVar15 = *(long *)(lVar17 + 0x458);
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar12) {
        *plVar16 = lVar14;
        *(long *)(lVar17 + 0x458) = lVar15;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  do {
    lVar4 = *plVar16;
    if (lVar4 != lVar14 || *(long *)(lVar17 + 0x458) != lVar15) {
      bVar12 = false;
      ClearExclusiveLocal();
      goto LAB_00c9e250;
    }
    cVar6 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar12) {
      *plVar16 = lVar14;
      *(long *)(lVar17 + 0x454) = lVar15 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar12 = true;
LAB_00c9e250:
  if (!bVar12) {
    lVar14 = lVar4;
    lVar15 = *(long *)(lVar17 + 0x458);
    goto LAB_00c9e220;
  }
  fVar18 = local_c0 * (float)uStack_a8;
  fVar22 = fStack_bc * (float)uStack_a8;
  fVar26 = fStack_b8 * (float)uStack_a8;
  uStack_a8._0_4_ = fStack_b4 * (float)uStack_a8;
  fVar19 = local_c0 * (float)uStack_98;
  fVar23 = fStack_bc * (float)uStack_98;
  fVar27 = fStack_b8 * (float)uStack_98;
  uStack_98._0_4_ = fStack_b4 * (float)uStack_98;
  fVar20 = local_c0 * (float)uStack_88;
  fVar24 = fStack_bc * (float)uStack_88;
  fVar28 = fStack_b8 * (float)uStack_88;
  uStack_88._0_4_ = fStack_b4 * (float)uStack_88;
  lVar13 = *(long *)(lVar17 + 0x248) +
           (long)*(short *)(*(long *)(lVar17 + 0xa0) + (long)(short)param_4 * 2) * 0x30;
  pauVar1 = (undefined1 (*) [12])(lVar13 + 0x10);
  uVar7 = *(undefined8 *)*pauVar1;
  uVar8 = *(undefined8 *)(lVar13 + 0x18);
  auVar9 = *pauVar1;
  fStack_b8 = (float)uVar8;
  fStack_b4 = (float)((ulong)uVar8 >> 0x20);
  local_c0 = (float)uVar7;
  fStack_bc = (float)((ulong)uVar7 >> 0x20);
  do {
    lVar13 = *plVar16;
    lVar14 = *(long *)(lVar17 + 0x458);
    cVar6 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar12) {
      *plVar16 = lVar13;
      *(long *)(lVar17 + 0x458) = lVar14;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar15 = *plVar16;
    lVar4 = *(long *)(lVar17 + 0x458);
    if (lVar15 != lVar13 || lVar4 != lVar14) {
      bVar12 = false;
      ClearExclusiveLocal();
      goto LAB_00c9e334;
    }
    cVar6 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar12) {
      *plVar16 = lVar13;
      *(long *)(lVar17 + 0x454) = lVar14 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar12 = true;
LAB_00c9e334:
  if (!bVar12) {
    do {
      lVar13 = *plVar16;
      lVar14 = *(long *)(lVar17 + 0x458);
      if (lVar13 != lVar15 || lVar14 != lVar4) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto joined_r0x00c9e518;
      }
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar12) {
        *plVar16 = lVar15;
        *(long *)(lVar17 + 0x454) = lVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar12 = true;
joined_r0x00c9e518:
    if (!bVar12) {
      do {
        lVar15 = *plVar16;
        lVar4 = *(long *)(lVar17 + 0x458);
        if (lVar15 != lVar13 || lVar4 != lVar14) {
          bVar12 = false;
          ClearExclusiveLocal();
          lVar13 = lVar15;
          lVar14 = lVar4;
          goto joined_r0x00c9e518;
        }
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar12) {
          *plVar16 = lVar13;
          *(long *)(lVar17 + 0x454) = lVar14 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar12 = true;
      lVar13 = lVar15;
      lVar14 = lVar4;
      goto joined_r0x00c9e518;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(lVar17 + 0x460));
  auVar53._4_4_ = fStack_b8;
  auVar53._0_4_ = fStack_b8;
  auVar53._8_4_ = fStack_b8;
  auVar53._12_4_ = fStack_b8;
  auVar38._4_4_ = fStack_78;
  auVar38._0_4_ = fStack_78;
  auVar38._8_4_ = fStack_78;
  auVar38._12_4_ = fStack_78;
  uVar21 = auVar9._0_4_;
  auVar54._4_12_ = auVar53._4_12_;
  auVar54._0_4_ = uVar21;
  uVar25 = auVar9._4_4_;
  auVar56._0_8_ = auVar54._0_8_;
  auVar56._8_4_ = uVar25;
  auVar56._12_4_ = fStack_b8;
  auVar55._8_8_ = auVar56._8_8_;
  auVar55._4_4_ = fStack_b8;
  auVar55._0_4_ = uVar21;
  auVar57._0_12_ = auVar55._0_12_;
  auVar57._12_4_ = fStack_b8;
  auVar39 = NEON_ext(auVar38,param_2,0xc,1);
  auVar43._4_4_ = fStack_7c;
  auVar43._0_4_ = fStack_7c;
  auVar43._8_4_ = fStack_7c;
  auVar43._12_4_ = fStack_7c;
  auVar44 = NEON_ext(auVar43,auVar39,0xc,1);
  auVar72 = NEON_ext(auVar57,auVar57,8,1);
  fVar80 = (float)_UNK_03cab648;
  fVar81 = (float)((ulong)_UNK_03cab648 >> 0x20);
  fVar78 = (float)_DAT_03cab640;
  fVar79 = (float)((ulong)_DAT_03cab640 >> 0x20);
  fVar52 = auVar72._0_4_;
  auVar58._4_12_ = auVar57._4_12_;
  auVar58._0_4_ = fVar52;
  auVar60._0_8_ = auVar58._0_8_;
  auVar60._8_4_ = auVar72._8_4_;
  auVar60._12_4_ = fStack_b8;
  auVar59._8_8_ = auVar60._8_8_;
  auVar59._4_4_ = uVar21;
  auVar59._0_4_ = fVar52;
  auVar61._0_12_ = auVar59._0_12_;
  auVar61._12_4_ = uVar25;
  auVar62 = NEON_ext(auVar61,auVar72,8,1);
  auVar62 = NEON_ext(auVar62,auVar62,0xc,1);
  fVar74 = (local_c0 * fStack_74 + fStack_b4 * local_80 * fVar78 +
           auVar62._0_4_ * auVar44._0_4_ * fVar78) - auVar39._0_4_ * fVar52;
  fVar75 = (fStack_bc * fStack_74 + fStack_b4 * fStack_7c * fVar79 +
           auVar62._4_4_ * auVar44._4_4_ * fVar79) - auVar39._4_4_ * auVar72._4_4_;
  fVar76 = (fStack_b8 * fStack_74 + fStack_b4 * fStack_78 * fVar80 +
           auVar62._8_4_ * auVar44._8_4_ * fVar80) - auVar39._8_4_ * auVar72._8_4_;
  fVar77 = (fStack_b4 * fStack_74 + local_c0 * local_80 * fVar81 +
           auVar62._12_4_ * auVar44._12_4_ * fVar81) - auVar39._12_4_ * auVar72._12_4_;
  auVar63._4_4_ = fStack_68;
  auVar63._0_4_ = fStack_68;
  auVar63._8_4_ = fStack_68;
  auVar63._12_4_ = fStack_68;
  auVar82._4_4_ = fVar75;
  auVar82._0_4_ = fVar75;
  auVar82._8_4_ = fVar75;
  auVar82._12_4_ = fVar75;
  auVar64._4_12_ = auVar63._4_12_;
  auVar64._0_4_ = local_70;
  auVar66._0_8_ = auVar64._0_8_;
  auVar66._8_4_ = fStack_6c;
  auVar66._12_4_ = fStack_68;
  auVar65._8_8_ = auVar66._8_8_;
  auVar65._4_4_ = fStack_68;
  auVar65._0_4_ = local_70;
  auVar67._0_12_ = auVar65._0_12_;
  auVar67._12_4_ = fStack_68;
  auVar45._4_4_ = fVar76;
  auVar45._0_4_ = fVar76;
  auVar45._8_4_ = fVar76;
  auVar45._12_4_ = fVar76;
  auVar39._4_4_ = fVar75;
  auVar39._0_4_ = fVar74;
  auVar39._8_4_ = fVar76;
  auVar39._12_4_ = fVar77;
  auVar39 = NEON_ext(auVar45,auVar39,0xc,1);
  auVar83 = NEON_ext(auVar67,auVar67,8,1);
  fVar52 = auVar83._0_4_;
  auVar68._4_12_ = auVar67._4_12_;
  auVar68._0_4_ = fVar52;
  auVar70._0_8_ = auVar68._0_8_;
  auVar70._8_4_ = auVar83._8_4_;
  auVar70._12_4_ = fStack_68;
  auVar69._8_8_ = auVar70._8_8_;
  auVar69._4_4_ = local_70;
  auVar69._0_4_ = fVar52;
  auVar71._0_12_ = auVar69._0_12_;
  auVar71._12_4_ = fStack_6c;
  auVar62 = NEON_ext(auVar82,auVar39,0xc,1);
  auVar44 = NEON_ext(auVar71,auVar83,8,1);
  auVar44 = NEON_ext(auVar44,auVar44,0xc,1);
  auVar29._0_4_ = -fVar74;
  fVar36 = -fVar75;
  auVar72._8_4_ = -fVar76;
  auVar72._4_4_ = auVar72._8_4_;
  auVar72._0_4_ = auVar72._8_4_;
  auVar72._12_4_ = auVar72._8_4_;
  auVar29._4_12_ = auVar72._4_12_;
  auVar30._0_8_ = auVar29._0_8_;
  auVar30._8_4_ = fVar36;
  auVar30._12_4_ = auVar72._8_4_;
  auVar49._8_8_ = auVar30._8_8_;
  auVar49._4_4_ = auVar72._8_4_;
  auVar49._0_4_ = auVar29._0_4_;
  auVar31._0_12_ = auVar49._0_12_;
  auVar31._12_4_ = auVar72._8_4_;
  auVar73._0_4_ =
       (local_70 * fVar77 + fVar74 * fVar78 * 0.0 + auVar44._0_4_ * auVar62._0_4_ * fVar78) -
       auVar39._0_4_ * fVar52;
  auVar73._4_4_ =
       (fStack_6c * fVar77 + fVar75 * fVar79 * 0.0 + auVar44._4_4_ * auVar62._4_4_ * fVar79) -
       auVar39._4_4_ * auVar83._4_4_;
  auVar73._8_4_ =
       (fStack_68 * fVar77 + fVar76 * fVar80 * 0.0 + auVar44._8_4_ * auVar62._8_4_ * fVar80) -
       auVar39._8_4_ * auVar83._8_4_;
  auVar73._12_4_ =
       (fVar77 * 0.0 + local_70 * fVar74 * fVar81 + auVar44._12_4_ * auVar62._12_4_ * fVar81) -
       auVar39._12_4_ * auVar83._12_4_;
  auVar46._4_4_ = auVar73._8_4_;
  auVar46._0_4_ = auVar73._8_4_;
  auVar46._8_4_ = auVar73._8_4_;
  auVar46._12_4_ = auVar73._8_4_;
  auVar48._4_4_ = auVar73._4_4_;
  auVar48._0_4_ = auVar73._4_4_;
  auVar48._8_4_ = auVar73._4_4_;
  auVar48._12_4_ = auVar73._4_4_;
  auVar62 = NEON_ext(auVar46,auVar73,0xc,1);
  auVar44 = NEON_ext(auVar48,auVar62,0xc,1);
  auVar49 = NEON_ext(auVar31,auVar31,8,1);
  fVar52 = auVar49._0_4_;
  auVar83._4_12_ = auVar31._4_12_;
  auVar83._0_4_ = fVar52;
  auVar33._0_8_ = auVar83._0_8_;
  auVar33._8_4_ = auVar49._8_4_;
  auVar33._12_4_ = auVar72._8_4_;
  auVar32._8_8_ = auVar33._8_8_;
  auVar32._4_4_ = auVar29._0_4_;
  auVar32._0_4_ = fVar52;
  auVar34._0_12_ = auVar32._0_12_;
  auVar34._12_4_ = fVar36;
  auVar39 = NEON_ext(auVar34,auVar49,8,1);
  auVar39 = NEON_ext(auVar39,auVar39,0xc,1);
  fVar52 = (auVar29._0_4_ * auVar73._12_4_ + fVar77 * auVar73._0_4_ * fVar78 +
           auVar39._0_4_ * auVar44._0_4_ * fVar78) - auVar62._0_4_ * fVar52;
  fVar36 = (fVar36 * auVar73._12_4_ + fVar77 * auVar73._4_4_ * fVar79 +
           auVar39._4_4_ * auVar44._4_4_ * fVar79) - auVar62._4_4_ * auVar49._4_4_;
  fVar74 = (auVar72._8_4_ * auVar73._12_4_ + fVar77 * auVar73._8_4_ * fVar80 +
           auVar39._8_4_ * auVar44._8_4_ * fVar80) - auVar62._8_4_ * auVar49._8_4_;
  fVar18 = ((float)local_b0 * (float)local_f0 + (float)local_d0 * local_b0._4_4_ + fVar18 +
           (float)local_e0 * uStack_a8._4_4_) * fVar52 +
           ((float)local_a0 * (float)local_f0 + (float)local_d0 * local_a0._4_4_ + fVar19 +
           (float)local_e0 * uStack_98._4_4_) * fVar36 +
           ((float)local_90 * (float)local_f0 + (float)local_d0 * local_90._4_4_ + fVar20 +
           (float)local_e0 * uStack_88._4_4_) * fVar74;
  fVar19 = ((float)local_b0 * local_f0._4_4_ + local_d0._4_4_ * local_b0._4_4_ + fVar22 +
           local_e0._4_4_ * uStack_a8._4_4_) * fVar52 +
           ((float)local_a0 * local_f0._4_4_ + local_d0._4_4_ * local_a0._4_4_ + fVar23 +
           local_e0._4_4_ * uStack_98._4_4_) * fVar36 +
           ((float)local_90 * local_f0._4_4_ + local_d0._4_4_ * local_90._4_4_ + fVar24 +
           local_e0._4_4_ * uStack_88._4_4_) * fVar74;
  fVar20 = ((float)local_b0 * (float)uStack_e8 + (float)uStack_c8 * local_b0._4_4_ + fVar26 +
           (float)uStack_d8 * uStack_a8._4_4_) * fVar52 +
           ((float)local_a0 * (float)uStack_e8 + (float)uStack_c8 * local_a0._4_4_ + fVar27 +
           (float)uStack_d8 * uStack_98._4_4_) * fVar36 +
           ((float)local_90 * (float)uStack_e8 + (float)uStack_c8 * local_90._4_4_ + fVar28 +
           (float)uStack_d8 * uStack_88._4_4_) * fVar74;
  fVar22 = ((float)local_b0 * uStack_e8._4_4_ + uStack_c8._4_4_ * local_b0._4_4_ + (float)uStack_a8
           + uStack_d8._4_4_ * uStack_a8._4_4_) * fVar52 +
           ((float)local_a0 * uStack_e8._4_4_ + uStack_c8._4_4_ * local_a0._4_4_ + (float)uStack_98
           + uStack_d8._4_4_ * uStack_98._4_4_) * fVar36 +
           ((float)local_90 * uStack_e8._4_4_ + uStack_c8._4_4_ * local_90._4_4_ + (float)uStack_88
           + uStack_d8._4_4_ * uStack_88._4_4_) * fVar74;
  auVar44._0_4_ = fVar18 * fVar18 + fVar19 * fVar19;
  auVar44._4_4_ = fVar20 * fVar20 + fVar22 * fVar22;
  auVar44._8_4_ = fVar18 * fVar18 + fVar19 * fVar19;
  auVar44._12_4_ = fVar20 * fVar20 + fVar22 * fVar22;
  auVar39 = NEON_ext(auVar44,auVar44,4,1);
  auVar62._0_4_ = auVar39._0_4_ + auVar39._4_4_;
  auVar62._4_4_ = auVar39._8_4_ + auVar39._12_4_;
  auVar62._8_4_ = auVar39._0_4_ + auVar39._4_4_;
  auVar62._12_4_ = auVar39._8_4_ + auVar39._12_4_;
  auVar39 = NEON_frsqrte(auVar62,4);
  auVar50._0_4_ = auVar62._0_4_ * auVar39._0_4_;
  auVar50._4_4_ = auVar62._4_4_ * auVar39._4_4_;
  auVar50._8_4_ = auVar62._8_4_ * auVar39._8_4_;
  auVar50._12_4_ = auVar62._12_4_ * auVar39._12_4_;
  auVar44 = NEON_frsqrts(auVar39,auVar50,4);
  auVar47._0_4_ = auVar39._0_4_ * auVar44._0_4_;
  auVar47._4_4_ = auVar39._4_4_ * auVar44._4_4_;
  auVar47._8_4_ = auVar39._8_4_ * auVar44._8_4_;
  auVar47._12_4_ = auVar39._12_4_ * auVar44._12_4_;
  auVar51._0_4_ = auVar62._0_4_ * auVar47._0_4_;
  auVar51._4_4_ = auVar62._4_4_ * auVar47._4_4_;
  auVar51._8_4_ = auVar62._8_4_ * auVar47._8_4_;
  auVar51._12_4_ = auVar62._12_4_ * auVar47._12_4_;
  iVar37 = -(uint)(auVar62._0_4_ == 0.0);
  iVar40 = -(uint)(auVar62._4_4_ == 0.0);
  iVar41 = -(uint)(auVar62._8_4_ == 0.0);
  iVar42 = -(uint)(auVar62._12_4_ == 0.0);
  auVar39 = NEON_frsqrts(auVar47,auVar51,4);
  fVar18 = fVar18 * auVar47._0_4_ * auVar39._0_4_;
  fVar19 = fVar19 * auVar47._4_4_ * auVar39._4_4_;
  fVar20 = fVar20 * auVar47._8_4_ * auVar39._8_4_;
  fVar22 = fVar22 * auVar47._12_4_ * auVar39._12_4_;
  auVar35[0] = SUB41(fVar18,0) & ~(byte)iVar37;
  auVar35[1] = (byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar37 >> 8);
  auVar35[2] = (byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar37 >> 0x10);
  auVar35[3] = (byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar37 >> 0x18);
  auVar35[4] = SUB41(fVar19,0) & ~(byte)iVar40;
  auVar35[5] = (byte)((uint)fVar19 >> 8) & ~(byte)((uint)iVar40 >> 8);
  auVar35[6] = (byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10);
  auVar35[7] = (byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18);
  auVar35[8] = SUB41(fVar20,0) & ~(byte)iVar41;
  auVar35[9] = (byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar41 >> 8);
  auVar35[10] = (byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar41 >> 0x10);
  auVar35[0xb] = (byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18);
  auVar35[0xc] = SUB41(fVar22,0) & ~(byte)iVar42;
  auVar35[0xd] = (byte)((uint)fVar22 >> 8) & ~(byte)((uint)iVar42 >> 8);
  auVar35[0xe] = (byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar42 >> 0x10);
  auVar35[0xf] = (byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar42 >> 0x18);
  return auVar35;
}


