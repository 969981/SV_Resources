/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0224ff74; name: FUN_0224ff74
 */


void FUN_0224ff74(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  ulong uVar4;
  ushort uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  short sVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  undefined4 uVar15;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  long local_40 [2];
  
  uVar6 = FUN_017350a8();
  if ((uVar6 & 1) != 0) {
    return;
  }
  puVar7 = (undefined8 *)FUN_0140f310(param_1);
  local_60 = *puVar7;
  uStack_58 = puVar7[1];
  local_50 = puVar7[2];
  local_48 = (long *)puVar7[3];
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x18))();
  }
  FUN_0140f318(local_40,param_1,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_40[0] == 0) {
    return;
  }
  if (*(short *)(local_40[0] + 0x1a) != 0) {
    psVar1 = (short *)(local_40[0] + 0x1a);
    sVar11 = *(short *)(local_40[0] + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar11) {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar10) {
          *psVar1 = sVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_02250038;
        bVar10 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02250038:
        bVar10 = false;
      }
      if (bVar10) {
        lVar9 = *(long *)(local_40[0] + 0x10);
        if (lVar9 == 0) goto LAB_02250260;
        lVar8 = FUN_0157776c(lVar9 + 0xe0,&local_80);
        if (lVar8 == 0) goto LAB_02250248;
        local_80 = 0xbf23381384443a95;
        pcStack_78 = "ChangeEndParameter";
        local_70 = 0x12;
        local_68 = (long *)0x0;
        uVar5 = FUN_0141f968(param_1,&local_80);
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
        if ((uVar5 & 0xff) != 0 && 0xff < uVar5) {
          local_80 = 0x622e610f516bf939;
          pcStack_78 = "EndParamater";
          local_70 = 0xc;
          local_68 = (long *)0x0;
          uVar6 = FUN_01180d38(param_1,&local_80);
          uVar15 = 0;
          if ((uVar6 & 0xff) != 0) {
            uVar15 = (int)(uVar6 >> 0x20);
          }
          FUN_0224f918(uVar15,lVar8);
          if (local_68 != (long *)0x0) {
            (**(code **)(*local_68 + 0x20))();
          }
          goto LAB_02250248;
        }
        uVar6 = *(ulong *)(param_1 + 0x160);
        uVar15 = 0;
        if (uVar6 == 0) goto LAB_02250240;
        uVar12 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
        uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
        uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar12 < 2) {
          uVar13 = uVar6 - 1 & 0x75b12c5105283bbf;
        }
        else {
          uVar13 = 0x75b12c5105283bbf;
          if (uVar6 < 0x75b12c5105283bc0) {
            uVar13 = 0;
            if (uVar6 != 0) {
              uVar13 = 0x75b12c5105283bbf / uVar6;
            }
            uVar13 = 0x75b12c5105283bbf - uVar13 * uVar6;
          }
        }
        plVar14 = *(long **)(*(long *)(param_1 + 0x158) + uVar13 * 8);
        if ((plVar14 == (long *)0x0) || (plVar14 = (long *)*plVar14, plVar14 == (long *)0x0))
        goto LAB_02250240;
        if (1 < uVar12) goto LAB_02250204;
        goto LAB_02250144;
      }
      sVar11 = sVar2;
    } while (sVar2 != 0);
    goto LAB_0225025c;
  }
  goto LAB_02250260;
LAB_02250204:
  do {
    uVar12 = plVar14[1];
    if (uVar12 == 0x75b12c5105283bbf) {
      if (plVar14[2] == 0x75b12c5105283bbf) goto LAB_0225023c;
    }
    else {
      if (uVar6 <= uVar12) {
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = uVar12 / uVar6;
        }
        uVar12 = uVar12 - uVar4 * uVar6;
      }
      if (uVar12 != uVar13) break;
    }
    plVar14 = (long *)*plVar14;
  } while (plVar14 != (long *)0x0);
  goto LAB_02250240;
LAB_0225023c:
  uVar15 = (undefined4)plVar14[6];
  goto LAB_02250240;
  while (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0) {
LAB_02250144:
    if (plVar14[1] == 0x75b12c5105283bbf) {
      if (plVar14[2] == 0x75b12c5105283bbf) goto LAB_0225023c;
    }
    else if ((plVar14[1] & uVar6 - 1) != uVar13) break;
  }
LAB_02250240:
  FUN_0224f918(uVar15,lVar8);
LAB_02250248:
  (**(code **)(*(long *)(lVar9 + -0x28) + 0x60))((long *)(lVar9 + -0x28));
LAB_0225025c:
  if (local_40[0] != 0) {
LAB_02250260:
    psVar1 = (short *)(local_40[0] + 0x18);
    do {
      sVar11 = *psVar1;
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar11 == 1) {
      FUN_0116e168();
    }
    else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


