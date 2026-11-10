/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017cecb0; name: FUN_017cecb0
 */


void FUN_017cecb0(long param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  short *psVar1;
  uint uVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  short sVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 local_5c;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 uStack_58;
  undefined2 uStack_57;
  
  uVar14 = *(ulong *)(param_1 + 0x50);
  if (uVar14 == 0) {
    return;
  }
  uVar12 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar2 = *(uint *)(param_2 + 0x1c0);
  uVar10 = (ulong)uVar2;
  uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar12 < 2) {
    uVar16 = (ulong)((int)uVar14 - 1U & uVar2);
  }
  else {
    uVar16 = uVar10;
    if (uVar14 <= uVar10) {
      uVar16 = 0;
      if (uVar14 != 0) {
        uVar16 = uVar10 / uVar14;
      }
      uVar16 = uVar10 - uVar16 * uVar14;
    }
  }
  plVar13 = *(long **)(*(long *)(param_1 + 0x48) + uVar16 * 8);
  if (plVar13 == (long *)0x0) {
    return;
  }
  plVar13 = (long *)*plVar13;
  if (plVar13 == (long *)0x0) {
    return;
  }
  if (1 < uVar12) {
    do {
      uVar12 = plVar13[1];
      if (uVar12 == uVar10) {
        if (*(uint *)(plVar13 + 2) == uVar2) goto LAB_017ced50;
      }
      else {
        if (uVar14 <= uVar12) {
          uVar6 = 0;
          if (uVar14 != 0) {
            uVar6 = uVar12 / uVar14;
          }
          uVar12 = uVar12 - uVar6 * uVar14;
        }
        if (uVar12 != uVar16) {
          return;
        }
      }
      plVar13 = (long *)*plVar13;
      if (plVar13 == (long *)0x0) {
        return;
      }
    } while( true );
  }
  do {
    if (plVar13[1] == uVar10) {
      if (*(uint *)(plVar13 + 2) == uVar2) goto LAB_017ced50;
    }
    else if ((plVar13[1] & uVar14 - 1) != uVar16) {
      return;
    }
    plVar13 = (long *)*plVar13;
    if (plVar13 == (long *)0x0) {
      return;
    }
  } while( true );
LAB_017cef78:
  if (*(long *)puVar7 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(puVar7 + 8));
    do {
      if (*(long *)puVar7 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar7 + 8));
          while (*(long *)puVar7 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar7,0x10);
            if (bVar5) {
              *(undefined8 *)puVar7 = uVar18;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_017cef88;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar7,0x10);
      if (bVar5) {
        *(undefined8 *)puVar7 = uVar18;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_017cef88:
    FUN_0210fd34(*(undefined8 *)(lVar19 + 0x70),*(undefined8 *)(lVar19 + 0x80),
                 *(undefined8 *)(lVar11 + 0x98),&local_68,plVar13 + 3,&uStack_6c,param_3,&local_70);
    *(undefined8 *)puVar7 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar7 + 8));
LAB_017cef24:
    lVar17 = *(long *)(lVar11 + 8);
    psVar1 = (short *)(lVar17 + 0x1a);
    do {
      sVar15 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar15 == 1) {
      *(undefined8 *)(lVar17 + 0x10) = 0;
      (**(code **)(*(long *)(lVar11 + -0x28) + 0x50))((long *)(lVar11 + -0x28));
      return;
    }
    if (sVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    return;
  }
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(puVar7,0x10);
  if (bVar5) {
    *(undefined8 *)puVar7 = uVar18;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_017cef88;
  goto LAB_017cef78;
LAB_017ced50:
  if ((((plVar13[5] != 0) && (*(short *)(plVar13[5] + 0x1a) != 0)) &&
      (lVar11 = plVar13[5], lVar11 != 0)) && (*(short *)(lVar11 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar11 + 0x1a);
    sVar15 = *(short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar15) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_017cedf8;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_017cedf8:
        bVar5 = false;
      }
      if (bVar5) {
        lVar11 = *(long *)(lVar11 + 0x10);
        if (lVar11 == 0) {
          return;
        }
        uStack_57 = 0;
        uStack_58 = 0x46;
        local_59 = 0x36;
        local_5a = 0x30;
        local_5c = 0x4231;
        local_60 = 0x42324546;
        local_68 = 0x3943374233393653;
        uStack_6c = *(undefined4 *)(param_2 + 0x1c0);
        local_70 = param_4;
        if (((*PTR_DAT_047d6c20 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d6c20);
        }
        lVar17 = *(long *)PTR_DAT_047d6c28;
        *(long *)PTR_DAT_047d6c30 = lVar17;
        if (*(undefined8 **)(lVar11 + 0x28) == (undefined8 *)0x0) {
          uVar18 = 0;
        }
        else {
          uVar18 = **(undefined8 **)(lVar11 + 0x28);
        }
        if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar9 = nn::os::GetTlsValue(DAT_04865a30);
        if ((lVar9 != 0) && (*(int *)(lVar9 + 0x90) != -1)) {
          *(undefined8 *)(lVar17 + (long)*(int *)(lVar9 + 0x90) * 8 + 0x6a0) = uVar18;
        }
        puVar7 = PTR_DAT_047d38f8;
        lVar19 = *(long *)(lVar11 + 0xd8);
        lVar9 = *(long *)PTR_DAT_047d38f8;
        lVar17 = nn::os::GetCurrentThread();
        if (lVar17 == lVar9) {
          FUN_0210fd34(*(undefined8 *)(lVar19 + 0x70),*(undefined8 *)(lVar19 + 0x80),
                       *(undefined8 *)(lVar11 + 0x98),&local_68,plVar13 + 3,&uStack_6c,param_3,
                       &local_70);
          goto LAB_017cef24;
        }
        uVar18 = nn::os::GetCurrentThread();
        goto LAB_017cef78;
      }
      sVar15 = sVar3;
    } while (sVar3 != 0);
  }
  return;
}


