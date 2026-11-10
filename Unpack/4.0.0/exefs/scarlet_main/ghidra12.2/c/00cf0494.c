/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cf0494; name: FUN_00cf0494
 */


void FUN_00cf0494(long *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *local_58;
  undefined8 local_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar6 = PTR_DAT_047d3908;
  if (((*PTR_DAT_047d3908 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  puVar8 = PTR_DAT_047d3918;
  puVar7 = PTR_DAT_047d3910;
  uVar12 = *(undefined8 *)PTR_DAT_047d3910;
  *(undefined8 *)PTR_DAT_047d3918 = uVar12;
  FUN_00c44204(&local_58,uVar12,param_2);
  if ((local_58 != (undefined8 *)0x0) &&
     (puVar13 = (undefined8 *)local_58[1], puVar13 != (undefined8 *)0x0)) {
    puVar15 = (undefined8 *)PTR_DAT_047d3ab0;
    if (((*PTR_DAT_047d3aa8 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3aa8), puVar9 = PTR_DAT_047d39b8,
       puVar15 = (undefined8 *)PTR_DAT_047d3ab0, iVar11 != 0)) {
      if (((*PTR_DAT_047d39b0 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_047d39b0), puVar10 = PTR_DAT_047d39c8, iVar11 != 0))
      {
        if (((*PTR_DAT_047d39c0 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar11 != 0)) {
          *(undefined8 *)puVar10 = 0;
          __cxa_guard_release(PTR_DAT_047d39c0);
        }
        *(undefined **)puVar9 = puVar10;
        __cxa_guard_release(PTR_DAT_047d39b0);
      }
      puVar15 = (undefined8 *)PTR_DAT_047d3ab0;
      *(undefined **)PTR_DAT_047d3ab0 = puVar9;
      __cxa_guard_release(PTR_DAT_047d3aa8);
    }
LAB_00cf0518:
    if (puVar13 != puVar15) goto code_r0x00cf0520;
    puVar13 = (undefined8 *)*param_1;
    *param_1 = 0;
    if (puVar13 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar13 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)puVar13 + 0x1c);
        do {
          iVar11 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 != -1) {
          if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0))
          {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar14 = *(long *)puVar7;
          *(long *)puVar8 = lVar14;
          local_38 = *puVar13;
          FUN_00c44438(lVar14 + 0x8040,&local_38);
        }
      }
      else if (sVar3 == 0) goto LAB_00cf05c4;
    }
    puVar13 = local_58;
    local_58 = (undefined8 *)0x0;
    *param_1 = (long)puVar13;
    goto LAB_00cf0578;
  }
LAB_00cf0528:
  puVar13 = (undefined8 *)*param_1;
  param_2 = 0;
  *param_1 = 0;
  if (puVar13 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar13 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)puVar13 + 0x1c);
      do {
        iVar11 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 != -1) {
        if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)puVar7;
        *(long *)puVar8 = lVar14;
        local_38 = *puVar13;
        FUN_00c44438(lVar14 + 0x8040,&local_38);
      }
    }
    else if (sVar3 == 0) goto LAB_00cf05c4;
    param_2 = 0;
  }
LAB_00cf0578:
  puVar13 = local_58;
  param_1[1] = param_2;
  if (local_58 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_58 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_58 + 0x1c);
      do {
        iVar11 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 != -1) {
        if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)puVar7;
        *(long *)puVar8 = lVar14;
        local_38 = *puVar13;
        FUN_00c44438(lVar14 + 0x8040,&local_38);
      }
    }
    else if (sVar3 == 0) {
LAB_00cf05c4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
code_r0x00cf0520:
  puVar13 = (undefined8 *)*puVar13;
  if (puVar13 == (undefined8 *)0x0) goto LAB_00cf0528;
  goto LAB_00cf0518;
}


