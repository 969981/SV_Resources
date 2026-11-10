/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019d7a18; name: FUN_019d7a18
 */


void FUN_019d7a18(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  bool bVar11;
  short sVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  uint local_d0 [8];
  undefined4 local_b0 [8];
  undefined8 local_90 [4];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 *local_50 [2];
  
  puVar6 = (undefined8 *)FUN_0140f310();
  local_70 = *puVar6;
  uStack_68 = puVar6[1];
  local_60 = puVar6[2];
  local_58 = (long *)puVar6[3];
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))();
  }
  FUN_0140f318(local_50,param_1,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_50[0] != (undefined8 *)0x0) {
    puVar6 = local_50[0];
    if (*(short *)((long)local_50[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_50[0] + 0x1a);
      sVar12 = *(short *)((long)local_50[0] + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar12) {
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar11) {
            *psVar1 = sVar12 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_019d7ad8;
          bVar11 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_019d7ad8:
          bVar11 = false;
        }
        if (bVar11) {
          lVar10 = local_50[0][2];
          if (lVar10 == 0) goto LAB_019d7cd8;
          plVar9 = (long *)(lVar10 + 0xe8);
          lVar13 = *plVar9;
          lVar7 = nn::os::GetCurrentThread();
          if (lVar7 != lVar13) {
            lVar7 = nn::os::GetCurrentThread();
            goto LAB_019d7b1c;
          }
          bVar11 = true;
          goto LAB_019d7b30;
        }
        sVar12 = sVar3;
      } while (sVar3 != 0);
LAB_019d7cd4:
      puVar6 = local_50[0];
      if (local_50[0] == (undefined8 *)0x0) {
        return;
      }
    }
LAB_019d7cd8:
    psVar1 = (short *)(puVar6 + 3);
    do {
      sVar12 = *psVar1;
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar12 == 1) {
      piVar2 = (int *)((long)puVar6 + 0x1c);
      do {
        iVar5 = *piVar2;
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar11) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar5 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_90[0] = *puVar6;
        FUN_00c44438(lVar10 + 0x8040,local_90);
      }
    }
    else if (sVar12 == 0) {
LAB_019d7cf8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
LAB_019d7b1c:
  if (*plVar9 == 0) goto code_r0x019d7b24;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
        while (*plVar9 == 0) {
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar11) {
            *plVar9 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_019d7b2c;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar11) {
      *plVar9 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_019d7b2c:
  bVar11 = false;
LAB_019d7b30:
  plVar8 = (long *)FUN_02127ec0(*(undefined8 *)(lVar10 + 0x100),*(undefined8 *)(lVar10 + 0x108));
  if ((*(long **)(lVar10 + 0x108) == plVar8) || (*plVar8 == 0)) {
    plVar8 = (long *)FUN_02127ec0(*(undefined8 *)(lVar10 + 0x138),*(undefined8 *)(lVar10 + 0x140));
    if (*(long **)(lVar10 + 0x140) == plVar8) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      if (*plVar8 != 0) {
        lVar7 = *plVar8 + -0x20;
      }
    }
  }
  else {
    lVar7 = *plVar8 + -0x20;
  }
  if (!bVar11) {
    *(undefined8 *)(lVar10 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0xf0));
  }
  if (lVar7 != 0) {
    FUN_01e24468(lVar7,0);
    local_90[0] = 0x3700970d9a0e184a;
    uVar15 = *(undefined8 *)(lVar10 + 0xa0);
    uVar14 = *(undefined8 *)(lVar10 + 0x98);
    puVar6 = (undefined8 *)FUN_01235878(param_1 + 0x158,local_90);
    *puVar6 = PTR_LAB_047dcdd0;
    puVar6[3] = uVar15;
    puVar6[2] = uVar14;
    lVar13 = *(long *)(lVar10 + 0xe8);
    lVar7 = nn::os::GetCurrentThread();
    if (lVar7 != lVar13) {
      lVar7 = nn::os::GetCurrentThread();
LAB_019d7bd8:
      if (*plVar9 == 0) goto code_r0x019d7be0;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
      do {
        if (*plVar9 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
            while (*plVar9 == 0) {
              cVar4 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar11) {
                *plVar9 = lVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_019d7be8;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar11) {
          *plVar9 = lVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_019d7be8:
      bVar11 = false;
      goto LAB_019d7bec;
    }
    bVar11 = true;
LAB_019d7bec:
    plVar9 = (long *)FUN_02127fe0(*(undefined8 *)(lVar10 + 0x100),*(undefined8 *)(lVar10 + 0x108));
    if ((*(long **)(lVar10 + 0x108) == plVar9) || (*plVar9 == 0)) {
      plVar9 = (long *)FUN_02127fe0(*(undefined8 *)(lVar10 + 0x138),*(undefined8 *)(lVar10 + 0x140))
      ;
      if (*(long **)(lVar10 + 0x140) == plVar9) {
        lVar7 = 0;
      }
      else {
        lVar7 = 0;
        if (*plVar9 != 0) {
          lVar7 = *plVar9 + -0x20;
        }
      }
    }
    else {
      lVar7 = *plVar9 + -0x20;
    }
    if (!bVar11) {
      *(undefined8 *)(lVar10 + 0xe8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0xf0));
    }
    if (lVar7 != 0) {
      FUN_01dbbc2c(local_90,lVar7);
      uVar14 = local_90[0];
      FUN_01dbbc2c(local_b0,lVar7);
      FUN_01dbbc2c(local_d0,lVar7);
      local_e0 = (undefined8 *)0x0;
      uStack_d8 = 0;
      FUN_00d0a71c(&local_e0,local_50);
      lVar7 = FUN_01180e7c(param_1,&local_e0);
      puVar6 = local_e0;
      if (local_e0 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_e0 + 3);
        do {
          sVar12 = *psVar1;
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar11) {
            *psVar1 = sVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar12 == 1) {
          piVar2 = (int *)((long)local_e0 + 0x1c);
          do {
            iVar5 = *piVar2;
            cVar4 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar11) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar5 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_90[0] = *puVar6;
            FUN_00c44438(lVar13 + 0x8040,local_90);
          }
        }
        else if (sVar12 == 0) goto LAB_019d7cf8;
      }
      if (lVar7 != 0) {
        *(undefined1 *)(lVar7 + 0xe0) = 1;
        *(ulong *)(lVar7 + 0xa8) = (ulong)local_d0[0];
        *(ulong *)(lVar7 + 0xa0) = CONCAT44(local_b0[0],(int)uVar14);
      }
    }
  }
  (**(code **)(*(long *)(lVar10 + -0x28) + 0x60))((long *)(lVar10 + -0x28));
  goto LAB_019d7cd4;
code_r0x019d7b24:
  cVar4 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar11) {
    *plVar9 = lVar7;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_019d7b2c;
  goto LAB_019d7b1c;
code_r0x019d7be0:
  cVar4 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar11) {
    *plVar9 = lVar7;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_019d7be8;
  goto LAB_019d7bd8;
}


