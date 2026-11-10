/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017b7dd8; name: FUN_017b7dd8
 */


/* WARNING: Removing unreachable block (ram,0x017b7f80) */
/* WARNING: Removing unreachable block (ram,0x017b7f84) */
/* WARNING: Removing unreachable block (ram,0x017b7f8c) */
/* WARNING: Removing unreachable block (ram,0x017b7f94) */
/* WARNING: Removing unreachable block (ram,0x017b80e8) */
/* WARNING: Removing unreachable block (ram,0x017b80f0) */
/* WARNING: Removing unreachable block (ram,0x017b80f4) */
/* WARNING: Removing unreachable block (ram,0x017b80fc) */
/* WARNING: Removing unreachable block (ram,0x017b8104) */
/* WARNING: Removing unreachable block (ram,0x017b8274) */
/* WARNING: Removing unreachable block (ram,0x017b8284) */
/* WARNING: Removing unreachable block (ram,0x017b810c) */
/* WARNING: Removing unreachable block (ram,0x017b7f9c) */

void FUN_017b7dd8(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  short *psVar3;
  int *piVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined8 *local_68;
  undefined8 local_60;
  long *local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar16 = *param_2;
  local_58 = (long *)0x0;
  uStack_50 = 0;
  FUN_00c43ef0(&local_58,lVar16 + 0x98);
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  lVar15 = 0;
  if (lVar16 != 0) {
    lVar15 = lVar16 + 0x28;
  }
  if (local_58[2] == lVar15) {
    FUN_017b83d8(&local_68,&local_58);
  }
  plVar1 = local_58;
  puVar10 = PTR_DAT_047d3918;
  puVar9 = PTR_DAT_047d3910;
  puVar8 = PTR_DAT_047d3908;
  if (local_58 != (long *)0x0) {
    plVar2 = local_58 + 3;
    do {
      sVar5 = (short)*plVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(short *)plVar2 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)local_58 + 0x1c);
      do {
        iVar12 = *piVar4;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar7) {
          *piVar4 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar12 != -1) {
        if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar15 = *(long *)puVar9;
        *(long *)puVar10 = lVar15;
        local_48 = *plVar1;
        FUN_00c44438(lVar15 + 0x8040,&local_48);
      }
    }
    else if (sVar5 == 0) goto LAB_017b7fa0;
  }
  plVar1 = (long *)(param_1 + 0x68);
  do {
    uVar11 = local_60;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(&local_60,0x10);
    if (bVar7) {
      local_60 = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  uVar13 = *(undefined8 *)puVar9;
  *(undefined8 *)puVar10 = uVar13;
  FUN_00c44204(&local_48,uVar13,uVar11);
  puVar14 = local_68;
  local_68 = (undefined8 *)0x0;
  if (puVar14 != (undefined8 *)0x0) {
    psVar3 = (short *)(puVar14 + 3);
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
      piVar4 = (int *)((long)puVar14 + 0x1c);
      do {
        iVar12 = *piVar4;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar7) {
          *piVar4 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar12 != -1) {
        if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar15 = *(long *)puVar9;
        *(long *)puVar10 = lVar15;
        local_58 = (long *)*puVar14;
        FUN_00c44438(lVar15 + 0x8040,&local_58);
      }
    }
    else if (sVar5 == 0) goto LAB_017b7fa0;
  }
  if (local_48 == 0) {
    FUN_017b82b0(plVar1);
  }
  else {
    puVar14 = (undefined8 *)*plVar1;
    *plVar1 = 0;
    if (puVar14 != (undefined8 *)0x0) {
      psVar3 = (short *)(puVar14 + 3);
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
        piVar4 = (int *)((long)puVar14 + 0x1c);
        do {
          iVar12 = *piVar4;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar7) {
            *piVar4 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar12 != -1) {
          if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0))
          {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar15 = *(long *)puVar9;
          *(long *)puVar10 = lVar15;
          local_58 = (long *)*puVar14;
          FUN_00c44438(lVar15 + 0x8040,&local_58);
        }
      }
      else if (sVar5 == 0) goto LAB_017b7fa0;
    }
    lVar15 = local_48;
    local_48 = 0;
    *(long *)(param_1 + 0x68) = lVar15;
    *(undefined8 *)(param_1 + 0x70) = uVar11;
  }
  puVar14 = local_68;
  if (local_68 != (undefined8 *)0x0) {
    psVar3 = (short *)(local_68 + 3);
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
      piVar4 = (int *)((long)local_68 + 0x1c);
      do {
        iVar12 = *piVar4;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar7) {
          *piVar4 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar12 != -1) {
        if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar15 = *(long *)puVar9;
        *(long *)puVar10 = lVar15;
        local_58 = (long *)*puVar14;
        FUN_00c44438(lVar15 + 0x8040,&local_58);
      }
    }
    else if (sVar5 == 0) {
LAB_017b7fa0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


