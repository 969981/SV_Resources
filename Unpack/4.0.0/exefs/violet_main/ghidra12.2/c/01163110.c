/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01163110; name: FUN_01163110
 */


ulong FUN_01163110(long param_1,undefined8 param_2)

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
  undefined8 local_78;
  ulong local_70;
  ulong local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  plVar15 = (long *)(param_1 + 0x30);
  lVar14 = *plVar15;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar14) {
    uVar7 = FUN_0116464c(param_1,param_2);
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
    if (cVar2 == '\0') goto LAB_01163160;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
  do {
    if (*plVar15 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
        while (*plVar15 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar3) {
            *plVar15 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01163160;
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
LAB_01163160:
  lVar6 = *(long *)(param_1 + 0x1f8);
  if (lVar6 == 0) {
    local_78 = *(undefined8 *)(param_1 + 8);
    FUN_00f79000(&local_70,local_78,&local_78);
    uVar7 = local_70;
    local_70 = 0;
    lVar6 = *(long *)(param_1 + 0x1f8);
    *(ulong *)(param_1 + 0x1f8) = uVar7;
    if (lVar6 == 0) {
      *(undefined8 *)(param_1 + 0x210) = local_58;
      *(undefined8 *)(param_1 + 0x208) = local_60;
      *(ulong *)(param_1 + 0x200) = local_68;
      local_70 = 0;
    }
    else {
      FUN_00f1122c(param_1 + 0x200);
      uVar7 = local_70;
      *(undefined8 *)(param_1 + 0x210) = local_58;
      *(undefined8 *)(param_1 + 0x208) = local_60;
      *(ulong *)(param_1 + 0x200) = local_68;
      local_70 = 0;
      if (uVar7 != 0) {
        FUN_00f1122c(&local_68);
      }
    }
    lVar6 = *(long *)(param_1 + 0x1f8);
  }
  local_78 = (ulong)local_78._4_4_ << 0x20;
  uVar7 = FUN_011638f4(lVar6 + 8,param_2);
  plVar15 = (long *)(lVar6 + 0xc0);
  lVar14 = *plVar15;
  lVar10 = *(long *)(lVar6 + 200) - lVar14 >> 3;
  uVar13 = lVar10 * -0x5555555555555555;
  local_70 = uVar7;
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
  *(undefined1 *)(lVar14 + uVar7 * 0x18) = 1;
  *(undefined8 *)(*(long *)(lVar6 + 0xc0) + uVar7 * 0x18 + 8) = 0;
  uVar4 = (undefined4)local_78;
  *(undefined4 *)(*(long *)(lVar6 + 0xc0) + uVar7 * 0x18 + 0x10) = (undefined4)local_78;
  uVar16 = *(ulong *)(lVar6 + 0x130);
  uVar13 = uVar16 + 1;
  plVar15 = (long *)(lVar6 + 0xf8);
  *(ulong *)(lVar6 + 0x130) = uVar13;
  if (uVar16 == 0) {
    if (*(long *)(lVar6 + 0x100) - (long)*(ulong **)(lVar6 + 0xf8) >> 4 != 0) {
      **(ulong **)(lVar6 + 0xf8) = uVar7;
LAB_011633fc:
      lVar6 = *plVar15;
      goto LAB_01163400;
    }
LAB_0116325c:
    FUN_01061b74(plVar15,&local_70,&local_78);
  }
  else {
    pvVar8 = *(void **)(lVar6 + 0xf8);
    uVar17 = uVar16 - 1;
    uVar11 = *(long *)(lVar6 + 0x100) - (long)pvVar8 >> 4;
    if (*(float *)((long)pvVar8 + uVar17 * 0x10 + 8) <= 0.0) {
      if (uVar11 < uVar13) goto LAB_0116325c;
      *(ulong *)((long)pvVar8 + uVar16 * 0x10) = uVar7;
      lVar6 = *plVar15 + uVar16 * 0x10;
    }
    else {
      if (uVar11 <= uVar13 && uVar13 - uVar11 != 0) {
        FUN_0103e51c(plVar15,uVar13 - uVar11);
        pvVar8 = (void *)*plVar15;
      }
      if (0.0 < *(float *)((long)pvVar8 + 8)) {
        memmove((void *)((long)pvVar8 + 0x10),pvVar8,uVar16 << 4);
        *(ulong *)*plVar15 = uVar7;
        goto LAB_011633fc;
      }
      if (uVar16 - 2 < 3) {
        uVar9 = 1;
      }
      else {
        uVar13 = (ulong)((float)(uVar16 - 2) * 0.5);
        fVar18 = *(float *)((long)pvVar8 + (uVar13 + 1) * 0x10 + 8);
        if (fVar18 <= 0.0) {
          uVar11 = uVar17 - (uVar13 + 1);
        }
        else {
          uVar17 = uVar13 + 1;
          uVar11 = uVar13;
        }
        uVar9 = 1;
        uVar5 = uVar17;
        if (fVar18 <= 0.0) {
          uVar9 = uVar13 + 1;
        }
        while (uVar17 = uVar5, 2 < uVar11) {
          uVar13 = uVar9 + (long)((float)uVar11 * 0.5);
          uVar5 = uVar13;
          uVar11 = (long)((float)uVar11 * 0.5);
          if (*(float *)((long)pvVar8 + uVar13 * 0x10 + 8) <= 0.0) {
            uVar9 = uVar13;
            uVar5 = uVar17;
            uVar11 = uVar17 - uVar13;
          }
        }
      }
      if (uVar17 <= uVar16 && uVar9 <= uVar17) {
        pfVar12 = (float *)((long)pvVar8 + uVar17 * 0x10 + 8);
        while (0.0 < *pfVar12) {
          uVar17 = uVar17 - 1;
          if ((uVar17 < uVar9) || (pfVar12 = pfVar12 + -4, uVar16 < uVar17)) goto LAB_01163458;
        }
        uVar17 = uVar17 + 1;
      }
LAB_01163458:
      if (uVar17 <= uVar16 && uVar9 <= uVar17) {
        uVar9 = uVar17;
      }
      pvVar8 = (void *)((long)pvVar8 + uVar9 * 0x10);
      memmove((void *)((long)pvVar8 + 0x10),pvVar8,(uVar16 - uVar9) * 0x10);
      *(ulong *)(*plVar15 + uVar9 * 0x10) = uVar7;
      lVar6 = *plVar15 + uVar9 * 0x10;
    }
LAB_01163400:
    *(undefined4 *)(lVar6 + 8) = uVar4;
  }
  local_70 = 3;
  do {
    lVar6 = *(long *)(param_1 + 0x160) - *(long *)(param_1 + 0x158);
    local_68 = uVar7;
    if (lVar6 == 0) {
      uVar13 = *(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8) >> 4;
      FUN_01061b4c(param_1 + 0xe8,&local_70);
      goto LAB_011632e0;
    }
    uVar13 = *(ulong *)(*(long *)(param_1 + 0x160) + -8);
    *(long *)(param_1 + 0x160) = lVar6 + *(long *)(param_1 + 0x158) + -8;
    uVar16 = uVar13 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(*(long *)(param_1 + 0x120) + uVar16) =
         *(ulong *)(*(long *)(param_1 + 0x120) + uVar16) &
         (1L << (uVar13 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((ulong)(*(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8) >> 4) <= uVar13);
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0xe8) + uVar13 * 0x10);
  *puVar1 = 3;
  puVar1[1] = uVar7;
  if (uVar13 < *(ulong *)(param_1 + 400)) goto LAB_011632e8;
LAB_011632e0:
  *(ulong *)(param_1 + 400) = uVar13 + 1;
LAB_011632e8:
  *(undefined8 *)(param_1 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x38));
  return uVar13;
}


