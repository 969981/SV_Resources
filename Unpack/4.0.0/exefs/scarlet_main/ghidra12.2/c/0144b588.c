/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0144b588; name: FUN_0144b588
 */


void FUN_0144b588(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  short *psVar3;
  int *piVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  *param_1 = (long)&PTR_FUN_04543c98;
  param_1[4] = (long)&PTR_LAB_04543d10;
  param_1[5] = (long)&PTR_LAB_04543d60;
  plVar13 = param_1 + 0xe;
  puVar15 = (undefined8 *)*plVar13;
  puVar16 = (undefined8 *)param_1[0xf];
  if (puVar15 != puVar16) {
    do {
      local_98 = *puVar15;
      local_90 = (undefined8 *)0x0;
      uStack_88 = 0;
      FUN_00d0a71c(&local_90,puVar15 + 1);
      local_80 = puVar15[3];
      local_78 = puVar15[4];
      uStack_70 = puVar15[5];
      FUN_019140a8(param_1,&local_98);
      puVar8 = local_90;
      if (local_90 != (undefined8 *)0x0) {
        psVar3 = (short *)(local_90 + 3);
        do {
          sVar5 = *psVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar7) {
            *psVar3 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          piVar4 = (int *)((long)local_90 + 0x1c);
          do {
            iVar9 = *piVar4;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar7) {
              *piVar4 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar9 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar12 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar12;
            local_68 = *puVar8;
            FUN_00c44438(lVar12 + 0x8040,&local_68);
          }
        }
        else if (sVar5 == 0) goto LAB_0144b6e0;
      }
      puVar15 = puVar15 + 6;
    } while (puVar15 != puVar16);
    puVar15 = (undefined8 *)*plVar13;
  }
  if (puVar15 != (undefined8 *)0x0) {
    FUN_0144ba28(plVar13,puVar15);
    lVar14 = param_1[0xe];
    lVar12 = param_1[0x10];
    plVar13 = (long *)param_1[0x11];
    uVar10 = (**(code **)(*plVar13 + 0xf8))(plVar13);
    if (((uVar10 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar13 + 0x18))(plVar13,lVar14,lVar12 - lVar14,8);
    }
    else {
      FUN_00c48fe8(plVar13,lVar14,lVar12 - lVar14,8);
    }
  }
  puVar15 = (undefined8 *)param_1[10];
  if (puVar15 != (undefined8 *)0x0) {
    psVar3 = (short *)(puVar15 + 3);
    do {
      sVar5 = *psVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar7) {
        *psVar3 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)puVar15 + 0x1c);
      do {
        iVar9 = *piVar4;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar7) {
          *piVar4 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_98 = *puVar15;
        FUN_00c44438(lVar12 + 0x8040,&local_98);
      }
    }
    else if (sVar5 == 0) goto LAB_0144b6e0;
  }
  puVar15 = (undefined8 *)param_1[8];
  if (puVar15 != (undefined8 *)0x0) {
    psVar3 = (short *)(puVar15 + 3);
    do {
      sVar5 = *psVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar7) {
        *psVar3 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)puVar15 + 0x1c);
      do {
        iVar9 = *piVar4;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar7) {
          *piVar4 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_98 = *puVar15;
        FUN_00c44438(lVar12 + 0x8040,&local_98);
      }
    }
    else if (sVar5 == 0) goto LAB_0144b6e0;
  }
  puVar1 = PTR_DAT_047d8c78 + 0x88;
  puVar2 = PTR_DAT_047d8c78 + 0xd8;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  puVar15 = (undefined8 *)param_1[6];
  if (puVar15 != (undefined8 *)0x0) {
    psVar3 = (short *)(puVar15 + 3);
    do {
      sVar5 = *psVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar7) {
        *psVar3 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)puVar15 + 0x1c);
      do {
        iVar9 = *piVar4;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar7) {
          *piVar4 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_98 = *puVar15;
        FUN_00c44438(lVar12 + 0x8040,&local_98);
      }
    }
    else if (sVar5 == 0) {
LAB_0144b6e0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


