/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d09b9c; name: FUN_00d09b9c
 */


void FUN_00d09b9c(long param_1)

{
  ulong uVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [48];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_68;
  
  if (((DAT_04837608 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04837608), iVar10 != 0)) {
    FUN_00100190(&LAB_00a92af8,&DAT_048375f8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04837608);
  }
  lVar14 = DAT_048375f8;
  DAT_04837610 = DAT_048375f8;
  local_d0 = (undefined8 *)0x0;
  uStack_c8 = 0;
  FUN_00d0a71c(&local_d0,param_1);
  memcpy(auStack_c0,(void *)(param_1 + 0x10),0x24);
  local_90 = *(undefined8 *)(param_1 + 0x40);
  local_88 = *(undefined8 *)(param_1 + 0x48);
  local_80 = *(undefined8 *)(param_1 + 0x50);
  local_78 = *(long **)(param_1 + 0x58);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x18))();
  }
  plVar18 = (long *)(lVar14 + 0x2d8);
  lVar11 = nn::os::GetCurrentThread();
  while (*plVar18 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar6) {
      *plVar18 = lVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_00d09c48;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x2e0));
  do {
    if (*plVar18 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x2e0));
        while (*plVar18 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar6) {
            *plVar18 = lVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00d09c48;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar6) {
      *plVar18 = lVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00d09c48:
  puVar20 = *(undefined8 **)(lVar14 + 0x1c0);
  if (puVar20 == *(undefined8 **)(lVar14 + 0x1c8)) {
    uVar16 = *(ulong *)(lVar14 + 0x1d8);
    lVar11 = (long)puVar20 - *(long *)(lVar14 + 0x1b8) >> 5;
    if (0x7ffffffffffffffe < uVar16) {
      uVar16 = 0x7fffffffffffffff;
    }
    uVar1 = lVar11 * -0x5555555555555555 + 1;
    if (uVar16 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar13 = (long)*(undefined8 **)(lVar14 + 0x1c8) - *(long *)(lVar14 + 0x1b8) >> 5;
    uVar15 = lVar13 * 0x5555555555555556;
    if (uVar1 <= uVar15) {
      uVar1 = uVar15;
    }
    if (uVar16 >> 1 <= (ulong)(lVar13 * -0x5555555555555555)) {
      uVar1 = uVar16;
    }
    if (uVar1 == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = (**(code **)(**(long **)(lVar14 + 0x1d0) + 0x10))
                         (*(long **)(lVar14 + 0x1d0),uVar1 * 0x60,0x10);
      if (lVar13 == 0) {
        (**(code **)(**(long **)(lVar14 + 0x1d0) + 0xe8))();
      }
    }
    uVar19 = *(undefined8 *)(lVar14 + 0x1d0);
    if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar12 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar12 != 0) {
      if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00d0a304;
      *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar19;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    }
    puVar20 = (undefined8 *)(lVar13 + lVar11 * 0x20);
    *puVar20 = 0;
    puVar20[1] = 0;
    FUN_00d0a71c(puVar20,&local_d0);
    lVar11 = lVar13 + lVar11 * 0x20;
    memcpy((void *)(lVar11 + 0x10),auStack_c0,0x24);
    *(undefined8 *)(lVar11 + 0x40) = local_90;
    *(undefined8 *)(lVar11 + 0x48) = local_88;
    *(undefined8 *)(lVar11 + 0x50) = local_80;
    *(long **)(lVar11 + 0x58) = local_78;
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x18))();
    }
    if (lVar12 != 0) {
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    }
    puVar17 = *(undefined8 **)(lVar14 + 0x1b8);
    puVar21 = *(undefined8 **)(lVar14 + 0x1c0);
    if (puVar21 == puVar17) {
      puVar22 = puVar20;
      puVar21 = puVar17;
    }
    else {
      lVar11 = 0;
      do {
        uVar19 = *(undefined8 *)(lVar14 + 0x1d0);
        if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar12 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar12 != 0) {
          if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00d0a304;
          *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar19;
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
        }
        puVar22 = (undefined8 *)((long)puVar20 + lVar11 + -0x60);
        *puVar22 = 0;
        *(undefined8 *)((long)puVar20 + lVar11 + -0x58) = 0;
        FUN_00d0a34c(puVar22,(long)puVar21 + lVar11 + -0x60);
        memcpy((void *)((long)puVar20 + lVar11 + -0x50),(void *)((long)puVar21 + lVar11 + -0x50),
               0x24);
        *(undefined8 *)((long)puVar20 + lVar11 + -0x20) =
             *(undefined8 *)((long)puVar21 + lVar11 + -0x20);
        *(undefined8 *)((long)puVar20 + lVar11 + -0x18) =
             *(undefined8 *)((long)puVar21 + lVar11 + -0x18);
        *(undefined8 *)((long)puVar20 + lVar11 + -0x10) =
             *(undefined8 *)((long)puVar21 + lVar11 + -0x10);
        uVar19 = *(undefined8 *)((long)puVar21 + lVar11 + -8);
        *(undefined8 *)((long)puVar21 + lVar11 + -8) = 0;
        *(undefined8 *)((long)puVar20 + lVar11 + -8) = uVar19;
        if (lVar12 != 0) {
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
        }
        lVar11 = lVar11 + -0x60;
      } while ((long)puVar17 - (long)puVar21 != lVar11);
      puVar17 = *(undefined8 **)(lVar14 + 0x1b8);
      puVar22 = (undefined8 *)((long)puVar20 + lVar11);
      puVar21 = *(undefined8 **)(lVar14 + 0x1c0);
    }
    lVar11 = *(long *)(lVar14 + 0x1c8);
    *(undefined8 **)(lVar14 + 0x1b8) = puVar22;
    *(undefined8 **)(lVar14 + 0x1c0) = puVar20 + 0xc;
    *(ulong *)(lVar14 + 0x1c8) = lVar13 + uVar1 * 0x60;
    puVar9 = PTR_DAT_047d3918;
    puVar8 = PTR_DAT_047d3910;
    puVar7 = PTR_DAT_047d3908;
    while (puVar21 != puVar17) {
      plVar18 = puVar21 + -1;
      puVar21 = puVar21 + -0xc;
      if ((long *)*plVar18 != (long *)0x0) {
        (**(code **)(*(long *)*plVar18 + 0x20))();
      }
      puVar20 = (undefined8 *)*puVar21;
      if (puVar20 != (undefined8 *)0x0) {
        psVar2 = (short *)(puVar20 + 3);
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
          piVar3 = (int *)((long)puVar20 + 0x1c);
          do {
            iVar10 = *piVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar10 != -1) {
            if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,puVar8,&PTR_LOOP_04483000);
              __cxa_guard_release(puVar7);
            }
            lVar13 = *(long *)puVar8;
            *(long *)puVar9 = lVar13;
            local_68 = *puVar20;
            FUN_00c44438(lVar13 + 0x8040,&local_68);
          }
        }
        else if (sVar4 == 0) goto LAB_00d09e34;
      }
    }
    if (puVar17 != (undefined8 *)0x0) {
      plVar18 = *(long **)(lVar14 + 0x1d0);
      lVar11 = lVar11 - (long)puVar17;
      uVar16 = (**(code **)(*plVar18 + 0xf8))(plVar18);
      if (((uVar16 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
        (**(code **)(*plVar18 + 0x18))(plVar18,puVar17,lVar11,0x10);
      }
      else {
        FUN_00c48fe8(plVar18,puVar17,lVar11,0x10);
      }
    }
  }
  else {
    uVar19 = *(undefined8 *)(lVar14 + 0x1d0);
    if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 != 0) {
      if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_00d0a304:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar19;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    }
    *puVar20 = 0;
    puVar20[1] = 0;
    FUN_00d0a71c(puVar20,&local_d0);
    memcpy(puVar20 + 2,auStack_c0,0x24);
    puVar20[8] = local_90;
    puVar20[9] = local_88;
    puVar20[10] = local_80;
    puVar20[0xb] = local_78;
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x18))();
    }
    if (lVar11 != 0) {
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    }
    *(undefined8 **)(lVar14 + 0x1c0) = puVar20 + 0xc;
  }
  *(undefined8 *)(lVar14 + 0x2d8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0x2e0));
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  puVar20 = local_d0;
  if (local_d0 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_d0 + 3);
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
      piVar3 = (int *)((long)local_d0 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_68 = *puVar20;
        FUN_00c44438(lVar14 + 0x8040,&local_68);
      }
    }
    else if (sVar4 == 0) {
LAB_00d09e34:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


