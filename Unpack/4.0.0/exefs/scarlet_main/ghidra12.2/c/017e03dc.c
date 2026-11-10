/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017e03dc; name: FUN_017e03dc
 */


undefined8 FUN_017e03dc(undefined8 param_1,float param_2,long *param_3,long *param_4,long param_5)

{
  long *plVar1;
  LightEventType *pLVar2;
  short *psVar3;
  int *piVar4;
  short sVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  float fVar16;
  long *local_98;
  undefined8 *local_90;
  undefined8 local_78;
  
  puVar9 = PTR_DAT_047d3e30;
  plVar14 = (long *)param_3[0x46];
  fVar16 = 0.0;
  plVar1 = param_3 + 8;
  pLVar2 = (LightEventType *)(param_3 + 9);
  do {
    if (param_2 <= fVar16) {
      return 0;
    }
    uVar6 = *(uint *)(param_5 + 4);
    lVar12 = nn::os::GetCurrentThread();
    while (*plVar1 == 0) {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar12;
        cVar7 = ExclusiveMonitorsStatus();
      }
      if (cVar7 == '\0') goto LAB_017e045c;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent(pLVar2);
    do {
      if (*plVar1 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent(pLVar2);
          while (*plVar1 == 0) {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar8) {
              *plVar1 = lVar12;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_017e045c;
          }
        } while( true );
      }
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar12;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
LAB_017e045c:
    if ((ulong)(param_3[0x10] - param_3[0xf] >> 5) <= (ulong)uVar6) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    plVar15 = *(long **)(param_3[0xf] + (ulong)uVar6 * 0x20);
    *plVar1 = 0;
    nn::os::SignalLightEvent(pLVar2);
    (**(code **)(*plVar15 + 0x70))(&local_98,plVar15);
    if (((local_98 == (long *)0x0) || (local_90 == (undefined8 *)0x0)) ||
       (*(short *)((long)local_90 + 0x1a) == 0)) {
      plVar15 = (long *)puVar9;
      if (((*PTR_DAT_047d3e28 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar11 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,puVar9,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
      }
    }
    else {
      plVar15 = (long *)(**(code **)(*local_98 + 0x18))();
    }
    lVar12 = *plVar15;
    plVar15 = (long *)plVar15[3];
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
    puVar10 = local_90;
    if (local_90 != (undefined8 *)0x0) {
      psVar3 = (short *)(local_90 + 3);
      do {
        sVar5 = *psVar3;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar8) {
          *psVar3 = sVar5 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar5 == 1) {
        piVar4 = (int *)((long)local_90 + 0x1c);
        do {
          iVar11 = *piVar4;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar8) {
            *piVar4 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_78 = *puVar10;
          FUN_00c44438(lVar13 + 0x8040,&local_78);
        }
      }
      else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    lVar13 = *param_4;
    if (lVar12 != lVar13) {
      (**(code **)(*param_3 + 0xb0))(param_1,param_3,0);
      (**(code **)(*plVar14 + 0x40))(param_1,plVar14,0);
      fVar16 = fVar16 + (float)param_1;
    }
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
    if (lVar12 == lVar13) {
      return 1;
    }
  } while( true );
}


