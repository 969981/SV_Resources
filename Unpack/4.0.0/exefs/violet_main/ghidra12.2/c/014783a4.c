/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014783a4; name: FUN_014783a4
 */


/* WARNING: Removing unreachable block (ram,0x014784f4) */
/* WARNING: Removing unreachable block (ram,0x014784f8) */
/* WARNING: Removing unreachable block (ram,0x01478500) */
/* WARNING: Removing unreachable block (ram,0x01478508) */
/* WARNING: Removing unreachable block (ram,0x014785f0) */
/* WARNING: Removing unreachable block (ram,0x014785f8) */
/* WARNING: Removing unreachable block (ram,0x014785fc) */
/* WARNING: Removing unreachable block (ram,0x01478604) */
/* WARNING: Removing unreachable block (ram,0x0147860c) */
/* WARNING: Removing unreachable block (ram,0x014787ac) */
/* WARNING: Removing unreachable block (ram,0x014787bc) */
/* WARNING: Removing unreachable block (ram,0x01478614) */
/* WARNING: Removing unreachable block (ram,0x01478510) */
/* WARNING: Removing unreachable block (ram,0x01478514) */

void FUN_014783a4(long *param_1,long *param_2)

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
  undefined *puVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *local_70;
  long local_68;
  long local_60;
  undefined8 local_58;
  
  (**(code **)(*param_2 + 0x20))(&local_70);
  *param_1 = 0;
  param_1[1] = 0;
  puVar8 = PTR_DAT_047d3918;
  puVar7 = PTR_DAT_047d3910;
  puVar6 = PTR_DAT_047d3908;
  if (local_70 != (undefined8 *)0x0) {
    puVar17 = (undefined8 *)local_70[1];
    if (puVar17 != (undefined8 *)0x0) {
      puVar14 = (undefined8 *)PTR_DAT_047dcfd0;
      if (((*PTR_DAT_047dcfc8 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_047dcfc8), puVar11 = PTR_DAT_047d3ab0,
         puVar14 = (undefined8 *)PTR_DAT_047dcfd0, iVar12 != 0)) {
        if (((*PTR_DAT_047d3aa8 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3aa8), puVar9 = PTR_DAT_047d39b8, iVar12 != 0))
        {
          if (((*PTR_DAT_047d39b0 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d39b0), puVar10 = PTR_DAT_047d39c8,
             iVar12 != 0)) {
            if (((*PTR_DAT_047d39c0 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar12 != 0)) {
              *(undefined8 *)puVar10 = 0;
              __cxa_guard_release(PTR_DAT_047d39c0);
            }
            *(undefined **)puVar9 = puVar10;
            __cxa_guard_release(PTR_DAT_047d39b0);
          }
          *(undefined **)puVar11 = puVar9;
          __cxa_guard_release(PTR_DAT_047d3aa8);
        }
        puVar14 = (undefined8 *)PTR_DAT_047dcfd0;
        *(undefined **)PTR_DAT_047dcfd0 = puVar11;
        __cxa_guard_release(PTR_DAT_047dcfc8);
      }
LAB_01478418:
      if (puVar17 != puVar14) goto LAB_01478680;
      do {
        lVar15 = local_68;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(&local_68,0x10);
        if (bVar5) {
          local_68 = 0;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      uVar13 = *(undefined8 *)puVar7;
      *(undefined8 *)puVar8 = uVar13;
      FUN_00c44204(&local_60,uVar13,lVar15);
      puVar17 = local_70;
      local_70 = (undefined8 *)0x0;
      if (puVar17 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar17 + 3);
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
          piVar2 = (int *)((long)puVar17 + 0x1c);
          do {
            iVar12 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar12 != -1) {
            if (((*puVar6 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar16 = *(long *)puVar7;
            *(long *)puVar8 = lVar16;
            local_58 = *puVar17;
            FUN_00c44438(lVar16 + 0x8040,&local_58);
          }
        }
        else if (sVar3 == 0) goto LAB_01478538;
      }
      if (local_60 == 0) {
        FUN_014788c8(param_1);
      }
      else {
        puVar17 = (undefined8 *)*param_1;
        *param_1 = 0;
        if (puVar17 != (undefined8 *)0x0) {
          psVar1 = (short *)(puVar17 + 3);
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
            piVar2 = (int *)((long)puVar17 + 0x1c);
            do {
              iVar12 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar12 != -1) {
              if (((*puVar6 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar16 = *(long *)puVar7;
              *(long *)puVar8 = lVar16;
              local_58 = *puVar17;
              FUN_00c44438(lVar16 + 0x8040,&local_58);
            }
          }
          else if (sVar3 == 0) goto LAB_01478538;
        }
        lVar16 = local_60;
        local_60 = 0;
        *param_1 = lVar16;
        param_1[1] = lVar15;
      }
    }
LAB_01478488:
    puVar17 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_70 + 3);
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
        piVar2 = (int *)((long)local_70 + 0x1c);
        do {
          iVar12 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar12 != -1) {
          if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0))
          {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar15 = *(long *)puVar7;
          *(long *)puVar8 = lVar15;
          local_58 = *puVar17;
          FUN_00c44438(lVar15 + 0x8040,&local_58);
        }
      }
      else if (sVar3 == 0) {
LAB_01478538:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
LAB_01478680:
  puVar17 = (undefined8 *)*puVar17;
  if (puVar17 == (undefined8 *)0x0) goto LAB_01478488;
  goto LAB_01478418;
}


