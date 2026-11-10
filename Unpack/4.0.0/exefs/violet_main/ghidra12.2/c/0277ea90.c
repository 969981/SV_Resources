/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0277ea90; name: FUN_0277ea90
 */


void FUN_0277ea90(long *param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  code *pcVar11;
  long *plVar12;
  long lVar13;
  bool bVar14;
  long lVar15;
  code *pcVar16;
  ulong uVar17;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined1 auStack_168 [8];
  code *local_160;
  code *local_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  long local_140;
  undefined8 *puStack_138;
  long *local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  long *local_c0;
  undefined8 local_b8 [3];
  long *local_a0;
  long *local_80;
  
  if ((int)param_1[0x25] == 0 || (int)param_1[0x25] == 4) {
    return;
  }
  FUN_00c9e664(&local_160,param_1 + 0x1d);
  if (local_158 == (code *)0x0) {
    lVar15 = 0;
  }
  else {
    lVar15 = *(long *)(local_158 + 0x48);
  }
  plVar8 = (long *)(lVar15 + 0x110);
  lVar13 = *plVar8;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 != lVar13) {
    lVar7 = nn::os::GetCurrentThread();
LAB_0277eb1c:
    if (*plVar8 == 0) goto code_r0x0277eb24;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x118));
    do {
      if (*plVar8 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x118));
          while (*plVar8 == 0) {
            cVar3 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar14) {
              *plVar8 = lVar7;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_0277eb2c;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar14) {
        *plVar8 = lVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_0277eb2c:
    bVar14 = false;
    goto LAB_0277eb30;
  }
  bVar14 = true;
