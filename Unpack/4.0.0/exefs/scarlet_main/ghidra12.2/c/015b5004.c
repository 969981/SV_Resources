/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015b5004; name: FUN_015b5004
 */


void FUN_015b5004(long *param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *local_48;
  undefined8 local_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar7 = PTR_DAT_047d92c0;
  if ((*param_2 != 0) && (puVar13 = *(undefined8 **)(*param_2 + 8), puVar13 != (undefined8 *)0x0)) {
    if (((*PTR_DAT_047d92b8 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d92b8), puVar6 = PTR_DAT_047d9278, iVar9 != 0)) {
      if (((*PTR_DAT_047d9270 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_047d9270), iVar9 != 0)) {
        uVar10 = FUN_01e19d1c();
        *(undefined8 *)puVar6 = uVar10;
        __cxa_guard_release(PTR_DAT_047d9270);
      }
      *(undefined **)puVar7 = puVar6;
      __cxa_guard_release(PTR_DAT_047d92b8);
    }
    do {
      puVar6 = PTR_DAT_047d3908;
      if (puVar13 == (undefined8 *)puVar7) {
        lVar12 = param_2[1];
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        puVar8 = PTR_DAT_047d3918;
        puVar7 = PTR_DAT_047d3910;
        uVar10 = *(undefined8 *)PTR_DAT_047d3910;
        *(undefined8 *)PTR_DAT_047d3918 = uVar10;
        FUN_00c44204(&local_48,uVar10,lVar12);
        puVar13 = (undefined8 *)*param_1;
        *param_1 = 0;
        if (local_48 == (undefined8 *)0x0) {
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
                iVar9 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar9 != -1) {
                if (((*puVar6 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar12 = *(long *)puVar7;
                *(long *)puVar8 = lVar12;
                local_28 = *puVar13;
                FUN_00c44438(lVar12 + 0x8040,&local_28);
              }
            }
            else if (sVar3 == 0) goto LAB_015b5128;
          }
          lVar12 = 0;
        }
        else {
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
                iVar9 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar9 != -1) {
                if (((*puVar6 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar11 = *(long *)puVar7;
                *(long *)puVar8 = lVar11;
                local_28 = *puVar13;
                FUN_00c44438(lVar11 + 0x8040,&local_28);
              }
            }
            else if (sVar3 == 0) goto LAB_015b5128;
          }
          puVar13 = local_48;
          local_48 = (undefined8 *)0x0;
          *param_1 = (long)puVar13;
        }
        puVar13 = local_48;
        param_1[1] = lVar12;
        if (local_48 == (undefined8 *)0x0) {
          return;
        }
        psVar1 = (short *)(local_48 + 3);
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
          piVar2 = (int *)((long)local_48 + 0x1c);
          do {
            iVar9 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar9 == -1) {
            return;
          }
          if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)puVar7;
          *(long *)puVar8 = lVar12;
          local_28 = *puVar13;
          FUN_00c44438(lVar12 + 0x8040,&local_28);
          return;
        }
        if (sVar3 != 0) {
          return;
        }
LAB_015b5128:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
      puVar13 = (undefined8 *)*puVar13;
    } while (puVar13 != (undefined8 *)0x0);
  }
  return;
}


