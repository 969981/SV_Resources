/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ca4c74; name: FUN_00ca4c74
 */


void FUN_00ca4c74(long param_1)

{
  undefined1 (*pauVar1) [16];
  short *psVar2;
  long lVar3;
  LightEventType *pLVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long *plVar8;
  long *plVar9;
  short sVar10;
  char cVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  bool bVar16;
  ulong uVar17;
  long lVar18;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  long *plVar28;
  short sVar29;
  long lVar30;
  int iVar31;
  long lVar32;
  ulong uVar33;
  float extraout_s0;
  float extraout_var;
  undefined1 auVar34 [16];
  undefined8 uVar35;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 auStack_88 [24];
  long *local_70;
  
  if (*(int *)(param_1 + 0x128) == 4) {
    lVar32 = *(long *)(param_1 + 0x130);
    FUN_00ca5510(*(undefined8 *)(lVar32 + 0x30));
    lVar23 = *(long *)(*(long *)(lVar32 + 0x38) + 0x78);
    iVar31 = *(int *)(*(long *)(lVar32 + 0x30) + 0x50);
    plVar19 = *(long **)(lVar23 + 0x30);
    plVar8 = *(long **)(lVar23 + 0x38);
    lVar23 = (long)plVar8 - (long)plVar19 >> 4;
    if ((*(int *)(lVar32 + 0x60) != iVar31) || (*(long *)(lVar32 + 0x58) != lVar23)) {
      for (; plVar19 != plVar8; plVar19 = plVar19 + 2) {
        lVar30 = *plVar19;
        plVar28 = *(long **)(lVar30 + 0x50);
        plVar9 = *(long **)(lVar30 + 0x58);
        if (plVar28 != plVar9) {
          lVar20 = *plVar28;
          if (*(int *)(lVar20 + 0x15c) != iVar31) {
            *(int *)(lVar20 + 0x15c) = iVar31;
            *(undefined1 *)(lVar20 + 0x19a) = 1;
          }
          if (plVar28 + 1 != plVar9) {
            lVar20 = plVar28[1];
            if (*(int *)(lVar20 + 0x15c) != iVar31) {
              *(int *)(lVar20 + 0x15c) = iVar31;
              *(undefined1 *)(lVar20 + 0x19a) = 1;
            }
            for (plVar28 = plVar28 + 2; plVar28 != plVar9; plVar28 = plVar28 + 1) {
              lVar20 = *plVar28;
              if (*(int *)(lVar20 + 0x15c) != iVar31) {
                *(int *)(lVar20 + 0x15c) = iVar31;
                *(undefined1 *)(lVar20 + 0x19a) = 1;
              }
            }
          }
        }
        *(uint *)(lVar30 + 0x158) = *(uint *)(lVar30 + 0x158) | 0x40;
      }
      *(int *)(lVar32 + 0x60) = iVar31;
      *(long *)(lVar32 + 0x58) = lVar23;
    }
    if (*(int *)(param_1 + 0x1a0) != iVar31) {
      lVar23 = *(long *)(param_1 + 400);
      if ((lVar23 != 0) && (*(short *)(lVar23 + 0x1a) != 0)) {
        psVar2 = (short *)(lVar23 + 0x1a);
        sVar29 = *(short *)(lVar23 + 0x1a);
        do {
          sVar10 = *psVar2;
          if (sVar10 == sVar29) {
            cVar11 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar16) {
              *psVar2 = sVar29 + 1;
              cVar11 = ExclusiveMonitorsStatus();
            }
            if (cVar11 != '\0') goto LAB_00ca5348;
            bVar16 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00ca5348:
            bVar16 = false;
          }
          if (bVar16) {
            lVar23 = *(long *)(lVar23 + 0x10);
            if (lVar23 != 0) {
              plVar19 = (long *)(lVar23 + -0x28);
              if (*(int *)(lVar23 + 0x108) != 3) {
                UNRECOVERED_JUMPTABLE = *(code **)(*plVar19 + 0x60);
                goto LAB_00ca53d0;
              }
              if (iVar31 == 0) {
                bVar16 = false;
              }
              else {
                bVar16 = *(char *)(*(long *)(lVar32 + 0x30) + 0x1e0) == '\0';
              }
              FUN_0143cdb0(plVar19,bVar16);
              *(int *)(param_1 + 0x1a0) = iVar31;
              (**(code **)(*plVar19 + 0x60))(plVar19);
            }
            break;
          }
          sVar29 = sVar10;
        } while (sVar10 != 0);
      }
      iVar31 = *(int *)(param_1 + 0x1a0);
    }
    if (((0 < iVar31) && (lVar23 = *(long *)(param_1 + 0x180), lVar23 != 0)) &&
       (*(short *)(lVar23 + 0x1a) != 0)) {
      psVar2 = (short *)(lVar23 + 0x1a);
      sVar29 = *(short *)(lVar23 + 0x1a);
      do {
        sVar10 = *psVar2;
        if (sVar10 == sVar29) {
          cVar11 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar16) {
            *psVar2 = sVar29 + 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
          if (cVar11 != '\0') goto LAB_00ca4d50;
          bVar16 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00ca4d50:
          bVar16 = false;
        }
        if (bVar16) {
          lVar23 = *(long *)(lVar23 + 0x10);
          if (lVar23 == 0) {
            return;
          }
          plVar19 = (long *)(lVar23 + -0x28);
          if (*(int *)(lVar23 + 0x100) == 2) {
            uVar24 = (ulong)(uint)((int)((ulong)(*(long *)(*(long *)(lVar23 + 0x108) + 0x78) -
                                                *(long *)(*(long *)(lVar23 + 0x108) + 0x70)) >> 3) *
                                  -0x33333333);
            if ((*(ulong *)(param_1 + 0x1a8) != uVar24) ||
               (uVar17 = FUN_0218793c(*(undefined8 *)(lVar32 + 0x30)), (uVar17 & 1) != 0)) {
              lVar32 = *(long *)(lVar32 + 0x30);
              pauVar1 = (undefined1 (*) [16])(lVar32 + 0x100);
              uVar35 = *(undefined8 *)*pauVar1;
              auVar13 = *pauVar1;
              auVar34 = *pauVar1;
              pauVar1 = (undefined1 (*) [16])(lVar32 + 0x110);
              uVar12 = *(undefined8 *)*pauVar1;
              auVar15 = *pauVar1;
              auVar14 = *pauVar1;
              local_98 = *(undefined8 *)(lVar32 + 0x1a8);
              uStack_a0 = *(undefined8 *)(lVar32 + 0x1a0);
              uVar6 = *(undefined4 *)(lVar32 + 0xdc);
              uVar7 = *(undefined4 *)(lVar32 + 0xe0);
              uStack_a8 = SUB168(*(undefined1 (*) [16])(lVar32 + 400),8);
              local_b0 = SUB168(*(undefined1 (*) [16])(lVar32 + 400),0);
              FUN_00f1eac4(&local_b0);
              local_b8 = 1.0 / extraout_s0;
              local_c8 = (undefined4)local_98;
              uStack_c4 = 0;
              local_f8 = 0x3f8000003f800000;
              fStack_b4 = 1.0 / extraout_var;
              auVar34 = NEON_ext(auVar34,auVar13,8,1);
              local_d8 = auVar34._0_8_;
              uStack_d0 = local_b0;
              auVar34 = NEON_ext(auVar14,auVar15,8,1);
              local_e8 = auVar34._0_8_;
              lVar20 = *(long *)(lVar23 + 0x108);
              lVar32 = *(long *)(lVar20 + 0x70);
              lVar30 = *(long *)(lVar20 + 0x78);
              local_100 = uVar6;
              uStack_fc = uVar7;
              local_f0 = uVar12;
              uStack_e0 = uVar35;
              local_c0 = extraout_s0;
              fStack_bc = extraout_var;
              if (lVar32 == lVar30) goto LAB_00ca52c0;
              lVar20 = *(long *)(lVar20 + 0x30);
              goto LAB_00ca4f0c;
            }
            lVar23 = *(long *)(lVar23 + 0x70);
            psVar2 = (short *)(lVar23 + 0x1a);
            do {
              sVar29 = *psVar2;
              cVar11 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar16) {
                *psVar2 = sVar29 + -1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
          }
          else {
            lVar23 = *(long *)(lVar23 + 0x70);
            psVar2 = (short *)(lVar23 + 0x1a);
            do {
              sVar29 = *psVar2;
              cVar11 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar16) {
                *psVar2 = sVar29 + -1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
          }
          if (sVar29 == 1) {
            *(undefined8 *)(lVar23 + 0x10) = 0;
            UNRECOVERED_JUMPTABLE = *(code **)(*plVar19 + 0x50);
LAB_00ca53d0:
                    /* WARNING: Could not recover jumptable at 0x00ca53ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)(plVar19);
            return;
          }
          goto LAB_00ca52e8;
        }
        sVar29 = sVar10;
      } while (sVar10 != 0);
    }
  }
  return;
LAB_00ca4f0c:
  uVar33 = *(ulong *)(lVar32 + 8);
  uVar17 = uVar33 >> 0x37;
  lVar3 = lVar20 + uVar17 * 0x20;
  plVar8 = (long *)(lVar3 + 0xd050);
  lVar18 = nn::os::GetCurrentThread();
  do {
    lVar21 = *plVar8;
    lVar25 = *(long *)(lVar3 + 0xd058);
    cVar11 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar16) {
      *plVar8 = lVar21;
      *(long *)(lVar3 + 0xd058) = lVar25;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  pLVar4 = (LightEventType *)(lVar3 + 0xd060);
LAB_00ca4f3c:
  while ((lVar21 != 0 && (lVar18 != lVar21))) {
    nn::os::WaitLightEvent(pLVar4);
    do {
      lVar21 = *plVar8;
      lVar25 = *(long *)(lVar3 + 0xd058);
      cVar11 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar16) {
        *plVar8 = lVar21;
        *(long *)(lVar3 + 0xd058) = lVar25;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  do {
    lVar5 = *plVar8;
    if (lVar5 != lVar21 || *(long *)(lVar3 + 0xd058) != lVar25) {
      bVar16 = false;
      ClearExclusiveLocal();
      goto LAB_00ca4f78;
    }
    cVar11 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar16) {
      *plVar8 = lVar21;
      *(long *)(lVar3 + 0xd054) = lVar25 + 1;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  bVar16 = true;
LAB_00ca4f78:
  if (!bVar16) {
    lVar21 = lVar5;
    lVar25 = *(long *)(lVar3 + 0xd058);
    goto LAB_00ca4f3c;
  }
  uVar22 = *(ulong *)(lVar20 + uVar17 * 0x68 + 0x50);
  if (uVar22 != 0) {
    uVar26 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
    uVar26 = (uVar26 & 0x3333333333333333) + (uVar26 >> 2 & 0x3333333333333333);
    uVar26 = (uVar26 + (uVar26 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar26 < 2) {
      uVar27 = uVar22 - 1 & uVar33;
    }
    else {
      uVar27 = uVar33;
      if (uVar22 <= uVar33) {
        uVar27 = 0;
        if (uVar22 != 0) {
          uVar27 = uVar33 / uVar22;
        }
        uVar27 = uVar33 - uVar27 * uVar22;
      }
    }
    plVar28 = *(long **)(*(long *)(lVar20 + uVar17 * 0x68 + 0x48) + uVar27 * 8);
    if ((plVar28 != (long *)0x0) && (plVar28 = (long *)*plVar28, plVar28 != (long *)0x0)) {
      if (uVar26 < 2) {
        do {
          if (plVar28[1] == uVar33) {
            if (plVar28[2] == uVar33) goto LAB_00ca505c;
          }
          else if ((plVar28[1] & uVar22 - 1) != uVar27) break;
          plVar28 = (long *)*plVar28;
        } while (plVar28 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar28[1];
          if (uVar17 == uVar33) {
            if (plVar28[2] == uVar33) goto LAB_00ca505c;
          }
          else {
            if (uVar22 <= uVar17) {
              uVar26 = 0;
              if (uVar22 != 0) {
                uVar26 = uVar17 / uVar22;
              }
              uVar17 = uVar17 - uVar26 * uVar22;
            }
            if (uVar17 != uVar27) break;
          }
          plVar28 = (long *)*plVar28;
        } while (plVar28 != (long *)0x0);
      }
    }
  }
  goto LAB_00ca50b4;
LAB_00ca505c:
  plVar28 = (long *)plVar28[4];
  if (plVar28 == (long *)0x0) {
LAB_00ca50b4:
    do {
      lVar18 = *plVar8;
      lVar21 = *(long *)(lVar3 + 0xd058);
      cVar11 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar16) {
        *plVar8 = lVar18;
        *(long *)(lVar3 + 0xd058) = lVar21;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    do {
      lVar25 = *plVar8;
      lVar5 = *(long *)(lVar3 + 0xd058);
      if (lVar25 != lVar18 || lVar5 != lVar21) {
        bVar16 = false;
        ClearExclusiveLocal();
        goto joined_r0x00ca5458;
      }
      cVar11 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar16) {
        *plVar8 = lVar18;
        *(long *)(lVar3 + 0xd054) = lVar21 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    bVar16 = true;
joined_r0x00ca5458:
    if (!bVar16) {
      do {
        lVar18 = *plVar8;
        lVar21 = *(long *)(lVar3 + 0xd058);
        if (lVar18 != lVar25 || lVar21 != lVar5) {
          bVar16 = false;
          ClearExclusiveLocal();
          lVar25 = lVar18;
          lVar5 = lVar21;
          goto joined_r0x00ca5458;
        }
        cVar11 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar16) {
          *plVar8 = lVar25;
          *(long *)(lVar3 + 0xd054) = lVar5 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      bVar16 = true;
      lVar25 = lVar18;
      lVar5 = lVar21;
      goto joined_r0x00ca5458;
    }
    nn::os::SignalLightEvent(pLVar4);
  }
  else {
    plVar9 = plVar28 + 5;
    do {
      lVar18 = *plVar9;
      cVar11 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar16) {
        *(int *)plVar9 = (int)lVar18 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if ((int)lVar18 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    do {
      lVar18 = *plVar8;
      lVar21 = *(long *)(lVar3 + 0xd058);
      cVar11 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar16) {
        *plVar8 = lVar18;
        *(long *)(lVar3 + 0xd058) = lVar21;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    do {
      lVar25 = *plVar8;
      lVar5 = *(long *)(lVar3 + 0xd058);
      if (lVar25 != lVar18 || lVar5 != lVar21) {
        bVar16 = false;
        ClearExclusiveLocal();
        goto joined_r0x00ca50cc;
      }
      cVar11 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar16) {
        *plVar8 = lVar18;
        *(long *)(lVar3 + 0xd054) = lVar21 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    bVar16 = true;
joined_r0x00ca50cc:
    if (!bVar16) {
      do {
        lVar18 = *plVar8;
        lVar21 = *(long *)(lVar3 + 0xd058);
        if (lVar18 != lVar25 || lVar21 != lVar5) {
          bVar16 = false;
          ClearExclusiveLocal();
          lVar25 = lVar18;
          lVar5 = lVar21;
          goto joined_r0x00ca50cc;
        }
        cVar11 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar16) {
          *plVar8 = lVar25;
          *(long *)(lVar3 + 0xd054) = lVar5 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      bVar16 = true;
      lVar25 = lVar18;
      lVar5 = lVar21;
      goto joined_r0x00ca50cc;
    }
    nn::os::SignalLightEvent(pLVar4);
    FUN_00d8fb98(auStack_88,&DAT_0459dbb8);
    FUN_01925908(plVar28,auStack_88,&local_c0);
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    FUN_00d8fb98(auStack_88,&DAT_0459dbd0);
    FUN_01925908(plVar28,auStack_88,&uStack_d0);
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    FUN_00d8fb98(auStack_88,&DAT_0459dbe8);
    FUN_01925908(plVar28,auStack_88,&uStack_e0);
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    FUN_00d8fb98(auStack_88,&DAT_0459dc00);
    FUN_01925908(plVar28,auStack_88,&local_f0);
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    FUN_00d8fb98(auStack_88,&DAT_0459dc18);
    FUN_01925908(plVar28,auStack_88,&local_100);
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    do {
      lVar3 = *plVar9;
      iVar31 = (int)lVar3 + -1;
      cVar11 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar16) {
        *(int *)plVar9 = iVar31;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (iVar31 == 0) {
      (**(code **)(*plVar28 + 0x10))(plVar28);
    }
    else if ((int)lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  lVar32 = lVar32 + 0x28;
  if (lVar32 == lVar30) {
LAB_00ca52c0:
    *(ulong *)(param_1 + 0x1a8) = uVar24;
    lVar23 = *(long *)(lVar23 + 0x70);
    psVar2 = (short *)(lVar23 + 0x1a);
    do {
      sVar29 = *psVar2;
      cVar11 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar16) {
        *psVar2 = sVar29 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (sVar29 == 1) {
      *(undefined8 *)(lVar23 + 0x10) = 0;
      (**(code **)(*plVar19 + 0x50))();
      return;
    }
LAB_00ca52e8:
    if (sVar29 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    return;
  }
  goto LAB_00ca4f0c;
}


