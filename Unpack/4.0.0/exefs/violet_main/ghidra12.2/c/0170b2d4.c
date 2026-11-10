/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0170b2d4; name: FUN_0170b2d4
 */


void FUN_0170b2d4(undefined8 *param_1)

{
  long *plVar1;
  ulong *puVar2;
  short sVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  int extraout_var;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  char *pcVar12;
  int *piVar13;
  ulong *puVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *local_98;
  ulong local_90;
  long lStack_88;
  long local_80;
  long *local_78;
  int local_6c [3];
  
  *param_1 = &DAT_045d6788;
  plVar15 = (long *)param_1[0x28];
  param_1[4] = &PTR_LAB_045d6890;
  param_1[5] = &PTR_LAB_045d6970;
  lVar8 = DAT_0485a0f8;
  puVar14 = (ulong *)PTR_DAT_047d8b70;
  if (plVar15 != (long *)0x0) {
    puVar14 = (ulong *)(plVar15 + 6);
  }
  local_90 = *puVar14;
  plVar17 = (long *)PTR_PTR_047d4508;
  if (plVar15 != (long *)0x0) {
    plVar17 = plVar15 + 7;
  }
  lStack_88 = *plVar17;
  if (plVar15 == (long *)0x0) {
    local_80 = 0;
  }
  else {
    local_80 = plVar15[8];
  }
  local_78 = (long *)0x0;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x18))(plVar15);
  }
  local_78 = plVar15;
  FUN_0170c22c(lVar8,&local_90,param_1[0x29]);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  plVar15 = param_1 + 0x36;
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar15 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar6) {
      *plVar15 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_0170b394;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x37));
  do {
    if (*plVar15 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x37));
        while (*plVar15 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar6) {
            *plVar15 = lVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_0170b394;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar6) {
      *plVar15 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0170b394:
  FUN_011efbc4(param_1 + 0x2b);
  FUN_0170be6c(param_1);
  param_1[0x36] = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x37));
  plVar15 = (long *)param_1[0x40];
  plVar17 = (long *)param_1[0x41];
  if (plVar15 != plVar17) {
    do {
      *(undefined1 *)(*plVar15 + 0x288) = 0;
      plVar16 = *(long **)(*plVar15 + 0x58);
      if (plVar16 != (long *)0x0) {
        plVar9 = plVar16 + 5;
        do {
          lVar8 = *plVar9;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *(int *)plVar9 = (int)lVar8 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((int)lVar8 == -1) goto LAB_0170bb30;
      }
      local_98 = (long *)0x0;
      local_90 = local_90 & 0xffffffffffffff00;
      FUN_00d8219c(plVar16,0,&local_98,0xffffffff,&local_90);
      if (local_98 != (long *)0x0) {
        plVar9 = local_98 + 5;
        do {
          lVar8 = *plVar9;
          iVar7 = (int)lVar8 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *(int *)plVar9 = iVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*local_98 + 0x10))();
        }
        else if ((int)lVar8 == 0) goto LAB_0170b674;
      }
      if (plVar16 != (long *)0x0) {
        plVar9 = plVar16 + 5;
        do {
          lVar8 = *plVar9;
          iVar7 = (int)lVar8 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *(int *)plVar9 = iVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
        else if ((int)lVar8 == 0) goto LAB_0170b674;
      }
      plVar16 = *(long **)(*plVar15 + 0x58);
      if (plVar16 != (long *)0x0) {
        plVar9 = plVar16 + 5;
        do {
          lVar8 = *plVar9;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *(int *)plVar9 = (int)lVar8 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((int)lVar8 == -1) goto LAB_0170bb30;
      }
      local_98 = (long *)0x0;
      local_90 = local_90 & 0xffffffffffffff00;
      FUN_00d829fc(plVar16,&local_98,&local_90);
      if (local_98 != (long *)0x0) {
        plVar9 = local_98 + 5;
        do {
          lVar8 = *plVar9;
          iVar7 = (int)lVar8 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *(int *)plVar9 = iVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*local_98 + 0x10))();
        }
        else if ((int)lVar8 == 0) goto LAB_0170b674;
      }
      if (plVar16 != (long *)0x0) {
        plVar9 = plVar16 + 5;
        do {
          lVar8 = *plVar9;
          iVar7 = (int)lVar8 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *(int *)plVar9 = iVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
        else if ((int)lVar8 == 0) goto LAB_0170b674;
      }
      (**(code **)(*DAT_0485a020 + 0x80))(DAT_0485a020,0);
      plVar16 = *(long **)(*plVar15 + 0x58);
      if (plVar16 != (long *)0x0) {
        plVar9 = plVar16 + 5;
        do {
          lVar8 = *plVar9;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *(int *)plVar9 = (int)lVar8 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((int)lVar8 == -1) goto LAB_0170bb30;
      }
      local_6c[0] = extraout_var + 0xc;
      local_98 = (long *)0x0;
      local_6c[1] = 2;
      local_90 = local_90 & 0xffffffffffffff00;
      piVar13 = (int *)plVar16[0x22];
      if (piVar13 != (int *)plVar16[0x23]) {
LAB_0170b54c:
        if ((*piVar13 != 2) || (piVar13[1] != local_6c[0])) goto LAB_0170b564;
        plVar9 = *(long **)(piVar13 + 2);
        piVar13[2] = 0;
        piVar13[3] = 0;
        if (plVar9 != (long *)0x0) {
          plVar1 = plVar9 + 5;
          do {
            lVar8 = *plVar1;
            iVar7 = (int)lVar8 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *(int *)plVar1 = iVar7;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar7 == 0) {
            (**(code **)(*plVar9 + 0x10))();
          }
          else if ((int)lVar8 == 0) {
            pcVar12 = 
            "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
            ;
            goto LAB_0170b694;
          }
        }
        goto LAB_0170b59c;
      }
LAB_0170bb04:
      FUN_00d11148(plVar16 + 0x22,local_6c + 1,local_6c,&local_98,&local_90);
LAB_0170b59c:
      if (local_98 != (long *)0x0) {
        plVar9 = local_98 + 5;
        do {
          lVar8 = *plVar9;
          iVar7 = (int)lVar8 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *(int *)plVar9 = iVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*local_98 + 0x10))();
        }
        else if ((int)lVar8 == 0) goto LAB_0170b674;
      }
      if (plVar16 != (long *)0x0) {
        plVar9 = plVar16 + 5;
        do {
          lVar8 = *plVar9;
          iVar7 = (int)lVar8 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *(int *)plVar9 = iVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
        else if ((int)lVar8 == 0) goto LAB_0170b674;
      }
      if (param_1[0x62] == 0) {
        plVar16 = *(long **)(*plVar15 + 0x58);
        if (plVar16 == (long *)0x0) {
          FUN_0170bbb8(0);
        }
        else {
          plVar9 = plVar16 + 5;
          do {
            lVar8 = *plVar9;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar6) {
              *(int *)plVar9 = (int)lVar8 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((int)lVar8 == -1) {
LAB_0170bb30:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
          FUN_0170bbb8(plVar16);
          do {
            lVar8 = *plVar9;
            iVar7 = (int)lVar8 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar6) {
              *(int *)plVar9 = iVar7;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar7 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
          else if ((int)lVar8 == 0) goto LAB_0170b674;
        }
      }
      plVar15 = plVar15 + 1;
    } while (plVar15 != plVar17);
    plVar15 = (long *)param_1[0x40];
    plVar17 = (long *)param_1[0x41];
    while (plVar17 != plVar15) {
      plVar17 = plVar17 + -1;
      plVar16 = (long *)*plVar17;
      if (plVar16 != (long *)0x0) {
        plVar9 = plVar16 + 5;
        do {
          lVar8 = *plVar9;
          iVar7 = (int)lVar8 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *(int *)plVar9 = iVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar16 + 0x10))();
        }
        else if ((int)lVar8 == 0) goto LAB_0170b674;
      }
    }
  }
  plVar17 = (long *)param_1[0xc];
  param_1[0x41] = plVar15;
  param_1[0xc] = 0;
  if (plVar17 != (long *)0x0) {
    plVar15 = plVar17 + 5;
    do {
      lVar8 = *plVar15;
      iVar7 = (int)lVar8 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar17 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_0170b674;
  }
  if (param_1[0x62] != 0) {
    FUN_0170c508();
    FUN_016bba94(param_1 + 0x62);
  }
  local_90 = CONCAT44(local_90._4_4_,*(undefined4 *)(param_1 + 0x2a));
  FUN_00c44438(DAT_0485a0f8 + 0x140,&local_90);
  if ((long *)param_1[99] != (long *)0x0) {
    (**(code **)(*(long *)param_1[99] + 0x20))();
  }
  plVar15 = (long *)param_1[0x62];
  if (plVar15 != (long *)0x0) {
    plVar17 = plVar15 + 5;
    do {
      lVar8 = *plVar17;
      iVar7 = (int)lVar8 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar15 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_0170b674;
  }
  FUN_00f60478(param_1 + 0x54);
  FUN_00f60478(param_1 + 0x47);
  FUN_0170bd4c(param_1 + 0x40);
  lVar8 = param_1[0x39];
  if (lVar8 != 0) {
    lVar4 = param_1[0x3b];
    plVar15 = (long *)param_1[0x3c];
    param_1[0x3a] = lVar8;
    uVar10 = (**(code **)(*plVar15 + 0xf8))(plVar15);
    if (((uVar10 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar15 + 0x18))(plVar15,lVar8,lVar4 - lVar8,4);
    }
    else {
      FUN_00c48fe8(plVar15,lVar8,lVar4 - lVar8,4);
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x37));
  FUN_011efa60(param_1 + 0x2b);
  if ((long *)param_1[0x28] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x28] + 0x20))();
  }
  plVar15 = (long *)param_1[0xc];
  if (plVar15 != (long *)0x0) {
    plVar17 = plVar15 + 5;
    do {
      lVar8 = *plVar17;
      iVar7 = (int)lVar8 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar15 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_0170b674;
  }
  plVar15 = (long *)param_1[0xb];
  if (plVar15 != (long *)0x0) {
    plVar17 = plVar15 + 5;
    do {
      lVar8 = *plVar17;
      iVar7 = (int)lVar8 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar15 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_0170b674;
  }
  plVar15 = (long *)param_1[10];
  if (plVar15 != (long *)0x0) {
    plVar17 = plVar15 + 5;
    do {
      lVar8 = *plVar17;
      iVar7 = (int)lVar8 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar15 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_0170b674;
  }
  plVar15 = (long *)param_1[9];
  if (plVar15 != (long *)0x0) {
    plVar17 = plVar15 + 5;
    do {
      lVar8 = *plVar17;
      iVar7 = (int)lVar8 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar15 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_0170b674;
  }
  plVar15 = (long *)param_1[8];
  if (plVar15 != (long *)0x0) {
    plVar17 = plVar15 + 5;
    do {
      lVar8 = *plVar17;
      iVar7 = (int)lVar8 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar15 + 0x10))();
    }
    else if ((int)lVar8 == 0) {
LAB_0170b674:
      pcVar12 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
      ;
LAB_0170b694:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 pcVar12,0x58,"Reference counter underflows.");
    }
  }
  *param_1 = &PTR_LAB_045d69c8;
  param_1[4] = &PTR_LAB_045d6a40;
  param_1[5] = &PTR_LAB_045d6b20;
  puVar14 = (ulong *)param_1[6];
  if (puVar14 != (ulong *)0x0) {
    puVar2 = puVar14 + 3;
    do {
      sVar3 = (short)*puVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar6) {
        *(short *)puVar2 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      piVar13 = (int *)((long)puVar14 + 0x1c);
      do {
        iVar7 = *piVar13;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar6) {
          *piVar13 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_90 = *puVar14;
        FUN_00c44438(lVar8 + 0x8040,&local_90);
      }
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
LAB_0170b564:
  piVar13 = piVar13 + 8;
  if ((int *)plVar16[0x23] == piVar13) goto LAB_0170bb04;
  goto LAB_0170b54c;
}


