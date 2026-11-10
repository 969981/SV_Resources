/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01904af0; name: FUN_01904af0
 */


long FUN_01904af0(long param_1,long param_2,int *param_3)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  short sVar13;
  long lVar14;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar6 = PTR_DAT_047d3910;
  if (param_1 != param_2) {
    plVar11 = (long *)PTR_DAT_047d3918;
    do {
      local_78 = (undefined8 *)0x0;
      uStack_70 = 0;
      FUN_00d0a71c(&local_78,param_1);
      if (local_78 != (undefined8 *)0x0) {
        if (*(short *)((long)local_78 + 0x1a) != 0) {
          psVar2 = (short *)((long)local_78 + 0x1a);
          sVar13 = *(short *)((long)local_78 + 0x1a);
          do {
            sVar3 = *psVar2;
            if (sVar3 == sVar13) {
              cVar4 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar8) {
                *psVar2 = sVar13 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 != '\0') goto LAB_01904c6c;
              bVar8 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_01904c6c:
              bVar8 = false;
            }
            plVar11 = (long *)PTR_DAT_047d3918;
            if (bVar8) {
              lVar12 = local_78[2];
              if (lVar12 != 0) {
                plVar11 = (long *)(lVar12 + 0xe8);
                lVar14 = *plVar11;
                lVar10 = nn::os::GetCurrentThread();
                if (lVar10 == lVar14) {
                  bVar8 = true;
                  goto LAB_01904ce0;
                }
                lVar10 = nn::os::GetCurrentThread();
                goto LAB_01904ccc;
              }
              break;
            }
            sVar13 = sVar3;
          } while (sVar3 != 0);
        }
      }
LAB_01904b80:
      bVar8 = false;
LAB_01904b84:
      puVar7 = local_78;
      if (local_78 != (undefined8 *)0x0) {
        psVar2 = (short *)(local_78 + 3);
        do {
          sVar13 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar13 == 1) {
          piVar1 = (int *)((long)local_78 + 0x1c);
          do {
            iVar9 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar9 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,puVar6,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar12 = *(long *)puVar6;
            *plVar11 = lVar12;
            local_68 = *puVar7;
            FUN_00c44438(lVar12 + 0x8040,&local_68);
          }
        }
        else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      if (bVar8) {
        return param_1;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != param_2);
    param_1 = param_2;
  }
  return param_1;
LAB_01904ccc:
  if (*plVar11 == 0) goto code_r0x01904cd4;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0xf0));
  do {
    if (*plVar11 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0xf0));
        while (*plVar11 == 0) {
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar8) {
            *plVar11 = lVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01904cdc;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar8) {
      *plVar11 = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01904cdc:
  bVar8 = false;
LAB_01904ce0:
  plVar11 = (long *)FUN_01e1a8d0(*(undefined8 *)(lVar12 + 0x100),*(undefined8 *)(lVar12 + 0x108));
  if ((*(long **)(lVar12 + 0x108) == plVar11) || (*plVar11 == 0)) {
    plVar11 = (long *)FUN_01e1a8d0(*(undefined8 *)(lVar12 + 0x138),*(undefined8 *)(lVar12 + 0x140));
    if (*(long **)(lVar12 + 0x140) == plVar11) {
      lVar10 = 0;
    }
    else {
      lVar10 = 0;
      if (*plVar11 != 0) {
        lVar10 = *plVar11 + -0x20;
      }
    }
  }
  else {
    lVar10 = *plVar11 + -0x20;
  }
  if (!bVar8) {
    *(undefined8 *)(lVar12 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0xf0));
  }
  if (lVar10 != 0) {
    iVar9 = FUN_01e1bd14(lVar10);
    bVar8 = *param_3 == iVar9;
  }
  (**(code **)(*(long *)(lVar12 + -0x28) + 0x60))((long *)(lVar12 + -0x28));
  plVar11 = (long *)PTR_DAT_047d3918;
  if (lVar10 == 0) goto LAB_01904b80;
  goto LAB_01904b84;
code_r0x01904cd4:
  cVar4 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar8) {
    *plVar11 = lVar10;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01904cdc;
  goto LAB_01904ccc;
}