LAB_0277eb30:
  plVar8 = (long *)FUN_0277f480(*(undefined8 *)(lVar15 + 0x128),*(undefined8 *)(lVar15 + 0x130));
  if ((*(long **)(lVar15 + 0x130) == plVar8) || (*plVar8 == 0)) {
    plVar8 = (long *)FUN_0277f480(*(undefined8 *)(lVar15 + 0x160),*(undefined8 *)(lVar15 + 0x168));
    if (*(long **)(lVar15 + 0x168) == plVar8) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      if (*plVar8 != 0) {
        lVar7 = *plVar8 + -0x20;
      }
    }
  }
  else {
    lVar7 = *plVar8 + -0x20;
  }
  if (!bVar14) {
    *(undefined8 *)(lVar15 + 0x110) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x118));
  }
  if (local_158 != (code *)0x0) {
    pcVar11 = local_158 + 0x28;
    do {
      iVar6 = *(int *)pcVar11;
      iVar4 = iVar6 + -1;
      cVar3 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(pcVar11,0x10);
      if (bVar14) {
        *(int *)pcVar11 = iVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*(long *)local_158 + 0x10))();
    }
    else if (iVar6 == 0) goto LAB_0277f25c;
  }
  if (local_160 != (code *)0x0) {
    (**(code **)(*(long *)local_160 + 0x60))();
  }
  if (lVar7 == 0) {
    return;
  }
  if (*(int *)(lVar7 + 0x130) != 3) {
    return;
  }
  iVar6 = (int)param_1[0x25];
  if (iVar6 == 1) {
    uVar9 = FUN_0277f558(param_1[0x27]);
    if ((uVar9 & 1) == 0) {
      iVar6 = (int)param_1[0x25];
      goto LAB_0277f19c;
    }
    uVar9 = FUN_0277f578(param_1[0x27]);
    plVar8 = (long *)param_1[1];
    puVar10 = (undefined8 *)FUN_00e31554();
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar15 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar15 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar8;
    *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
    pcVar11 = (code *)(**(code **)(*plVar8 + 0x10))(plVar8,0x40,8);
    puVar5 = PTR_DAT_047d66f8;
    if (pcVar11 == (code *)0x0) {
      (**(code **)(*plVar8 + 0xe8))(plVar8);
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ptr","Create",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
                 ,0x40);
    }
    *(long *)(pcVar11 + 0x10) = 0;
    *(undefined4 *)(pcVar11 + 0x18) = 0;
    *(undefined **)pcVar11 = puVar5 + 0x10;
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar7 == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = 0;
      if (*(long *)(lVar7 + 0x80) != 0) {
        lVar13 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
      }
    }
    *(long *)(pcVar11 + 8) = lVar13;
    pcVar16 = pcVar11 + 0x28;
    *(int *)pcVar16 = 0;
    *(undefined ***)pcVar11 = &PTR_LAB_045de800;
    *(undefined ***)(pcVar11 + 0x20) = &PTR_LAB_045de858;
    *(undefined ***)(pcVar11 + 0x30) = &PTR_FUN_045de888;
    *(long *)(pcVar11 + 0x38) = 0;
    local_d8 = (long *)*puVar10;
    local_174 = 0;
    local_170 = 0x100;
    uStack_16c = 2;
    local_b8[0] = 0;
    local_160 = (code *)(uVar9 & 0xffffffff);
    lVar7 = FUN_011b3808(auStack_168,local_d8[1],&local_d8,&uStack_16c,&local_160,&local_170,
                         &local_174,local_b8);
    if (lVar7 != 0) {
      piVar1 = (int *)(lVar7 + 0x28);
      do {
        iVar6 = *piVar1;
        cVar3 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar14) {
          *piVar1 = iVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == -1) goto LAB_0277f410;
    }
    plVar12 = *(long **)(pcVar11 + 0x38);
    *(long *)(pcVar11 + 0x38) = 0;
    if (plVar12 != (long *)0x0) {
      plVar2 = plVar12 + 5;
      do {
        lVar13 = *plVar2;
        iVar6 = (int)lVar13 + -1;
        cVar3 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar14) {
          *(int *)plVar2 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar12 + 0x10))();
      }
      else if ((int)lVar13 == 0) goto LAB_0277f25c;
    }
    *(long *)(pcVar11 + 0x38) = lVar7;
    *(long **)(pcVar11 + 8) = plVar8;
    *(code **)(pcVar11 + 0x10) = pcVar11;
    *(undefined4 *)(pcVar11 + 0x18) = 0x80040;
    *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
    do {
      iVar6 = *(int *)pcVar16;
      cVar3 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(pcVar16,0x10);
      if (bVar14) {
        *(int *)pcVar16 = iVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == -1) goto LAB_0277f410;
    plVar8 = (long *)param_1[0x26];
    param_1[0x26] = 0;
    if (plVar8 != (long *)0x0) {
      plVar12 = plVar8 + 5;
      do {
        lVar15 = *plVar12;
        iVar6 = (int)lVar15 + -1;
        cVar3 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar14) {
          *(int *)plVar12 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar15 == 0) goto LAB_0277f25c;
    }
    param_1[0x26] = (long)pcVar11;
    local_b8[0] = CONCAT71(local_b8[0]._1_7_,(char)param_1[0x2f]);
    lVar15 = param_1[0x27];
    do {
      iVar6 = *(int *)pcVar16;
      cVar3 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(pcVar16,0x10);
      if (bVar14) {
        *(int *)pcVar16 = iVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    local_160 = pcVar11;
    if (iVar6 == -1) goto LAB_0277f410;
    FUN_011686e0(lVar15,&local_160,local_b8);
    if (local_160 != (code *)0x0) {
      pcVar11 = local_160 + 0x28;
      do {
        iVar6 = *(int *)pcVar11;
        iVar4 = iVar6 + -1;
        cVar3 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(pcVar11,0x10);
        if (bVar14) {
          *(int *)pcVar11 = iVar4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*(long *)local_160 + 0x10))();
      }
      else if (iVar6 == 0) goto LAB_0277f25c;
    }
    *(undefined4 *)(param_1 + 0x25) = 2;
LAB_0277eddc:
    FUN_00c9e664(&local_160,param_1 + 0x1d);
    if (local_158 == (code *)0x0) {
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(local_158 + 0x48);
    }
    plVar8 = (long *)(lVar15 + 0x110);
    lVar13 = *plVar8;
    lVar7 = nn::os::GetCurrentThread();
    if (lVar7 != lVar13) {
      lVar7 = nn::os::GetCurrentThread();
LAB_0277ee10:
      if (*plVar8 == 0) goto code_r0x0277ee18;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x118));
      do {
        if (*plVar8 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x118));
            while (*plVar8 == 0) {
              cVar3 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar14) {
                *plVar8 = lVar7;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_0277ee20;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar14) {
          *plVar8 = lVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_0277ee20:
      bVar14 = false;
      goto LAB_0277ee24;
    }
    bVar14 = true;
LAB_0277ee24:
    plVar8 = (long *)FUN_0277f480(*(undefined8 *)(lVar15 + 0x128),*(undefined8 *)(lVar15 + 0x130));
    if ((*(long **)(lVar15 + 0x130) == plVar8) || (*plVar8 == 0)) {
      plVar8 = (long *)FUN_0277f480(*(undefined8 *)(lVar15 + 0x160),*(undefined8 *)(lVar15 + 0x168))
      ;
      if (*(long **)(lVar15 + 0x168) == plVar8) {
        lVar7 = 0;
      }
      else {
        lVar7 = 0;
        if (*plVar8 != 0) {
          lVar7 = *plVar8 + -0x20;
        }
      }
    }
    else {
      lVar7 = *plVar8 + -0x20;
    }
    if (!bVar14) {
      *(undefined8 *)(lVar15 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x118));
    }
    if (local_158 != (code *)0x0) {
      pcVar11 = local_158 + 0x28;
      do {
        iVar6 = *(int *)pcVar11;
        iVar4 = iVar6 + -1;
        cVar3 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(pcVar11,0x10);
        if (bVar14) {
          *(int *)pcVar11 = iVar4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*(long *)local_158 + 0x10))();
      }
      else if (iVar6 == 0) goto LAB_0277f25c;
    }
    if (local_160 != (code *)0x0) {
      (**(code **)(*(long *)local_160 + 0x60))();
    }
    if ((lVar7 != 0) && (*(int *)(lVar7 + 0x130) == 3)) {
      lVar15 = *(long *)(lVar7 + 0x120);
      if (lVar15 != 0) {
        piVar1 = (int *)(lVar15 + 0x28);
        do {
          iVar6 = *piVar1;
          cVar3 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar14) {
            *piVar1 = iVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 == -1) {
LAB_0277f410:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
      }
      plVar8 = (long *)param_1[0x24];
      param_1[0x24] = lVar15;
      if (plVar8 != (long *)0x0) {
        plVar12 = plVar8 + 5;
        do {
          lVar15 = *plVar12;
          iVar6 = (int)lVar15 + -1;
          cVar3 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar14) {
            *(int *)plVar12 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
        else if ((int)lVar15 == 0) {
LAB_0277f25c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      (**(code **)(*param_1 + 0x130))(param_1);
      *(undefined4 *)(param_1 + 0x25) = 3;
      goto LAB_0277ef1c;
    }
  }
  else {
LAB_0277f19c:
    if (iVar6 == 2) goto LAB_0277eddc;
  }
  if ((int)param_1[0x25] != 3) {
    return;
  }
LAB_0277ef1c:
  if (param_1[0x24] != 0) {
    local_d8 = (long *)&DAT_80aab8649adc4b33;
    pcStack_d0 = "World";
    local_c8 = 5;
    local_c0 = (long *)0x0;
    (**(code **)(*DAT_0485a020 + 0xa8))(local_b8,DAT_0485a020,&local_d8);
    if (local_c0 != (long *)0x0) {
      (**(code **)(*local_c0 + 0x20))();
    }
    local_140 = DAT_0485a0d8 + 0x38;
    local_160 = FUN_0277fa08;
    local_158 = FUN_02bd9148;
    local_150 = &LAB_02bd914c;
    puStack_148 = &LAB_02bd9158;
    puStack_138 = local_b8;
    FUN_01775724(param_1[0x24],&local_160);
    pcVar11 = local_158;
    if (local_158 != (code *)0x0) {
      local_150 = (undefined1 *)0x0;
      puStack_148 = (undefined1 *)0x0;
      local_160 = (code *)0x0;
      local_158 = (code *)0x0;
      (*pcVar11)(&local_140);
    }
    plVar12 = *(long **)(param_1[0x24] + 0x90);
    for (plVar8 = *(long **)(param_1[0x24] + 0x88); plVar8 != plVar12; plVar8 = plVar8 + 1) {
      lVar15 = *plVar8;
      if ((int)((ulong)(*(long *)(lVar15 + 0x78) - *(long *)(lVar15 + 0x70)) >> 3) * -0x33333333 !=
          0) {
        uVar9 = 0;
        do {
          FUN_00c5ecb4(&local_d8,*(undefined8 *)(lVar15 + 0x30),
                       *(long *)(lVar15 + 0x70) + uVar9 * 0x28);
          if (((((int)((ulong)(local_d8[0x27] - local_d8[0x26]) >> 5) != 0) &&
               (FUN_01086da0(local_d8,local_d8[0x26],local_b8),
               (local_d8[0x27] - local_d8[0x26] & 0x1fffffffc0U) != 0)) &&
              (FUN_01086da0(local_d8,local_d8[0x26] + 0x20,local_b8),
              0x40 < (local_d8[0x27] - local_d8[0x26] & 0x1fffffffe0U))) &&
             (FUN_01086da0(local_d8,local_d8[0x26] + 0x40,local_b8),
             (local_d8[0x27] - local_d8[0x26] & 0x1fffffff80U) != 0)) {
            lVar15 = 0x60;
            uVar17 = 3;
            do {
              FUN_01086da0(local_d8,local_d8[0x26] + lVar15,local_b8);
              uVar17 = uVar17 + 1;
              lVar15 = lVar15 + 0x20;
            } while (uVar17 < ((ulong)(local_d8[0x27] - local_d8[0x26]) >> 5 & 0xffffffff));
          }
          FUN_010f7c04();
          if (local_d8 != (long *)0x0) {
            plVar2 = local_d8 + 5;
            do {
              lVar15 = *plVar2;
              iVar6 = (int)lVar15 + -1;
              cVar3 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar14) {
                *(int *)plVar2 = iVar6;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar6 == 0) {
              (**(code **)(*local_d8 + 0x10))();
            }
            else if ((int)lVar15 == 0) goto LAB_0277f25c;
          }
          lVar15 = *plVar8;
          uVar9 = uVar9 + 1;
        } while (uVar9 < (uint)((int)((ulong)(*(long *)(lVar15 + 0x78) - *(long *)(lVar15 + 0x70))
                                     >> 3) * -0x33333333));
      }
    }
    *(undefined4 *)(param_1 + 0x25) = 4;
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    if (local_a0 != (long *)0x0) {
      (**(code **)(*local_a0 + 0x20))();
    }
  }
  return;
code_r0x0277eb24:
  cVar3 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar14) {
    *plVar8 = lVar7;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_0277eb2c;
  goto LAB_0277eb1c;
code_r0x0277ee18:
  cVar3 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar14) {
    *plVar8 = lVar7;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_0277ee20;
  goto LAB_0277ee10;
}


