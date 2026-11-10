/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0126d710; name: FUN_0126d710
 */


/* WARNING: Removing unreachable block (ram,0x0126d860) */
/* WARNING: Removing unreachable block (ram,0x0126d864) */
/* WARNING: Removing unreachable block (ram,0x0126d86c) */
/* WARNING: Removing unreachable block (ram,0x0126d874) */
/* WARNING: Removing unreachable block (ram,0x0126d95c) */
/* WARNING: Removing unreachable block (ram,0x0126d964) */
/* WARNING: Removing unreachable block (ram,0x0126d968) */
/* WARNING: Removing unreachable block (ram,0x0126d970) */
/* WARNING: Removing unreachable block (ram,0x0126d978) */
/* WARNING: Removing unreachable block (ram,0x0126db18) */
/* WARNING: Removing unreachable block (ram,0x0126db28) */
/* WARNING: Removing unreachable block (ram,0x0126d980) */
/* WARNING: Removing unreachable block (ram,0x0126d87c) */
/* WARNING: Removing unreachable block (ram,0x0126d880) */

void FUN_0126d710(long *param_1,long *param_2)

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
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *local_68;
  long local_60;
  long local_58;
  undefined8 local_38;
  
  (**(code **)(*param_2 + 0x20))(&local_68);
  *param_1 = 0;
  param_1[1] = 0;
  puVar8 = PTR_DAT_047d3918;
  puVar7 = PTR_DAT_047d3910;
  puVar6 = PTR_DAT_047d3908;
  if (local_68 != (undefined8 *)0x0) {
    puVar15 = (undefined8 *)local_68[1];
    if (puVar15 != (undefined8 *)0x0) {
      puVar12 = (undefined8 *)PTR_DAT_047dd1c0;
      if (((*PTR_DAT_047dd1b8 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_047dd1b8), puVar9 = PTR_DAT_047d9058,
         puVar12 = (undefined8 *)PTR_DAT_047dd1c0, iVar10 != 0)) {
        if (((*PTR_DAT_047d9050 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d9050), iVar10 != 0)) {
          uVar11 = FUN_00ea2d24();
          *(undefined8 *)puVar9 = uVar11;
          __cxa_guard_release(PTR_DAT_047d9050);
        }
        puVar12 = (undefined8 *)PTR_DAT_047dd1c0;
        *(undefined **)PTR_DAT_047dd1c0 = puVar9;
        __cxa_guard_release(PTR_DAT_047dd1b8);
      }
LAB_0126d784:
      if (puVar15 != puVar12) goto LAB_0126d9f8;
      do {
        lVar13 = local_60;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(&local_60,0x10);
        if (bVar5) {
          local_60 = 0;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      uVar11 = *(undefined8 *)puVar7;
      *(undefined8 *)puVar8 = uVar11;
      FUN_00c44204(&local_58,uVar11,lVar13);
      puVar15 = local_68;
      local_68 = (undefined8 *)0x0;
      if (puVar15 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar15 + 3);
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
          piVar2 = (int *)((long)puVar15 + 0x1c);
          do {
            iVar10 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar10 != -1) {
            if (((*puVar6 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar14 = *(long *)puVar7;
            *(long *)puVar8 = lVar14;
            local_38 = *puVar15;
            FUN_00c44438(lVar14 + 0x8040,&local_38);
          }
        }
        else if (sVar3 == 0) goto LAB_0126d8a4;
      }
      if (local_58 == 0) {
        FUN_00efc834(param_1);
      }
      else {
        puVar15 = (undefined8 *)*param_1;
        *param_1 = 0;
        if (puVar15 != (undefined8 *)0x0) {
          psVar1 = (short *)(puVar15 + 3);
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
            piVar2 = (int *)((long)puVar15 + 0x1c);
            do {
              iVar10 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar10 != -1) {
              if (((*puVar6 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar14 = *(long *)puVar7;
              *(long *)puVar8 = lVar14;
              local_38 = *puVar15;
              FUN_00c44438(lVar14 + 0x8040,&local_38);
            }
          }
          else if (sVar3 == 0) goto LAB_0126d8a4;
        }
        lVar14 = local_58;
        local_58 = 0;
        *param_1 = lVar14;
        param_1[1] = lVar13;
      }
    }
LAB_0126d7f4:
    puVar15 = local_68;
    if (local_68 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_68 + 3);
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
        piVar2 = (int *)((long)local_68 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 != -1) {
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0))
          {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)puVar7;
          *(long *)puVar8 = lVar13;
          local_38 = *puVar15;
          FUN_00c44438(lVar13 + 0x8040,&local_38);
        }
      }
      else if (sVar3 == 0) {
LAB_0126d8a4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
LAB_0126d9f8:
  puVar15 = (undefined8 *)*puVar15;
  if (puVar15 == (undefined8 *)0x0) goto LAB_0126d7f4;
  goto LAB_0126d784;
}


