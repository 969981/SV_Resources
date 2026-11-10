/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fa52a0; name: FUN_00fa52a0
 */


/* WARNING: Removing unreachable block (ram,0x00fa57cc) */
/* WARNING: Removing unreachable block (ram,0x00fa57d0) */
/* WARNING: Removing unreachable block (ram,0x00fa57d8) */
/* WARNING: Removing unreachable block (ram,0x00fa57e0) */
/* WARNING: Removing unreachable block (ram,0x00fa5970) */
/* WARNING: Removing unreachable block (ram,0x00fa57e4) */
/* WARNING: Removing unreachable block (ram,0x00fa57e8) */

bool FUN_00fa52a0(long param_1)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  char *pcVar14;
  undefined8 uVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  long lVar19;
  code *pcVar20;
  bool bVar21;
  long *local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  long *local_160;
  code *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  long *local_140;
  undefined4 local_138;
  long *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long *local_c0;
  undefined4 local_b8;
  
  iVar3 = *(int *)(param_1 + 0x128);
  if (iVar3 == 2) {
    if (*(long *)(param_1 + 0x138) == 0) {
      return false;
    }
    if ((*(byte *)(*(long *)(param_1 + 0x138) + 0x1e8) & 1) == 0) {
      return false;
    }
    FUN_00fa5c0c(*(undefined8 *)(param_1 + 0x178),param_1 + 0x130);
    plVar8 = *(long **)(*(long *)(param_1 + 0x178) + 0x38);
    lVar9 = (**(code **)(*plVar8 + 0x50))(plVar8,0x626c7974,*(undefined8 *)(param_1 + 0x188));
    if (lVar9 == 0) {
      *(undefined4 *)(param_1 + 0x128) = 0;
      return false;
    }
    FUN_00fa5d8c(*(undefined8 *)(param_1 + 0x178));
    local_198 = (long *)0x0;
    local_180 = 0;
    uStack_178 = 0;
    local_170 = 0;
    uStack_168 = 0;
    plVar8 = *(long **)(param_1 + 0x178);
    if (plVar8 != (long *)0x0) {
      plVar12 = plVar8 + 5;
      do {
        lVar9 = *plVar12;
        cVar4 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar21) {
          *(int *)plVar12 = (int)lVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((int)lVar9 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    local_190 = 0;
    local_188 = *(undefined8 *)(param_1 + 0x188);
    local_170 = 0x4b000;
    local_198 = plVar8;
    FUN_00fa9474(*(undefined8 *)(param_1 + 0x170),&local_198);
    FUN_00eac828(*(undefined8 *)(*(long *)(param_1 + 0x170) + 0x3a8),param_1 + 0x1a0);
    plVar8 = *(long **)(param_1 + 0x170);
    local_e0 = (long *)&LAB_0216cfd8;
    local_d8 = FUN_02b3c280;
    local_d0 = &LAB_02b3c284;
    local_c8 = &LAB_02b3c290;
    local_148 = &LAB_02b3c290;
    local_158 = FUN_02b3c280;
    local_150 = &LAB_02b3c284;
    local_160 = (long *)&LAB_0216cfd8;
    local_140 = plVar8;
    local_c0 = plVar8;
    (**(code **)(**(long **)(plVar8[0x65] + 0x38) + 0x60))
              (*(long **)(plVar8[0x65] + 0x38),0x616e696d,&LAB_02b3b430,&local_160);
    pcVar20 = local_158;
    if (local_158 == (code *)0x0) {
      (**(code **)(**(long **)(plVar8[0x65] + 0x38) + 0x18))
                (*(long **)(plVar8[0x65] + 0x38),FUN_011c7f74);
      pcVar20 = FUN_02b3c280;
LAB_00fa5748:
      local_d0 = (undefined1 *)0x0;
      local_c8 = (undefined1 *)0x0;
      local_e0 = (long *)0x0;
      local_d8 = (code *)0x0;
      (*pcVar20)(&local_c0);
    }
    else {
      local_150 = (undefined1 *)0x0;
      local_148 = (undefined1 *)0x0;
      local_160 = (long *)0x0;
      local_158 = (code *)0x0;
      (*pcVar20)(&local_140);
      pcVar20 = local_d8;
      (**(code **)(**(long **)(plVar8[0x65] + 0x38) + 0x18))
                (*(long **)(plVar8[0x65] + 0x38),FUN_011c7f74);
      if (pcVar20 != (code *)0x0) goto LAB_00fa5748;
    }
    for (lVar9 = *(long *)(*(long *)(*(long *)(param_1 + 0x170) + 0x60) + 0x18); lVar9 != 0;
        lVar9 = FUN_00faadf0(lVar9)) {
      lVar13 = FUN_00fa5b78(lVar9,"InitVisible");
      if ((lVar13 != 0) && (*(int *)(lVar13 + (ulong)*(uint *)(lVar13 + 4)) == 0)) {
        *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) & 0xfe;
      }
    }
    if (local_198 == (long *)0x0) {
LAB_00fa57bc:
      *(undefined4 *)(param_1 + 0x128) = 3;
      return true;
    }
    plVar8 = local_198 + 5;
    do {
      lVar9 = *plVar8;
      iVar3 = (int)lVar9 + -1;
      cVar4 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar21) {
        *(int *)plVar8 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_198 + 0x10))();
      goto LAB_00fa57bc;
    }
    if ((int)lVar9 != 0) goto LAB_00fa57bc;
LAB_00fa5808:
    pcVar14 = "count != std::numeric_limits<uint32_t>::max()";
    pcVar16 = "DecrementReferenceInternal";
    pcVar17 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
    ;
    pcVar18 = "Reference counter underflows.";
LAB_00fa5828:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(pcVar14,pcVar16,pcVar17,0x58,pcVar18);
  }
  if (iVar3 != 1) {
    return iVar3 == 3;
  }
  FUN_00c9e664(&local_e0,param_1 + 0xe8);
  if (local_d8 == (code *)0x0) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(local_d8 + 0x48);
  }
  plVar8 = (long *)(lVar9 + 0x110);
  lVar19 = *plVar8;
  lVar13 = nn::os::GetCurrentThread();
  if (lVar13 != lVar19) {
    lVar13 = nn::os::GetCurrentThread();
    bVar21 = false;
LAB_00fa59d0:
    if (*plVar8 == 0) goto code_r0x00fa59d8;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x118));
    bVar21 = false;
    do {
      if (*plVar8 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x118));
          while (*plVar8 == 0) {
            cVar4 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar21) {
              *plVar8 = lVar13;
              cVar4 = ExclusiveMonitorsStatus();
            }
            bVar21 = false;
            if (cVar4 == '\0') goto LAB_00fa5490;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar13;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00fa5490;
  }
  bVar21 = true;
