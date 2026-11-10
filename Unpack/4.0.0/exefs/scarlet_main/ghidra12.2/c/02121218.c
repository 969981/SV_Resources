/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02121218; name: FUN_02121218
 */


void FUN_02121218(undefined8 param_1,long param_2,long param_3)

{
  short *psVar1;
  int *piVar2;
  undefined4 uVar3;
  short sVar4;
  char cVar5;
  ulong uVar6;
  undefined8 *puVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  short sVar16;
  long *plVar17;
  long lVar18;
  code *local_108;
  undefined1 auStack_f0 [104];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long *local_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  local_108 = (code *)0x0;
  if (*(code **)(param_3 + 0x10) != (code *)0x0) {
    (**(code **)(param_3 + 0x10))(param_3 + 0x20,auStack_f0);
    local_108 = *(code **)(param_3 + 8);
  }
  uVar12 = *(ulong *)(param_2 + 0x160);
  if (uVar12 != 0) {
    uVar14 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar15 = uVar12 - 1 & 0xcd812505d81da756;
    }
    else {
      uVar15 = 0xcd812505d81da756;
      if (uVar12 < 0xcd812505d81da757) {
        uVar15 = 0;
        if (uVar12 != 0) {
          uVar15 = 0xcd812505d81da756 / uVar12;
        }
        uVar15 = 0xcd812505d81da756 - uVar15 * uVar12;
      }
    }
    plVar17 = *(long **)(*(long *)(param_2 + 0x158) + uVar15 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar17[1] == 0xcd812505d81da756) {
            if (plVar17[2] == -0x327edafa27e258aa) goto LAB_02121374;
          }
          else if ((plVar17[1] & uVar12 - 1) != uVar15) break;
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar17[1];
          if (uVar14 == 0xcd812505d81da756) {
            if (plVar17[2] == -0x327edafa27e258aa) goto LAB_02121374;
          }
          else {
            if (uVar12 <= uVar14) {
              uVar6 = 0;
              if (uVar12 != 0) {
                uVar6 = uVar14 / uVar12;
              }
              uVar14 = uVar14 - uVar6 * uVar12;
            }
            if (uVar14 != uVar15) break;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
LAB_021213c0:
  if (local_108 != (code *)0x0) {
    (*local_108)(auStack_f0);
  }
  return;
LAB_02121374:
  local_88 = *(undefined8 *)(param_2 + 0x110);
  uStack_80 = *(undefined8 *)(param_2 + 0x118);
  local_78 = *(undefined8 *)(param_2 + 0x120);
  local_70 = *(long **)(param_2 + 0x128);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x18))();
  }
  if (*(code **)(param_2 + 0x10) == (code *)0x0) {
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
  }
  else {
    (**(code **)(param_2 + 0x10))(&local_68,param_2 + 0x30,&local_88);
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_68 != (undefined8 *)0x0) {
    if (*(short *)((long)local_68 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_68 + 0x1a);
      sVar16 = *(short *)((long)local_68 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar16) {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar16 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_02121454;
          bVar8 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02121454:
          bVar8 = false;
        }
        if (bVar8) {
          lVar13 = local_68[2];
          if (lVar13 == 0) goto LAB_021216c4;
          plVar17 = (long *)(lVar13 + 0xe8);
          lVar18 = *plVar17;
          lVar10 = nn::os::GetCurrentThread();
          if (lVar10 == lVar18) {
            bVar8 = true;
            goto LAB_021214ac;
          }
          lVar10 = nn::os::GetCurrentThread();
          goto LAB_02121498;
        }
        sVar16 = sVar4;
      } while (sVar4 != 0);
LAB_021216c0:
      if (local_68 == (undefined8 *)0x0) goto LAB_021213c0;
    }
