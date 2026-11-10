/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f70f74; name: FUN_00f70f74
 */


void FUN_00f70f74(long param_1)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  long *plVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  short sVar16;
  long *plVar17;
  long *local_b0;
  undefined8 uStack_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long *local_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 local_68;
  
  puVar10 = PTR_LAB_047d3de8;
  puVar9 = PTR_DAT_047d3910;
  puVar8 = PTR_DAT_047d3908;
  plVar17 = *(long **)(param_1 + 0x70);
  if (plVar17 == (long *)0x0) {
    return;
  }
LAB_00f70fcc:
  plVar4 = (long *)plVar17[5];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  local_b0 = (long *)0x0;
  uStack_a8 = 0;
  FUN_00d0a71c(&local_b0,plVar17 + 6);
  if (local_b0 != (long *)0x0) {
    if (*(short *)((long)local_b0 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_b0 + 0x1a);
      sVar16 = *(short *)((long)local_b0 + 0x1a);
      do {
        sVar5 = *psVar1;
        if (sVar5 == sVar16) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar16 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_00f71088;
          bVar7 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00f71088:
          bVar7 = false;
        }
        if (bVar7) {
          lVar14 = local_b0[2];
          if (lVar14 != 0) {
            lVar12 = FUN_010e1344(lVar14 + 0xe0,&local_a0);
            if (lVar12 == 0) goto LAB_00f710cc;
            plVar13 = *(long **)(param_1 + 0xd8);
            local_70 = lVar12;
            if (plVar13 == (long *)0x0) goto LAB_00f710c4;
            goto LAB_00f711a8;
          }
          break;
        }
        sVar16 = sVar5;
      } while (sVar5 != 0);
    }
    goto LAB_00f710dc;
  }
  goto LAB_00f71008;
  while( true ) {
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    plVar13 = (long *)*plVar13;
    if (plVar13 == (long *)0x0) break;
LAB_00f711a8:
    local_a0 = plVar13[2];
    lStack_98 = plVar13[3];
    local_90 = plVar13[4];
    local_88 = (long *)plVar13[5];
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x18))();
    }
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    FUN_00d0a71c(&local_80,plVar13 + 6);
    FUN_02163ea8(&local_70,&local_a0);
    if (local_80 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_80 + 3);
      do {
        sVar16 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar16 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar16 == 1) {
        piVar3 = (int *)((long)local_80 + 0x1c);
        do {
          iVar11 = *piVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar11 != -1) {
          if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
            FUN_00100190(puVar10,puVar9,&PTR_LOOP_04483000);
            __cxa_guard_release(puVar8);
          }
          lVar15 = *(long *)puVar9;
          *(long *)PTR_DAT_047d3918 = lVar15;
          local_68 = *local_80;
          FUN_00c44438(lVar15 + 0x8040,&local_68);
        }
      }
      else if (sVar16 == 0) goto LAB_00f71114;
    }
  }
LAB_00f710c4:
  FUN_02163f5c(lVar12);
LAB_00f710cc:
  (**(code **)(*(long *)(lVar14 + -0x28) + 0x60))();
LAB_00f710dc:
  plVar13 = local_b0;
  if (local_b0 != (long *)0x0) {
    plVar2 = local_b0 + 3;
    do {
      sVar16 = (short)*plVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(short *)plVar2 = sVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar16 == 1) {
      piVar3 = (int *)((long)local_b0 + 0x1c);
      do {
        iVar11 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar11 != -1) {
        if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
          FUN_00100190(puVar10,puVar9,&PTR_LOOP_04483000);
          __cxa_guard_release(puVar8);
        }
        lVar14 = *(long *)puVar9;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_a0 = *plVar13;
        FUN_00c44438(lVar14 + 0x8040,&local_a0);
      }
    }
    else if (sVar16 == 0) {
LAB_00f71114:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
LAB_00f71008:
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar17 = (long *)*plVar17;
  if (plVar17 == (long *)0x0) {
    return;
  }
  goto LAB_00f70fcc;
}