LAB_00fa5490:
  puVar7 = PTR_DAT_047d8dc0;
  plVar8 = *(long **)(lVar9 + 0x128);
  plVar12 = *(long **)(lVar9 + 0x130);
  if (plVar8 == plVar12) {
LAB_00fa5514:
    plVar8 = *(long **)(lVar9 + 0x160);
    plVar12 = *(long **)(lVar9 + 0x168);
    if (plVar8 != plVar12) {
      do {
        lVar13 = *plVar8;
        if (lVar13 != 0) {
          plVar10 = (long *)(*(code *)**(undefined8 **)(lVar13 + 8))((undefined8 *)(lVar13 + 8));
          FUN_00d8fac4();
          for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
            if (plVar10 == (long *)puVar7) {
              uVar11 = (**(code **)(*(long *)*plVar8 + 0xc0))();
              if (((uVar11 & 1) == 0) && (*(char *)(lVar13 + 0xfa) != '\0')) {
                lVar19 = *(long *)(lVar13 + 0x160);
                plVar10 = *(long **)(lVar13 + 0x178);
                if (plVar10 == (long *)0x0) {
                  lVar13 = *(long *)(param_1 + 0x180);
                }
                else {
                  (**(code **)(*plVar10 + 0x18))(plVar10);
                  lVar13 = *(long *)(param_1 + 0x180);
                  (**(code **)(*plVar10 + 0x20))(plVar10);
                }
                if (lVar19 == lVar13) goto LAB_00fa5584;
              }
              break;
            }
          }
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != plVar12);
      plVar8 = plVar12;
LAB_00fa5584:
      if (plVar8 != *(long **)(lVar9 + 0x168)) {
        lVar13 = 0;
        if (*plVar8 != 0) {
          lVar13 = *plVar8 + -0x20;
        }
        goto LAB_00fa5594;
      }
    }
    lVar13 = 0;
  }
  else {
    do {
      lVar13 = *plVar8;
      if (lVar13 != 0) {
        plVar10 = (long *)(*(code *)**(undefined8 **)(lVar13 + 8))((undefined8 *)(lVar13 + 8));
        FUN_00d8fac4();
        for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
          if (plVar10 == (long *)puVar7) {
            uVar11 = (**(code **)(*(long *)*plVar8 + 0xc0))();
            if (((uVar11 & 1) == 0) && (*(char *)(lVar13 + 0xfa) != '\0')) {
              lVar19 = *(long *)(lVar13 + 0x160);
              plVar10 = *(long **)(lVar13 + 0x178);
              if (plVar10 == (long *)0x0) {
                lVar13 = *(long *)(param_1 + 0x180);
              }
              else {
                (**(code **)(*plVar10 + 0x18))(plVar10);
                lVar13 = *(long *)(param_1 + 0x180);
                (**(code **)(*plVar10 + 0x20))(plVar10);
              }
              if (lVar19 == lVar13) goto LAB_00fa5508;
            }
            break;
          }
        }
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar12);
    plVar8 = plVar12;
LAB_00fa5508:
    if ((plVar8 == *(long **)(lVar9 + 0x130)) || (*plVar8 == 0)) goto LAB_00fa5514;
    lVar13 = *plVar8 + -0x20;
  }
