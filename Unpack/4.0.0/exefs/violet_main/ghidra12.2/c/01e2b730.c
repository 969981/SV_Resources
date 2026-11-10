/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e2b730; name: FUN_01e2b730
 */


void FUN_01e2b730(long *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  short sVar10;
  bool bVar11;
  long lVar12;
  long *plVar13;
  long *local_68;
  char *pcStack_60;
  undefined8 local_58;
  long *local_50;
  long *local_48;
  
  lVar9 = *param_1;
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar10 = *(short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar10) {
        cVar3 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar11) {
          *psVar1 = sVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01e2b79c;
        bVar11 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e2b79c:
        bVar11 = false;
      }
      if (bVar11) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 == 0) {
          return;
        }
        plVar6 = (long *)(lVar9 + 0xe8);
        lVar12 = *plVar6;
        lVar5 = nn::os::GetCurrentThread();
        if (lVar5 == lVar12) {
          bVar11 = true;
          goto LAB_01e2b7e8;
        }
        lVar5 = nn::os::GetCurrentThread();
        goto LAB_01e2b7d4;
      }
      sVar10 = sVar2;
    } while (sVar2 != 0);
  }
  return;
LAB_01e2b7d4:
  if (*plVar6 == 0) {
    cVar3 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar11) {
      *plVar6 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_01e2b7e4;
    goto LAB_01e2b7d4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xf0));
  do {
    if (*plVar6 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xf0));
        while (*plVar6 == 0) {
          cVar3 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar11) {
            *plVar6 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01e2b7e4;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar11) {
      *plVar6 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01e2b7e4:
  bVar11 = false;
LAB_01e2b7e8:
  plVar6 = (long *)FUN_01e2bce0(*(undefined8 *)(lVar9 + 0x100),*(undefined8 *)(lVar9 + 0x108));
  if ((*(long **)(lVar9 + 0x108) == plVar6) || (*plVar6 == 0)) {
    plVar6 = (long *)FUN_01e2bce0(*(undefined8 *)(lVar9 + 0x138),*(undefined8 *)(lVar9 + 0x140));
    if (*(long **)(lVar9 + 0x140) == plVar6) {
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = (long *)0x0;
      if (*plVar6 != 0) {
        plVar13 = (long *)(*plVar6 + -0x20);
      }
    }
  }
  else {
    plVar13 = (long *)(*plVar6 + -0x20);
  }
  if (!bVar11) {
    *(undefined8 *)(lVar9 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0xf0));
  }
  if (plVar13 != (long *)0x0) {
    lVar5 = plVar13[0x13];
    if (*(long *)(lVar5 + 0x10) == 0) goto LAB_01e2bc80;
    psVar1 = (short *)(lVar5 + 0x1a);
    do {
      sVar10 = *psVar1;
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar10 == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
      *(undefined8 *)(lVar5 + 8) = uVar8;
      *(undefined4 *)(lVar5 + 0x1c) = 0xfffffffe;
    }
    else if (sVar10 == -1) goto LAB_01e2bb0c;
  }
  plVar6 = *(long **)(lVar9 + -0x20);
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar6;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  plVar7 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x180,8);
  if (plVar7 == (long *)0x0) {
    (**(code **)(*plVar6 + 0xe8))(plVar6);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  local_68 = (long *)&DAT_a8bd1e5eb87a9f71;
  pcStack_60 = "FieldPokemonRecvHit";
  local_58 = 0x13;
  local_50 = (long *)0x0;
  local_48 = plVar13;
  FUN_013d2548(plVar7,&local_48,&local_68,8,0);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    lVar12 = local_48[0x13];
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar10 = *psVar1;
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar10 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*local_48 + 0x50))();
    }
    else if (sVar10 == 0) goto LAB_01e2ba1c;
  }
  *(undefined4 *)(plVar7 + 3) = 0x80180;
  plVar7[1] = (long)plVar6;
  plVar7[2] = (long)plVar7;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  lVar5 = plVar7[0x13];
  if (*(long *)(lVar5 + 0x10) == 0) {
LAB_01e2bc80:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x3d);
  }
  plVar6 = (long *)(lVar9 + -0x28);
  psVar1 = (short *)(lVar5 + 0x1a);
  do {
    sVar10 = *psVar1;
    cVar3 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar11) {
      *psVar1 = sVar10 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar10 == 0) {
    uVar8 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
    *(undefined8 *)(lVar5 + 8) = uVar8;
    *(undefined4 *)(lVar5 + 0x1c) = 0xfffffffe;
  }
  else if (sVar10 == -1) {
LAB_01e2bb0c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  plVar13 = plVar7 + 4;
  (**(code **)(*plVar13 + 0xe8))(plVar13,plVar6);
  (**(code **)(*plVar13 + 0x68))(plVar13);
  local_68 = plVar7;
  FUN_00df8c30(lVar9 + 0xe0,&local_68);
  if (local_68 != (long *)0x0) {
    lVar5 = local_68[0x13];
    psVar1 = (short *)(lVar5 + 0x1a);
    do {
      sVar10 = *psVar1;
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar10 == 1) {
      *(undefined8 *)(lVar5 + 0x10) = 0;
      (**(code **)(*local_68 + 0x50))();
    }
    else if (sVar10 == 0) goto LAB_01e2ba1c;
  }
  (**(code **)(*(long *)(lVar9 + -0x28) + 0x100))(plVar6,plVar13);
  plVar7 = (long *)(lVar9 + 0x418);
  lVar12 = *plVar7;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 == lVar12) {
    plVar7 = (long *)0x0;
    bVar11 = true;
LAB_01e2b9d0:
    if ((*(byte *)(lVar9 + 0x430) >> 2 & 1) == 0) {
      FUN_00d37964(plVar6,0,0);
    }
    else {
      (**(code **)(*plVar13 + 0xf8))(plVar13);
    }
    if (!bVar11) {
      *plVar7 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar7 + 1));
    }
    lVar9 = *(long *)(lVar9 + 8);
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar10 = *psVar1;
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar10 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar6 + 0x50))(plVar6);
      return;
    }
    if (sVar10 != 0) {
      return;
    }
LAB_01e2ba1c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar7 == 0) {
    cVar3 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar11) {
      *plVar7 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_01e2b9cc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x420));
  do {
    if (*plVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x420));
        while (*plVar7 == 0) {
          cVar3 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar11) {
            *plVar7 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01e2b9cc;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar11) {
      *plVar7 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01e2b9cc:
  bVar11 = false;
  goto LAB_01e2b9d0;
}


