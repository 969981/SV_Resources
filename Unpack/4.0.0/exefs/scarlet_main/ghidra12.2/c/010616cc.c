/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010616cc; name: FUN_010616cc
 */


ulong FUN_010616cc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  void *pvVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  float *pfVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  ulong local_80;
  ulong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  
  plVar15 = (long *)(param_2 + 0x30);
  lVar14 = *plVar15;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar14) {
    uVar7 = FUN_0106261c(param_1,param_2,param_3,param_4);
    return uVar7;
  }
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar15 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar3) {
      *plVar15 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_01061728;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x38));
  do {
    if (*plVar15 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x38));
        while (*plVar15 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar3) {
            *plVar15 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01061728;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar3) {
      *plVar15 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01061728:
  lVar6 = *(long *)(param_2 + 0x1f8);
  if (lVar6 == 0) {
    local_58 = *(undefined8 *)(param_2 + 8);
    FUN_00f79000(&local_80,local_58,&local_58);
    uVar7 = local_80;
    local_80 = 0;
    lVar6 = *(long *)(param_2 + 0x1f8);
    *(ulong *)(param_2 + 0x1f8) = uVar7;
    if (lVar6 == 0) {
      *(undefined8 *)(param_2 + 0x210) = local_68;
      *(undefined8 *)(param_2 + 0x208) = local_70;
      *(ulong *)(param_2 + 0x200) = local_78;
      local_80 = 0;
    }
    else {
      FUN_00f1122c(param_2 + 0x200);
      uVar7 = local_80;
      *(undefined8 *)(param_2 + 0x210) = local_68;
      *(undefined8 *)(param_2 + 0x208) = local_70;
      *(ulong *)(param_2 + 0x200) = local_78;
      local_80 = 0;
      if (uVar7 != 0) {
        FUN_00f1122c(&local_78);
      }
    }
    lVar6 = *(long *)(param_2 + 0x1f8);
  }
  fVar19 = (float)param_1;
  local_58 = CONCAT44(local_58._4_4_,fVar19);
  uVar7 = FUN_01061ff4(lVar6 + 8,param_3);
  plVar15 = (long *)(lVar6 + 0xc0);
  lVar14 = *plVar15;
  lVar10 = *(long *)(lVar6 + 200) - lVar14 >> 3;
  uVar13 = lVar10 * -0x5555555555555555;
  local_80 = uVar7;
  if (uVar13 <= uVar7) {
    uVar16 = uVar7 + 1;
    lVar10 = uVar16 + lVar10 * 0x5555555555555555;
    if (uVar16 < uVar13 || lVar10 == 0) {
      if (uVar16 < uVar13) {
        *(ulong *)(lVar6 + 200) = lVar14 + uVar16 * 0x18;
      }
    }
    else {
      FUN_00e93f30(plVar15,lVar10);
      lVar14 = *plVar15;
    }
  }
  plVar15 = (long *)(lVar6 + 0xf8);
  *(bool *)(lVar14 + uVar7 * 0x18) = param_4 == 0;
  *(long *)(*(long *)(lVar6 + 0xc0) + uVar7 * 0x18 + 8) = param_4;
  uVar4 = (undefined4)local_58;
  *(undefined4 *)(*(long *)(lVar6 + 0xc0) + uVar7 * 0x18 + 0x10) = (undefined4)local_58;
  uVar16 = *(ulong *)(lVar6 + 0x130);
  uVar13 = uVar16 + 1;
  *(ulong *)(lVar6 + 0x130) = uVar13;
  if (uVar16 == 0) {
    if (*(long *)(lVar6 + 0x100) - (long)*(ulong **)(lVar6 + 0xf8) >> 4 != 0) {
      **(ulong **)(lVar6 + 0xf8) = uVar7;
      lVar6 = *plVar15;
      goto LAB_01061a04;
    }
LAB_010617f8:
    FUN_01061b74(plVar15,&local_80,&local_58);
  }
  else {
    pvVar8 = *(void **)(lVar6 + 0xf8);
    uVar17 = uVar16 - 1;
    uVar11 = *(long *)(lVar6 + 0x100) - (long)pvVar8 >> 4;
    if (fVar19 < *(float *)((long)pvVar8 + uVar17 * 0x10 + 8)) {
      if (uVar11 <= uVar13 && uVar13 - uVar11 != 0) {
        FUN_0103e51c(plVar15,uVar13 - uVar11);
        pvVar8 = (void *)*plVar15;
      }
      if (*(float *)((long)pvVar8 + 8) <= fVar19) {
        if (uVar16 - 2 < 3) {
          uVar9 = 1;
        }
        else {
          uVar13 = (ulong)((float)(uVar16 - 2) * 0.5);
          fVar18 = *(float *)((long)pvVar8 + (uVar13 + 1) * 0x10 + 8);
          if (fVar18 <= fVar19) {
            uVar11 = uVar17 - (uVar13 + 1);
          }
          else {
            uVar17 = uVar13 + 1;
            uVar11 = uVar13;
          }
          uVar9 = 1;
          uVar5 = uVar17;
          if (fVar18 <= fVar19) {
            uVar9 = uVar13 + 1;
          }
          while (uVar17 = uVar5, 2 < uVar11) {
            uVar13 = uVar9 + (long)((float)uVar11 * 0.5);
            uVar5 = uVar13;
            uVar11 = (long)((float)uVar11 * 0.5);
            if (*(float *)((long)pvVar8 + uVar13 * 0x10 + 8) <= fVar19) {
              uVar9 = uVar13;
              uVar5 = uVar17;
              uVar11 = uVar17 - uVar13;
            }
          }
        }
        if (uVar17 <= uVar16 && uVar9 <= uVar17) {
          pfVar12 = (float *)((long)pvVar8 + uVar17 * 0x10 + 8);
          while (fVar19 < *pfVar12) {
            uVar17 = uVar17 - 1;
            if ((uVar17 < uVar9) || (pfVar12 = pfVar12 + -4, uVar16 < uVar17)) goto LAB_01061a40;
          }
          uVar17 = uVar17 + 1;
        }
LAB_01061a40:
        if (uVar17 <= uVar16 && uVar9 <= uVar17) {
          uVar9 = uVar17;
        }
        pvVar8 = (void *)((long)pvVar8 + uVar9 * 0x10);
        memmove((void *)((long)pvVar8 + 0x10),pvVar8,(uVar16 - uVar9) * 0x10);
        *(ulong *)(*plVar15 + uVar9 * 0x10) = uVar7;
        lVar6 = *plVar15 + uVar9 * 0x10;
      }
      else {
        memmove((void *)((long)pvVar8 + 0x10),pvVar8,uVar16 << 4);
        *(ulong *)*plVar15 = uVar7;
        lVar6 = *plVar15;
      }
    }
    else {
      if (uVar11 < uVar13) goto LAB_010617f8;
      *(ulong *)((long)pvVar8 + uVar16 * 0x10) = uVar7;
      lVar6 = *plVar15 + uVar16 * 0x10;
    }
LAB_01061a04:
    *(undefined4 *)(lVar6 + 8) = uVar4;
  }
  local_80 = 3;
  do {
    lVar6 = *(long *)(param_2 + 0x160) - *(long *)(param_2 + 0x158);
    local_78 = uVar7;
    if (lVar6 == 0) {
      uVar13 = *(long *)(param_2 + 0xf0) - *(long *)(param_2 + 0xe8) >> 4;
      FUN_01061b4c(param_2 + 0xe8,&local_80);
      goto LAB_01061878;
    }
    uVar13 = *(ulong *)(*(long *)(param_2 + 0x160) + -8);
    *(long *)(param_2 + 0x160) = lVar6 + *(long *)(param_2 + 0x158) + -8;
    uVar16 = uVar13 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(*(long *)(param_2 + 0x120) + uVar16) =
         *(ulong *)(*(long *)(param_2 + 0x120) + uVar16) &
         (1L << (uVar13 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((ulong)(*(long *)(param_2 + 0xf0) - *(long *)(param_2 + 0xe8) >> 4) <= uVar13);
  puVar1 = (undefined8 *)(*(long *)(param_2 + 0xe8) + uVar13 * 0x10);
  *puVar1 = 3;
  puVar1[1] = uVar7;
  if (uVar13 < *(ulong *)(param_2 + 400)) goto LAB_01061880;
LAB_01061878:
  *(ulong *)(param_2 + 400) = uVar13 + 1;
LAB_01061880:
  *(undefined8 *)(param_2 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x38));
  return uVar13;
}


