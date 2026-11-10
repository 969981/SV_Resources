/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cd58c8; name: FUN_00cd58c8
 */


void FUN_00cd58c8(long param_1,undefined8 *param_2)

{
  int *piVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  byte *pbVar12;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  long *local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  byte *pbStack_50;
  size_t local_48;
  long *local_40;
  undefined1 auStack_38 [8];
  
  plVar8 = (long *)FUN_0145966c();
  pbStack_50 = (byte *)(**(code **)(*plVar8 + 0x28))(plVar8,3);
  if (pbStack_50 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_58 = *(long **)PTR_DAT_047d3e30;
    pbStack_50 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_48 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_40 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 0x18))();
    }
  }
  else {
    local_48 = strlen((char *)pbStack_50);
    bVar3 = *pbStack_50;
    local_58 = (long *)&DAT_cbf29ce484222645;
    pbVar12 = pbStack_50;
    while (bVar3 != 0) {
      pbVar12 = pbVar12 + 1;
      local_58 = (long *)(((ulong)local_58 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar12;
    }
    local_40 = (long *)0x0;
  }
  local_80 = (long *)0x43b9360065e01a84;
  pcStack_78 = "culling_prim";
  local_70 = 0xc;
  local_68 = (long *)0x0;
  FUN_00cd6160(&local_60,*param_2,&local_58,&local_80,*(undefined8 *)(param_1 + 8));
  plVar8 = *(long **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (plVar8 != (long *)0x0) {
    plVar10 = plVar8 + 5;
    do {
      lVar9 = *plVar10;
      iVar7 = (int)lVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *(int *)plVar10 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar9 == 0) goto LAB_00cd5e38;
  }
  plVar8 = local_60;
  local_60 = (long *)0x0;
  *(long **)(param_1 + 0x68) = plVar8;
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
    plVar8 = *(long **)(param_1 + 0x68);
  }
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (plVar8 != (long *)0x0) {
    local_88 = 0x10000;
    uStack_84 = 0x800;
    local_90 = 0x40000;
    uStack_8c = 0x2000;
    plVar8 = (long *)(param_1 + 0x70);
    if (*plVar8 == 0) {
      local_48 = local_48 & 0xffffffff00000000;
      local_58 = (long *)0x8010;
      pbStack_50 = &DAT_00000020;
      (*DAT_04859f60)(&local_60,&DAT_04859f80);
      local_80 = local_60;
      lVar9 = FUN_00cf3764(auStack_38,local_60[1],&local_80);
      if (lVar9 != 0) {
        piVar1 = (int *)(lVar9 + 0x28);
        do {
          iVar7 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 == -1) goto LAB_00cd5fbc;
      }
      FUN_00d560a0(lVar9,&local_58,2,0,0);
      plVar10 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar10 != (long *)0x0) {
        plVar2 = plVar10 + 5;
        do {
          lVar6 = *plVar2;
          iVar7 = (int)lVar6 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar10 + 0x10))();
        }
        else if ((int)lVar6 == 0) goto LAB_00cd5e38;
      }
      *plVar8 = lVar9;
      if (local_60 != (long *)0x0) {
        plVar10 = local_60 + 5;
        do {
          lVar9 = *plVar10;
          iVar7 = (int)lVar9 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *(int *)plVar10 = iVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*local_60 + 0x10))();
        }
        else if ((int)lVar9 == 0) goto LAB_00cd5e38;
      }
      FUN_00c896e4(*(undefined8 *)(*(long *)(param_1 + 0x68) + 200),0x20,0,plVar8);
    }
    if (*(long *)(param_1 + 0x78) == 0) {
      local_58 = (long *)&DAT_00000080;
      lVar9 = FUN_00cd6018(*(undefined8 *)(param_1 + 8),&local_58,&uStack_84);
      if (lVar9 != 0) {
        piVar1 = (int *)(lVar9 + 0x28);
        do {
          iVar7 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 == -1) goto LAB_00cd5fbc;
      }
      plVar8 = *(long **)(param_1 + 0x78);
      *(undefined8 *)(param_1 + 0x78) = 0;
      if (plVar8 != (long *)0x0) {
        plVar10 = plVar8 + 5;
        do {
          lVar6 = *plVar10;
          iVar7 = (int)lVar6 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *(int *)plVar10 = iVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
        else if ((int)lVar6 == 0) goto LAB_00cd5e38;
      }
      *(long *)(param_1 + 0x78) = lVar9;
      uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 200);
      local_58 = *(long **)(lVar9 + 0x60);
      if (local_58 != (long *)0x0) {
        plVar8 = local_58 + 5;
        do {
          lVar9 = *plVar8;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *(int *)plVar8 = (int)lVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((int)lVar9 == -1) goto LAB_00cd5fbc;
      }
      FUN_00c896e4(uVar11,0x20,1,&local_58);
      if (local_58 != (long *)0x0) {
        plVar8 = local_58 + 5;
        do {
          lVar9 = *plVar8;
          iVar7 = (int)lVar9 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *(int *)plVar8 = iVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*local_58 + 0x10))();
        }
        else if ((int)lVar9 == 0) goto LAB_00cd5e38;
      }
    }
    if (*(long *)(param_1 + 0x80) == 0) {
      local_58 = (long *)&DAT_00000040;
      lVar9 = FUN_00cd6018(*(undefined8 *)(param_1 + 8),&local_58,&local_88);
      if (lVar9 != 0) {
        piVar1 = (int *)(lVar9 + 0x28);
        do {
          iVar7 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 == -1) goto LAB_00cd5fbc;
      }
      plVar8 = *(long **)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x80) = 0;
      if (plVar8 != (long *)0x0) {
        plVar10 = plVar8 + 5;
        do {
          lVar6 = *plVar10;
          iVar7 = (int)lVar6 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *(int *)plVar10 = iVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
        else if ((int)lVar6 == 0) goto LAB_00cd5e38;
      }
      *(long *)(param_1 + 0x80) = lVar9;
      uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 200);
      local_58 = *(long **)(lVar9 + 0x60);
      if (local_58 != (long *)0x0) {
        plVar8 = local_58 + 5;
        do {
          lVar9 = *plVar8;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *(int *)plVar8 = (int)lVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((int)lVar9 == -1) goto LAB_00cd5fbc;
      }
      FUN_00c896e4(uVar11,0x20,2,&local_58);
      if (local_58 != (long *)0x0) {
        plVar8 = local_58 + 5;
        do {
          lVar9 = *plVar8;
          iVar7 = (int)lVar9 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *(int *)plVar8 = iVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*local_58 + 0x10))();
        }
        else if ((int)lVar9 == 0) goto LAB_00cd5e38;
      }
    }
    if (*(long *)(param_1 + 0x88) == 0) {
      local_58 = (long *)&DAT_00000020;
      lVar9 = FUN_00cd6018(*(undefined8 *)(param_1 + 8),&local_58,&uStack_8c);
      if (lVar9 != 0) {
        piVar1 = (int *)(lVar9 + 0x28);
        do {
          iVar7 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 == -1) goto LAB_00cd5fbc;
      }
      plVar8 = *(long **)(param_1 + 0x88);
      *(undefined8 *)(param_1 + 0x88) = 0;
      if (plVar8 != (long *)0x0) {
        plVar10 = plVar8 + 5;
        do {
          lVar6 = *plVar10;
          iVar7 = (int)lVar6 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *(int *)plVar10 = iVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
        else if ((int)lVar6 == 0) goto LAB_00cd5e38;
      }
      *(long *)(param_1 + 0x88) = lVar9;
      uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 200);
      local_58 = *(long **)(lVar9 + 0x60);
      if (local_58 != (long *)0x0) {
        plVar8 = local_58 + 5;
        do {
          lVar9 = *plVar8;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *(int *)plVar8 = (int)lVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((int)lVar9 == -1) goto LAB_00cd5fbc;
      }
      FUN_00c896e4(uVar11,0x20,3,&local_58);
      if (local_58 != (long *)0x0) {
        plVar8 = local_58 + 5;
        do {
          lVar9 = *plVar8;
          iVar7 = (int)lVar9 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *(int *)plVar8 = iVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*local_58 + 0x10))();
        }
        else if ((int)lVar9 == 0) goto LAB_00cd5e38;
      }
    }
    if (*(long *)(param_1 + 0x90) == 0) {
      local_58 = (long *)0x4;
      lVar9 = FUN_00cd6018(*(undefined8 *)(param_1 + 8),&local_58,&local_90);
      if (lVar9 != 0) {
        piVar1 = (int *)(lVar9 + 0x28);
        do {
          iVar7 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 == -1) goto LAB_00cd5fbc;
      }
      plVar8 = *(long **)(param_1 + 0x90);
      *(undefined8 *)(param_1 + 0x90) = 0;
      if (plVar8 != (long *)0x0) {
        plVar10 = plVar8 + 5;
        do {
          lVar6 = *plVar10;
          iVar7 = (int)lVar6 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *(int *)plVar10 = iVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
        else if ((int)lVar6 == 0) goto LAB_00cd5e38;
      }
      *(long *)(param_1 + 0x90) = lVar9;
      uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 200);
      local_58 = *(long **)(lVar9 + 0x60);
      if (local_58 != (long *)0x0) {
        plVar8 = local_58 + 5;
        do {
          lVar9 = *plVar8;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *(int *)plVar8 = (int)lVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((int)lVar9 == -1) {
LAB_00cd5fbc:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
      }
      FUN_00c896e4(uVar11,0x20,4,&local_58);
      if (local_58 != (long *)0x0) {
        plVar8 = local_58 + 5;
        do {
          lVar9 = *plVar8;
          iVar7 = (int)lVar9 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *(int *)plVar8 = iVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*local_58 + 0x10))();
        }
        else if ((int)lVar9 == 0) {
LAB_00cd5e38:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    FUN_00cd5fe4(param_1 + 0x30);
  }
  return;
}


