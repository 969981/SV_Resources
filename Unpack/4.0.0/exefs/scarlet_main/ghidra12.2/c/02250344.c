/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02250344; name: FUN_02250344
 */


void FUN_02250344(undefined8 param_1)

{
  short *psVar1;
  long *plVar2;
  char **ppcVar3;
  short sVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  undefined4 uVar15;
  long lVar16;
  long lVar17;
  bool bVar18;
  short sVar19;
  long *plVar20;
  long *local_180;
  undefined8 local_178;
  char *pcStack_170;
  undefined8 local_168;
  long *local_160;
  undefined8 local_158;
  char *pcStack_150;
  undefined8 local_148;
  long *local_140;
  undefined1 *local_138;
  char *pcStack_130;
  undefined8 local_128;
  long *local_120;
  long *local_118;
  undefined1 local_110 [8];
  long *local_108;
  char *local_100;
  undefined8 uStack_f8;
  long *local_f0;
  long *local_e8;
  long local_e0 [2];
  ulong local_d0;
  char *local_c8;
  undefined8 local_c0;
  long *local_b8;
  long *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long *local_90;
  long local_88 [2];
  char local_78 [8];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  
  local_d0 = 0xbba050815142c8e;
  local_c8 = "Camera";
  local_c0 = 6;
  local_b8 = (long *)0x0;
  FUN_01315eac(local_78,param_1,&local_d0);
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (local_78[0] == '\0') {
    return;
  }
  local_a8 = local_70;
  uStack_a0 = uStack_68;
  local_98 = local_60;
  local_90 = local_58;
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))();
  }
  FUN_0140f318(local_88,param_1,&local_a8);
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_88[0] != 0) {
    if (*(short *)(local_88[0] + 0x1a) != 0) {
      psVar1 = (short *)(local_88[0] + 0x1a);
      sVar19 = *(short *)(local_88[0] + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar19) {
          cVar5 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar18) {
            *psVar1 = sVar19 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_02250478;
          bVar18 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02250478:
          bVar18 = false;
        }
        if (bVar18) {
          lVar16 = *(long *)(local_88[0] + 0x10);
          if (lVar16 == 0) goto LAB_02250564;
          lVar7 = FUN_00ded3a0(lVar16 + 0xe0,&local_d0);
          if (lVar7 == 0) goto LAB_0225054c;
          local_138 = &DAT_94ed70272cac328;
          pcStack_130 = "Target";
          local_128 = 6;
          local_120 = (long *)0x0;
          FUN_01315eac(&local_d0,param_1,&local_138);
          if (local_120 != (long *)0x0) {
            (**(code **)(*local_120 + 0x20))();
          }
          if ((char)local_d0 == '\0') goto LAB_0225054c;
          local_100 = local_c8;
          uStack_f8 = local_c0;
          local_f0 = local_b8;
          local_e8 = local_b0;
          if (local_b0 != (long *)0x0) {
            (**(code **)(*local_b0 + 0x18))();
          }
          FUN_0140f318(local_e0,param_1,&local_100);
          if (local_e8 != (long *)0x0) {
            (**(code **)(*local_e8 + 0x20))();
          }
          if (local_e0[0] == 0) goto LAB_02250538;
          if (*(short *)(local_e0[0] + 0x1a) == 0) goto LAB_0225083c;
          psVar1 = (short *)(local_e0[0] + 0x1a);
          sVar19 = *(short *)(local_e0[0] + 0x1a);
          goto LAB_022505f4;
        }
        sVar19 = sVar4;
      } while (sVar4 != 0);
LAB_02250560:
      if (local_88[0] == 0) goto LAB_022503e4;
    }
