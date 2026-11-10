/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01081d44; name: FUN_01081d44
 */


void FUN_01081d44(undefined8 *param_1,undefined8 param_2)

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
  undefined *puVar12;
  undefined *puVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *local_70;
  undefined8 local_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar6 = PTR_DAT_047d3908;
  if (((*PTR_DAT_047d3908 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  puVar8 = PTR_DAT_047d3918;
  puVar7 = PTR_DAT_047d3910;
  uVar15 = *(undefined8 *)PTR_DAT_047d3910;
  *(undefined8 *)PTR_DAT_047d3918 = uVar15;
  FUN_00c44204(&local_70,uVar15,param_2);
  if ((local_70 != (undefined8 *)0x0) &&
     (puVar16 = (undefined8 *)local_70[1], puVar16 != (undefined8 *)0x0)) {
    puVar18 = (undefined8 *)PTR_DAT_047dd4a8;
    if (((*PTR_DAT_047dd4a0 & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(PTR_DAT_047dd4a0), puVar13 = PTR_DAT_047d93b8,
       puVar18 = (undefined8 *)PTR_DAT_047dd4a8, iVar14 != 0)) {
      if (((*PTR_DAT_047d93b0 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_047d93b0), puVar12 = PTR_DAT_047d8b90, iVar14 != 0))
      {
        if (((*PTR_DAT_047d8b88 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_047d8b88), puVar11 = PTR_DAT_047d3ab0, iVar14 != 0)
           ) {
          if (((*PTR_DAT_047d3aa8 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3aa8), puVar9 = PTR_DAT_047d39b8, iVar14 != 0
             )) {
            if (((*PTR_DAT_047d39b0 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(PTR_DAT_047d39b0), puVar10 = PTR_DAT_047d39c8,
               iVar14 != 0)) {
              if (((*PTR_DAT_047d39c0 & 1) == 0) &&
                 (iVar14 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar14 != 0)) {
                *(undefined8 *)puVar10 = 0;
                __cxa_guard_release(PTR_DAT_047d39c0);
              }
              *(undefined **)puVar9 = puVar10;
              __cxa_guard_release(PTR_DAT_047d39b0);
            }
            *(undefined **)puVar11 = puVar9;
            __cxa_guard_release(PTR_DAT_047d3aa8);
          }
          *(undefined **)puVar12 = puVar11;
          __cxa_guard_release(PTR_DAT_047d8b88);
        }
        *(undefined **)puVar13 = puVar12;
        __cxa_guard_release(PTR_DAT_047d93b0);
      }
      puVar18 = (undefined8 *)PTR_DAT_047dd4a8;
      *(undefined **)PTR_DAT_047dd4a8 = puVar13;
      __cxa_guard_release(PTR_DAT_047dd4a0);
    }
LAB_01081dcc:
    if (puVar16 != puVar18) goto LAB_01081f18;
    puVar16 = (undefined8 *)*param_1;
    *param_1 = 0;
    if (puVar16 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar16 + 3);
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
        piVar2 = (int *)((long)puVar16 + 0x1c);
        do {
          iVar14 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar14 != -1) {
          if (((*puVar6 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0))
          {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)puVar7;
          *(long *)puVar8 = lVar17;
          local_68 = *puVar16;
          FUN_00c44438(lVar17 + 0x8040,&local_68);
        }
      }
      else if (sVar3 == 0) goto LAB_01081e3c;
    }
    puVar16 = local_70;
    local_70 = (undefined8 *)0x0;
    *param_1 = puVar16;
    goto LAB_01081dec;
  }
LAB_01081f20:
  puVar16 = (undefined8 *)*param_1;
  param_2 = 0;
  *param_1 = 0;
  if (puVar16 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar16 + 3);
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
      piVar2 = (int *)((long)puVar16 + 0x1c);
      do {
        iVar14 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar14 != -1) {
        if (((*puVar6 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar17 = *(long *)puVar7;
        *(long *)puVar8 = lVar17;
        local_68 = *puVar16;
        FUN_00c44438(lVar17 + 0x8040,&local_68);
      }
    }
    else if (sVar3 == 0) goto LAB_01081e3c;
    param_2 = 0;
  }
LAB_01081dec:
  puVar16 = local_70;
  param_1[1] = param_2;
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
        iVar14 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar14 != -1) {
        if (((*puVar6 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar17 = *(long *)puVar7;
        *(long *)puVar8 = lVar17;
        local_68 = *puVar16;
        FUN_00c44438(lVar17 + 0x8040,&local_68);
      }
    }
    else if (sVar3 == 0) {
LAB_01081e3c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
LAB_01081f18:
  puVar16 = (undefined8 *)*puVar16;
  if (puVar16 == (undefined8 *)0x0) goto LAB_01081f20;
  goto LAB_01081dcc;
}