LAB_00fa5594:
  if (!bVar21) {
    *(undefined8 *)(lVar9 + 0x110) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x118));
  }
  if (local_d8 != (code *)0x0) {
    pcVar20 = local_d8 + 0x28;
    do {
      iVar3 = *(int *)pcVar20;
      iVar6 = iVar3 + -1;
      cVar4 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(pcVar20,0x10);
      if (bVar21) {
        *(int *)pcVar20 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*(long *)local_d8 + 0x10))();
    }
    else if (iVar3 == 0) goto LAB_00fa5808;
  }
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x60))();
  }
  if ((lVar13 == 0) && (*(int *)(param_1 + 0x128) == 1)) {
    local_e0 = *(long **)(param_1 + 0x310);
    if (local_e0 != (long *)0x0) {
      (**(code **)(*local_e0 + 0x18))();
    }
    local_d8 = *(code **)(param_1 + 0x318);
    local_d0 = *(undefined1 **)(param_1 + 800);
    local_c8 = *(undefined1 **)(param_1 + 0x328);
    local_c0 = *(long **)(param_1 + 0x330);
    if (local_c0 != (long *)0x0) {
      (**(code **)(*local_c0 + 0x18))();
    }
    local_b8 = *(undefined4 *)(param_1 + 0x338);
    if (DAT_04841490 != (code *)0x0) {
      (*DAT_04841490)(&local_160,&DAT_048414b0,(undefined8 *)(param_1 + 0x310));
      plVar8 = local_e0;
      local_e0 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x20))();
      }
      plVar8 = local_c0;
      local_e0 = local_160;
      local_160 = (long *)0x0;
      local_d8 = local_158;
      local_d0 = local_150;
      local_c8 = local_148;
      local_c0 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x20))(plVar8);
      }
      local_c0 = local_140;
      local_140 = (long *)0x0;
      local_b8 = local_138;
      if (local_160 != (long *)0x0) {
        (**(code **)(*local_160 + 0x20))();
      }
    }
    uVar11 = FUN_00fa77bc(param_1 + 0x130,1,&local_e0,0,0);
    if (((uVar11 & 1) != 0) && (plVar8 = *(long **)(param_1 + 0x150), plVar8 != (long *)0x0)) {
      lVar9 = plVar8[6];
      if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar21) {
          *psVar1 = sVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 0) {
        uVar15 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
        *(undefined8 *)(lVar9 + 8) = uVar15;
        *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
        pcVar14 = "count != 0";
        pcVar16 = "AddReference";
        pcVar17 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
        ;
        pcVar18 = "Reference counter overflows.";
        goto LAB_00fa5828;
      }
      lVar9 = plVar8[6];
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar21) {
          *psVar1 = sVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar8 + 0x50))(plVar8);
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    plVar8 = *(long **)(param_1 + 0x198);
    if (plVar8 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x198) = 0;
    }
    else {
      (**(code **)(*plVar8 + 0x18))(plVar8);
      plVar12 = *(long **)(param_1 + 0x198);
      *(long **)(param_1 + 0x198) = plVar8;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
        plVar8 = *(long **)(param_1 + 0x198);
      }
    }
    *(undefined4 *)(param_1 + 0x128) = 2;
    *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 400);
    *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_1 + 0x180);
    *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0x188);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    plVar12 = *(long **)(param_1 + 0x108);
    *(long **)(param_1 + 0x108) = plVar8;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))();
    }
    if (local_c0 != (long *)0x0) {
      (**(code **)(*local_c0 + 0x20))();
    }
    if (local_e0 != (long *)0x0) {
      (**(code **)(*local_e0 + 0x20))();
    }
  }
  return false;
code_r0x00fa59d8:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar5) {
    *plVar8 = lVar13;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00fa5490;
  goto LAB_00fa59d0;
}


