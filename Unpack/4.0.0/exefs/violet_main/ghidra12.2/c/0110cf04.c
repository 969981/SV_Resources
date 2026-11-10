/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0110cf04; name: FUN_0110cf04
 */


ulong FUN_0110cf04(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  void *pvVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  float *pfVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  float fVar17;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_28;
  
  plVar16 = (long *)(param_1 + 0x30);
  lVar15 = *plVar16;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar15) {
    uVar7 = FUN_0110d8c8(param_1,param_2);
    return uVar7;
  }
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar16 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar4) {
      *plVar16 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_0110cf50;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
  do {
    if (*plVar16 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
        while (*plVar16 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0110cf50;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar4) {
      *plVar16 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0110cf50:
  lVar6 = *(long *)(param_1 + 0x1f8);
  if (lVar6 == 0) {
    local_28 = *(undefined8 *)(param_1 + 8);
    FUN_00f79000(&local_60,local_28,&local_28);
    uVar7 = local_60;
    local_60 = 0;
    lVar6 = *(long *)(param_1 + 0x1f8);
    *(ulong *)(param_1 + 0x1f8) = uVar7;
    if (lVar6 == 0) {
      *(undefined8 *)(param_1 + 0x210) = local_48;
      *(undefined8 *)(param_1 + 0x208) = local_50;
      *(ulong *)(param_1 + 0x200) = local_58;
      local_60 = 0;
    }
    else {
      FUN_00f1122c(param_1 + 0x200);
      uVar7 = local_60;
      *(undefined8 *)(param_1 + 0x210) = local_48;
      *(undefined8 *)(param_1 + 0x208) = local_50;
      *(ulong *)(param_1 + 0x200) = local_58;
      local_60 = 0;
      if (uVar7 != 0) {
        FUN_00f1122c(&local_58);
      }
    }
    lVar6 = *(long *)(param_1 + 0x1f8);
  }
  local_28 = (ulong)local_28._4_4_ << 0x20;
  uVar7 = FUN_0110d3a8(lVar6 + 8,param_2);
  plVar16 = (long *)(lVar6 + 0xc0);
  lVar15 = *plVar16;
  lVar10 = *(long *)(lVar6 + 200) - lVar15 >> 3;
  uVar13 = lVar10 * -0x5555555555555555;
  local_60 = uVar7;
  if (uVar13 <= uVar7) {
    uVar11 = uVar7 + 1;
    lVar10 = uVar11 + lVar10 * 0x5555555555555555;
    if (uVar11 < uVar13 || lVar10 == 0) {
      if (uVar11 < uVar13) {
        *(ulong *)(lVar6 + 200) = lVar15 + uVar11 * 0x18;
      }
    }
    else {
      FUN_00e93f30(plVar16,lVar10);
      lVar15 = *plVar16;
    }
  }
  *(undefined1 *)(lVar15 + uVar7 * 0x18) = 1;
  *(undefined8 *)(*(long *)(lVar6 + 0xc0) + uVar7 * 0x18 + 8) = 0;
  uVar5 = (undefined4)local_28;
  *(undefined4 *)(*(long *)(lVar6 + 0xc0) + uVar7 * 0x18 + 0x10) = (undefined4)local_28;
  uVar11 = *(ulong *)(lVar6 + 0x130);
  uVar13 = uVar11 + 1;
  plVar16 = (long *)(lVar6 + 0xf8);
  *(ulong *)(lVar6 + 0x130) = uVar13;
  if (uVar11 == 0) {
    if (*(long *)(lVar6 + 0x100) - (long)*(ulong **)(lVar6 + 0xf8) >> 4 != 0) {
      **(ulong **)(lVar6 + 0xf8) = uVar7;
      lVar6 = *plVar16;
      goto LAB_0110d014;
    }
LAB_0110d130:
    FUN_00fb23c4(plVar16,&local_60,&local_28);
  }
  else {
    pvVar8 = *(void **)(lVar6 + 0xf8);
    local_68 = uVar11 - 1;
    uVar14 = *(long *)(lVar6 + 0x100) - (long)pvVar8 >> 4;
    if (0.0 < *(float *)((long)pvVar8 + local_68 * 0x10 + 8)) {
      if (uVar14 <= uVar13 && uVar13 - uVar14 != 0) {
        FUN_0103e51c(plVar16,uVar13 - uVar14);
        pvVar8 = (void *)*plVar16;
      }
      if (*(float *)((long)pvVar8 + 8) <= 0.0) {
        if (uVar11 - 2 < 3) {
          uVar9 = 1;
        }
        else {
          uVar14 = (ulong)((float)(uVar11 - 2) * 0.5);
          fVar17 = *(float *)((long)pvVar8 + (uVar14 + 1) * 0x10 + 8);
          uVar13 = local_68 - (uVar14 + 1);
          if (0.0 < fVar17) {
            local_68 = uVar14 + 1;
            uVar13 = uVar14;
          }
          uVar9 = 1;
          uVar2 = local_68;
          if (fVar17 <= 0.0) {
            uVar9 = uVar14 + 1;
          }
          while (local_68 = uVar2, 2 < uVar13) {
            uVar2 = uVar9 + (long)((float)uVar13 * 0.5);
            uVar13 = (long)((float)uVar13 * 0.5);
            if (*(float *)((long)pvVar8 + uVar2 * 0x10 + 8) <= 0.0) {
              uVar13 = local_68 - uVar2;
              uVar9 = uVar2;
              uVar2 = local_68;
            }
          }
        }
        if (local_68 <= uVar11 && uVar9 <= local_68) {
          pfVar12 = (float *)((long)pvVar8 + local_68 * 0x10 + 8);
          while (0.0 < *pfVar12) {
            local_68 = local_68 - 1;
            if ((local_68 < uVar9) || (pfVar12 = pfVar12 + -4, uVar11 < local_68))
            goto LAB_0110d274;
          }
          local_68 = local_68 + 1;
        }
LAB_0110d274:
        if (local_68 <= uVar11 && uVar9 <= local_68) {
          uVar9 = local_68;
        }
        pvVar8 = (void *)((long)pvVar8 + uVar9 * 0x10);
        memmove((void *)((long)pvVar8 + 0x10),pvVar8,(uVar11 - uVar9) * 0x10);
        *(ulong *)(*plVar16 + uVar9 * 0x10) = uVar7;
        lVar6 = *plVar16 + uVar9 * 0x10;
      }
      else {
        memmove((void *)((long)pvVar8 + 0x10),pvVar8,uVar11 << 4);
        *(ulong *)*plVar16 = uVar7;
        lVar6 = *plVar16;
      }
    }
    else {
      if (uVar14 < uVar13) goto LAB_0110d130;
      *(ulong *)((long)pvVar8 + uVar11 * 0x10) = uVar7;
      lVar6 = *plVar16 + uVar11 * 0x10;
    }
LAB_0110d014:
    *(undefined4 *)(lVar6 + 8) = uVar5;
  }
  local_60 = 3;
  do {
    lVar6 = *(long *)(param_1 + 0x160) - *(long *)(param_1 + 0x158);
    local_58 = uVar7;
    if (lVar6 == 0) {
      uVar13 = *(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8) >> 4;
      FUN_01062d64(param_1 + 0xe8,&local_60);
      goto LAB_0110d08c;
    }
    uVar13 = *(ulong *)(*(long *)(param_1 + 0x160) + -8);
    *(long *)(param_1 + 0x160) = lVar6 + *(long *)(param_1 + 0x158) + -8;
    uVar11 = uVar13 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(*(long *)(param_1 + 0x120) + uVar11) =
         *(ulong *)(*(long *)(param_1 + 0x120) + uVar11) &
         (1L << (uVar13 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((ulong)(*(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8) >> 4) <= uVar13);
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0xe8) + uVar13 * 0x10);
  *puVar1 = 3;
  puVar1[1] = uVar7;
  if (uVar13 < *(ulong *)(param_1 + 400)) goto LAB_0110d094;
LAB_0110d08c:
  *(ulong *)(param_1 + 400) = uVar13 + 1;
LAB_0110d094:
  *(undefined8 *)(param_1 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x38));
  return uVar13;
}


