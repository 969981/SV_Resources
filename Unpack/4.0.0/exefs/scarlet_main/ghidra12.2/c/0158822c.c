/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0158822c; name: FUN_0158822c
 */


void FUN_0158822c(long param_1,long *param_2)

{
  undefined8 *puVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *puStack_48;
  undefined8 local_28;
  
  plVar14 = (long *)(param_1 + 0xa0);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar14 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar6) {
      *plVar14 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_01588268;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa8));
  do {
    if (*plVar14 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa8));
        while (*plVar14 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar6) {
            *plVar14 = lVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_01588268;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar6) {
      *plVar14 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_01588268:
  param_2 = (long *)*param_2;
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x18))(&local_68);
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    if ((long *)local_68[2] == param_2 + 5) {
      FUN_00c9ea00(&local_78,&local_68);
    }
    puVar1 = local_68;
    if (local_68 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_68 + 3);
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
        piVar3 = (int *)((long)local_68 + 0x1c);
        do {
          iVar7 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_28 = *puVar1;
          FUN_00c44438(lVar8 + 0x8040,&local_28);
        }
      }
      else if (sVar4 == 0) goto LAB_015884e8;
    }
    if (*(ulong *)(param_1 + 0x48) < *(ulong *)(param_1 + 0x50)) {
      FUN_015889a0(param_1 + 0x40,&local_78);
    }
    else {
      uVar12 = *(ulong *)(param_1 + 0x60);
      lVar8 = (long)(*(ulong *)(param_1 + 0x48) - *(long *)(param_1 + 0x40)) >> 4;
      uVar9 = lVar8 + 1;
      if (0x7ffffffffffffffe < uVar12) {
        uVar12 = 0x7fffffffffffffff;
      }
      if (uVar12 < uVar9) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar10 = *(ulong *)(param_1 + 0x50) - *(long *)(param_1 + 0x40);
      uVar11 = lVar10 >> 3;
      if (uVar9 <= uVar11) {
        uVar9 = uVar11;
      }
      puVar1 = (undefined8 *)(param_1 + 0x58);
      local_50 = (undefined8 *)0x0;
      if (uVar12 >> 1 <= (ulong)(lVar10 >> 4)) {
        uVar9 = uVar12;
      }
      puStack_48 = puVar1;
      if (uVar9 == 0) {
        local_68 = (undefined8 *)0x0;
      }
      else {
        local_68 = (undefined8 *)
                   (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar9 << 4,8);
        if (local_68 == (undefined8 *)0x0) {
          (**(code **)(*(long *)*puVar1 + 0xe8))();
        }
      }
      puVar13 = local_68 + lVar8 * 2;
      local_50 = local_68 + uVar9 * 2;
      uVar15 = *puVar1;
      local_60 = puVar13;
      local_58 = puVar13;
      if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar8 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar8 == 0) {
        *puVar13 = 0;
        puVar13[1] = 0;
        FUN_00d0a34c(puVar13,&local_78);
      }
      else {
        if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar15;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        *puVar13 = 0;
        puVar13[1] = 0;
        FUN_00d0a34c(puVar13,&local_78);
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        puVar13 = local_58;
      }
      local_58 = puVar13 + 2;
      FUN_01588704(puVar1,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),&local_60)
      ;
      local_68 = *(undefined8 **)(param_1 + 0x40);
      uVar15 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 **)(param_1 + 0x40) = local_60;
      *(undefined8 **)(param_1 + 0x48) = local_58;
      lVar8 = *(long *)(param_1 + 0x50);
      *(undefined8 **)(param_1 + 0x50) = local_50;
      local_60 = local_68;
      local_58 = (undefined8 *)uVar15;
      local_50 = (undefined8 *)lVar8;
      FUN_01588838(&local_68);
      puVar1 = local_68;
      if (local_68 != (undefined8 *)0x0) {
        lVar8 = (long)local_50 - (long)local_68;
        plVar14 = (long *)*puStack_48;
        uVar9 = (**(code **)(*plVar14 + 0xf8))(plVar14);
        if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
          (**(code **)(*plVar14 + 0x18))(plVar14,puVar1,lVar8,8);
        }
        else {
          FUN_00c48fe8(plVar14,puVar1,lVar8,8);
        }
      }
    }
    puVar1 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_78 + 3);
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
        piVar3 = (int *)((long)local_78 + 0x1c);
        do {
          iVar7 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_68 = (undefined8 *)*puVar1;
          FUN_00c44438(lVar8 + 0x8040,&local_68);
        }
      }
      else if (sVar4 == 0) {
LAB_015884e8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xa8));
  return;
}


