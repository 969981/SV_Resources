/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01900af8; name: FUN_01900af8
 */


void FUN_01900af8(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  ulong uVar5;
  undefined8 *puVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  short sVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_28;
  
  uVar11 = *(ulong *)(param_1 + 0x160);
  if (uVar11 != 0) {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = uVar11 - 1 & 0xcd812505d81da756;
    }
    else {
      uVar14 = 0xcd812505d81da756;
      if (uVar11 < 0xcd812505d81da757) {
        uVar14 = 0;
        if (uVar11 != 0) {
          uVar14 = 0xcd812505d81da756 / uVar11;
        }
        uVar14 = 0xcd812505d81da756 - uVar14 * uVar11;
      }
    }
    plVar15 = *(long **)(*(long *)(param_1 + 0x158) + uVar14 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar15[1] == 0xcd812505d81da756) {
            if (plVar15[2] == -0x327edafa27e258aa) goto LAB_01900c10;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar14) {
            return;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar15[1];
          if (uVar13 == 0xcd812505d81da756) {
            if (plVar15[2] == -0x327edafa27e258aa) goto LAB_01900c10;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar5 * uVar11;
            }
            if (uVar13 != uVar14) {
              return;
            }
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  return;
LAB_01900d18:
  if (*plVar15 == 0) goto code_r0x01900d20;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
  do {
    if (*plVar15 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
        while (*plVar15 == 0) {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar7) {
            *plVar15 = lVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01900d28;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar7) {
      *plVar15 = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01900d28:
  bVar7 = false;
LAB_01900d2c:
  plVar15 = (long *)FUN_021334c0(*(undefined8 *)(lVar10 + 0x100),*(undefined8 *)(lVar10 + 0x108));
  if ((*(long **)(lVar10 + 0x108) == plVar15) || (*plVar15 == 0)) {
    plVar15 = (long *)FUN_021334c0(*(undefined8 *)(lVar10 + 0x138),*(undefined8 *)(lVar10 + 0x140));
    if (*(long **)(lVar10 + 0x140) == plVar15) {
      lVar9 = 0;
    }
    else {
      lVar9 = 0;
      if (*plVar15 != 0) {
        lVar9 = *plVar15 + -0x20;
      }
    }
  }
  else {
    lVar9 = *plVar15 + -0x20;
  }
  if (!bVar7) {
    *(undefined8 *)(lVar10 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0xf0));
  }
  if (lVar9 != 0) {
    uVar11 = *(ulong *)(param_1 + 0x160);
    if (uVar11 == 0) {
LAB_01900ee4:
      bVar7 = false;
    }
    else {
      uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
      uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar13 < 2) {
        uVar14 = uVar11 - 1 & 0xcd812505d81da756;
      }
      else {
        uVar14 = 0xcd812505d81da756;
        if (uVar11 < 0xcd812505d81da757) {
          uVar14 = 0;
          if (uVar11 != 0) {
            uVar14 = 0xcd812505d81da756 / uVar11;
          }
          uVar14 = 0xcd812505d81da756 - uVar14 * uVar11;
        }
      }
      plVar15 = *(long **)(*(long *)(param_1 + 0x158) + uVar14 * 8);
      if ((plVar15 == (long *)0x0) || (plVar15 = (long *)*plVar15, plVar15 == (long *)0x0))
      goto LAB_01900ee4;
      if (uVar13 < 2) {
        do {
          if (plVar15[1] == 0xcd812505d81da756) {
            if (plVar15[2] == -0x327edafa27e258aa) goto LAB_01900f48;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar14) goto LAB_01900ee4;
          plVar15 = (long *)*plVar15;
          bVar7 = false;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar15[1];
          if (uVar13 == 0xcd812505d81da756) {
            if (plVar15[2] == -0x327edafa27e258aa) {
LAB_01900f48:
              bVar7 = (char)plVar15[6] != '\0';
              break;
            }
          }
          else {
            if (uVar11 <= uVar13) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar5 * uVar11;
            }
            if (uVar13 != uVar14) goto LAB_01900ee4;
          }
          plVar15 = (long *)*plVar15;
          bVar7 = false;
        } while (plVar15 != (long *)0x0);
      }
    }
    FUN_0119cc40(lVar9,bVar7);
  }
  (**(code **)(*(long *)(lVar10 + -0x28) + 0x60))((long *)(lVar10 + -0x28));
  goto LAB_01900f70;
code_r0x01900d20:
  cVar4 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
  if (bVar7) {
    *plVar15 = lVar9;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01900d28;
  goto LAB_01900d18;
LAB_01900c10:
  local_70 = *(undefined8 *)(param_1 + 0x110);
  uStack_68 = *(undefined8 *)(param_1 + 0x118);
  local_60 = *(undefined8 *)(param_1 + 0x120);
  plVar15 = *(long **)(param_1 + 0x128);
  local_58 = plVar15;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x18))(plVar15);
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
  }
  else {
    (**(code **)(param_1 + 0x10))(&local_50,param_1 + 0x30,&local_70);
    plVar15 = local_58;
  }
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  if (local_50 == (undefined8 *)0x0) {
    return;
  }
  if (*(short *)((long)local_50 + 0x1a) != 0) {
    psVar1 = (short *)((long)local_50 + 0x1a);
    sVar12 = *(short *)((long)local_50 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar12) {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01900cd4;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01900cd4:
        bVar7 = false;
      }
      if (bVar7) {
        lVar10 = local_50[2];
        if (lVar10 == 0) goto LAB_01900f74;
        plVar15 = (long *)(lVar10 + 0xe8);
        lVar16 = *plVar15;
        lVar9 = nn::os::GetCurrentThread();
        if (lVar9 != lVar16) {
          lVar9 = nn::os::GetCurrentThread();
          goto LAB_01900d18;
        }
        bVar7 = true;
        goto LAB_01900d2c;
      }
      sVar12 = sVar3;
    } while (sVar3 != 0);
LAB_01900f70:
    if (local_50 == (undefined8 *)0x0) {
      return;
    }
  }
LAB_01900f74:
  puVar6 = local_50;
  psVar1 = (short *)(local_50 + 3);
  do {
    sVar12 = *psVar1;
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar7) {
      *psVar1 = sVar12 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar12 != 1) {
    if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    return;
  }
  piVar2 = (int *)((long)local_50 + 0x1c);
  do {
    iVar8 = *piVar2;
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar7) {
      *piVar2 = -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar8 == -1) {
    return;
  }
  if (((*PTR_DAT_047d3908 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  lVar10 = *(long *)PTR_DAT_047d3910;
  *(long *)PTR_DAT_047d3918 = lVar10;
  local_28 = *puVar6;
  FUN_00c44438(lVar10 + 0x8040,&local_28);
  return;
}