LAB_021216c4:
    puVar7 = local_68;
    psVar1 = (short *)(local_68 + 3);
    do {
      sVar16 = *psVar1;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar16 == 1) {
      piVar2 = (int *)((long)local_68 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar8) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_58 = *puVar7;
        FUN_00c44438(lVar13 + 0x8040,&local_58);
      }
    }
    else if (sVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  goto LAB_021213c0;
LAB_02121498:
  if (*plVar17 == 0) goto code_r0x021214a0;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0xf0));
  do {
    if (*plVar17 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0xf0));
        while (*plVar17 == 0) {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar8) {
            *plVar17 = lVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_021214a8;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar8) {
      *plVar17 = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_021214a8:
  bVar8 = false;
LAB_021214ac:
  plVar17 = (long *)FUN_02121100(*(undefined8 *)(lVar13 + 0x100),*(undefined8 *)(lVar13 + 0x108));
  if ((*(long **)(lVar13 + 0x108) == plVar17) || (*plVar17 == 0)) {
    plVar17 = (long *)FUN_02121100(*(undefined8 *)(lVar13 + 0x138),*(undefined8 *)(lVar13 + 0x140));
    if (*(long **)(lVar13 + 0x140) == plVar17) {
      lVar10 = 0;
    }
    else {
      lVar10 = 0;
      if (*plVar17 != 0) {
        lVar10 = *plVar17 + -0x20;
      }
    }
  }
  else {
    lVar10 = *plVar17 + -0x20;
  }
  if (!bVar8) {
    *(undefined8 *)(lVar13 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0xf0));
  }
  if (lVar10 != 0) {
    uVar3 = *(undefined4 *)(param_2 + 0x1c0);
    uVar12 = *(ulong *)(param_2 + 0x160);
    if (uVar12 == 0) {
LAB_02121620:
      bVar8 = false;
    }
    else {
      uVar14 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
      uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
      uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar14 < 2) {
        uVar15 = uVar12 - 1 & 0xcd812505d81da756;
      }
      else {
        uVar15 = 0xcd812505d81da756;
        if (uVar12 < 0xcd812505d81da757) {
          uVar15 = 0;
          if (uVar12 != 0) {
            uVar15 = 0xcd812505d81da756 / uVar12;
          }
          uVar15 = 0xcd812505d81da756 - uVar15 * uVar12;
        }
      }
      plVar17 = *(long **)(*(long *)(param_2 + 0x158) + uVar15 * 8);
      if ((plVar17 == (long *)0x0) || (plVar17 = (long *)*plVar17, plVar17 == (long *)0x0))
      goto LAB_02121620;
      if (uVar14 < 2) {
        do {
          if (plVar17[1] == 0xcd812505d81da756) {
            if (plVar17[2] == -0x327edafa27e258aa) goto LAB_02121664;
          }
          else if ((plVar17[1] & uVar12 - 1) != uVar15) goto LAB_02121620;
          plVar17 = (long *)*plVar17;
          bVar8 = false;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar17[1];
          if (uVar14 == 0xcd812505d81da756) {
            if (plVar17[2] == -0x327edafa27e258aa) {
LAB_02121664:
              bVar8 = (char)plVar17[6] != '\0';
              break;
            }
          }
          else {
            if (uVar12 <= uVar14) {
              uVar6 = 0;
              if (uVar12 != 0) {
                uVar6 = uVar14 / uVar12;
              }
              uVar14 = uVar14 - uVar6 * uVar12;
            }
            if (uVar14 != uVar15) goto LAB_02121620;
          }
          plVar17 = (long *)*plVar17;
          bVar8 = false;
        } while (plVar17 != (long *)0x0);
      }
    }
    if (((*PTR_DAT_047d3be0 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3be0), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d89f0,PTR_DAT_047d3be8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3be0);
    }
    uVar11 = *(undefined8 *)PTR_DAT_047d3be8;
    *(undefined8 *)PTR_DAT_047dcd80 = uVar11;
    FUN_0211164c(uVar11,uVar3,param_2,param_2 + 0x110,bVar8);
  }
  (**(code **)(*(long *)(lVar13 + -0x28) + 0x60))((long *)(lVar13 + -0x28));
  goto LAB_021216c0;
code_r0x021214a0:
  cVar5 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
  if (bVar8) {
    *plVar17 = lVar10;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_021214a8;
  goto LAB_02121498;
}


