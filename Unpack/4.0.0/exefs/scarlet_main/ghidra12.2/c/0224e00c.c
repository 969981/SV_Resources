/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0224e00c; name: FUN_0224e00c
 */


void FUN_0224e00c(undefined8 param_1,long param_2)

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
  ulong uVar10;
  bool bVar11;
  short sVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  long local_70 [2];
  
  uVar6 = FUN_017350a8();
  if ((uVar6 & 1) != 0) {
    return;
  }
  puVar7 = (undefined8 *)FUN_0140f310(param_2);
  local_90 = *puVar7;
  uStack_88 = puVar7[1];
  local_80 = puVar7[2];
  local_78 = (long *)puVar7[3];
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x18))();
  }
  FUN_0140f318(local_70,param_2,&local_90);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_70[0] == 0) {
    return;
  }
  if (*(short *)(local_70[0] + 0x1a) != 0) {
    psVar1 = (short *)(local_70[0] + 0x1a);
    sVar12 = *(short *)(local_70[0] + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar12) {
        cVar3 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar11) {
          *psVar1 = sVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0224e0ec;
        bVar11 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0224e0ec:
        bVar11 = false;
      }
      if (bVar11) {
        lVar9 = *(long *)(local_70[0] + 0x10);
        if (lVar9 == 0) goto LAB_0224e400;
        lVar8 = FUN_0157776c(lVar9 + 0xe0,&local_b0);
        if (lVar8 == 0) goto LAB_0224e3e8;
        local_b0 = 0x12d7b82ec399ec60;
        pcStack_a8 = "EasingType";
        local_a0 = 10;
        local_98 = (long *)0x0;
        uVar6 = FUN_01470908(param_2,&local_b0);
        if (local_98 != (long *)0x0) {
          (**(code **)(*local_98 + 0x20))();
        }
        uVar10 = *(ulong *)(param_2 + 0x160);
        fVar17 = 0.0;
        if (uVar10 == 0) goto LAB_0224e278;
        uVar13 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
        uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
        uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar13 < 2) {
          uVar14 = uVar10 - 1 & 0x75b12c5105283bbf;
        }
        else {
          uVar14 = 0x75b12c5105283bbf;
          if (uVar10 < 0x75b12c5105283bc0) {
            uVar14 = 0;
            if (uVar10 != 0) {
              uVar14 = 0x75b12c5105283bbf / uVar10;
            }
            uVar14 = 0x75b12c5105283bbf - uVar14 * uVar10;
          }
        }
        plVar15 = *(long **)(*(long *)(param_2 + 0x158) + uVar14 * 8);
        if ((plVar15 == (long *)0x0) || (plVar15 = (long *)*plVar15, plVar15 == (long *)0x0))
        goto LAB_0224e278;
        if (1 < uVar13) goto LAB_0224e23c;
        goto LAB_0224e1e0;
      }
      sVar12 = sVar2;
    } while (sVar2 != 0);
    goto LAB_0224e3fc;
  }
  goto LAB_0224e400;
LAB_0224e23c:
  do {
    uVar13 = plVar15[1];
    if (uVar13 == 0x75b12c5105283bbf) {
      if (plVar15[2] == 0x75b12c5105283bbf) goto LAB_0224e274;
    }
    else {
      if (uVar10 <= uVar13) {
        uVar4 = 0;
        if (uVar10 != 0) {
          uVar4 = uVar13 / uVar10;
        }
        uVar13 = uVar13 - uVar4 * uVar10;
      }
      if (uVar13 != uVar14) break;
    }
    plVar15 = (long *)*plVar15;
  } while (plVar15 != (long *)0x0);
  goto LAB_0224e278;
LAB_0224e274:
  fVar17 = *(float *)(plVar15 + 6);
  goto LAB_0224e278;
  while (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0) {
LAB_0224e1e0:
    if (plVar15[1] == 0x75b12c5105283bbf) {
      if (plVar15[2] == 0x75b12c5105283bbf) goto LAB_0224e274;
    }
    else if ((plVar15[1] & uVar10 - 1) != uVar14) break;
  }
LAB_0224e278:
  local_b0 = 0x91cbd7d9ff507821;
  pcStack_a8 = "ChangeBeginParameter";
  local_a0 = 0x14;
  local_98 = (long *)0x0;
  uVar5 = FUN_0141f968(param_2,&local_b0);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  fVar18 = fVar17;
  if ((uVar5 & 0xff) != 0 && 0xff < uVar5) {
    local_b0 = 0x86c63172bb6e923d;
    pcStack_a8 = "BeginParamater";
    local_a0 = 0xe;
    local_98 = (long *)0x0;
    uVar10 = FUN_01180d38(param_2,&local_b0);
    if ((uVar10 & 0xff) != 0) {
      fVar18 = (float)(uVar10 >> 0x20);
    }
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
  }
  local_b0 = 0xbf23381384443a95;
  pcStack_a8 = "ChangeEndParameter";
  local_a0 = 0x12;
  local_98 = (long *)0x0;
  uVar5 = FUN_0141f968(param_2,&local_b0);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if ((uVar5 & 0xff) != 0 && 0xff < uVar5) {
    local_b0 = 0x622e610f516bf939;
    pcStack_a8 = "EndParamater";
    local_a0 = 0xc;
    local_98 = (long *)0x0;
    uVar10 = FUN_01180d38(param_2,&local_b0);
    if ((uVar10 & 0xff) != 0) {
      fVar17 = (float)(uVar10 >> 0x20);
    }
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
  }
  uVar10 = 0;
  if ((uVar6 & 0xff) != 0) {
    uVar10 = uVar6 >> 0x20;
  }
  fVar16 = (float)(**(code **)(PTR_PTR_047d9248 + uVar10 * 8))(param_1);
  FUN_0224dec8(fVar18 + (fVar17 - fVar18) * fVar16,lVar8);
LAB_0224e3e8:
  (**(code **)(*(long *)(lVar9 + -0x28) + 0x60))((long *)(lVar9 + -0x28));
LAB_0224e3fc:
  if (local_70[0] != 0) {
LAB_0224e400:
    psVar1 = (short *)(local_70[0] + 0x18);
    do {
      sVar12 = *psVar1;
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar12 == 1) {
      FUN_0116e168();
    }
    else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


