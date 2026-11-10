/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019cdd34; name: FUN_019cdd34
 */


void FUN_019cdd34(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  bool bVar12;
  short sVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long local_90;
  long lStack_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 *local_50 [2];
  undefined8 local_28;
  
  puVar7 = (undefined8 *)FUN_0140f310();
  local_70 = *puVar7;
  uStack_68 = puVar7[1];
  local_60 = puVar7[2];
  local_58 = (long *)puVar7[3];
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))();
  }
  FUN_0140f318(local_50,param_1,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_50[0] != (undefined8 *)0x0) {
    puVar7 = local_50[0];
    if (*(short *)((long)local_50[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_50[0] + 0x1a);
      sVar13 = *(short *)((long)local_50[0] + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar13) {
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar12) {
            *psVar1 = sVar13 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_019cddf4;
          bVar12 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_019cddf4:
          bVar12 = false;
        }
        if (bVar12) {
          lVar10 = local_50[0][2];
          if (lVar10 == 0) goto LAB_019ce06c;
          plVar9 = (long *)(lVar10 + 0xe8);
          lVar16 = *plVar9;
          lVar8 = nn::os::GetCurrentThread();
          if (lVar8 != lVar16) {
            lVar8 = nn::os::GetCurrentThread();
            goto LAB_019cde38;
          }
          bVar12 = true;
          goto LAB_019cde4c;
        }
        sVar13 = sVar3;
      } while (sVar3 != 0);
LAB_019ce068:
      puVar7 = local_50[0];
      if (local_50[0] == (undefined8 *)0x0) {
        return;
      }
    }
LAB_019ce06c:
    psVar1 = (short *)(puVar7 + 3);
    do {
      sVar13 = *psVar1;
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar13 == 1) {
      piVar2 = (int *)((long)puVar7 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar12) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_28 = *puVar7;
        FUN_00c44438(lVar10 + 0x8040,&local_28);
      }
    }
    else if (sVar13 == 0) {
LAB_019ce08c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
LAB_019cde38:
  if (*plVar9 == 0) goto code_r0x019cde40;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
        while (*plVar9 == 0) {
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar12) {
            *plVar9 = lVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_019cde48;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar12) {
      *plVar9 = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_019cde48:
  bVar12 = false;
LAB_019cde4c:
  plVar9 = (long *)FUN_02127ec0(*(undefined8 *)(lVar10 + 0x100),*(undefined8 *)(lVar10 + 0x108));
  if ((*(long **)(lVar10 + 0x108) == plVar9) || (*plVar9 == 0)) {
    plVar9 = (long *)FUN_02127ec0(*(undefined8 *)(lVar10 + 0x138),*(undefined8 *)(lVar10 + 0x140));
    if (*(long **)(lVar10 + 0x140) == plVar9) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      if (*plVar9 != 0) {
        lVar8 = *plVar9 + -0x20;
      }
    }
  }
  else {
    lVar8 = *plVar9 + -0x20;
  }
  if (!bVar12) {
    *(undefined8 *)(lVar10 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0xf0));
  }
  if (lVar8 != 0) {
    FUN_01e24468(lVar8,1);
    uVar11 = *(ulong *)(param_1 + 0x160);
    lStack_88 = 0;
    local_90 = 0;
    if (uVar11 != 0) {
      uVar14 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
      uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar14 < 2) {
        uVar15 = uVar11 - 1 & 0x3700970d9a0e184a;
      }
      else {
        uVar15 = 0x3700970d9a0e184a;
        if (uVar11 < 0x3700970d9a0e184b) {
          uVar15 = 0;
          if (uVar11 != 0) {
            uVar15 = 0x3700970d9a0e184a / uVar11;
          }
          uVar15 = 0x3700970d9a0e184a - uVar15 * uVar11;
        }
      }
      plVar9 = *(long **)(*(long *)(param_1 + 0x158) + uVar15 * 8);
      if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
        if (1 < uVar14) {
LAB_019cdfd8:
          uVar14 = plVar9[1];
          if (uVar14 == 0x3700970d9a0e184a) {
            if (plVar9[2] != 0x3700970d9a0e184a) goto LAB_019ce004;
LAB_019ce010:
            lStack_88 = plVar9[7];
            local_90 = plVar9[6];
          }
          else {
            if (uVar11 <= uVar14) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar14 / uVar11;
              }
              uVar14 = uVar14 - uVar5 * uVar11;
            }
            if (uVar14 == uVar15) goto LAB_019ce004;
          }
          goto LAB_019ce018;
        }
        do {
          if (plVar9[1] == 0x3700970d9a0e184a) {
            if (plVar9[2] == 0x3700970d9a0e184a) goto LAB_019ce010;
          }
          else if ((plVar9[1] & uVar11 - 1) != uVar15) break;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
LAB_019ce018:
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    FUN_00d0a71c(&local_80,local_50);
    lVar8 = FUN_01180e7c(param_1,&local_80);
    puVar7 = local_80;
    if (local_80 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_80 + 3);
      do {
        sVar13 = *psVar1;
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar12) {
          *psVar1 = sVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar13 == 1) {
        piVar2 = (int *)((long)local_80 + 0x1c);
        do {
          iVar6 = *piVar2;
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar16 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar16;
          local_28 = *puVar7;
          FUN_00c44438(lVar16 + 0x8040,&local_28);
        }
      }
      else if (sVar13 == 0) goto LAB_019ce08c;
    }
    if (lVar8 != 0) {
      *(undefined1 *)(lVar8 + 0xe0) = 1;
      *(long *)(lVar8 + 0xa8) = lStack_88;
      *(long *)(lVar8 + 0xa0) = local_90;
    }
  }
  (**(code **)(*(long *)(lVar10 + -0x28) + 0x60))((long *)(lVar10 + -0x28));
  goto LAB_019ce068;
code_r0x019cde40:
  cVar4 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar12) {
    *plVar9 = lVar8;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_019cde48;
  goto LAB_019cde38;
LAB_019ce004:
  plVar9 = (long *)*plVar9;
  if (plVar9 == (long *)0x0) goto LAB_019ce018;
  goto LAB_019cdfd8;
}


