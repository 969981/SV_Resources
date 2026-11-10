/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cd6ee4; name: FUN_00cd6ee4
 */


/* WARNING: Removing unreachable block (ram,0x00cd778c) */
/* WARNING: Removing unreachable block (ram,0x00cd7190) */
/* WARNING: Removing unreachable block (ram,0x00cd7198) */
/* WARNING: Removing unreachable block (ram,0x00cd71a0) */
/* WARNING: Removing unreachable block (ram,0x00cd7964) */
/* WARNING: Removing unreachable block (ram,0x00cd71a4) */

void FUN_00cd6ee4(long *param_1,long param_2)

{
  int *piVar1;
  short *psVar2;
  long *plVar3;
  long *plVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long *local_138;
  long *local_130;
  long *local_128;
  long *local_120;
  long *local_118;
  long *local_110;
  long *local_108;
  long *local_100;
  long *local_f8;
  long *local_f0;
  long *local_e8;
  long *local_e0;
  long *local_d8;
  long *local_d0;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  long local_88;
  long local_80 [3];
  undefined4 local_68;
  
  param_1[2] = 0;
  puVar9 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar9 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar11 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = 0;
    if (*(long *)(lVar11 + 0x80) != 0) {
      lVar13 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&PTR_FUN_045d7d18;
  param_1[1] = lVar13;
  param_1[4] = (long)&PTR_LAB_045d7d80;
  plVar14 = param_1 + 6;
  *plVar14 = (long)&PTR_LAB_045d7db0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[9] = 0;
  param_1[10] = param_2;
  param_1[0xb] = 0x1fffffffffffffff;
  param_1[0xc] = 0;
  FUN_00cdd118(param_1 + 0xe,param_2);
  plVar4 = param_1 + 100;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  param_1[99] = 0;
  param_1[0x67] = param_2;
  param_1[0x68] = 0x1fffffffffffffff;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  FUN_00cd8320(plVar4);
  FUN_00cdd258(plVar4);
  plVar12 = (long *)FUN_01887998();
  local_68 = 0;
  local_80[1] = 0x1fffffffffffffff;
  local_80[2] = 0;
  local_80[0] = param_2;
  FUN_00cd8390(param_1 + 0x6b,
               (*(long *)(*plVar12 + 0x38) - *(long *)(*plVar12 + 0x30) >> 4) * -0x5555555555555555,
               local_80);
  puVar9 = PTR_DAT_047dd9c0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x72] = (long)(puVar9 + 0x10);
  param_1[0x86] = 0x78000000500;
  param_1[0x87] = 0x438000002d0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  FUN_00cdd5d0(&local_88,param_2,&DAT_0485a0a0);
  local_80[0] = param_1[99];
  param_1[99] = 0;
  FUN_00cd7b58(local_80);
  lVar11 = local_88;
  local_88 = 0;
  param_1[99] = lVar11;
  FUN_00cd7b58(&local_88);
  if (param_1[0x65] != param_1[100]) {
    uVar15 = 0;
    do {
      lVar11 = FUN_00cd7a28(local_80,param_2,&DAT_0485a0a0);
      if (lVar11 != 0) {
        piVar1 = (int *)(lVar11 + 0x28);
        do {
          iVar10 = *piVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar10 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
      }
      lVar13 = *plVar4;
      plVar12 = *(long **)(lVar13 + uVar15 * 8);
      *(undefined8 *)(lVar13 + uVar15 * 8) = 0;
      if (plVar12 != (long *)0x0) {
        plVar3 = plVar12 + 5;
        do {
          lVar8 = *plVar3;
          iVar10 = (int)lVar8 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar7) {
            *(int *)plVar3 = iVar10;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*plVar12 + 0x10))();
        }
        else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      *(long *)(lVar13 + uVar15 * 8) = lVar11;
      uVar15 = uVar15 + 1;
    } while (uVar15 < (ulong)(param_1[0x65] - param_1[100] >> 3));
  }
  if (param_1[0x6c] != param_1[0x6b]) {
    uVar15 = 0;
    do {
      FUN_00cd7bc4(local_80,param_2,&DAT_0485a0a0,uVar15);
      plVar4 = (long *)(param_1[0x6b] + uVar15 * 8);
      FUN_00cd7c38(plVar4);
      *plVar4 = local_80[0];
      local_80[0] = 0;
      uVar15 = uVar15 + 1;
    } while (uVar15 < (ulong)(param_1[0x6c] - param_1[0x6b] >> 3));
  }
  FUN_00cdd8ac(&local_90,plVar14,param_2);
  if (local_90 != (long *)0x0) {
    lVar11 = local_90[6];
    psVar2 = (short *)(lVar11 + 0x1a);
    do {
      sVar5 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*local_90 + 0x50))();
    }
    else if (sVar5 == 0) goto LAB_00cd79c4;
  }
  FUN_00cddc70(&local_98,plVar14,param_2);
  if (local_98 != (long *)0x0) {
    lVar11 = local_98[6];
    psVar2 = (short *)(lVar11 + 0x1a);
    do {
      sVar5 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*local_98 + 0x50))();
    }
    else if (sVar5 == 0) goto LAB_00cd79c4;
  }
  FUN_00cde040(&local_a0,plVar14,param_2);
  if (local_a0 != (long *)0x0) {
    lVar11 = local_a0[6];
    psVar2 = (short *)(lVar11 + 0x1a);
    do {
      sVar5 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*local_a0 + 0x50))();
    }
    else if (sVar5 == 0) goto LAB_00cd79c4;
  }
  FUN_00cde400(&local_a8,plVar14,param_2);
  if (local_a8 != (long *)0x0) {
    lVar11 = local_a8[6];
    psVar2 = (short *)(lVar11 + 0x1a);
    do {
      sVar5 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*local_a8 + 0x50))();
    }
    else if (sVar5 == 0) {
LAB_00cd79c4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (param_1[0x6c] != param_1[0x6b]) {
    uVar15 = 0;
    do {
      FUN_00cd8b40(&local_b0,plVar14,param_2,uVar15);
      if (local_b0 != (long *)0x0) {
        lVar11 = local_b0[6];
        psVar2 = (short *)(lVar11 + 0x1a);
        do {
          sVar5 = *psVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*local_b0 + 0x50))();
        }
        else if (sVar5 == 0) goto LAB_00cd79c4;
      }
      FUN_00cd8f5c(&local_b8,plVar14,param_2,uVar15);
      if (local_b8 != (long *)0x0) {
        lVar11 = local_b8[6];
        psVar2 = (short *)(lVar11 + 0x1a);
        do {
          sVar5 = *psVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*local_b8 + 0x50))();
        }
        else if (sVar5 == 0) goto LAB_00cd79c4;
      }
      FUN_00cd9310(&local_c0,plVar14,param_2,uVar15);
      if (local_c0 != (long *)0x0) {
        lVar11 = local_c0[6];
        psVar2 = (short *)(lVar11 + 0x1a);
        do {
          sVar5 = *psVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*local_c0 + 0x50))();
        }
        else if (sVar5 == 0) goto LAB_00cd79c4;
      }
      FUN_00cd96c4(&local_c8,plVar14,param_2,uVar15);
      if (local_c8 != (long *)0x0) {
        lVar11 = local_c8[6];
        psVar2 = (short *)(lVar11 + 0x1a);
        do {
          sVar5 = *psVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*local_c8 + 0x50))();
        }
        else if (sVar5 == 0) goto LAB_00cd79c4;
      }
      FUN_00cd9afc(&local_d0,plVar14,param_2,uVar15);
      if (local_d0 != (long *)0x0) {
        lVar11 = local_d0[6];
        psVar2 = (short *)(lVar11 + 0x1a);
        do {
          sVar5 = *psVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*local_d0 + 0x50))();
        }
        else if (sVar5 == 0) goto LAB_00cd79c4;
      }
      FUN_00cd9eb8(&local_d8,plVar14,param_2,uVar15);
      if (local_d8 != (long *)0x0) {
        lVar11 = local_d8[6];
        psVar2 = (short *)(lVar11 + 0x1a);
        do {
          sVar5 = *psVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*local_d8 + 0x50))();
        }
        else if (sVar5 == 0) goto LAB_00cd79c4;
      }
      FUN_00cda378(&local_e0,plVar14,param_2,uVar15);
      if (local_e0 != (long *)0x0) {
        lVar11 = local_e0[6];
        psVar2 = (short *)(lVar11 + 0x1a);
        do {
          sVar5 = *psVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*local_e0 + 0x50))();
        }
        else if (sVar5 == 0) goto LAB_00cd79c4;
      }
      FUN_00cda738(&local_e8,plVar14,param_2,uVar15);
      if (local_e8 != (long *)0x0) {
        lVar11 = local_e8[6];
        psVar2 = (short *)(lVar11 + 0x1a);
        do {
          sVar5 = *psVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*local_e8 + 0x50))();
        }
        else if (sVar5 == 0) goto LAB_00cd79c4;
      }
      FUN_00cdab10(&local_f0,plVar14,param_2,uVar15);
      if (local_f0 != (long *)0x0) {
        lVar11 = local_f0[6];
        psVar2 = (short *)(lVar11 + 0x1a);
        do {
          sVar5 = *psVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*local_f0 + 0x50))();
        }
        else if (sVar5 == 0) goto LAB_00cd79c4;
      }
      FUN_00cdaed8(&local_f8,plVar14,param_2,uVar15);
      if (local_f8 != (long *)0x0) {
        lVar11 = local_f8[6];
        psVar2 = (short *)(lVar11 + 0x1a);
        do {
          sVar5 = *psVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*local_f8 + 0x50))();
        }
        else if (sVar5 == 0) goto LAB_00cd79c4;
      }
      FUN_00cdb2b0(&local_100,plVar14,param_2,uVar15);
      if (local_100 != (long *)0x0) {
        lVar11 = local_100[6];
        psVar2 = (short *)(lVar11 + 0x1a);
        do {
          sVar5 = *psVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*local_100 + 0x50))();
        }
        else if (sVar5 == 0) goto LAB_00cd79c4;
      }
      FUN_00cdb670(&local_108,plVar14,param_2,uVar15);
      if (local_108 != (long *)0x0) {
        lVar11 = local_108[6];
        psVar2 = (short *)(lVar11 + 0x1a);
        do {
          sVar5 = *psVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*local_108 + 0x50))();
        }
        else if (sVar5 == 0) goto LAB_00cd79c4;
      }
      FUN_00cdba38(&local_110,plVar14,param_2,uVar15);
      if (local_110 != (long *)0x0) {
        lVar11 = local_110[6];
        psVar2 = (short *)(lVar11 + 0x1a);
        do {
          sVar5 = *psVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*local_110 + 0x50))();
        }
        else if (sVar5 == 0) goto LAB_00cd79c4;
      }
      FUN_00cdbdf8(&local_118,plVar14,param_2,uVar15);
      if (local_118 != (long *)0x0) {
        lVar11 = local_118[6];
        psVar2 = (short *)(lVar11 + 0x1a);
        do {
          sVar5 = *psVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*local_118 + 0x50))();
        }
        else if (sVar5 == 0) goto LAB_00cd79c4;
      }
      FUN_00cdc200(&local_120,plVar14,param_2,uVar15);
      if (local_120 != (long *)0x0) {
        lVar11 = local_120[6];
        psVar2 = (short *)(lVar11 + 0x1a);
        do {
          sVar5 = *psVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*local_120 + 0x50))();
        }
        else if (sVar5 == 0) goto LAB_00cd79c4;
      }
      FUN_00cdc5c8(&local_128,plVar14,param_2,uVar15);
      if (local_128 != (long *)0x0) {
        lVar11 = local_128[6];
        psVar2 = (short *)(lVar11 + 0x1a);
        do {
          sVar5 = *psVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*local_128 + 0x50))();
        }
        else if (sVar5 == 0) goto LAB_00cd79c4;
      }
      FUN_00cdc998(&local_130,plVar14,param_2,uVar15);
      if (local_130 != (long *)0x0) {
        lVar11 = local_130[6];
        psVar2 = (short *)(lVar11 + 0x1a);
        do {
          sVar5 = *psVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*local_130 + 0x50))();
        }
        else if (sVar5 == 0) goto LAB_00cd79c4;
      }
      FUN_00cdcd58(&local_138,plVar14,param_2,uVar15);
      if (local_138 != (long *)0x0) {
        lVar11 = local_138[6];
        psVar2 = (short *)(lVar11 + 0x1a);
        do {
          sVar5 = *psVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*local_138 + 0x50))();
        }
        else if (sVar5 == 0) goto LAB_00cd79c4;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < (ulong)(param_1[0x6c] - param_1[0x6b] >> 3));
  }
  return;
}


