/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0142624c; name: FUN_0142624c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0142624c(long *param_1,undefined8 param_2,int *param_3)

{
  long *plVar1;
  int *piVar2;
  short *psVar3;
  uint *puVar4;
  ushort uVar5;
  short sVar6;
  char cVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined8 *puVar14;
  bool bVar15;
  int iVar16;
  long lVar17;
  long *plVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong uVar21;
  char *pcVar22;
  code *pcVar23;
  ushort *puVar24;
  ulong uVar25;
  short sVar26;
  long *plVar27;
  char *pcVar28;
  uint uVar29;
  long lVar30;
  long *plVar31;
  undefined1 uVar32;
  long lVar33;
  float fVar34;
  float fVar35;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar36 [16];
  float fVar41;
  undefined1 auVar37 [16];
  float fVar42;
  int iVar43;
  float fVar46;
  int iVar47;
  float fVar48;
  float fVar49;
  int iVar50;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar51;
  float fVar57;
  undefined1 auVar52 [12];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar58;
  float fVar59;
  undefined1 auVar56 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined4 uVar65;
  undefined4 uVar66;
  float fVar67;
  undefined4 uVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined1 auVar73 [16];
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  int iVar78;
  int iVar79;
  int iVar80;
  long *local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined8 local_98;
  long *local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  long local_78;
  
  plVar27 = (long *)param_1[1];
  if (((DAT_04865a38 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_04865a38), iVar16 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar17 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar17 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = plVar27;
  *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
  plVar18 = (long *)(**(code **)(*plVar27 + 0x10))(plVar27,0x330,0x10);
  if (plVar18 == (long *)0x0) {
    (**(code **)(*plVar27 + 0xe8))(plVar27);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_01427034(plVar18,0x7f00,0);
  *(undefined4 *)(plVar18 + 3) = 0x100330;
  plVar18[1] = (long)plVar27;
  plVar18[2] = (long)plVar18;
  *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
  (**(code **)(*plVar18 + 0x58))(plVar18);
  plVar27 = plVar18 + 4;
  (**(code **)(*plVar27 + 0xe8))(plVar27,param_1);
  (**(code **)(*plVar27 + 0x68))(plVar27);
  local_b0 = plVar18;
  FUN_00df8c30(param_1 + 0x21,&local_b0);
  if (local_b0 != (long *)0x0) {
    lVar17 = local_b0[0x13];
    psVar3 = (short *)(lVar17 + 0x1a);
    do {
      sVar26 = *psVar3;
      cVar7 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar15) {
        *psVar3 = sVar26 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar26 == 1) {
      *(undefined8 *)(lVar17 + 0x10) = 0;
      (**(code **)(*local_b0 + 0x50))();
    }
    else if (sVar26 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  (**(code **)(*param_1 + 0x100))(param_1,plVar27);
  plVar31 = param_1 + 0x88;
  lVar30 = *plVar31;
  lVar17 = nn::os::GetCurrentThread();
  if (lVar17 != lVar30) {
    lVar17 = nn::os::GetCurrentThread();
LAB_01426384:
    if (*plVar31 == 0) goto code_r0x0142638c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x89));
    do {
      if (*plVar31 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x89));
          while (*plVar31 == 0) {
            cVar7 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar31,0x10);
            if (bVar15) {
              *plVar31 = lVar17;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_01426394;
          }
        } while( true );
      }
      cVar7 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar15) {
        *plVar31 = lVar17;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
LAB_01426394:
    bVar15 = false;
    goto LAB_01426398;
  }
  plVar31 = (long *)0x0;
  bVar15 = true;
LAB_01426398:
  if ((*(byte *)(param_1 + 0x8b) >> 2 & 1) == 0) {
    FUN_00d37964(param_1,0,0);
  }
  else {
    (**(code **)(*plVar27 + 0xf8))(plVar27);
  }
  if (!bVar15) {
    *plVar31 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar31 + 1));
  }
  if (*(ushort *)((long)param_3 - (long)*param_3) < 5) {
    local_88 = (undefined8 *)0x0;
  }
  else {
    uVar20 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[2];
    local_88 = (undefined8 *)0x0;
    if (uVar20 != 0) {
      puVar4 = (uint *)((long)param_3 + uVar20);
      local_88 = (undefined8 *)((long)puVar4 + (ulong)*puVar4);
    }
  }
  FUN_00ea0a7c(&local_b0,&local_88);
  plVar31 = local_b0;
  plVar27 = (long *)PTR_DAT_047d8b70;
  if (local_b0 != (long *)0x0) {
    plVar27 = local_b0 + 6;
  }
  lVar17 = *plVar27;
  plVar27 = (long *)PTR_PTR_047d4508;
  if (local_b0 != (long *)0x0) {
    plVar27 = local_b0 + 7;
  }
  lVar30 = *plVar27;
  if (local_b0 == (long *)0x0) {
    lVar33 = 0;
  }
  else {
    lVar33 = local_b0[8];
    (**(code **)(*local_b0 + 0x18))(local_b0);
  }
  param_1[0x6d] = lVar17;
  param_1[0x6e] = lVar30;
  param_1[0x6f] = lVar33;
  if (plVar31 != (long *)0x0) {
    (**(code **)(*plVar31 + 0x18))(plVar31);
  }
  plVar27 = (long *)param_1[0x70];
  param_1[0x70] = (long)plVar31;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 0x20))();
  }
  if (plVar31 != (long *)0x0) {
    (**(code **)(*plVar31 + 0x20))(plVar31);
  }
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  lVar17 = -(long)*param_3;
  puVar24 = (ushort *)((long)param_3 - (long)*param_3);
  if (((6 < *puVar24) && (uVar20 = (ulong)puVar24[3], uVar20 != 0)) &&
     (*(char *)((long)param_3 + uVar20) != '\0')) {
    FUN_01522e80(plVar18);
    lVar17 = -(long)*param_3;
  }
  puVar24 = (ushort *)((long)param_3 + lVar17);
  uVar5 = *puVar24;
  if (uVar5 < 9) {
    lVar17 = 0;
    auVar52 = SUB1612(ZEXT816(0),0);
    uVar20 = 0;
LAB_01426b10:
    uVar66 = 0;
LAB_01426b14:
    fVar67 = 0.0;
LAB_01426b18:
    uVar29 = 0;
    uVar32 = 0;
    uVar65 = 0;
    uVar68 = uVar65;
LAB_01426b1c:
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar16 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    pcVar28 = *(char **)(PTR_DAT_047d3e30 + 8);
    plVar27 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (plVar27 != (long *)0x0) {
      (**(code **)(*plVar27 + 0x18))(plVar27);
    }
  }
  else {
    lVar17 = 0;
    auVar52 = SUB1612(ZEXT816(0),0);
    uVar20 = 0;
    if ((ulong)puVar24[4] != 0) {
      plVar27 = (long *)((long)param_3 + (ulong)puVar24[4]);
      lVar17 = *plVar27;
      uVar20 = (ulong)*(uint *)(plVar27 + 1);
    }
    if (uVar5 < 0xb) goto LAB_01426b10;
    if ((ulong)puVar24[5] == 0) {
      auVar52 = SUB1612(ZEXT816(0),0);
    }
    else {
      auVar52 = *(undefined1 (*) [12])((long)param_3 + (ulong)puVar24[5]);
    }
    if (uVar5 < 0xd) goto LAB_01426b10;
    uVar66 = 0;
    if ((ulong)puVar24[6] != 0) {
      uVar66 = *(undefined4 *)((long)param_3 + (ulong)puVar24[6]);
    }
    if (uVar5 < 0xf) goto LAB_01426b14;
    fVar67 = 0.0;
    if ((ulong)puVar24[7] != 0) {
      fVar67 = *(float *)((long)param_3 + (ulong)puVar24[7]);
    }
    if (uVar5 < 0x11) goto LAB_01426b18;
    uVar68 = 0;
    uVar65 = 0;
    if ((ulong)puVar24[8] != 0) {
      uVar65 = *(undefined4 *)((long)param_3 + (ulong)puVar24[8]);
    }
    if (uVar5 < 0x13) {
LAB_01426fcc:
      uVar29 = 0;
LAB_01426fd0:
      uVar32 = 0;
      goto LAB_01426b1c;
    }
    if ((ulong)puVar24[9] == 0) {
      uVar68 = 0;
    }
    else {
      uVar68 = *(undefined4 *)((long)param_3 + (ulong)puVar24[9]);
    }
    if (uVar5 < 0x15) goto LAB_01426fcc;
    if ((ulong)puVar24[10] == 0) {
      uVar29 = 0;
    }
    else {
      uVar29 = (uint)*(byte *)((long)param_3 + (ulong)puVar24[10]);
    }
    if (uVar5 < 0x17) goto LAB_01426fd0;
    if ((ulong)puVar24[0xb] == 0) {
      uVar32 = 0;
    }
    else {
      uVar32 = *(undefined1 *)((long)param_3 + (ulong)puVar24[0xb]);
    }
    if (uVar5 < 0x19) goto LAB_01426b1c;
    uVar21 = (ulong)puVar24[0xc];
    if (uVar21 == 0) goto LAB_01426b1c;
    uVar25 = (ulong)*(uint *)((long)param_3 + uVar21);
    pcVar28 = (char *)((long)((long)param_3 + uVar21) + uVar25 + 4);
    if (*pcVar28 != '\0') {
      pcVar22 = (char *)((long)param_3 + uVar25 + uVar21 + 5);
      do {
        cVar7 = *pcVar22;
        pcVar22 = pcVar22 + 1;
      } while (cVar7 != '\0');
    }
    plVar27 = (long *)0x0;
  }
  puVar24 = (ushort *)((long)param_3 - (long)*param_3);
  fVar34 = 0.0;
  if (*puVar24 < 0x1b) {
    bVar15 = false;
  }
  else {
    bVar15 = false;
    if ((ulong)puVar24[0xd] != 0) {
      bVar15 = *(char *)((long)param_3 + (ulong)puVar24[0xd]) != '\0';
    }
    if ((0x1c < *puVar24) && ((ulong)puVar24[0xe] != 0)) {
      fVar34 = *(float *)((long)param_3 + (ulong)puVar24[0xe]);
    }
  }
  *(undefined4 *)(plVar18 + 0x60) = uVar66;
  plVar18[0x51] = uVar20;
  plVar18[0x50] = lVar17;
  *(float *)((long)plVar18 + 0x18c) = fVar67 * 0.017453292;
  *(undefined4 *)((long)plVar18 + 0x184) = uVar65;
  *(undefined4 *)(plVar18 + 0x31) = uVar68;
  *(uint *)(plVar18 + 0x30) = uVar29;
  fVar42 = auVar52._8_4_ * 0.017453292 * 0.5;
  fVar46 = auVar52._0_4_ * 0.017453292 * 0.5;
  fVar49 = auVar52._4_4_ * 0.017453292 * 0.5;
  fVar67 = fVar42 + 1.5707964;
  fVar40 = fVar46 + 1.5707964;
  fVar48 = fVar49 + 1.5707964;
  iVar78 = -(uint)(fVar42 == 0.0);
  iVar79 = -(uint)(fVar46 == 0.0);
  iVar80 = -(uint)(fVar49 == 0.0);
  auVar73._0_4_ =
       (int)((float)(-(uint)(0.0 <= fVar42) & 0x80000000 ^ 0xbf000000) + fVar42 * 0.15915494);
  auVar73._4_4_ =
       (int)((float)(-(uint)(0.0 <= fVar46) & 0x80000000 ^ 0xbf000000) + fVar46 * 0.15915494);
  auVar73._8_4_ =
       (int)((float)(-(uint)(0.0 <= fVar49) & 0x80000000 ^ 0xbf000000) + fVar49 * 0.15915494);
  auVar73._12_4_ = 0;
  auVar53._0_4_ =
       (int)((float)(~-(uint)(0.0 <= fVar67) & 0x80000000 ^ 0x3f000000) + fVar67 * 0.15915494);
  auVar53._4_4_ =
       (int)((float)(~-(uint)(0.0 <= fVar40) & 0x80000000 ^ 0x3f000000) + fVar40 * 0.15915494);
  auVar53._8_4_ =
       (int)((float)(~-(uint)(0.0 <= fVar48) & 0x80000000 ^ 0x3f000000) + fVar48 * 0.15915494);
  auVar53._12_4_ = 0;
  auVar60 = NEON_scvtf(auVar73,4);
  auVar54 = NEON_scvtf(auVar53,4);
  auVar62._0_4_ = fVar42 - auVar60._0_4_ * 6.2831855;
  auVar62._4_4_ = fVar46 - auVar60._4_4_ * 6.2831855;
  auVar62._8_4_ = fVar49 - auVar60._8_4_ * 6.2831855;
  auVar62._12_4_ = 0.0 - auVar60._12_4_ * 6.2831855;
  fVar35 = fVar67 - auVar54._0_4_ * 6.2831855;
  fVar38 = fVar40 - auVar54._4_4_ * 6.2831855;
  fVar39 = fVar48 - auVar54._8_4_ * 6.2831855;
  fVar41 = 1.5707964 - auVar54._12_4_ * 6.2831855;
  auVar61._0_4_ = -(uint)(auVar62._0_4_ < -1.5707964);
  auVar61._4_4_ = -(uint)(auVar62._4_4_ < -1.5707964);
  auVar61._8_4_ = -(uint)(auVar62._8_4_ < -1.5707964);
  auVar61._12_4_ = -(uint)(auVar62._12_4_ < -1.5707964);
  auVar55._0_4_ = -3.1415927 - fVar35;
  auVar55._4_4_ = -3.1415927 - fVar38;
  auVar55._8_4_ = -3.1415927 - fVar39;
  auVar55._12_4_ = -3.1415927 - fVar41;
  auVar63._0_4_ = -(uint)(fVar35 < -1.5707964);
  auVar63._4_4_ = -(uint)(fVar38 < -1.5707964);
  auVar63._8_4_ = -(uint)(fVar39 < -1.5707964);
  auVar63._12_4_ = -(uint)(fVar41 < -1.5707964);
  auVar13._4_4_ = -3.1415927 - auVar62._4_4_;
  auVar13._0_4_ = -3.1415927 - auVar62._0_4_;
  auVar13._8_4_ = -3.1415927 - auVar62._8_4_;
  auVar13._12_4_ = -3.1415927 - auVar62._12_4_;
  auVar62 = auVar62 ^ (auVar62 ^ auVar13) & auVar61;
  auVar54[4] = SUB41(fVar38,0);
  auVar54._0_4_ = fVar35;
  auVar54[5] = (char)((uint)fVar38 >> 8);
  auVar54[6] = (char)((uint)fVar38 >> 0x10);
  auVar54[7] = (char)((uint)fVar38 >> 0x18);
  auVar54[8] = SUB41(fVar39,0);
  auVar54[9] = (char)((uint)fVar39 >> 8);
  auVar54[10] = (char)((uint)fVar39 >> 0x10);
  auVar54[0xb] = (char)((uint)fVar39 >> 0x18);
  auVar54[0xc] = SUB41(fVar41,0);
  auVar54[0xd] = (char)((uint)fVar41 >> 8);
  auVar54[0xe] = (char)((uint)fVar41 >> 0x10);
  auVar54[0xf] = (char)((uint)fVar41 >> 0x18);
  auVar55 = auVar55 ^ (auVar55 ^ auVar54) & ~auVar63;
  fVar35 = 3.1415927 - auVar62._4_4_;
  fVar38 = 3.1415927 - auVar62._8_4_;
  fVar39 = 3.1415927 - auVar62._12_4_;
  auVar64._0_4_ = -(uint)(1.5707964 < auVar55._0_4_);
  auVar64._4_4_ = -(uint)(1.5707964 < auVar55._4_4_);
  auVar64._8_4_ = -(uint)(1.5707964 < auVar55._8_4_);
  auVar64._12_4_ = -(uint)(1.5707964 < auVar55._12_4_);
  fVar41 = 3.1415927 - auVar55._4_4_;
  fVar51 = 3.1415927 - auVar55._8_4_;
  fVar57 = 3.1415927 - auVar55._12_4_;
  auVar36._0_4_ = -(uint)(1.5707964 < auVar62._0_4_);
  auVar36._4_4_ = -(uint)(1.5707964 < auVar62._4_4_);
  auVar36._8_4_ = -(uint)(1.5707964 < auVar62._8_4_);
  auVar36._12_4_ = -(uint)(1.5707964 < auVar62._12_4_);
  auVar10[4] = SUB41(fVar41,0);
  auVar10._0_4_ = 3.1415927 - auVar55._0_4_;
  auVar10[5] = (char)((uint)fVar41 >> 8);
  auVar10[6] = (char)((uint)fVar41 >> 0x10);
  auVar10[7] = (char)((uint)fVar41 >> 0x18);
  auVar10[8] = SUB41(fVar51,0);
  auVar10[9] = (char)((uint)fVar51 >> 8);
  auVar10[10] = (char)((uint)fVar51 >> 0x10);
  auVar10[0xb] = (char)((uint)fVar51 >> 0x18);
  auVar10[0xc] = SUB41(fVar57,0);
  auVar10[0xd] = (char)((uint)fVar57 >> 8);
  auVar10[0xe] = (char)((uint)fVar57 >> 0x10);
  auVar10[0xf] = (char)((uint)fVar57 >> 0x18);
  auVar55 = auVar55 ^ (auVar55 ^ auVar10) & auVar64;
  auVar60[4] = SUB41(fVar35,0);
  auVar60._0_4_ = 3.1415927 - auVar62._0_4_;
  auVar60[5] = (char)((uint)fVar35 >> 8);
  auVar60[6] = (char)((uint)fVar35 >> 0x10);
  auVar60[7] = (char)((uint)fVar35 >> 0x18);
  auVar60[8] = SUB41(fVar38,0);
  auVar60[9] = (char)((uint)fVar38 >> 8);
  auVar60[10] = (char)((uint)fVar38 >> 0x10);
  auVar60[0xb] = (char)((uint)fVar38 >> 0x18);
  auVar60[0xc] = SUB41(fVar39,0);
  auVar60[0xd] = (char)((uint)fVar39 >> 8);
  auVar60[0xe] = (char)((uint)fVar39 >> 0x10);
  auVar60[0xf] = (char)((uint)fVar39 >> 0x18);
  auVar62 = auVar62 ^ (auVar62 ^ auVar60) & auVar36;
  auVar54 = NEON_fmov(0x3f800000,4);
  fVar51 = auVar55._0_4_;
  fVar74 = fVar51 * fVar51;
  fVar57 = auVar55._4_4_;
  fVar75 = fVar57 * fVar57;
  fVar58 = auVar55._8_4_;
  fVar76 = fVar58 * fVar58;
  fVar59 = auVar55._12_4_;
  fVar77 = fVar59 * fVar59;
  fVar35 = auVar62._0_4_;
  fVar69 = fVar35 * fVar35;
  fVar38 = auVar62._4_4_;
  fVar70 = fVar38 * fVar38;
  fVar39 = auVar62._8_4_;
  fVar71 = fVar39 * fVar39;
  fVar41 = auVar62._12_4_;
  fVar72 = fVar41 * fVar41;
  auVar45._8_4_ = 0x7fc00000;
  auVar45._0_8_ = 0x7fc000007fc00000;
  auVar45._12_4_ = 0x7fc00000;
  iVar16 = -(uint)(ABS(fVar67) == INFINITY);
  iVar11 = -(uint)(ABS(fVar40) == INFINITY);
  iVar12 = -(uint)(ABS(fVar48) == INFINITY);
  iVar43 = -(uint)(ABS(fVar42) == INFINITY);
  iVar47 = -(uint)(ABS(fVar46) == INFINITY);
  iVar50 = -(uint)(ABS(fVar49) == INFINITY);
  auVar44[0] = ~(byte)iVar43;
  auVar44[1] = ~(byte)((uint)iVar43 >> 8);
  auVar44[2] = ~(byte)((uint)iVar43 >> 0x10);
  auVar44[3] = ~(byte)((uint)iVar43 >> 0x18);
  auVar44[4] = ~(byte)iVar47;
  auVar44[5] = ~(byte)((uint)iVar47 >> 8);
  auVar44[6] = ~(byte)((uint)iVar47 >> 0x10);
  auVar44[7] = ~(byte)((uint)iVar47 >> 0x18);
  auVar44[8] = ~(byte)iVar50;
  auVar44[9] = ~(byte)((uint)iVar50 >> 8);
  auVar44[10] = ~(byte)((uint)iVar50 >> 0x10);
  auVar44[0xb] = ~(byte)((uint)iVar50 >> 0x18);
  auVar44[0xc] = 0xff;
  auVar44[0xd] = 0xff;
  auVar44[0xe] = 0xff;
  auVar44[0xf] = 0xff;
  auVar56._0_4_ =
       fVar51 * (auVar54._0_4_ +
                fVar74 * (fVar74 * (fVar74 * (fVar74 * (fVar74 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar56._4_4_ =
       fVar57 * (auVar54._4_4_ +
                fVar75 * (fVar75 * (fVar75 * (fVar75 * (fVar75 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar56._8_4_ =
       fVar58 * (auVar54._8_4_ +
                fVar76 * (fVar76 * (fVar76 * (fVar76 * (fVar76 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar56._12_4_ =
       fVar59 * (auVar54._12_4_ +
                fVar77 * (fVar77 * (fVar77 * (fVar77 * (fVar77 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar8[1] = ~(byte)((uint)iVar16 >> 8);
  auVar8[0] = ~(byte)iVar16;
  auVar8[2] = ~(byte)((uint)iVar16 >> 0x10);
  auVar8[3] = ~(byte)((uint)iVar16 >> 0x18);
  auVar8[4] = ~(byte)iVar11;
  auVar8[5] = ~(byte)((uint)iVar11 >> 8);
  auVar8[6] = ~(byte)((uint)iVar11 >> 0x10);
  auVar8[7] = ~(byte)((uint)iVar11 >> 0x18);
  auVar8[8] = ~(byte)iVar12;
  auVar8[9] = ~(byte)((uint)iVar12 >> 8);
  auVar8[10] = ~(byte)((uint)iVar12 >> 0x10);
  auVar8[0xb] = ~(byte)((uint)iVar12 >> 0x18);
  auVar8[0xc] = 0xff;
  auVar8[0xd] = 0xff;
  auVar8[0xe] = 0xff;
  auVar8[0xf] = 0xff;
  auVar56 = auVar56 ^ (auVar56 ^ auVar45) & ~auVar8;
  auVar9[1] = ~(byte)((uint)iVar78 >> 8);
  auVar9[0] = ~(byte)iVar78;
  auVar9[2] = ~(byte)((uint)iVar78 >> 0x10);
  auVar9[3] = ~(byte)((uint)iVar78 >> 0x18);
  auVar9[4] = ~(byte)iVar79;
  auVar9[5] = ~(byte)((uint)iVar79 >> 8);
  auVar9[6] = ~(byte)((uint)iVar79 >> 0x10);
  auVar9[7] = ~(byte)((uint)iVar79 >> 0x18);
  auVar9[8] = ~(byte)iVar80;
  auVar9[9] = ~(byte)((uint)iVar80 >> 8);
  auVar9[10] = ~(byte)((uint)iVar80 >> 0x10);
  auVar9[0xb] = ~(byte)((uint)iVar80 >> 0x18);
  auVar9._12_4_ = 0;
  uVar21 = plVar18[0x5a];
  auVar37._0_4_ =
       fVar35 * (auVar54._0_4_ +
                fVar69 * (fVar69 * (fVar69 * (fVar69 * (fVar69 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar37._4_4_ =
       fVar38 * (auVar54._4_4_ +
                fVar70 * (fVar70 * (fVar70 * (fVar70 * (fVar70 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar37._8_4_ =
       fVar39 * (auVar54._8_4_ +
                fVar71 * (fVar71 * (fVar71 * (fVar71 * (fVar71 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar37._12_4_ =
       fVar41 * (auVar54._12_4_ +
                fVar72 * (fVar72 * (fVar72 * (fVar72 * (fVar72 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar37 = auVar37 ^ (auVar37 ^ auVar45) & ~auVar44;
  fVar35 = auVar37._4_4_;
  auVar45 = auVar45 ^ (auVar45 ^ auVar56 ^ (auVar56 ^ auVar54) & ~auVar9) & auVar44;
  fVar67 = auVar37._0_4_;
  fVar38 = auVar45._0_4_;
  fVar48 = auVar45._4_4_;
  fVar39 = auVar45._8_4_;
  fVar40 = auVar37._8_4_;
  fVar41 = (float)_DAT_03cab3a0;
  uVar20 = (ulong)_DAT_03cab3a0 >> 0x20;
  plVar18[0x55] =
       CONCAT44(fVar39 * fVar38 * fVar48 +
                fVar40 * fVar35 * fVar67 * (float)((ulong)_UNK_03cab3a8 >> 0x20),
                fVar39 * fVar67 * fVar48 + fVar40 * fVar35 * fVar38 * (float)_UNK_03cab3a8);
  plVar18[0x54] =
       CONCAT44(fVar40 * fVar38 * fVar48 + fVar39 * fVar35 * fVar67 * (float)uVar20,
                fVar39 * fVar38 * fVar35 + fVar40 * fVar48 * fVar67 * fVar41);
  if (bVar15) {
    plVar18[0x5a] = uVar21 | 8;
    uVar21 = uVar21 & 0xfffffffffffffffb | 8;
  }
  else {
    uVar21 = uVar21 & 0xfffffffffffffff7;
  }
  plVar18[0x5a] = uVar21;
  *(float *)((long)plVar18 + 0x304) = fVar34 * 0.017453292;
  if (plVar18[0x1d] == 0) {
    plVar31 = (long *)0x0;
  }
  else {
    plVar31 = *(long **)(plVar18[0x1d] + 0x48);
  }
  if ((*(ushort *)((long)param_3 - (long)*param_3) < 0x1f) ||
     (uVar20 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[0xf], uVar20 == 0)) {
    pcVar23 = *(code **)(*plVar31 + 0x98);
LAB_01426af0:
    (*pcVar23)(plVar31);
  }
  else {
    cVar7 = *(char *)((long)param_3 + uVar20);
    (**(code **)(*plVar31 + 0x98))(plVar31);
    if (((cVar7 != '\0') && (lVar17 = plVar31[0x71], lVar17 != 0)) &&
       (*(short *)(lVar17 + 0x1a) != 0)) {
      psVar3 = (short *)(lVar17 + 0x1a);
      sVar26 = *(short *)(lVar17 + 0x1a);
      do {
        sVar6 = *psVar3;
        if (sVar6 == sVar26) {
          cVar7 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar15) {
            *psVar3 = sVar26 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 != '\0') goto LAB_01426ed0;
          bVar15 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01426ed0:
          bVar15 = false;
        }
        if (bVar15) {
          lVar17 = *(long *)(lVar17 + 0x10);
          if (lVar17 != 0) {
            FUN_00df6ee8(plVar31,lVar17 + 0xd0);
            pcVar23 = *(code **)(*(long *)(lVar17 + -0x28) + 0x60);
            plVar31 = (long *)(lVar17 + -0x28);
            goto LAB_01426af0;
          }
          break;
        }
        sVar26 = sVar6;
      } while (sVar6 != 0);
    }
  }
  local_b0 = (long *)0x0;
  uStack_a8 = 0;
  FUN_00c43ef0(&local_b0,plVar18 + 0x13);
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  if ((long *)local_b0[2] == plVar18 + 5) {
    FUN_00ded5e0(&local_88,&local_b0);
  }
  plVar18 = local_b0;
  if (local_b0 != (long *)0x0) {
    plVar31 = local_b0 + 3;
    do {
      sVar26 = (short)*plVar31;
      cVar7 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar15) {
        *(short *)plVar31 = sVar26 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar26 == 1) {
      piVar2 = (int *)((long)local_b0 + 0x1c);
      do {
        iVar16 = *piVar2;
        cVar7 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar15) {
          *piVar2 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar16 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar17 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar17;
        local_78 = *plVar18;
        FUN_00c44438(lVar17 + 0x8040,&local_78);
      }
    }
    else if (sVar26 == 0) goto LAB_01426a30;
  }
  if (*pcVar28 == '\0') {
    plVar18 = (long *)FUN_00d44228();
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x18))(plVar18);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar16 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar16 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar19 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar19;
    FUN_00cf9884(&local_b0,uVar19,pcVar28);
    plVar18 = local_b0;
  }
  if (((*PTR_DAT_047d89c8 & 1) == 0) &&
     (iVar16 = __cxa_guard_acquire(PTR_DAT_047d89c8), iVar16 != 0)) {
    FUN_00100190(PTR_LAB_047d9110,PTR_DAT_047d89d0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d89c8);
  }
  lVar17 = *(long *)PTR_DAT_047d89d0;
  *(long *)PTR_DAT_047d89d8 = lVar17;
  uVar19 = *(undefined8 *)(lVar17 + 0x38);
  local_b0 = (long *)0x0;
  uStack_a8 = 0;
  FUN_00ca0ae4(&local_b0,&local_88);
  local_a0 = uVar32;
  local_98 = param_2;
  local_90 = plVar18;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x18))(plVar18);
  }
  FUN_01427134(uVar19,&local_b0);
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  plVar31 = local_b0;
  if (local_b0 != (long *)0x0) {
    plVar1 = local_b0 + 3;
    do {
      sVar26 = (short)*plVar1;
      cVar7 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar15) {
        *(short *)plVar1 = sVar26 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar26 == 1) {
      piVar2 = (int *)((long)local_b0 + 0x1c);
      do {
        iVar16 = *piVar2;
        cVar7 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar15) {
          *piVar2 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar16 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar17 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar17;
        local_78 = *plVar31;
        FUN_00c44438(lVar17 + 0x8040,&local_78);
      }
    }
    else if (sVar26 == 0) goto LAB_01426a30;
  }
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x20))(plVar18);
  }
  puVar14 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    psVar3 = (short *)(local_88 + 3);
    do {
      sVar26 = *psVar3;
      cVar7 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar15) {
        *psVar3 = sVar26 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar26 == 1) {
      piVar2 = (int *)((long)local_88 + 0x1c);
      do {
        iVar16 = *piVar2;
        cVar7 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar15) {
          *piVar2 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar16 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar17 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar17;
        local_b0 = (long *)*puVar14;
        FUN_00c44438(lVar17 + 0x8040,&local_b0);
      }
    }
    else if (sVar26 == 0) {
LAB_01426a30:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 0x20))(plVar27);
  }
  return;
code_r0x0142638c:
  cVar7 = '\x01';
  bVar15 = (bool)ExclusiveMonitorPass(plVar31,0x10);
  if (bVar15) {
    *plVar31 = lVar17;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_01426394;
  goto LAB_01426384;
}


