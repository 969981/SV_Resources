/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015c862c; name: FUN_015c862c
 */


void FUN_015c862c(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  byte *pbVar9;
  long *plVar10;
  long *plVar11;
  size_t sVar12;
  byte *pbVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  undefined1 *puVar17;
  undefined1 *local_c0;
  byte *pbStack_b8;
  size_t local_b0;
  long *local_a8;
  long *local_a0;
  undefined1 *local_98;
  byte *pbStack_90;
  size_t local_88;
  long *local_80;
  undefined8 local_78;
  char *pcStack_70;
  undefined8 local_68;
  long *local_60;
  undefined4 local_58;
  
  pbVar9 = (byte *)(**(code **)(*DAT_0485a020 + 0xe0))(DAT_0485a020,3);
  puVar7 = PTR_DAT_047d3e30;
  puVar6 = PTR_DAT_047d3e28;
  if (pbVar9 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar17 = *(undefined1 **)puVar7;
    pbVar9 = *(byte **)(puVar7 + 8);
    sVar12 = *(size_t *)(puVar7 + 0x10);
    plVar14 = *(long **)(puVar7 + 0x18);
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  else {
    puVar17 = &DAT_cbf29ce484222645;
    sVar12 = strlen((char *)pbVar9);
    bVar2 = *pbVar9;
    pbVar13 = pbVar9;
    while (bVar2 != 0) {
      pbVar13 = pbVar13 + 1;
      puVar17 = (undefined1 *)(((ulong)puVar17 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar13;
    }
    plVar14 = (long *)0x0;
  }
  local_98 = puVar17;
  pbStack_90 = pbVar9;
  local_88 = sVar12;
  local_80 = plVar14;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x18))(plVar14);
  }
  local_58 = 0;
  local_78 = 0x3dd19bc2820b81b8;
  pcStack_70 = "False";
  local_68 = 5;
  local_60 = (long *)0x0;
  lVar15 = *(long *)(DAT_0485a0d8 + 0x38);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x20) + 0x10))();
  }
  FUN_015eab78(&local_a0,6);
  pbStack_b8 = (byte *)(**(code **)(*DAT_0485a020 + 0xe0))(DAT_0485a020,2);
  if (pbStack_b8 == (byte *)0x0) {
    if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_c0 = *(undefined1 **)puVar7;
    pbStack_b8 = *(byte **)(puVar7 + 8);
    local_b0 = *(size_t *)(puVar7 + 0x10);
    local_a8 = *(long **)(puVar7 + 0x18);
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x18))();
    }
  }
  else {
    local_b0 = strlen((char *)pbStack_b8);
    bVar2 = *pbStack_b8;
    local_c0 = &DAT_cbf29ce484222645;
    pbVar9 = pbStack_b8;
    while (bVar2 != 0) {
      pbVar9 = pbVar9 + 1;
      local_c0 = (undefined1 *)(((ulong)local_c0 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar9;
    }
    local_a8 = (long *)0x0;
  }
  plVar16 = *(long **)(param_1 + 0x1c0);
  if (plVar16 != (long *)0x0) {
    do {
      if (*(char *)(plVar16[8] + 0x2a0) == '\0') {
        FUN_010e88e0(plVar16[8],&local_c0,&local_a0,param_1 + 0x1f8);
        FUN_015c8e8c(plVar16[8],plVar16 + 9,1,0);
        FUN_01086da0(plVar16[8],plVar16 + 0xe,&local_98);
        FUN_010f7c04(plVar16[8]);
        plVar10 = (long *)plVar16[8];
        plVar16[8] = 0;
        if (plVar10 != (long *)0x0) {
          plVar11 = plVar10 + 5;
          do {
            lVar5 = *plVar11;
            iVar8 = (int)lVar5 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *(int *)plVar11 = iVar8;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 == 0) {
            (**(code **)(*plVar10 + 0x10))();
          }
          else if ((int)lVar5 == 0) goto LAB_015c8a54;
        }
      }
      FUN_00feee04(lVar15,plVar16 + 9);
      plVar10 = (long *)plVar16[6];
      plVar16[6] = 0;
      if (plVar10 != (long *)0x0) {
        plVar11 = plVar10 + 5;
        do {
          lVar5 = *plVar11;
          iVar8 = (int)lVar5 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *(int *)plVar11 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar10 + 0x10))();
        }
        else if ((int)lVar5 == 0) goto LAB_015c8a54;
      }
      plVar10 = (long *)plVar16[7];
      plVar16[7] = 0;
      if (plVar10 != (long *)0x0) {
        plVar11 = plVar10 + 5;
        do {
          lVar5 = *plVar11;
          iVar8 = (int)lVar5 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *(int *)plVar11 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar10 + 0x10))();
        }
        else if ((int)lVar5 == 0) goto LAB_015c8a54;
      }
      plVar16 = (long *)*plVar16;
    } while (plVar16 != (long *)0x0);
  }
  plVar16 = *(long **)(param_1 + 0x158);
  plVar10 = *(long **)(param_1 + 0x160);
  if (plVar16 != plVar10) {
    do {
      plVar11 = (long *)*plVar16;
      *plVar16 = 0;
      if (plVar11 != (long *)0x0) {
        plVar1 = plVar11 + 5;
        do {
          lVar5 = *plVar1;
          iVar8 = (int)lVar5 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar11 + 0x10))();
        }
        else if ((int)lVar5 == 0) goto LAB_015c8a54;
      }
      plVar11 = (long *)plVar16[1];
      plVar16[1] = 0;
      if (plVar11 != (long *)0x0) {
        plVar1 = plVar11 + 5;
        do {
          lVar5 = *plVar1;
          iVar8 = (int)lVar5 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar11 + 0x10))();
        }
        else if ((int)lVar5 == 0) goto LAB_015c8a54;
      }
      plVar16 = plVar16 + 4;
    } while (plVar16 != plVar10);
    plVar16 = *(long **)(param_1 + 0x158);
    plVar10 = *(long **)(param_1 + 0x160);
    while (plVar10 != plVar16) {
      plVar10 = plVar10 + -4;
      FUN_015c8b14(plVar10);
    }
  }
  *(long **)(param_1 + 0x160) = plVar16;
  FUN_015c8bf8(param_1 + 400);
  *(undefined2 *)(param_1 + 0x11e) = 0x100;
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_a0 != (long *)0x0) {
    plVar16 = local_a0 + 5;
    do {
      lVar5 = *plVar16;
      iVar8 = (int)lVar5 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *(int *)plVar16 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
LAB_015c8a54:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x20) + 0x18))((long *)(lVar15 + 0x20));
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  return;
}