LAB_02250564:
    psVar1 = (short *)(local_88[0] + 0x18);
    do {
      sVar19 = *psVar1;
      cVar5 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar18) {
        *psVar1 = sVar19 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar19 == 1) {
      FUN_0116e168();
    }
    else if (sVar19 == 0) {
LAB_02250584:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
LAB_022503e4:
  if ((local_78[0] != '\0') && (local_58 != (long *)0x0)) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
LAB_022505f4:
  sVar4 = *psVar1;
  if (sVar4 == sVar19) {
    cVar5 = '\x01';
    bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar18) {
      *psVar1 = sVar19 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 != '\0') goto LAB_02250618;
    bVar18 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_02250618:
    bVar18 = false;
  }
  if (!bVar18) goto code_r0x02250620;
  lVar17 = *(long *)(local_e0[0] + 0x10);
  if (lVar17 == 0) goto LAB_0225083c;
  lVar8 = FUN_0104b474(lVar17 + 0xe0,&local_138);
  if (lVar8 != 0) {
    FUN_019070c4(&local_108,DAT_0485a0f0,1);
    local_110[0] = 1;
    plVar20 = *(long **)(lVar8 + 0x170);
    if (plVar20 != (long *)0x0) {
      lVar8 = plVar20[6];
      if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar19 = *psVar1;
        cVar5 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar18) {
          *psVar1 = sVar19 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar19 == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
        *(undefined8 *)(lVar8 + 8) = uVar10;
        *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
      }
      else if (sVar19 == -1) {
        pcVar11 = "count != 0";
        pcVar12 = "AddReference";
        pcVar13 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
        ;
        pcVar14 = "Reference counter overflows.";
        goto LAB_022509b4;
      }
    }
    local_158 = 0x5bfad84d1b58751c;
    pcStack_150 = "PicturePaneName";
    local_148 = 0xf;
    local_140 = (long *)0x0;
    FUN_01315eac(&local_138,param_1,&local_158);
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_178 = 0x7f0b22bc9dcc4a70;
    pcStack_170 = "TextureIndex";
    ppcVar3 = (char **)PTR_DAT_047d3e30;
    if ((char)local_138 != '\0') {
      ppcVar3 = &pcStack_130;
    }
    local_168 = 0xc;
    local_160 = (long *)0x0;
    uVar9 = FUN_01470908(param_1,&local_178);
    uVar15 = 0;
    if ((uVar9 & 0xff) != 0) {
      uVar15 = (undefined4)(uVar9 >> 0x20);
    }
    local_180 = local_108;
    if (local_108 != (long *)0x0) {
      plVar2 = local_108 + 5;
      do {
        lVar8 = *plVar2;
        cVar5 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar18) {
          *(int *)plVar2 = (int)lVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar8 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    FUN_0113c2d0(plVar20,ppcVar3,uVar15,&local_180,local_110);
    if (local_180 != (long *)0x0) {
      plVar2 = local_180 + 5;
      do {
        lVar8 = *plVar2;
        iVar6 = (int)lVar8 + -1;
        cVar5 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar18) {
          *(int *)plVar2 = iVar6;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*local_180 + 0x10))();
        goto LAB_022507a4;
      }
      if ((int)lVar8 != 0) goto LAB_022507a4;
LAB_02250958:
      pcVar11 = "count != std::numeric_limits<uint32_t>::max()";
      pcVar12 = "DecrementReferenceInternal";
      pcVar13 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
      ;
      pcVar14 = "Reference counter underflows.";
LAB_022509b4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl(pcVar11,pcVar12,pcVar13,0x58,pcVar14);
    }
LAB_022507a4:
    if (local_160 != (long *)0x0) {
      (**(code **)(*local_160 + 0x20))();
    }
    if ((char)local_138 != '\0') {
      if (local_118 != (long *)0x0) {
        (**(code **)(*local_118 + 0x20))();
      }
      local_138 = (undefined1 *)((ulong)local_138 & 0xffffffffffffff00);
    }
    if (local_140 != (long *)0x0) {
      (**(code **)(*local_140 + 0x20))();
    }
    if (plVar20 != (long *)0x0) {
      lVar8 = plVar20[6];
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar19 = *psVar1;
        cVar5 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar18) {
          *psVar1 = sVar19 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar19 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*plVar20 + 0x50))(plVar20);
      }
      else if (sVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    lVar8 = DAT_0485a0f0;
    *(undefined1 *)(*(long *)(DAT_0485a0f0 + 0x30) + 0x50) = 1;
    FUN_02250a20(&local_138,lVar8,1);
    FUN_01f9d3b4(lVar7,&local_138,1);
    if (local_120 != (long *)0x0) {
      (**(code **)(*local_120 + 0x20))();
    }
    if (local_108 != (long *)0x0) {
      plVar20 = local_108 + 5;
      do {
        lVar7 = *plVar20;
        iVar6 = (int)lVar7 + -1;
        cVar5 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar18) {
          *(int *)plVar20 = iVar6;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*local_108 + 0x10))();
      }
      else if ((int)lVar7 == 0) goto LAB_02250958;
    }
  }
  (**(code **)(*(long *)(lVar17 + -0x28) + 0x60))((long *)(lVar17 + -0x28));
LAB_02250838:
  if (local_e0[0] != 0) {
LAB_0225083c:
    psVar1 = (short *)(local_e0[0] + 0x18);
    do {
      sVar19 = *psVar1;
      cVar5 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar18) {
        *psVar1 = sVar19 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar19 == 1) {
      FUN_0116e168();
    }
    else if (sVar19 == 0) goto LAB_02250584;
  }
LAB_02250538:
  if ((char)local_d0 != '\0') {
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x20))();
    }
    local_d0 = local_d0 & 0xffffffffffffff00;
  }
LAB_0225054c:
  (**(code **)(*(long *)(lVar16 + -0x28) + 0x60))((long *)(lVar16 + -0x28));
  goto LAB_02250560;
code_r0x02250620:
  sVar19 = sVar4;
  if (sVar4 == 0) goto LAB_02250838;
  goto LAB_022505f4;
}


