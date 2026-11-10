/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fb1f0c; name: FUN_00fb1f0c
 */


ulong FUN_00fb1f0c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

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
  ulong uVar10;
  long lVar11;
  float *pfVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  float fVar17;
  float fVar18;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_48;
  
  plVar16 = (long *)(param_2 + 0x30);
  lVar15 = *plVar16;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar15) {
    uVar7 = FUN_00fb2ecc(param_1,param_2,param_3,param_4);
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
    if (cVar3 == '\0') goto LAB_00fb1f64;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x38));
  do {
    if (*plVar16 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x38));
        while (*plVar16 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00fb1f64;
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
LAB_00fb1f64:
  lVar6 = *(long *)(param_2 + 0x1f8);
  if (lVar6 == 0) {
    local_48 = *(undefined8 *)(param_2 + 8);
    FUN_00f79000(&local_70,local_48,&local_48);
    uVar7 = local_70;
    local_70 = 0;
    lVar6 = *(long *)(param_2 + 0x1f8);
    *(ulong *)(param_2 + 0x1f8) = uVar7;
    if (lVar6 == 0) {
      *(undefined8 *)(param_2 + 0x210) = local_58;
      *(undefined8 *)(param_2 + 0x208) = local_60;
      *(ulong *)(param_2 + 0x200) = local_68;
      local_70 = 0;
    }
    else {
      FUN_00f1122c(param_2 + 0x200);
      uVar7 = local_70;
      *(undefined8 *)(param_2 + 0x210) = local_58;
      *(undefined8 *)(param_2 + 0x208) = local_60;
      *(ulong *)(param_2 + 0x200) = local_68;
      local_70 = 0;
      if (uVar7 != 0) {
        FUN_00f1122c(&local_68);
      }
    }
    lVar6 = *(long *)(param_2 + 0x1f8);
  }
  fVar18 = (float)param_1;
  local_48 = CONCAT44(local_48._4_4_,fVar18);
  uVar7 = FUN_00fb2844(lVar6 + 8,param_3);
  plVar16 = (long *)(lVar6 + 0xc0);
  lVar15 = *plVar16;
  lVar11 = *(long *)(lVar6 + 200) - lVar15 >> 3;
  uVar13 = lVar11 * -0x5555555555555555;
  local_70 = uVar7;
  if (uVar13 <= uVar7) {
    uVar9 = uVar7 + 1;
    lVar11 = uVar9 + lVar11 * 0x5555555555555555;
    if (uVar9 < uVar13 || lVar11 == 0) {
      if (uVar9 < uVar13) {
        *(ulong *)(lVar6 + 200) = lVar15 + uVar9 * 0x18;
      }
    }
    else {
      FUN_00e93f30(plVar16,lVar11);
      lVar15 = *plVar16;
    }
  }
  plVar16 = (long *)(lVar6 + 0xf8);
  *(bool *)(lVar15 + uVar7 * 0x18) = param_4 == 0;
  *(long *)(*(long *)(lVar6 + 0xc0) + uVar7 * 0x18 + 8) = param_4;
  uVar5 = (undefined4)local_48;
  *(undefined4 *)(*(long *)(lVar6 + 0xc0) + uVar7 * 0x18 + 0x10) = (undefined4)local_48;
  uVar9 = *(ulong *)(lVar6 + 0x130);
  uVar13 = uVar9 + 1;
  *(ulong *)(lVar6 + 0x130) = uVar13;
  if (uVar9 == 0) {
    if (*(long *)(lVar6 + 0x100) - (long)*(ulong **)(lVar6 + 0xf8) >> 4 != 0) {
      **(ulong **)(lVar6 + 0xf8) = uVar7;
      lVar6 = *plVar16;
      goto LAB_00fb215c;
    }
LAB_00fb2034:
    FUN_00fb23c4(plVar16,&local_70,&local_48);
  }
  else {
    pvVar8 = *(void **)(lVar6 + 0xf8);
    local_78 = uVar9 - 1;
    uVar14 = *(long *)(lVar6 + 0x100) - (long)pvVar8 >> 4;
    if (fVar18 < *(float *)((long)pvVar8 + local_78 * 0x10 + 8)) {
      if (uVar14 <= uVar13 && uVar13 - uVar14 != 0) {
        FUN_0103e51c(plVar16,uVar13 - uVar14);
        pvVar8 = (void *)*plVar16;
      }
      if (*(float *)((long)pvVar8 + 8) <= fVar18) {
        if (uVar9 - 2 < 3) {
          uVar10 = 1;
        }
        else {
          uVar14 = (ulong)((float)(uVar9 - 2) * 0.5);
          fVar17 = *(float *)((long)pvVar8 + (uVar14 + 1) * 0x10 + 8);
          uVar13 = local_78 - (uVar14 + 1);
          if (fVar18 < fVar17) {
            local_78 = uVar14 + 1;
            uVar13 = uVar14;
          }
          uVar10 = 1;
          uVar2 = local_78;
          if (fVar17 <= fVar18) {
            uVar10 = uVar14 + 1;
          }
          while (local_78 = uVar2, 2 < uVar13) {
            uVar2 = uVar10 + (long)((float)uVar13 * 0.5);
            uVar13 = (long)((float)uVar13 * 0.5);
            if (*(float *)((long)pvVar8 + uVar2 * 0x10 + 8) <= fVar18) {
              uVar13 = local_78 - uVar2;
              uVar10 = uVar2;
              uVar2 = local_78;
            }
          }
        }
        if (local_78 <= uVar9 && uVar10 <= local_78) {
          pfVar12 = (float *)((long)pvVar8 + local_78 * 0x10 + 8);
          while (fVar18 < *pfVar12) {
            local_78 = local_78 - 1;
            if ((local_78 < uVar10) || (pfVar12 = pfVar12 + -4, uVar9 < local_78))
            goto LAB_00fb2294;
          }
          local_78 = local_78 + 1;
        }
LAB_00fb2294:
        if (local_78 <= uVar9 && uVar10 <= local_78) {
          uVar10 = local_78;
        }
        pvVar8 = (void *)((long)pvVar8 + uVar10 * 0x10);
        memmove((void *)((long)pvVar8 + 0x10),pvVar8,(uVar9 - uVar10) * 0x10);
        *(ulong *)(*plVar16 + uVar10 * 0x10) = uVar7;
        lVar6 = *plVar16 + uVar10 * 0x10;
      }
      else {
        memmove((void *)((long)pvVar8 + 0x10),pvVar8,uVar9 << 4);
        *(ulong *)*plVar16 = uVar7;
        lVar6 = *plVar16;
      }
    }
    else {
      if (uVar14 < uVar13) goto LAB_00fb2034;
      *(ulong *)((long)pvVar8 + uVar9 * 0x10) = uVar7;
      lVar6 = *plVar16 + uVar9 * 0x10;
    }
LAB_00fb215c:
    *(undefined4 *)(lVar6 + 8) = uVar5;
  }
  local_70 = 3;
  do {
    lVar6 = *(long *)(param_2 + 0x160) - *(long *)(param_2 + 0x158);
    local_68 = uVar7;
    if (lVar6 == 0) {
      uVar13 = *(long *)(param_2 + 0xf0) - *(long *)(param_2 + 0xe8) >> 4;
      FUN_01062d64(param_2 + 0xe8,&local_70);
      goto LAB_00fb20b4;
    }
    uVar13 = *(ulong *)(*(long *)(param_2 + 0x160) + -8);
    *(long *)(param_2 + 0x160) = lVar6 + *(long *)(param_2 + 0x158) + -8;
    uVar9 = uVar13 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(*(long *)(param_2 + 0x120) + uVar9) =
         *(ulong *)(*(long *)(param_2 + 0x120) + uVar9) &
         (1L << (uVar13 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((ulong)(*(long *)(param_2 + 0xf0) - *(long *)(param_2 + 0xe8) >> 4) <= uVar13);
  puVar1 = (undefined8 *)(*(long *)(param_2 + 0xe8) + uVar13 * 0x10);
  *puVar1 = 3;
  puVar1[1] = uVar7;
  if (uVar13 < *(ulong *)(param_2 + 400)) goto LAB_00fb20bc;
LAB_00fb20b4:
  *(ulong *)(param_2 + 400) = uVar13 + 1;
LAB_00fb20bc:
  *(undefined8 *)(param_2 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x38));
  return uVar13;
}


