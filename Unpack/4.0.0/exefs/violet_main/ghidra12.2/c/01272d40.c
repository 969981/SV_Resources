/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01272d40; name: FUN_01272d40
 */


void FUN_01272d40(long param_1,long param_2,undefined8 param_3)

{
  short *psVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined2 local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  if ((*(byte *)(param_1 + 0x6d) & 1) != 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x6c) & 1) != 0) {
    FUN_01273520(param_2,*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
    FUN_0127334c(*(undefined8 *)(param_2 + 0x18),param_2);
    return;
  }
  plVar17 = (long *)(param_1 + 0x78);
  lVar11 = nn::os::GetCurrentThread();
  while (*plVar17 == 0) {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar8) {
      *plVar17 = lVar11;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_01272dd0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x80));
  do {
    if (*plVar17 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x80));
        while (*plVar17 == 0) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar8) {
            *plVar17 = lVar11;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_01272dd0;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar8) {
      *plVar17 = lVar11;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_01272dd0:
  if ((*(byte *)(param_1 + 0x6c) & 1) == 0) {
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    FUN_011a944c(&local_80,param_2);
    local_70 = *(undefined2 *)(param_2 + 0x10);
    local_68 = *(long **)(param_2 + 0x18);
    if (local_68 != (long *)0x0) {
      lVar11 = local_68[6];
      if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar6 = *psVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar6 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar6 == 0) {
        uVar18 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
        *(undefined8 *)(lVar11 + 8) = uVar18;
        *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
      }
      else if (sVar6 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    local_60 = param_3;
    if (*(ulong *)(param_1 + 0xd0) < *(ulong *)(param_1 + 0xd8)) {
      FUN_012738b0(param_1 + 200,&local_80);
    }
    else {
      uVar16 = *(ulong *)(param_1 + 0xe8);
      lVar11 = (long)(*(ulong *)(param_1 + 0xd0) - *(long *)(param_1 + 200)) >> 4;
      if (0x7ffffffffffffffe < uVar16) {
        uVar16 = 0x7fffffffffffffff;
      }
      uVar2 = lVar11 * -0x71c71c71c71c71c7 + 1;
      if (uVar16 < uVar2) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar13 = (long)(*(ulong *)(param_1 + 0xd8) - *(long *)(param_1 + 200)) >> 4;
      uVar15 = lVar13 * 0x1c71c71c71c71c72;
      if (uVar2 <= uVar15) {
        uVar2 = uVar15;
      }
      puVar3 = (undefined8 *)(param_1 + 0xe0);
      if (uVar16 >> 1 <= (ulong)(lVar13 * -0x71c71c71c71c71c7)) {
        uVar2 = uVar16;
      }
      if (uVar2 == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = (**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3,uVar2 * 0x90,0x10);
        if (lVar13 == 0) {
          (**(code **)(*(long *)*puVar3 + 0xe8))();
        }
      }
      uVar18 = *puVar3;
      if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar12 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar12 != 0) {
        if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar18;
        *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      }
      puVar19 = (undefined8 *)(lVar13 + lVar11 * 0x10);
      lVar11 = lVar13 + lVar11 * 0x10;
      puVar19[4] = 0;
      puVar19[5] = 0;
      puVar19[2] = 0;
      puVar19[3] = 0;
      *puVar19 = 0;
      puVar19[1] = 0;
      FUN_011a8794(lVar11 + 0x20,&local_80);
      plVar17 = local_68;
      *(undefined2 *)(lVar11 + 0x30) = local_70;
      local_68 = (long *)0x0;
      *(long **)(lVar11 + 0x38) = plVar17;
      *puVar19 = PTR_FUN_047d9370;
      puVar9 = PTR_FUN_047d9380;
      *(undefined **)(lVar11 + 8) = PTR_FUN_047d9378;
      *(undefined **)(lVar11 + 0x10) = puVar9;
      *(undefined **)(lVar11 + 0x18) = PTR_LAB_047d9388;
      *(undefined8 *)(lVar11 + 0x80) = local_60;
      if (lVar12 != 0) {
        *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      }
      lVar11 = *(long *)(param_1 + 200);
      lVar12 = *(long *)(param_1 + 0xd0);
      puVar4 = puVar19 + 0x12;
      if (lVar12 == lVar11) {
        lVar12 = lVar11;
      }
      else {
        do {
          puVar19 = puVar19 + -0x12;
          lVar12 = lVar12 + -0x90;
          FUN_00cbf394(puVar3,puVar19,lVar12);
        } while (lVar11 != lVar12);
        lVar11 = *(long *)(param_1 + 200);
        lVar12 = *(long *)(param_1 + 0xd0);
      }
      *(undefined8 **)(param_1 + 200) = puVar19;
      *(undefined8 **)(param_1 + 0xd0) = puVar4;
      lVar20 = *(long *)(param_1 + 0xd8);
      *(ulong *)(param_1 + 0xd8) = lVar13 + uVar2 * 0x90;
      while (lVar13 = lVar12, lVar13 != lVar11) {
        pcVar14 = *(code **)(lVar13 + -0x88);
        lVar12 = lVar13 + -0x90;
        if (pcVar14 != (code *)0x0) {
          *(undefined8 *)(lVar13 + -0x80) = 0;
          *(undefined8 *)(lVar13 + -0x78) = 0;
          *(undefined8 *)(lVar13 + -0x90) = 0;
          *(undefined8 *)(lVar13 + -0x88) = 0;
          (*pcVar14)(lVar13 + -0x70);
        }
      }
      if (lVar11 != 0) {
        plVar17 = (long *)*puVar3;
        lVar20 = lVar20 - lVar11;
        uVar16 = (**(code **)(*plVar17 + 0xf8))(plVar17);
        if (((uVar16 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
          (**(code **)(*plVar17 + 0x18))(plVar17,lVar11,lVar20,0x10);
        }
        else {
          FUN_00c48fe8(plVar17,lVar11,lVar20,0x10);
        }
      }
    }
    if (local_68 != (long *)0x0) {
      lVar11 = local_68[6];
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar6 = *psVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar6 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar6 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*local_68 + 0x50))();
      }
      else if (sVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    puVar3 = local_80;
    if (local_80 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_80 + 3);
      do {
        sVar6 = *psVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar6 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar6 == 1) {
        piVar5 = (int *)((long)local_80 + 0x1c);
        do {
          iVar10 = *piVar5;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar8) {
            *piVar5 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_58 = *puVar3;
          FUN_00c44438(lVar11 + 0x8040,&local_58);
        }
      }
      else if (sVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  else {
    FUN_01273520(param_2,*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
    FUN_0127334c(*(undefined8 *)(param_2 + 0x18),param_2);
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x80));
  return;
}


