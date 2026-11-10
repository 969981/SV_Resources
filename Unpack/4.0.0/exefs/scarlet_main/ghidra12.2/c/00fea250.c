/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fea250; name: FUN_00fea250
 */


void FUN_00fea250(undefined8 *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  bool bVar12;
  undefined8 *local_58 [2];
  undefined8 local_48;
  
  plVar8 = (long *)(param_2 + 0x110);
  lVar10 = *plVar8;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 == lVar10) {
    bVar12 = true;
  }
  else {
    lVar7 = nn::os::GetCurrentThread();
    bVar12 = false;
    do {
      if (*plVar8 != 0) {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x118));
        bVar12 = false;
        do {
          if (*plVar8 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x118));
              while (*plVar8 == 0) {
                cVar4 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar12) {
                  *plVar8 = lVar7;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                bVar12 = false;
                if (cVar4 == '\0') goto LAB_00fea288;
              }
            } while( true );
          }
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        break;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
LAB_00fea288:
  plVar8 = (long *)FUN_00fea4b0(*(undefined8 *)(param_2 + 0x128),*(undefined8 *)(param_2 + 0x130));
  if ((*(long **)(param_2 + 0x130) == plVar8) || (*plVar8 == 0)) {
    plVar8 = (long *)FUN_00fea4b0(*(undefined8 *)(param_2 + 0x160),*(undefined8 *)(param_2 + 0x168))
    ;
    if (*(long **)(param_2 + 0x168) == plVar8) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = (long *)0x0;
      if (*plVar8 != 0) {
        plVar11 = (long *)(*plVar8 + -0x20);
      }
    }
  }
  else {
    plVar11 = (long *)(*plVar8 + -0x20);
  }
  if (!bVar12) {
    *(undefined8 *)(param_2 + 0x110) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x118));
  }
  if (plVar11 == (long *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    (**(code **)(*plVar11 + 0x18))(local_58,plVar11);
    *param_1 = 0;
    param_1[1] = 0;
    puVar9 = local_58[0];
    if ((long *)local_58[0][2] == plVar11 + 5) {
      FUN_010b7b78(param_1,local_58);
      puVar9 = local_58[0];
    }
    if (puVar9 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar9 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar12) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)puVar9 + 0x1c);
        do {
          iVar6 = *piVar2;
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar7 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar7;
          local_48 = *puVar9;
          FUN_00c44438(lVar7 + 0x8040,&local_48);
        }
      }
      else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
}


