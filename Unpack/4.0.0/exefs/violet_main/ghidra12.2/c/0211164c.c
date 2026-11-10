/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0211164c; name: FUN_0211164c
 */


void FUN_0211164c(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,byte param_5)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  short sVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 local_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 uStack_60;
  undefined2 uStack_5f;
  byte local_58 [4];
  uint local_54;
  
  local_58[0] = param_5 & 1;
  uVar12 = *(ulong *)(param_1 + 0x50);
  if (uVar12 == 0) {
    return;
  }
  uVar10 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar15 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  uVar10 = (ulong)param_2;
  if (uVar15 < 2) {
    uVar14 = (ulong)((int)uVar12 - 1U & param_2);
  }
  else {
    uVar14 = uVar10;
    if (uVar12 <= uVar10) {
      uVar14 = 0;
      if (uVar12 != 0) {
        uVar14 = uVar10 / uVar12;
      }
      uVar14 = uVar10 - uVar14 * uVar12;
    }
  }
  plVar11 = *(long **)(*(long *)(param_1 + 0x48) + uVar14 * 8);
  if (plVar11 == (long *)0x0) {
    return;
  }
  plVar11 = (long *)*plVar11;
  if (plVar11 == (long *)0x0) {
    return;
  }
  if (1 < uVar15) {
    do {
      uVar15 = plVar11[1];
      if (uVar15 == uVar10) {
        if (*(uint *)(plVar11 + 2) == param_2) goto LAB_021116f8;
      }
      else {
        if (uVar12 <= uVar15) {
          uVar5 = 0;
          if (uVar12 != 0) {
            uVar5 = uVar15 / uVar12;
          }
          uVar15 = uVar15 - uVar5 * uVar12;
        }
        if (uVar15 != uVar14) {
          return;
        }
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        return;
      }
    } while( true );
  }
  do {
    if (plVar11[1] == uVar10) {
      if (*(uint *)(plVar11 + 2) == param_2) goto LAB_021116f8;
    }
    else if ((plVar11[1] & uVar12 - 1) != uVar14) {
      return;
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      return;
    }
  } while( true );
LAB_02111918:
  if (*(long *)puVar6 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(puVar6 + 8));
    do {
      if (*(long *)puVar6 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar6 + 8));
          while (*(long *)puVar6 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar6,0x10);
            if (bVar4) {
              *(undefined8 *)puVar6 = uVar17;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_02111928;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar4) {
        *(undefined8 *)puVar6 = uVar17;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_02111928:
    FUN_02111a8c(*(undefined8 *)(lVar18 + 0x70),*(undefined8 *)(lVar18 + 0x80),
                 *(undefined8 *)(lVar9 + 0x98),&local_70,plVar11 + 3,&local_54,param_4,local_58);
    *(undefined8 *)puVar6 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar6 + 8));
LAB_021118c4:
    lVar16 = *(long *)(lVar9 + 8);
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar13 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar13 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*(long *)(lVar9 + -0x28) + 0x50))((long *)(lVar9 + -0x28));
      return;
    }
    if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    return;
  }
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(puVar6,0x10);
  if (bVar4) {
    *(undefined8 *)puVar6 = uVar17;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_02111928;
  goto LAB_02111918;
LAB_021116f8:
  if ((((plVar11[5] != 0) && (*(short *)(plVar11[5] + 0x1a) != 0)) &&
      (lVar9 = plVar11[5], lVar9 != 0)) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar13 = *(short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar13) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_021117a0;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_021117a0:
        bVar4 = false;
      }
      if (bVar4) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 == 0) {
          return;
        }
        uStack_5f = 0;
        uStack_60 = 0x46;
        local_61 = 0x45;
        local_62 = 0x35;
        local_64 = 0x3430;
        local_68 = 0x46414332;
        local_70 = 0x3738464543444253;
        local_54 = param_2;
        if (((*PTR_DAT_047d6c20 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d6c20);
        }
        lVar16 = *(long *)PTR_DAT_047d6c28;
        *(long *)PTR_DAT_047d6c30 = lVar16;
        if (*(undefined8 **)(lVar9 + 0x28) == (undefined8 *)0x0) {
          uVar17 = 0;
        }
        else {
          uVar17 = **(undefined8 **)(lVar9 + 0x28);
        }
        if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        if ((lVar8 != 0) && (*(int *)(lVar8 + 0x90) != -1)) {
          *(undefined8 *)(lVar16 + (long)*(int *)(lVar8 + 0x90) * 8 + 0x6a0) = uVar17;
        }
        puVar6 = PTR_DAT_047d38f8;
        lVar18 = *(long *)(lVar9 + 0xd8);
        lVar8 = *(long *)PTR_DAT_047d38f8;
        lVar16 = nn::os::GetCurrentThread();
        if (lVar16 == lVar8) {
          FUN_02111a8c(*(undefined8 *)(lVar18 + 0x70),*(undefined8 *)(lVar18 + 0x80),
                       *(undefined8 *)(lVar9 + 0x98),&local_70,plVar11 + 3,&local_54,param_4,
                       local_58);
          goto LAB_021118c4;
        }
        uVar17 = nn::os::GetCurrentThread();
        goto LAB_02111918;
      }
      sVar13 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}


