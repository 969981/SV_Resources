/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0155ed54; name: FUN_0155ed54
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0155f830) */
/* WARNING: Removing unreachable block (ram,0x0155f834) */
/* WARNING: Removing unreachable block (ram,0x0155f83c) */
/* WARNING: Removing unreachable block (ram,0x0155f844) */
/* WARNING: Removing unreachable block (ram,0x01560234) */
/* WARNING: Removing unreachable block (ram,0x0155f848) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0155ed54(long *******param_1,ulong param_2)

{
  short *psVar1;
  short sVar2;
  long *****ppppplVar3;
  char cVar4;
  undefined1 auVar5 [16];
  float fVar6;
  undefined1 auVar7 [16];
  bool bVar8;
  int iVar9;
  long ******pppppplVar10;
  ulong uVar11;
  long *******ppppppplVar12;
  long *plVar13;
  long ******pppppplVar14;
  long ****pppplVar15;
  long lVar16;
  undefined8 uVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  char *pcVar21;
  int iVar22;
  long lVar23;
  int iVar24;
  int iVar25;
  long *******ppppppplVar26;
  long *******ppppppplVar27;
  long *****ppppplVar28;
  long ******pppppplVar29;
  long ******pppppplVar30;
  long ******pppppplVar31;
  long ******pppppplVar32;
  long ******pppppplVar33;
  undefined2 extraout_h0;
  undefined2 uVar34;
  undefined2 extraout_h0_00;
  undefined2 extraout_h0_01;
  undefined2 extraout_h0_02;
  undefined2 extraout_h0_03;
  undefined2 extraout_h0_04;
  undefined2 extraout_var;
  undefined2 uVar35;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined2 extraout_var_08;
  undefined2 extraout_var_09;
  undefined2 extraout_var_10;
  undefined2 extraout_var_11;
  undefined2 extraout_var_12;
  undefined2 extraout_var_13;
  undefined2 extraout_var_14;
  undefined2 extraout_var_15;
  undefined2 extraout_var_16;
  undefined2 extraout_var_17;
  undefined2 extraout_var_18;
  undefined2 extraout_var_19;
  undefined2 extraout_var_20;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  long ******local_1a8;
  ulong local_1a0;
  undefined8 local_190;
  undefined8 uStack_188;
  long *******local_178;
  long *******local_170;
  long ******local_168;
  long ******local_160;
  long ******local_158;
  long *******local_150;
  long ******local_148;
  long ******local_140;
  long ******local_138;
  long ******local_130;
  long ******local_128;
  long ******local_120;
  long ******local_118;
  long ******local_110;
  long ******local_108;
  long ******local_100;
  long ******local_f8;
  long ******local_f0;
  long ******local_e8;
  long ******local_e0;
  long ******local_d8;
  long ******local_d0;
  long ******local_c8;
  long ******pppppplStack_c0;
  undefined1 local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  long *******local_a0;
  long *****ppppplStack_98;
  long *******local_78;
  
  ppppppplVar27 = param_1 + 0x1e;
  pppppplVar10 = (long ******)nn::os::GetCurrentThread();
  while (*ppppppplVar27 == (long ******)0x0) {
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar27,0x10);
    if (bVar8) {
      *ppppppplVar27 = pppppplVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_0155eda0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1f));
  do {
    if (*ppppppplVar27 != (long ******)0x0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1f));
        while (*ppppppplVar27 == (long ******)0x0) {
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar27,0x10);
          if (bVar8) {
            *ppppppplVar27 = pppppplVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_0155eda0;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar27,0x10);
    if (bVar8) {
      *ppppppplVar27 = pppppplVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_0155eda0:
  ppppplVar28 = *param_1[0x118];
  ppppplVar3 = param_1[0x118][1];
  if (ppppplVar28 != ppppplVar3) {
    *(undefined4 *)((long)ppppplVar28 + 0x24) = 0xffffffff;
    *(undefined1 *)(ppppplVar28 + 4) = 1;
    if (ppppplVar28 + 6 != ppppplVar3) {
      *(undefined1 *)(ppppplVar28 + 10) = 1;
      *(undefined4 *)((long)ppppplVar28 + 0x54) = 0xffffffff;
      if (ppppplVar28 + 0xc != ppppplVar3) {
        *(undefined4 *)((long)ppppplVar28 + 0x84) = 0xffffffff;
        *(undefined1 *)(ppppplVar28 + 0x10) = 1;
        if (ppppplVar28 + 0x12 != ppppplVar3) {
          *(undefined1 *)(ppppplVar28 + 0x16) = 1;
          *(undefined4 *)((long)ppppplVar28 + 0xb4) = 0xffffffff;
          if (ppppplVar28 + 0x18 != ppppplVar3) {
            *(undefined4 *)((long)ppppplVar28 + 0xe4) = 0xffffffff;
            *(undefined1 *)(ppppplVar28 + 0x1c) = 1;
            if (ppppplVar28 + 0x1e != ppppplVar3) {
              *(undefined4 *)((long)ppppplVar28 + 0x114) = 0xffffffff;
              *(undefined1 *)(ppppplVar28 + 0x22) = 1;
              for (ppppplVar28 = ppppplVar28 + 0x24; ppppplVar28 != ppppplVar3;
                  ppppplVar28 = ppppplVar28 + 6) {
                *(undefined4 *)((long)ppppplVar28 + 0x24) = 0xffffffff;
                *(undefined1 *)(ppppplVar28 + 4) = 1;
              }
            }
          }
        }
      }
    }
  }
  if (*(char *)param_1[0x149] != '\0') {
    FUN_015615b8(param_1,param_1 + 0x148);
  }
  *(undefined1 *)(param_1 + 0x11f) = 0;
  param_1[0x11e] = (long ******)0x0;
  param_1[0x11d] = (long ******)0x0;
  param_1[0x11c] = (long ******)0x0;
  FUN_0154abe4(param_1);
  ppppplVar28 = *param_1[0x118];
  ppppplVar3 = param_1[0x118][1];
  if (0 < (int)((ulong)((long)ppppplVar3 - (long)ppppplVar28) >> 4) * -0x55555555) {
    if (ppppplVar28 == ppppplVar3) {
      ppppppplVar27 = (long *******)0x0;
      local_190 = _DAT_03caadc0;
LAB_0155f08c:
      pppppplVar10 = param_1[0x19];
      if (pppppplVar10 != (long ******)0x0) {
        pppppplVar14 = pppppplVar10 + 5;
        do {
          iVar22 = *(int *)pppppplVar14;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(pppppplVar14,0x10);
          if (bVar8) {
            *(int *)pppppplVar14 = iVar22 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar22 == -1) goto LAB_01560940;
      }
      local_170 = (long *******)ppppppplVar27[0x11];
      local_168 = ppppppplVar27[0x12];
      local_160 = ppppppplVar27[0x13];
      local_158 = ppppppplVar27[0x14];
      if (local_158 != (long ******)0x0) {
        (*(code *)(*local_158)[3])();
      }
      (*(code *)(*pppppplVar10)[0xc])(pppppplVar10,&local_170);
      if (local_158 != (long ******)0x0) {
        (*(code *)(*local_158)[4])();
      }
      pppppplVar14 = pppppplVar10 + 5;
      do {
        iVar22 = *(int *)pppppplVar14;
        iVar24 = iVar22 + -1;
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pppppplVar14,0x10);
        if (bVar8) {
          *(int *)pppppplVar14 = iVar24;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar24 == 0) {
        (*(code *)(*pppppplVar10)[2])(pppppplVar10);
      }
      else if (iVar22 == 0) goto LAB_0156091c;
      if (*(char *)((long)param_1 + 0xb16) == '\0') {
        *(undefined8 *)((long)param_1 + 0x7b4) = local_190;
        *(undefined1 *)((long)param_1 + 0xb16) = 1;
      }
      *(float *)((long)param_1 + 0x7bc) =
           (float)CONCAT22(extraout_var_00,extraout_h0_00) + *(float *)(param_1 + 0x163);
      pppppplVar10 = param_1[0x19];
      *(float *)(param_1 + 0xf8) =
           (float)(CONCAT26(extraout_var_12,
                            CONCAT24(extraout_var_06,CONCAT22(extraout_var_00,extraout_h0_00))) >>
                  0x20) + *(float *)((long)param_1 + 0xb1c);
      if (pppppplVar10 != (long ******)0x0) {
        pppppplVar14 = pppppplVar10 + 5;
        do {
          iVar22 = *(int *)pppppplVar14;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(pppppplVar14,0x10);
          if (bVar8) {
            *(int *)pppppplVar14 = iVar22 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar22 == -1) goto LAB_01560940;
      }
      (*(code *)(*pppppplVar10)[0xc])(pppppplVar10,param_1 + 0xef);
      if (pppppplVar10 != (long ******)0x0) {
        pppppplVar14 = pppppplVar10 + 5;
        do {
          iVar22 = *(int *)pppppplVar14;
          iVar24 = iVar22 + -1;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(pppppplVar14,0x10);
          if (bVar8) {
            *(int *)pppppplVar14 = iVar24;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar24 == 0) {
          (*(code *)(*pppppplVar10)[2])(pppppplVar10);
        }
        else if (iVar22 == 0) goto LAB_0156091c;
      }
      iVar22 = (int)((float)CONCAT22(extraout_var_01,extraout_h0_01) /
                    *(float *)((long)param_1 + 0x7bc));
      if (iVar22 < 2) {
        iVar22 = 1;
      }
      *(int *)((long)param_1 + 0x7ac) = iVar22;
      iVar24 = (int)((float)CONCAT22(extraout_var_13,extraout_var_07) / *(float *)(param_1 + 0xf8));
      if (iVar24 < 2) {
        iVar24 = 1;
      }
      *(int *)(param_1 + 0xf6) = iVar24;
      iVar9 = iVar22;
      if (*(int *)(param_1 + 0xea) != 0) {
        iVar9 = iVar24;
      }
      iVar22 = iVar24 * iVar22 + iVar9 * 2 +
               (int)((ulong)((long)param_1[0x118][1] - (long)*param_1[0x118]) >> 4) * 0x55555555;
      if (0 < iVar22) {
        iVar24 = 0;
        do {
          local_170 = (long *******)ppppppplVar27[0x11];
          local_168 = ppppppplVar27[0x12];
          local_160 = ppppppplVar27[0x13];
          local_158 = ppppppplVar27[0x14];
          if (local_158 != (long ******)0x0) {
            (*(code *)(*local_158)[3])();
          }
          local_78 = (long *******)CONCAT44(local_78._4_4_,iVar24);
          local_a0 = param_1;
          (*(code *)param_1[0xda])(param_1 + 0xde,&local_a0,ppppppplVar27 + 8,&local_170,&local_78);
          if (local_158 != (long ******)0x0) {
            (*(code *)(*local_158)[4])();
          }
          iVar24 = iVar24 + 1;
        } while (iVar24 < iVar22);
      }
      goto LAB_0155f284;
    }
    uStack_188 = _UNK_03caadc8;
    local_190 = _DAT_03caadc0;
    ppppppplVar26 = (long *******)0x0;
    while( true ) {
      pppppplVar10 = (long ******)*ppppplVar28;
      pppppplVar32 = (long ******)ppppplVar28[1];
      pppppplVar14 = (long ******)ppppplVar28[2];
      ppppppplVar27 = (long *******)ppppplVar28[3];
      if (ppppppplVar27 == (long *******)0x0) {
        local_a0 = (long *******)0x0;
        local_150 = (long *******)0x0;
        local_170 = (long *******)&local_a0;
        local_168 = pppppplVar10;
        local_160 = pppppplVar32;
        local_158 = pppppplVar14;
      }
      else {
        (*(code *)(*ppppppplVar27)[3])(ppppppplVar27);
        (*(code *)(*ppppppplVar27)[3])(ppppppplVar27);
        local_a0 = (long *******)0x0;
        local_170 = (long *******)&local_a0;
        local_168 = pppppplVar10;
        local_160 = pppppplVar32;
        local_158 = pppppplVar14;
        local_150 = ppppppplVar27;
        (*(code *)(*ppppppplVar27)[3])(ppppppplVar27);
      }
      FUN_01560dbc(param_1,&local_170,0);
      if (local_150 != (long *******)0x0) {
        (*(code *)(*local_150)[4])();
      }
      ppppppplVar12 = local_a0;
      if (ppppppplVar27 != (long *******)0x0) {
        (*(code *)(*ppppppplVar27)[4])(ppppppplVar27);
        (*(code *)(*ppppppplVar27)[4])(ppppppplVar27);
      }
      pppppplVar10 = param_1[0x19];
      if (pppppplVar10 != (long ******)0x0) {
        pppppplVar14 = pppppplVar10 + 5;
        do {
          iVar22 = *(int *)pppppplVar14;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(pppppplVar14,0x10);
          if (bVar8) {
            *(int *)pppppplVar14 = iVar22 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar22 == -1) goto LAB_01560940;
      }
      local_170 = (long *******)ppppppplVar12[0x11];
      local_168 = ppppppplVar12[0x12];
      local_160 = ppppppplVar12[0x13];
      local_158 = ppppppplVar12[0x14];
      if (local_158 != (long ******)0x0) {
        (*(code *)(*local_158)[3])();
      }
      (*(code *)(*pppppplVar10)[6])(pppppplVar10,&local_170);
      fVar6 = (float)CONCAT22(extraout_var,extraout_h0);
      fVar40 = (float)(CONCAT26(extraout_var_11,CONCAT24(extraout_var_05,fVar6)) >> 0x20);
      if (local_158 != (long ******)0x0) {
        (*(code *)(*local_158)[4])();
      }
      pppppplVar14 = pppppplVar10 + 5;
      do {
        iVar22 = *(int *)pppppplVar14;
        iVar24 = iVar22 + -1;
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pppppplVar14,0x10);
        if (bVar8) {
          *(int *)pppppplVar14 = iVar24;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar24 != 0) break;
      (*(code *)(*pppppplVar10)[2])(pppppplVar10);
LAB_0155ef5c:
      ppppppplVar27 = ppppppplVar26;
      if (fVar6 < (float)local_190) {
        auVar36._8_8_ = uStack_188;
        auVar36._0_8_ = local_190;
        bVar8 = (float)((ulong)local_190 >> 0x20) < fVar40;
        iVar22 = -(uint)bVar8;
        ppppppplVar27 = ppppppplVar12;
        if (!bVar8) {
          ppppppplVar27 = ppppppplVar26;
        }
        uVar34 = (undefined2)iVar22;
        uVar35 = (undefined2)((uint)iVar22 >> 0x10);
        auVar7._4_4_ = fVar40;
        auVar7._0_4_ = fVar6;
        auVar7._8_4_ = CONCAT22(extraout_var_18,extraout_var_17);
        auVar7._12_4_ =
             (int)(CONCAT26(extraout_var_20,
                            CONCAT24(extraout_var_19,CONCAT22(extraout_var_18,extraout_var_17))) >>
                  0x20);
        auVar5._4_2_ = uVar34;
        auVar5._0_4_ = iVar22;
        auVar5._6_2_ = uVar35;
        auVar5._8_2_ = uVar34;
        auVar5._10_2_ = uVar35;
        auVar5._12_2_ = uVar34;
        auVar5._14_2_ = uVar35;
        auVar36 = auVar36 ^ (auVar36 ^ auVar7) & auVar5;
        uStack_188 = auVar36._8_8_;
        local_190 = auVar36._0_8_;
      }
      ppppplVar28 = ppppplVar28 + 6;
      ppppppplVar26 = ppppppplVar27;
      if (ppppplVar28 == ppppplVar3) goto LAB_0155f08c;
    }
    if (iVar22 != 0) goto LAB_0155ef5c;
LAB_0156091c:
    pcVar18 = "count != std::numeric_limits<uint32_t>::max()";
    pcVar19 = "DecrementReferenceInternal";
    pcVar20 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
    ;
    pcVar21 = "Reference counter underflows.";
    goto LAB_01560914;
  }
LAB_0155f284:
  if (*(char *)((long)param_1 + 0xb15) != '\0') {
    FUN_015618dc(param_1);
    *(undefined1 *)((long)param_1 + 0xb15) = 0;
  }
  ppppppplVar27 = param_1 + 5;
  uVar11 = FUN_0100d208(ppppppplVar27);
  if ((uVar11 & 1) != 0) {
    *(undefined1 *)((long)param_1 + 0x83) = 1;
  }
  pppppplVar10 = param_1[0xf];
  if (pppppplVar10 != (long ******)0x0) {
    ppppplVar28 = pppppplVar10[6];
    if (ppppplVar28[2] == (long ****)0x0) goto LAB_015608d4;
    psVar1 = (short *)((long)ppppplVar28 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 0) {
      pppplVar15 = (long ****)(*(code *)**ppppplVar28[2])();
      ppppplVar28[1] = pppplVar15;
      *(undefined4 *)((long)ppppplVar28 + 0x1c) = 0xfffffffe;
LAB_0155f2d4:
      ppppplVar28 = pppppplVar10[6];
      psVar1 = (short *)((long)ppppplVar28 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 1) {
        ppppplVar28[2] = (long ****)0x0;
        (*(code *)(*pppppplVar10)[10])(pppppplVar10);
      }
      else if (sVar2 == 0) goto LAB_01560690;
      pppppplVar10 = param_1[0xf];
      if (pppppplVar10 == (long ******)0x0) {
        FUN_0120c8dc(0);
      }
      else {
        ppppplVar28 = pppppplVar10[6];
        if (ppppplVar28[2] == (long ****)0x0) goto LAB_015608d4;
        psVar1 = (short *)((long)ppppplVar28 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar2 == 0) {
          pppplVar15 = (long ****)(*(code *)**ppppplVar28[2])();
          ppppplVar28[1] = pppplVar15;
          *(undefined4 *)((long)ppppplVar28 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) goto LAB_015608f4;
        FUN_0120c8dc(pppppplVar10);
        ppppplVar28 = pppppplVar10[6];
        psVar1 = (short *)((long)ppppplVar28 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar2 == 1) {
          ppppplVar28[2] = (long ****)0x0;
          (*(code *)(*pppppplVar10)[10])(pppppplVar10);
        }
        else if (sVar2 == 0) goto LAB_01560690;
      }
      goto LAB_0155f35c;
    }
    if (sVar2 != -1) goto LAB_0155f2d4;
LAB_015608f4:
    pcVar18 = "count != 0";
    pcVar19 = "AddReference";
    pcVar20 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
    ;
    pcVar21 = "Reference counter overflows.";
LAB_01560914:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(pcVar18,pcVar19,pcVar20,0x58,pcVar21);
  }
LAB_0155f35c:
  ppppppplVar26 = (long *******)param_1[1];
  local_160 = (long ******)0x0;
  local_158 = (long ******)((ulong)local_158 & 0xffffffff00000000);
  local_150 = (long *******)0x0;
  local_148 = (long ******)0x0;
  local_140 = (long ******)0x0;
  local_168 = (long ******)&DAT_1fffffffffffffff;
  lVar23 = ((long)param_1[0x118][1] - (long)*param_1[0x118] >> 4) * -0x5555555555555555;
  iVar22 = (int)lVar23;
  local_170 = ppppppplVar26;
  if (iVar22 != 0) {
    if (iVar22 < 0) goto LAB_01560a0c;
    ppppppplVar12 =
         (long *******)(*(code *)(*ppppppplVar26)[2])(ppppppplVar26,(lVar23 << 0x20) >> 0x1d,8);
    if (ppppppplVar12 == (long *******)0x0) {
      (*(code *)(*ppppppplVar26)[0x1d])(ppppppplVar26);
    }
    local_150 = ppppppplVar12;
    local_140 = (long ******)(long)iVar22;
  }
  local_148 = (long ******)0x0;
  local_178 = (long *******)&local_170;
  local_a0 = (long *******)&local_178;
  plVar13 = (long *)(*(code *)**ppppppplVar27)(ppppppplVar27);
  if (((*PTR_DAT_047d9050 & 1) == 0) &&
     (iVar22 = __cxa_guard_acquire(PTR_DAT_047d9050), iVar22 != 0)) {
    uVar17 = FUN_00ea2d24();
    *(undefined8 *)PTR_DAT_047d9058 = uVar17;
    __cxa_guard_release(PTR_DAT_047d9050);
  }
  do {
    if (plVar13 == (long *)0x0) {
LAB_0155f498:
      pppppplVar10 = param_1[0xf];
      if (pppppplVar10 != (long ******)0x0) {
        ppppplVar28 = pppppplVar10[6];
        if (ppppplVar28[2] == (long ****)0x0) goto LAB_015608d4;
        psVar1 = (short *)((long)ppppplVar28 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar2 == 0) {
          pppplVar15 = (long ****)(*(code *)**ppppplVar28[2])();
          ppppplVar28[1] = pppplVar15;
          *(undefined4 *)((long)ppppplVar28 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) goto LAB_015608f4;
        ppppplVar28 = pppppplVar10[6];
        psVar1 = (short *)((long)ppppplVar28 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar2 == 1) {
          ppppplVar28[2] = (long ****)0x0;
          (*(code *)(*pppppplVar10)[10])(pppppplVar10);
        }
        else if (sVar2 == 0) goto LAB_01560690;
        pppppplVar10 = param_1[0xf];
        if (pppppplVar10 == (long ******)0x0) {
          FUN_0125c618(0,&local_a0);
        }
        else {
          ppppplVar28 = pppppplVar10[6];
          if (ppppplVar28[2] == (long ****)0x0) goto LAB_015608d4;
          psVar1 = (short *)((long)ppppplVar28 + 0x1a);
          do {
            sVar2 = *psVar1;
            cVar4 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar2 == 0) {
            pppplVar15 = (long ****)(*(code *)**ppppplVar28[2])();
            ppppplVar28[1] = pppplVar15;
            *(undefined4 *)((long)ppppplVar28 + 0x1c) = 0xfffffffe;
          }
          else if (sVar2 == -1) goto LAB_015608f4;
          FUN_0125c618(pppppplVar10,&local_a0);
          ppppplVar28 = pppppplVar10[6];
          psVar1 = (short *)((long)ppppplVar28 + 0x1a);
          do {
            sVar2 = *psVar1;
            cVar4 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar2 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar2 == 1) {
            ppppplVar28[2] = (long ****)0x0;
            (*(code *)(*pppppplVar10)[10])(pppppplVar10);
          }
          else if (sVar2 == 0) goto LAB_01560690;
        }
      }
      ppppppplVar12 = local_150;
      ppppppplVar26 = local_150;
      if (local_148 != (long ******)0x0) {
        ppppppplVar26 = local_150 + (long)local_148;
      }
      for (; ppppppplVar12 != ppppppplVar26; ppppppplVar12 = ppppppplVar12 + 1) {
        pppppplVar10 = *ppppppplVar12;
        if (pppppplVar10 == (long ******)0x0) {
          if ((~(uint)_DAT_000000d0 & 0xf) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          _DAT_000000d0 = _DAT_000000d0 & 0xfffffffffffffffe;
          FUN_01560aa4(0);
        }
        else {
          ppppplVar28 = pppppplVar10[6];
          if (ppppplVar28[2] == (long ****)0x0) goto LAB_015608d4;
          psVar1 = (short *)((long)ppppplVar28 + 0x1a);
          do {
            sVar2 = *psVar1;
            cVar4 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar2 == 0) {
            pppplVar15 = (long ****)(*(code *)**ppppplVar28[2])();
            ppppplVar28[1] = pppplVar15;
            *(undefined4 *)((long)ppppplVar28 + 0x1c) = 0xfffffffe;
          }
          else if (sVar2 == -1) goto LAB_015608f4;
          ppppplVar28 = pppppplVar10[0x1a];
          if ((~(uint)ppppplVar28 & 0xf) == 0) {
            (*(code *)(*pppppplVar10)[0x1c])(pppppplVar10,0);
            ppppplVar28 = pppppplVar10[0x1a];
          }
          pppppplVar10[0x1a] = (long *****)((ulong)ppppplVar28 & 0xfffffffffffffffe);
          FUN_01560aa4(pppppplVar10);
          ppppplVar28 = pppppplVar10[6];
          psVar1 = (short *)((long)ppppplVar28 + 0x1a);
          do {
            sVar2 = *psVar1;
            cVar4 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar2 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar2 == 1) {
            ppppplVar28[2] = (long ****)0x0;
            (*(code *)(*pppppplVar10)[10])(pppppplVar10);
          }
          else if (sVar2 == 0) goto LAB_01560690;
        }
      }
      if ((*(char *)((long)param_1 + 0x999) != '\0') &&
         (iVar22 = (*(code *)(*param_1[0x29])[0x10])(), 0 < iVar22)) {
        FUN_015616fc(param_1);
      }
      if (local_148 != (long ******)0x0) {
        pppppplVar10 = local_148;
        ppppppplVar26 = local_150;
        do {
          pppppplVar14 = *ppppppplVar26;
          if (pppppplVar14 != (long ******)0x0) {
            ppppplVar28 = pppppplVar14[6];
            psVar1 = (short *)((long)ppppplVar28 + 0x1a);
            do {
              sVar2 = *psVar1;
              cVar4 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar8) {
                *psVar1 = sVar2 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar2 == 1) {
              ppppplVar28[2] = (long ****)0x0;
              (*(code *)(*pppppplVar14)[10])();
            }
            else if (sVar2 == 0) goto LAB_01560690;
          }
          pppppplVar10 = (long ******)((long)pppppplVar10 + -1);
          ppppppplVar26 = ppppppplVar26 + 1;
        } while (pppppplVar10 != (long ******)0x0);
      }
      ppppppplVar12 = local_150;
      ppppppplVar26 = local_170;
      if (local_140 != (long ******)0x0) {
        lVar23 = (long)local_140 << 3;
        uVar11 = (*(code *)(*local_170)[0x1f])(local_170);
        if (((uVar11 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
          (*(code *)(*ppppppplVar26)[3])(ppppppplVar26,ppppppplVar12,lVar23,8);
        }
        else {
          FUN_00c48fe8(ppppppplVar26,ppppppplVar12,lVar23,8);
        }
      }
      *(uint *)(param_1[0x126] + 5) = (uint)(*(int *)(param_1 + 0xea) != 0);
      pppppplVar14 = param_1[0x126];
      iVar9 = (*(code *)(*param_1[0x29])[0x10])();
      pppppplVar10 = *(long *******)((long)param_1 + 0x7ac);
      iVar25 = (int)((ulong)pppppplVar10 >> 0x20);
      iVar22 = iVar25;
      iVar24 = (int)pppppplVar10;
      if (*(int *)(pppppplVar14 + 5) != 0) {
        iVar22 = (int)pppppplVar10;
        iVar24 = iVar25;
      }
      iVar25 = 0;
      if (iVar24 != 0) {
        iVar25 = iVar9 / iVar24;
      }
      iVar22 = iVar25 - iVar22;
      if (iVar9 != iVar25 * iVar24) {
        iVar22 = iVar22 + 1;
      }
      fVar40 = 0.0;
      fVar6 = (float)iVar22;
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      pppppplVar14[4] = (long *****)pppppplVar10;
      *(int *)(pppppplVar14 + 1) = iVar9;
      *(int *)((long)pppppplVar14 + 0xc) = (int)fVar6;
      pppppplVar10 = param_1[0x126];
      ppppppplVar26 = param_1 + 0xf6;
      if (*(int *)(pppppplVar10 + 5) != 0) {
        ppppppplVar26 = (long *******)((long)param_1 + 0x7ac);
      }
      iVar24 = *(int *)ppppppplVar26;
      iVar22 = iVar24;
      if (iVar24 < 0) {
        iVar22 = iVar24 + 1;
      }
      if (*(char *)(param_1 + 0x160) != '\0') {
        iVar22 = iVar22 >> 1;
        *(uint *)(pppppplVar10 + 3) = iVar22 - (uint)(iVar24 + iVar22 * -2 != 1);
        *(int *)((long)pppppplVar10 + 0x1c) = iVar22;
        pppppplVar10 = param_1[0x126];
      }
      *(undefined4 *)((long)pppppplVar10 + 0x14) = *(undefined4 *)(param_1 + 0x132);
      *(undefined4 *)(param_1[0x126] + 2) = *(undefined4 *)((long)param_1 + 0x994);
      local_b8 = 0;
      local_160 = (long ******)&DAT_03c886bc;
      local_158 = (long ******)0x0;
      local_e0 = (long ******)&DAT_03c886bc;
      local_140 = (long ******)&DAT_03c886bc;
      local_138 = (long ******)0x0;
      local_120 = (long ******)&DAT_03c886bc;
      local_118 = (long ******)0x0;
      local_d8 = (long ******)0x0;
      local_d0 = (long ******)0x0;
      local_f0 = (long ******)0x0;
      local_e8 = (long ******)&DAT_cbf29ce484222645;
      local_170 = (long *******)0x0;
      local_168 = (long ******)&DAT_cbf29ce484222645;
      local_150 = (long *******)0x0;
      local_148 = (long ******)&DAT_cbf29ce484222645;
      local_130 = (long ******)0x0;
      local_128 = (long ******)&DAT_cbf29ce484222645;
      local_110 = (long ******)0x0;
      local_108 = (long ******)&DAT_cbf29ce484222645;
      local_100 = (long ******)&DAT_03c886bc;
      local_f8 = (long ******)0x0;
      local_c8 = (long ******)0x0;
      pppppplStack_c0 = (long ******)0x0;
      ppppppplVar26 = (long *******)param_1[0x19];
      if (ppppppplVar26 == (long *******)0x0) {
        local_170 = (long *******)0x0;
      }
      else {
        ppppppplVar12 = ppppppplVar26 + 5;
        do {
          iVar22 = *(int *)ppppppplVar12;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar12,0x10);
          if (bVar8) {
            *(int *)ppppppplVar12 = iVar22 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar22 == -1) goto LAB_01560940;
        do {
          iVar22 = *(int *)ppppppplVar12;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar12,0x10);
          if (bVar8) {
            *(int *)ppppppplVar12 = iVar22 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar22 == -1) goto LAB_01560940;
        local_170 = ppppppplVar26;
      }
      local_168 = param_1[0xf9];
      local_160 = param_1[0xfa];
      local_158 = param_1[0xfb];
      ppppppplVar12 = (long *******)param_1[0xfc];
      if (ppppppplVar12 != (long *******)0x0) {
        (*(code *)(*ppppppplVar12)[3])(ppppppplVar12);
      }
      if (local_150 != (long *******)0x0) {
        pppppplVar10 = *local_150;
        local_150 = ppppppplVar12;
        (*(code *)pppppplVar10[4])();
        ppppppplVar12 = local_150;
      }
      local_150 = ppppppplVar12;
      local_148 = param_1[0x105];
      local_140 = param_1[0x106];
      local_138 = param_1[0x107];
      pppppplVar10 = param_1[0x108];
      if (pppppplVar10 != (long ******)0x0) {
        (*(code *)(*pppppplVar10)[3])(pppppplVar10);
      }
      if (local_130 != (long ******)0x0) {
        ppppplVar28 = *local_130;
        local_130 = pppppplVar10;
        (*(code *)ppppplVar28[4])();
        pppppplVar10 = local_130;
      }
      local_130 = pppppplVar10;
      local_128 = param_1[0xfd];
      local_120 = param_1[0xfe];
      local_118 = param_1[0xff];
      pppppplVar10 = param_1[0x100];
      if (pppppplVar10 != (long ******)0x0) {
        (*(code *)(*pppppplVar10)[3])(pppppplVar10);
      }
      if (local_110 != (long ******)0x0) {
        ppppplVar28 = *local_110;
        local_110 = pppppplVar10;
        (*(code *)ppppplVar28[4])();
        pppppplVar10 = local_110;
      }
      local_110 = pppppplVar10;
      local_108 = param_1[0x101];
      local_100 = param_1[0x102];
      local_f8 = param_1[0x103];
      pppppplVar10 = param_1[0x104];
      if (pppppplVar10 != (long ******)0x0) {
        (*(code *)(*pppppplVar10)[3])(pppppplVar10);
      }
      if (local_f0 != (long ******)0x0) {
        ppppplVar28 = *local_f0;
        local_f0 = pppppplVar10;
        (*(code *)ppppplVar28[4])();
        pppppplVar10 = local_f0;
      }
      local_f0 = pppppplVar10;
      local_e8 = param_1[0x109];
      local_e0 = param_1[0x10a];
      local_d8 = param_1[0x10b];
      pppppplVar10 = param_1[0x10c];
      if (pppppplVar10 != (long ******)0x0) {
        (*(code *)(*pppppplVar10)[3])(pppppplVar10);
      }
      if (local_d0 != (long ******)0x0) {
        ppppplVar28 = *local_d0;
        local_d0 = pppppplVar10;
        (*(code *)ppppplVar28[4])();
        pppppplVar10 = local_d0;
      }
      local_d0 = pppppplVar10;
      local_c8 = param_1[0x10d];
      pppppplStack_c0 = param_1[0x10e];
      local_b8 = *(undefined1 *)(param_1 + 0x10f);
      local_b4 = *(undefined4 *)((long)param_1[0x126] + 0xc);
      uStack_b0 = *(undefined4 *)(param_1 + 0xea);
      local_ac = *(undefined4 *)((long)param_1 + 0x87c);
      pppppplVar10 = param_1[0x122];
      FUN_00f6c63c(pppppplVar10 + 2,&local_170);
      if ((((*(char *)local_160 == '\0') || (*(char *)local_140 == '\0')) ||
          (*(char *)local_120 == '\0')) || (*(char *)local_100 == '\0')) {
        *(undefined1 *)(pppppplVar10 + 1) = 0;
      }
      else {
        *(undefined1 *)(pppppplVar10 + 1) = 1;
        FUN_00f6bf24(pppppplVar10);
        (*(code *)(*pppppplVar10[2])[6])(pppppplVar10[2],pppppplVar10 + 0xb);
        pppppplVar10[0x1f] = pppppplVar10[0x1f];
        pppppplVar10[0x1e] =
             (long *****)
             CONCAT44(CONCAT22(extraout_var_16,extraout_var_10),
                      (float)CONCAT22(extraout_var_04,extraout_h0_04) +
                      *(float *)(pppppplVar10 + 0x1c) * 0.5);
        (*(code *)(*pppppplVar10[2])[0xe])(pppppplVar10[2],pppppplVar10 + 3,1);
      }
      pppppplVar10 = param_1[0x122];
      if (*(char *)(pppppplVar10 + 1) != '\0') {
        iVar22 = *(int *)(param_1[0x126] + 2);
        FUN_00f6bf24(pppppplVar10);
        (*(code *)(*pppppplVar10[2])[6])(pppppplVar10[2],pppppplVar10 + 0xb);
        ppppplStack_98 = pppppplVar10[0x1f];
        fVar39 = (float)CONCAT22(extraout_var_02,extraout_h0_02) +
                 *(float *)(pppppplVar10 + 0x1c) * 0.5;
        auVar37._0_8_ = (long *****)CONCAT44(CONCAT22(extraout_var_14,extraout_var_08),fVar39);
        auVar37._8_8_ = ppppplStack_98;
        pppppplVar10[0x1f] = ppppplStack_98;
        pppppplVar10[0x1e] = auVar37._0_8_;
        fVar6 = (float)(int)(float)iVar22;
        if (*(char *)((long)pppppplVar10 + 0x104) != '\0') {
          fVar6 = (float)iVar22;
        }
        auVar38._4_12_ = auVar37._4_12_;
        auVar38._0_4_ = fVar39 + *(float *)(pppppplVar10 + 0x20) * fVar6;
        local_a0 = auVar38._0_8_;
        (*(code *)(*pppppplVar10[2])[5])(pppppplVar10[2],pppppplVar10 + 7,&local_a0);
      }
      if (ppppppplVar26 != (long *******)0x0) {
        ppppppplVar12 = ppppppplVar26 + 5;
        do {
          iVar22 = *(int *)ppppppplVar12;
          iVar24 = iVar22 + -1;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar12,0x10);
          if (bVar8) {
            *(int *)ppppppplVar12 = iVar24;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar24 == 0) {
          (*(code *)(*ppppppplVar26)[2])(ppppppplVar26);
        }
        else if (iVar22 == 0) goto LAB_0156091c;
      }
      if (local_d0 != (long ******)0x0) {
        (*(code *)(*local_d0)[4])();
      }
      if (local_f0 != (long ******)0x0) {
        (*(code *)(*local_f0)[4])();
      }
      if (local_110 != (long ******)0x0) {
        (*(code *)(*local_110)[4])();
      }
      if (local_130 != (long ******)0x0) {
        (*(code *)(*local_130)[4])();
      }
      if (local_150 != (long *******)0x0) {
        (*(code *)(*local_150)[4])();
      }
      if (local_170 != (long *******)0x0) {
        ppppppplVar26 = local_170 + 5;
        do {
          iVar22 = *(int *)ppppppplVar26;
          iVar24 = iVar22 + -1;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar26,0x10);
          if (bVar8) {
            *(int *)ppppppplVar26 = iVar24;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar24 == 0) {
          (*(code *)(*local_170)[2])();
        }
        else if (iVar22 == 0) goto LAB_0156091c;
      }
      pppppplVar10 = param_1[0x19];
      if (pppppplVar10 != (long ******)0x0) {
        pppppplVar14 = pppppplVar10 + 5;
        do {
          iVar22 = *(int *)pppppplVar14;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(pppppplVar14,0x10);
          if (bVar8) {
            *(int *)pppppplVar14 = iVar22 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar22 == -1) {
LAB_01560940:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
      }
      (*(code *)(*pppppplVar10)[0xc])(pppppplVar10,param_1 + 0xef);
      if (pppppplVar10 != (long ******)0x0) {
        pppppplVar14 = pppppplVar10 + 5;
        do {
          iVar22 = *(int *)pppppplVar14;
          iVar24 = iVar22 + -1;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(pppppplVar14,0x10);
          if (bVar8) {
            *(int *)pppppplVar14 = iVar24;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar24 == 0) {
          (*(code *)(*pppppplVar10)[2])(pppppplVar10);
        }
        else if (iVar22 == 0) goto LAB_0156091c;
      }
      pppppplVar10 = param_1[0x114];
      pppppplVar10[1] = (long *****)0x0;
      pppppplVar10[2] =
           (long *****)
           CONCAT26(extraout_var_15,
                    CONCAT24(extraout_var_09,CONCAT22(extraout_var_03,extraout_h0_03)));
      param_1[0x114][3] = (long *****)(param_1 + 0x27);
      pppppplVar14 = param_1[1];
      uVar41 = *(undefined4 *)((long)param_1 + 0x994);
      iVar22 = *(int *)((long)param_1[0x126] + 0xc);
      pppppplVar10 = (long ******)(*(code *)(*pppppplVar14)[2])(pppppplVar14,0x1f0,0x10);
      if (pppppplVar10 == (long ******)0x0) {
        pppppplVar14 = (long ******)0x0;
        pppppplVar33 = (long ******)0x0;
        pppppplVar32 = (long ******)0x0;
      }
      else {
        if (((DAT_04865a38 & 1) == 0) && (iVar24 = __cxa_guard_acquire(&DAT_04865a38), iVar24 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar23 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar23 + 0x80)) {
LAB_01560a0c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *******)(lVar23 + *(ulong *)(lVar23 + 0x80) * 8) = pppppplVar14;
        uVar41 = NEON_ucvtf(uVar41);
        *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + 1;
        *pppppplVar10 = (long *****)(PTR_DAT_047dd1e8 + 0x10);
        pppppplVar10[2] = (long *****)(PTR_DAT_047dd1f0 + 0x10);
        memset(pppppplVar10 + 4,0,0xf0);
        *(undefined4 *)(pppppplVar10 + 4) = 0xffffffff;
        *(undefined4 *)(pppppplVar10 + 10) = 0xffffffff;
        pppppplVar32 = (long ******)0x10;
        pppppplVar33 = (long ******)0x1f0;
        *(undefined4 *)(pppppplVar10 + 0x10) = 0xffffffff;
        *(undefined4 *)(pppppplVar10 + 0x16) = 0xffffffff;
        *(undefined4 *)(pppppplVar10 + 0x1c) = 0xffffffff;
        *(undefined4 *)(pppppplVar10 + 0x22) = 0;
        *(undefined4 *)(pppppplVar10 + 0x34) = 0;
        *(float *)((long)pppppplVar10 + 0x1a4) = (float)iVar22;
        *(undefined4 *)(pppppplVar10 + 0x35) = 0x3d23d70a;
        *(undefined1 *)((long)pppppplVar10 + 0x1ac) = 0;
        *(undefined4 *)(pppppplVar10 + 0x36) = 0;
        *(undefined1 *)((long)pppppplVar10 + 0x1b4) = 0;
        pppppplVar10[0x39] = (long *****)0x0;
        *(undefined4 *)(pppppplVar10 + 0x3a) = 0;
        *(undefined4 *)((long)pppppplVar10 + 0x1d4) = uVar41;
        *(undefined4 *)(pppppplVar10 + 0x3b) = 0;
        *(undefined1 *)((long)pppppplVar10 + 0x1dc) = 0;
        *(undefined4 *)(pppppplVar10 + 0x3c) = 0;
        pppppplVar10[0x24] = (long *****)0x0;
        pppppplVar10[0x25] = (long *****)0x0;
        pppppplVar10[0x26] = (long *****)0x0;
        pppppplVar10[0x27] = (long *****)0x0;
        pppppplVar10[0x37] = (long *****)0x0;
        pppppplVar10[0x38] = (long *****)0x0;
        *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + -1;
      }
      pppppplVar29 = param_1[0x110];
      param_1[0x110] = pppppplVar10;
      if (pppppplVar29 != (long ******)0x0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar23 = FUN_00c4e600();
        iVar24 = *(int *)(lVar23 + 0x12c8);
        iVar22 = iVar24 + 1;
        *(int *)(lVar23 + 0x12c8) = iVar22;
        if (*(int *)(lVar23 + 0x12cc) <= iVar24) {
          *(int *)(lVar23 + 0x12cc) = iVar22;
        }
        (*(code *)**pppppplVar29)(pppppplVar29);
        pppppplVar31 = param_1[0x111];
        pppppplVar10 = param_1[0x112];
        pppppplVar30 = param_1[0x113];
        uVar11 = (*(code *)(*pppppplVar31)[0x1f])(pppppplVar31);
        if (((uVar11 & 1) == 0) || (lVar23 = FUN_00c4e600(), *(int *)(lVar23 + 0x12c8) < 1)) {
          (*(code *)(*pppppplVar31)[3])(pppppplVar31,pppppplVar29,pppppplVar10,pppppplVar30);
        }
        else {
          FUN_00c48fe8(pppppplVar31,pppppplVar29,pppppplVar10,pppppplVar30);
        }
        lVar23 = FUN_00c4e600();
        iVar22 = *(int *)(lVar23 + 0x12c8) + -1;
        *(int *)(lVar23 + 0x12c8) = iVar22;
        if (iVar22 == 0) {
          pppppplVar10 = (long ******)FUN_00c4e600();
          if (pppppplVar10[600] != (long *****)0x0) {
            local_a0 = (long *******)(pppppplVar10 + (long)pppppplVar10[600] * 3);
            local_170 = (long *******)pppppplVar10;
            FUN_00c4ea30(&local_170,&local_a0);
            ppppplVar28 = *pppppplVar10;
            pppppplVar29 = pppppplVar10;
            if (pppppplVar10[600] != (long *****)0x0) {
              pppppplVar29 = pppppplVar10 + (long)pppppplVar10[600] * 3;
            }
            if (pppppplVar29 == pppppplVar10) {
              local_1a0 = 0;
              uVar11 = 0;
            }
            else {
              (*(code *)(**pppppplVar10)[0x1a])();
              if (*pppppplVar10 != ppppplVar28) {
                (*(code *)(*ppppplVar28)[0x20])(ppppplVar28,pppppplVar10,pppppplVar10);
                ppppplVar28 = *pppppplVar10;
              }
              pppppplVar30 = pppppplVar10 + 3;
              if (pppppplVar29 == pppppplVar30) {
                local_1a0 = 0;
                uVar11 = 1;
              }
              else {
                (*(code *)(**pppppplVar30)[0x1a])();
                bVar8 = *pppppplVar30 != ppppplVar28;
                if (bVar8) {
                  (*(code *)(*ppppplVar28)[0x20])(ppppplVar28,pppppplVar10,pppppplVar10 + 3);
                  ppppplVar28 = pppppplVar10[3];
                }
                local_1a0 = (ulong)bVar8;
                pppppplVar30 = pppppplVar10 + 6;
                if (pppppplVar29 == pppppplVar30) {
                  uVar11 = 2;
                }
                else {
                  (*(code *)(**pppppplVar30)[0x1a])();
                  if (*pppppplVar30 != ppppplVar28) {
                    (*(code *)(*ppppplVar28)[0x20])
                              (ppppplVar28,pppppplVar10 + local_1a0 * 3,pppppplVar10 + 6);
                    ppppplVar28 = pppppplVar10[6];
                    local_1a0 = 2;
                  }
                  pppppplVar30 = pppppplVar10 + 9;
                  if (pppppplVar29 == pppppplVar30) {
                    uVar11 = 3;
                  }
                  else {
                    (*(code *)(**pppppplVar30)[0x1a])();
                    if (*pppppplVar30 != ppppplVar28) {
                      (*(code *)(*ppppplVar28)[0x20])
                                (ppppplVar28,pppppplVar10 + local_1a0 * 3,pppppplVar10 + 9);
                      ppppplVar28 = pppppplVar10[9];
                      local_1a0 = 3;
                    }
                    pppppplVar30 = pppppplVar10 + 0xc;
                    if (pppppplVar29 == pppppplVar30) {
                      uVar11 = 4;
                    }
                    else {
                      (*(code *)(**pppppplVar30)[0x1a])();
                      if (*pppppplVar30 != ppppplVar28) {
                        (*(code *)(*ppppplVar28)[0x20])
                                  (ppppplVar28,pppppplVar10 + local_1a0 * 3,pppppplVar10 + 0xc);
                        ppppplVar28 = pppppplVar10[0xc];
                        local_1a0 = 4;
                      }
                      pppppplVar30 = pppppplVar10 + 0xf;
                      if (pppppplVar29 == pppppplVar30) {
                        uVar11 = 5;
                      }
                      else {
                        (*(code *)(**pppppplVar30)[0x1a])();
                        if (*pppppplVar30 != ppppplVar28) {
                          (*(code *)(*ppppplVar28)[0x20])
                                    (ppppplVar28,pppppplVar10 + local_1a0 * 3,pppppplVar10 + 0xf);
                          ppppplVar28 = pppppplVar10[0xf];
                          local_1a0 = 5;
                        }
                        local_1a8 = pppppplVar10 + 0x12;
                        uVar11 = 6;
                        if (pppppplVar29 != local_1a8) {
                          do {
                            (*(code *)(**local_1a8)[0x1a])();
                            if (*local_1a8 != ppppplVar28) {
                              (*(code *)(*ppppplVar28)[0x20])
                                        (ppppplVar28,pppppplVar10 + local_1a0 * 3,local_1a8);
                              ppppplVar28 = *local_1a8;
                              local_1a0 = uVar11;
                            }
                            local_1a8 = local_1a8 + 3;
                            uVar11 = uVar11 + 1;
                          } while (pppppplVar29 != local_1a8);
                        }
                      }
                    }
                  }
                }
              }
            }
            (*(code *)(*ppppplVar28)[0x20])
                      (ppppplVar28,pppppplVar10 + local_1a0 * 3,pppppplVar10 + uVar11 * 3);
            pppppplVar10[600] = (long *****)0x0;
          }
          *(undefined4 *)(lVar23 + 0x12cc) = 0;
        }
      }
      pppppplVar10 = param_1[0x110];
      param_1[0x111] = pppppplVar14;
      param_1[0x112] = pppppplVar33;
      param_1[0x113] = pppppplVar32;
      ppppplVar28 = pppppplVar10[0x25];
      local_148 = (long ******)&LAB_0155b6d8;
      local_170 = (long *******)&LAB_02b34cec;
      local_168 = (long ******)FUN_02b34d10;
      local_140 = (long ******)0x0;
      local_160 = (long ******)FUN_02b34d14;
      local_158 = (long ******)&LAB_02b34d28;
      local_150 = param_1;
      if (ppppplVar28 == (long *****)0x0) {
LAB_0155fc60:
        (*(code *)local_160)(&local_150,pppppplVar10 + 0x28);
        pppppplVar10[0x27] = (long *****)local_158;
        pppppplVar10[0x24] = (long *****)local_170;
        pppppplVar10[0x25] = (long *****)local_168;
        pppppplVar10[0x26] = (long *****)local_160;
      }
      else {
        pppppplVar10[0x26] = (long *****)0x0;
        pppppplVar10[0x27] = (long *****)0x0;
        pppppplVar10[0x24] = (long *****)0x0;
        pppppplVar10[0x25] = (long *****)0x0;
        (*(code *)ppppplVar28)(pppppplVar10 + 0x28);
        if (local_160 != (long ******)0x0) goto LAB_0155fc60;
      }
      pppppplVar10 = local_168;
      if (local_168 != (long ******)0x0) {
        local_160 = (long ******)0x0;
        local_158 = (long ******)0x0;
        local_170 = (long *******)0x0;
        local_168 = (long ******)0x0;
        (*(code *)pppppplVar10)(&local_150);
      }
      if (*(int *)(param_1 + 0xea) == 0) {
        fVar40 = *(float *)(param_1 + 0xf8) * -(float)*(int *)(param_1[0x126] + 2);
        uVar34 = 0;
      }
      else {
        uVar34 = SUB42(*(float *)((long)param_1 + 0x7bc) * (float)*(int *)(param_1[0x126] + 2),0);
      }
      FUN_01561158(uVar34,fVar40,param_1[0x114]);
      if ((param_2 & 1) == 0) {
        FUN_01327c88(param_1,*(undefined4 *)((long)param_1[0x126] + 0x14),
                     *(undefined4 *)(param_1[0x126] + 2));
      }
      FUN_01517b90(param_1[0x12a],param_1[1]);
      if (param_1[0x21] != (long ******)0x0) {
        FUN_02152218(&local_170);
        ppppppplVar26 = local_170;
        if (local_170 != (long *******)0x0) {
          pppppplVar10 = local_170[6];
          if (pppppplVar10[2] == (long *****)0x0) goto LAB_015608d4;
          psVar1 = (short *)((long)pppppplVar10 + 0x1a);
          do {
            sVar2 = *psVar1;
            cVar4 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar2 == 0) {
            ppppplVar28 = (long *****)(*(code *)**pppppplVar10[2])();
            pppppplVar10[1] = ppppplVar28;
            *(undefined4 *)((long)pppppplVar10 + 0x1c) = 0xfffffffe;
          }
          else if (sVar2 == -1) goto LAB_015608f4;
          pppppplVar10 = ppppppplVar26[0x1a];
          if ((~(uint)pppppplVar10 & 0xf) == 0) {
            (*(code *)(*ppppppplVar26)[0x1c])(ppppppplVar26,0);
            pppppplVar10 = ppppppplVar26[0x1a];
          }
          ppppppplVar26[0x1a] = (long ******)((ulong)pppppplVar10 & 0xfffffffffffffffb);
          pppppplVar10 = ppppppplVar26[6];
          psVar1 = (short *)((long)pppppplVar10 + 0x1a);
          do {
            sVar2 = *psVar1;
            cVar4 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar2 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar2 == 1) {
            pppppplVar10[2] = (long *****)0x0;
            (*(code *)(*ppppppplVar26)[10])(ppppppplVar26);
          }
          else if (sVar2 == 0) goto LAB_01560690;
          if (local_170 != (long *******)0x0) {
            pppppplVar10 = local_170[6];
            psVar1 = (short *)((long)pppppplVar10 + 0x1a);
            do {
              sVar2 = *psVar1;
              cVar4 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar8) {
                *psVar1 = sVar2 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar2 == 1) {
              pppppplVar10[2] = (long *****)0x0;
              (*(code *)(*local_170)[10])();
            }
            else if (sVar2 == 0) goto LAB_01560690;
          }
        }
        if (param_1[0x21] != (long ******)0x0) {
          FUN_02152218(&local_170);
          ppppppplVar26 = local_170;
          if (local_170 != (long *******)0x0) {
            pppppplVar10 = local_170[6];
            if (pppppplVar10[2] == (long *****)0x0) goto LAB_015608d4;
            psVar1 = (short *)((long)pppppplVar10 + 0x1a);
            do {
              sVar2 = *psVar1;
              cVar4 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar8) {
                *psVar1 = sVar2 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar2 == 0) {
              ppppplVar28 = (long *****)(*(code *)**pppppplVar10[2])();
              pppppplVar10[1] = ppppplVar28;
              *(undefined4 *)((long)pppppplVar10 + 0x1c) = 0xfffffffe;
            }
            else if (sVar2 == -1) goto LAB_015608f4;
            *(bool *)((long)ppppppplVar26 + 0x271) = *(char *)((long)param_1 + 0x7c4) != '\0';
            pppppplVar10 = ppppppplVar26[6];
            psVar1 = (short *)((long)pppppplVar10 + 0x1a);
            do {
              sVar2 = *psVar1;
              cVar4 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar8) {
                *psVar1 = sVar2 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar2 == 1) {
              pppppplVar10[2] = (long *****)0x0;
              (*(code *)(*ppppppplVar26)[10])(ppppppplVar26);
            }
            else if (sVar2 == 0) goto LAB_01560690;
            if (local_170 != (long *******)0x0) {
              pppppplVar10 = local_170[6];
              psVar1 = (short *)((long)pppppplVar10 + 0x1a);
              do {
                sVar2 = *psVar1;
                cVar4 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar8) {
                  *psVar1 = sVar2 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (sVar2 == 1) {
                pppppplVar10[2] = (long *****)0x0;
                (*(code *)(*local_170)[10])();
              }
              else if (sVar2 == 0) goto LAB_01560690;
            }
          }
        }
      }
      local_170 = param_1;
      uVar11 = FUN_0100d208(ppppppplVar27);
      if ((uVar11 & 1) != 0) {
        *(undefined1 *)(param_1 + 0x7b) = 1;
        param_1[0x7c] = (long ******)param_1;
      }
      pppppplVar10 = param_1[0xf];
      if (pppppplVar10 == (long ******)0x0) goto LAB_0155fdc8;
      ppppplVar28 = pppppplVar10[6];
      if (ppppplVar28[2] == (long ****)0x0) goto LAB_015608d4;
      psVar1 = (short *)((long)ppppplVar28 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 0) {
        pppplVar15 = (long ****)(*(code *)**ppppplVar28[2])();
        ppppplVar28[1] = pppplVar15;
        *(undefined4 *)((long)ppppplVar28 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) goto LAB_015608f4;
      ppppplVar28 = pppppplVar10[6];
      psVar1 = (short *)((long)ppppplVar28 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 1) {
        ppppplVar28[2] = (long ****)0x0;
        (*(code *)(*pppppplVar10)[10])(pppppplVar10);
      }
      else if (sVar2 == 0) goto LAB_01560690;
      pppppplVar10 = param_1[0xf];
      if (pppppplVar10 == (long ******)0x0) {
        FUN_0122d7c8(0,&local_170);
        goto LAB_0155fdc8;
      }
      ppppplVar28 = pppppplVar10[6];
      if (ppppplVar28[2] == (long ****)0x0) {
LAB_015608d4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)((long)ppppplVar28 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 0) {
        pppplVar15 = (long ****)(*(code *)**ppppplVar28[2])();
        ppppplVar28[1] = pppplVar15;
        *(undefined4 *)((long)ppppplVar28 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) goto LAB_015608f4;
      FUN_0122d7c8(pppppplVar10,&local_170);
      ppppplVar28 = pppppplVar10[6];
      psVar1 = (short *)((long)ppppplVar28 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 1) {
        ppppplVar28[2] = (long ****)0x0;
        (*(code *)(*pppppplVar10)[10])(pppppplVar10);
      }
      else if (sVar2 == 0) {
LAB_01560690:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
LAB_0155fdc8:
      *(undefined1 *)(param_1 + 0x133) = 1;
      param_1[0x1e] = (long ******)0x0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1f));
      return;
    }
    if (plVar13 == (long *)PTR_DAT_047d9058) {
      pppppplVar10 = *local_a0;
      pppppplVar14 = param_1[6];
      local_78 = param_1;
      if (pppppplVar14[2] == (long *****)0x0) goto LAB_015608d4;
      psVar1 = (short *)((long)pppppplVar14 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 0) {
        ppppplVar28 = (long *****)(*(code *)**pppppplVar14[2])();
        pppppplVar14[1] = ppppplVar28;
        *(undefined4 *)((long)pppppplVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) goto LAB_015608f4;
      FUN_0125ca78(pppppplVar10,&local_78);
      if (local_78 != (long *******)0x0) {
        pppppplVar10 = local_78[6];
        psVar1 = (short *)((long)pppppplVar10 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar2 == 1) {
          pppppplVar10[2] = (long *****)0x0;
          (*(code *)(*local_78)[10])();
        }
        else if (sVar2 == 0) goto LAB_01560690;
      }
      goto LAB_0155f498;
    }
    plVar13 = (long *)*plVar13;
  } while( true );
}


