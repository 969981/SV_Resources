/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021a5f68; name: FUN_021a5f68
 */


undefined8 FUN_021a5f68(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 local_38;
  
  plVar1 = (long *)(param_1 + 8);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_021a5fac;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_021a5fac;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_021a5fac:
  lVar9 = param_1 + 0x4070;
  lVar14 = 0x7000;
  do {
    lVar10 = FUN_021d8a1c(lVar9);
    if (lVar10 == param_2) {
      if (lVar14 != 0) {
        uVar12 = *(undefined8 *)(lVar9 + 0x10);
        goto LAB_021a6150;
      }
      break;
    }
    lVar9 = lVar9 + 0x38;
    lVar14 = lVar14 + -0x38;
  } while (lVar14 != 0);
  lVar9 = 0;
  do {
    lVar14 = param_1 + lVar9;
    if (*(long *)(lVar14 + 0x4080) == 0) {
      lVar9 = 0x4050;
LAB_021a6088:
      lVar14 = lVar14 + lVar9;
      if (lVar14 != param_1 + 0xb050) {
        local_60 = (undefined8 *)0x0;
        uStack_58 = 0;
        FUN_00c43ef0(&local_60,param_2 + 0x30);
        local_70 = (undefined8 *)0x0;
        uStack_68 = 0;
        lVar9 = 0;
        if (param_2 != 0) {
          lVar9 = param_2 + 0x28;
        }
        if (local_60[2] == lVar9) {
          FUN_00e29918(&local_70,&local_60);
        }
        puVar7 = local_60;
        if (local_60 != (undefined8 *)0x0) {
          psVar2 = (short *)(local_60 + 3);
          do {
            sVar4 = *psVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar6) {
              *psVar2 = sVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar4 == 1) {
            piVar3 = (int *)((long)local_60 + 0x1c);
            do {
              iVar8 = *piVar3;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar6) {
                *piVar3 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar8 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar9 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar9;
              local_38 = *puVar7;
              FUN_00c44438(lVar9 + 0x8040,&local_38);
            }
          }
          else if (sVar4 == 0) goto LAB_021a61c4;
        }
        FUN_021d8adc(lVar14 + 0x20,&local_70);
        puVar7 = local_70;
        if (local_70 != (undefined8 *)0x0) {
          psVar2 = (short *)(local_70 + 3);
          do {
            sVar4 = *psVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar6) {
              *psVar2 = sVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar4 == 1) {
            piVar3 = (int *)((long)local_70 + 0x1c);
            do {
              iVar8 = *piVar3;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar6) {
                *piVar3 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar8 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar9 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar9;
              local_60 = (undefined8 *)*puVar7;
              FUN_00c44438(lVar9 + 0x8040,&local_60);
            }
          }
          else if (sVar4 == 0) {
LAB_021a61c4:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
        uVar11 = FUN_012e29a0();
        uVar13 = *(undefined8 *)PTR_DAT_047dd658;
        uVar12 = FUN_021d8eac(param_2);
        if ((uVar11 & 1) == 0) {
          uVar12 = FUN_021d8f70(uVar13,(int)((ulong)(lVar14 - (param_1 + 0x4050)) >> 3) *
                                       -0x49249249 + 1,param_3,uVar12);
        }
        else {
          uVar12 = FUN_021d8eb4();
        }
        *(undefined8 *)(lVar14 + 0x30) = uVar12;
        goto LAB_021a6150;
      }
      break;
    }
    if (*(long *)(lVar14 + 0x40b8) == 0) {
      lVar9 = 0x4088;
      goto LAB_021a6088;
    }
    if (*(long *)(lVar14 + 0x40f0) == 0) {
      lVar9 = 0x40c0;
      goto LAB_021a6088;
    }
    if (*(long *)(lVar14 + 0x4128) == 0) {
      lVar9 = 0x40f8;
      goto LAB_021a6088;
    }
    lVar9 = lVar9 + 0xe0;
  } while (lVar9 != 0x7000);
  uVar12 = *(undefined8 *)(param_1 + 0x4048);
LAB_021a6150:
  *(undefined8 *)(param_1 + 8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x10));
  return uVar12;
}


