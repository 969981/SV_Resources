/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023a15e8; name: FUN_023a15e8
 */


ulong FUN_023a15e8(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  short *psVar1;
  int *piVar2;
  undefined8 *puVar3;
  short sVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  bool bVar14;
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  if (((*(long *)(param_2 + 0x40) == 0) && (*(long *)(param_2 + 0x48) == 0)) ||
     (*(char *)(param_2 + 0x68) != '\0')) {
    uVar11 = 0xffffffffffffffff;
  }
  else {
    plVar13 = (long *)(param_2 + 0x200);
    lVar12 = *plVar13;
    lVar8 = nn::os::GetCurrentThread();
    if (lVar8 != lVar12) {
      lVar8 = nn::os::GetCurrentThread();
LAB_023a166c:
      if (*plVar13 == 0) goto code_r0x023a1674;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x208));
      do {
        if (*plVar13 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x208));
            while (*plVar13 == 0) {
              cVar6 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar14) {
                *plVar13 = lVar8;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_023a167c;
            }
          } while( true );
        }
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar14) {
          *plVar13 = lVar8;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_023a167c:
      bVar14 = false;
      goto LAB_023a1680;
    }
    plVar13 = (long *)0x0;
    bVar14 = true;
LAB_023a1680:
    local_a0 = *(undefined8 *)(param_2 + 0x48);
    local_90 = 0;
    local_98 = (undefined8 *)0x0;
    FUN_00c43ef0(&local_98,param_3);
    local_88 = *(undefined8 *)(param_3 + 0x10);
    uStack_80 = *(undefined8 *)(param_3 + 0x18);
    local_78 = *(undefined8 *)(param_3 + 0x20);
    local_70 = *(long **)(param_3 + 0x28);
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x18))();
    }
    uVar9 = FUN_023a1a90(param_1,param_2,&local_a0,param_4);
    local_d8 = *(undefined8 *)(param_2 + 0x48);
    local_c8 = 0;
    local_d0 = (undefined8 *)0x0;
    FUN_00c43ef0(&local_d0,param_3);
    local_c0 = *(undefined8 *)(param_3 + 0x10);
    uStack_b8 = *(undefined8 *)(param_3 + 0x18);
    local_b0 = *(undefined8 *)(param_3 + 0x20);
    local_a8 = *(long **)(param_3 + 0x28);
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x18))();
    }
    local_60 = FUN_023a2ca0(param_1,param_2,&local_d8,param_4);
    do {
      lVar8 = *(long *)(param_2 + 0x290) - *(long *)(param_2 + 0x288);
      local_68 = uVar9;
      if (lVar8 == 0) {
        uVar11 = *(long *)(param_2 + 0x220) - *(long *)(param_2 + 0x218) >> 4;
        FUN_023a3eb0(param_2 + 0x218,&local_68);
        goto LAB_023a17c4;
      }
      uVar11 = *(ulong *)(*(long *)(param_2 + 0x290) + -8);
      *(long *)(param_2 + 0x290) = lVar8 + *(long *)(param_2 + 0x288) + -8;
      uVar10 = uVar11 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(*(long *)(param_2 + 0x250) + uVar10) =
           *(ulong *)(*(long *)(param_2 + 0x250) + uVar10) &
           (1L << (uVar11 & 0x3f) ^ 0xffffffffffffffffU);
    } while ((ulong)(*(long *)(param_2 + 0x220) - *(long *)(param_2 + 0x218) >> 4) <= uVar11);
    puVar3 = (undefined8 *)(*(long *)(param_2 + 0x218) + uVar11 * 0x10);
    *puVar3 = uVar9;
    puVar3[1] = local_60;
    if (*(ulong *)(param_2 + 0x2c0) <= uVar11) {
LAB_023a17c4:
      *(ulong *)(param_2 + 0x2c0) = uVar11 + 1;
    }
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    puVar3 = local_d0;
    if (local_d0 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_d0 + 3);
      do {
        sVar4 = *psVar1;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_d0 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_58 = *puVar3;
          FUN_00c44438(lVar8 + 0x8040,&local_58);
        }
      }
      else if (sVar4 == 0) goto LAB_023a1888;
    }
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    puVar3 = local_98;
    if (local_98 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_98 + 3);
      do {
        sVar4 = *psVar1;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_98 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_d8 = *puVar3;
          FUN_00c44438(lVar8 + 0x8040,&local_d8);
        }
      }
      else if (sVar4 == 0) {
LAB_023a1888:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    if (!bVar14) {
      *plVar13 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar13 + 1));
    }
  }
  return uVar11;
code_r0x023a1674:
  cVar6 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(plVar13,0x10);
  if (bVar14) {
    *plVar13 = lVar8;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_023a167c;
  goto LAB_023a166c;
}


