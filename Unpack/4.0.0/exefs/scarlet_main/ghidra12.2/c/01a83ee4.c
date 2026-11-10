/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a83ee4; name: FUN_01a83ee4
 */


void FUN_01a83ee4(undefined8 param_1)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  ushort uVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  bool bVar14;
  short sVar15;
  long lVar16;
  long *plVar17;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined8 *local_d0 [2];
  long *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long *local_70;
  undefined8 *local_68 [2];
  undefined8 local_58;
  
  puVar8 = (undefined8 *)FUN_0140f310();
  local_88 = *puVar8;
  uStack_80 = puVar8[1];
  local_78 = puVar8[2];
  local_70 = (long *)puVar8[3];
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x18))();
  }
  FUN_0140f318(local_68,param_1,&local_88);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  FUN_01340a44(&local_c0,param_1,1);
  if ((char)local_c0 != '\0') {
    local_f0 = local_b8;
    uStack_e8 = uStack_b0;
    local_e0 = local_a8;
    local_d8 = local_a0;
    if (local_a0 != (long *)0x0) {
      (**(code **)(*local_a0 + 0x18))();
    }
    FUN_0140f318(local_d0,param_1,&local_f0);
    FUN_00d0a34c(&local_98,local_d0);
    if (local_d0[0] != (undefined8 *)0x0) {
      psVar2 = (short *)(local_d0[0] + 3);
      do {
        sVar15 = *psVar2;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar14) {
          *psVar2 = sVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar15 == 1) {
        piVar1 = (int *)((long)local_d0[0] + 0x1c);
        do {
          iVar7 = *piVar1;
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar14) {
            *piVar1 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_58 = *local_d0[0];
          FUN_00c44438(lVar12 + 0x8040,&local_58);
        }
      }
      else if (sVar15 == 0) goto LAB_01a84038;
    }
    if (local_d8 != (long *)0x0) {
      (**(code **)(*local_d8 + 0x20))();
    }
    if ((char)local_c0 != '\0') {
      if (local_a0 != (long *)0x0) {
        (**(code **)(*local_a0 + 0x20))();
      }
      local_c0 = (long *)((ulong)local_c0 & 0xffffffffffffff00);
    }
  }
  if ((local_68[0] != (undefined8 *)0x0) && (*(short *)((long)local_68[0] + 0x1a) != 0)) {
    psVar2 = (short *)((long)local_68[0] + 0x1a);
    sVar15 = *(short *)((long)local_68[0] + 0x1a);
    do {
      sVar3 = *psVar2;
      if (sVar3 == sVar15) {
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar14) {
          *psVar2 = sVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01a84208;
        bVar14 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01a84208:
        bVar14 = false;
      }
      if (bVar14) {
        lVar12 = local_68[0][2];
        if (lVar12 != 0) {
          lVar9 = FUN_01491340(lVar12 + 0xe0,&local_c0);
          if (((lVar9 == 0) || (local_98 == (undefined8 *)0x0)) ||
             (*(short *)((long)local_98 + 0x1a) == 0)) goto LAB_01a84248;
          psVar2 = (short *)((long)local_98 + 0x1a);
          sVar15 = *(short *)((long)local_98 + 0x1a);
          goto LAB_01a84324;
        }
        break;
      }
      sVar15 = sVar3;
    } while (sVar3 != 0);
  }
  goto LAB_01a83fc8;
LAB_01a84444:
  if (*plVar11 == 0) goto code_r0x01a8444c;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0xf0));
  bVar14 = false;
  do {
    if (*plVar11 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0xf0));
        while (*plVar11 == 0) {
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar14) {
            *plVar11 = lVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
          bVar14 = false;
          if (cVar4 == '\0') goto LAB_01a84388;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar5) {
      *plVar11 = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01a84388:
  plVar11 = (long *)FUN_022491f0(*(undefined8 *)(lVar13 + 0x100),*(undefined8 *)(lVar13 + 0x108));
  if ((*(long **)(lVar13 + 0x108) == plVar11) || (*plVar11 == 0)) {
    plVar11 = (long *)FUN_022491f0(*(undefined8 *)(lVar13 + 0x138),*(undefined8 *)(lVar13 + 0x140));
    if (*(long **)(lVar13 + 0x140) == plVar11) {
      plVar17 = (long *)0x0;
    }
    else {
      plVar17 = (long *)0x0;
      if (*plVar11 != 0) {
        plVar17 = (long *)(*plVar11 + -0x20);
      }
    }
  }
  else {
    plVar17 = (long *)(*plVar11 + -0x20);
  }
  if (!bVar14) {
    *(undefined8 *)(lVar13 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0xf0));
  }
  if (plVar17 != (long *)0x0) {
    local_c0 = plVar17;
    (**(code **)(*plVar17 + 0x58))(plVar17);
    uVar6 = FUN_012595d8(param_1,0x100000001);
    FUN_0224933c(lVar9,&local_c0,(uVar6 & 0xff) != 0 && 0xff < uVar6);
    if (local_c0 != (long *)0x0) {
      (**(code **)(*local_c0 + 0x60))();
    }
  }
  (**(code **)(*(long *)(lVar13 + -0x28) + 0x60))((long *)(lVar13 + -0x28));
  goto LAB_01a84248;
code_r0x01a8444c:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar5) {
    *plVar11 = lVar10;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01a84388;
  goto LAB_01a84444;
  while (sVar15 = sVar3, sVar3 != 0) {
LAB_01a84324:
    sVar3 = *psVar2;
    if (sVar3 == sVar15) {
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar14) {
        *psVar2 = sVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_01a84348;
      bVar14 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01a84348:
      bVar14 = false;
    }
    if (bVar14) {
      lVar13 = local_98[2];
      if (lVar13 != 0) {
        plVar11 = (long *)(lVar13 + 0xe8);
        lVar16 = *plVar11;
        lVar10 = nn::os::GetCurrentThread();
        if (lVar10 != lVar16) {
          lVar10 = nn::os::GetCurrentThread();
          bVar14 = false;
          goto LAB_01a84444;
        }
        bVar14 = true;
        goto LAB_01a84388;
      }
      break;
    }
  }
LAB_01a84248:
  (**(code **)(*(long *)(lVar12 + -0x28) + 0x60))((long *)(lVar12 + -0x28));
LAB_01a83fc8:
  puVar8 = local_98;
  if (local_98 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_98 + 3);
    do {
      sVar15 = *psVar2;
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar14) {
        *psVar2 = sVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar15 == 1) {
      piVar1 = (int *)((long)local_98 + 0x1c);
      do {
        iVar7 = *piVar1;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar14) {
          *piVar1 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_c0 = (long *)*puVar8;
        FUN_00c44438(lVar12 + 0x8040,&local_c0);
      }
    }
    else if (sVar15 == 0) goto LAB_01a84038;
  }
  if (local_68[0] != (undefined8 *)0x0) {
    psVar2 = (short *)(local_68[0] + 3);
    do {
      sVar15 = *psVar2;
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar14) {
        *psVar2 = sVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar15 == 1) {
      piVar1 = (int *)((long)local_68[0] + 0x1c);
      do {
        iVar7 = *piVar1;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar14) {
          *piVar1 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_c0 = (long *)*local_68[0];
        FUN_00c44438(lVar12 + 0x8040,&local_c0);
      }
    }
    else if (sVar15 == 0) {
LAB_01a84038:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


