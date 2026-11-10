/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0222fcf0; name: FUN_0222fcf0
 */


void FUN_0222fcf0(undefined8 param_1,long param_2,long param_3)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  bool bVar12;
  short sVar13;
  long lVar14;
  code *local_118;
  undefined1 auStack_100 [96];
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  
  local_118 = (code *)0x0;
  if (*(code **)(param_3 + 0x10) != (code *)0x0) {
    (**(code **)(param_3 + 0x10))(param_3 + 0x20,auStack_100);
    local_118 = *(code **)(param_3 + 8);
  }
  local_80 = *(undefined8 *)(param_2 + 0x110);
  uStack_78 = *(undefined8 *)(param_2 + 0x118);
  local_70 = *(undefined8 *)(param_2 + 0x120);
  local_68 = *(long **)(param_2 + 0x128);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x18))();
  }
  if (*(code **)(param_2 + 0x10) == (code *)0x0) {
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
  }
  else {
    (**(code **)(param_2 + 0x10))(&local_60,param_2 + 0x30,&local_80);
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_60 != (undefined8 *)0x0) {
    if (*(short *)((long)local_60 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_60 + 0x1a);
      sVar13 = *(short *)((long)local_60 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar13) {
          cVar5 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar12) {
            *psVar1 = sVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_0222fe20;
          bVar12 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0222fe20:
          bVar12 = false;
        }
        if (bVar12) {
          lVar11 = local_60[2];
          if (lVar11 != 0) {
            plVar2 = (long *)(lVar11 + 0xe8);
            lVar14 = *plVar2;
            lVar8 = nn::os::GetCurrentThread();
            if (lVar8 != lVar14) {
              lVar8 = nn::os::GetCurrentThread();
              goto LAB_0222fe64;
            }
            bVar12 = true;
            goto LAB_0222fe78;
          }
          break;
        }
        sVar13 = sVar4;
      } while (sVar4 != 0);
    }
LAB_0222ff3c:
    puVar10 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_60 + 3);
      do {
        sVar13 = *psVar1;
        cVar5 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar12) {
          *psVar1 = sVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar13 == 1) {
        piVar3 = (int *)((long)local_60 + 0x1c);
        do {
          iVar7 = *piVar3;
          cVar5 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar12) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_a0 = *puVar10;
          FUN_00c44438(lVar11 + 0x8040,&local_a0);
        }
      }
      else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  if (local_118 != (code *)0x0) {
    (*local_118)(auStack_100);
  }
  return;
LAB_0222fe64:
  if (*plVar2 == 0) goto code_r0x0222fe6c;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0xf0));
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0xf0));
        while (*plVar2 == 0) {
          cVar5 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar12) {
            *plVar2 = lVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_0222fe74;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar12) {
      *plVar2 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0222fe74:
  bVar12 = false;
LAB_0222fe78:
  lVar8 = FUN_02230084(lVar11 + 0x100);
  if (lVar8 == 0) {
    lVar8 = FUN_02230084(lVar11 + 0x138);
  }
  if (!bVar12) {
    *(undefined8 *)(lVar11 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0xf0));
  }
  if (lVar8 != 0) {
    iVar6 = FUN_01aae0cc(lVar8);
    local_a0 = 0x441cf9c36481d7b8;
    pcStack_98 = "Interval";
    local_90 = 8;
    local_88 = (long *)0x0;
    uVar9 = FUN_01470908(param_2,&local_a0);
    iVar7 = (int)(uVar9 >> 0x20);
    if ((uVar9 & 0xff) == 0) {
      iVar7 = 1;
    }
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    if (iVar6 != iVar7) {
      local_a0 = 0x441cf9c36481d7b8;
      puVar10 = (undefined8 *)FUN_01235878(param_2 + 0x158,&local_a0);
      *(int *)(puVar10 + 2) = iVar6;
      *puVar10 = PTR_LAB_047dcd88;
      FUN_00ff4890(lVar8,iVar7);
    }
  }
  (**(code **)(*(long *)(lVar11 + -0x28) + 0x60))((long *)(lVar11 + -0x28));
  goto LAB_0222ff3c;
code_r0x0222fe6c:
  cVar5 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar12) {
    *plVar2 = lVar8;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_0222fe74;
  goto LAB_0222fe64;
}


