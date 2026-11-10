/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fecb8c; name: FUN_02fecb8c
 */


void FUN_02fecb8c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  ulong *puVar9;
  long *plVar10;
  long lVar11;
  uint *puVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  uint uVar16;
  int iVar17;
  ulong *puVar18;
  uint uVar19;
  ulong *puVar20;
  uint *puVar21;
  ulong *puVar22;
  ulong *puVar23;
  ulong *puVar24;
  ulong uVar25;
  ulong *puVar26;
  ulong *puVar27;
  undefined8 *puVar28;
  long **pplVar29;
  long lVar30;
  uint uVar31;
  undefined4 *puVar32;
  long lVar33;
  ulong *puVar34;
  ulong uVar35;
  long **local_5a8;
  undefined8 *local_5a0;
  uint *local_598;
  undefined8 local_590;
  long *local_580;
  undefined4 local_578;
  char local_574;
  long *local_570;
  undefined8 local_568;
  long local_550 [24];
  char *local_490;
  ulong *local_478;
  long lStack_470;
  ulong *local_278 [4];
  uint *local_258;
  uint local_250;
  undefined8 *local_248;
  ulong local_78;
  ulong uStack_70;
  
  iVar17 = *(int *)(param_2 + 1);
  if (iVar17 == 0) {
    return;
  }
  lVar33 = tpidr_el0;
  lVar11 = *(long *)(lVar33 + 0x1000b8);
  if (lVar11 == 0) {
    lVar11 = FUN_00e5d3b4();
    *(long *)(lVar33 + 0x1000b8) = lVar11;
  }
  puVar34 = (ulong *)((long)iVar17 * 0x10);
  lVar33 = *(long *)(*(long *)(lVar11 + 0x3d0) + 0x10);
  local_478 = puVar34;
  if ((*(long *)(lVar33 + 8) == 0) && (lVar33 != 0)) {
    local_278[0] = (ulong *)((long)puVar34 + 0x3fU & 0xffffffffffffffc0);
    if (local_278[0] <= *(ulong **)(lVar33 + 0x28)) {
      puVar9 = *(ulong **)(lVar33 + 0x38);
      if ((ulong)((long)local_278[0] + (long)puVar9) <= *(ulong *)(lVar33 + 0x40)) {
        *(long *)(lVar33 + 0x38) = (long)local_278[0] + (long)puVar9;
        goto LAB_02fecc80;
      }
    }
    puVar9 = (ulong *)FUN_031cf3b4(lVar33,local_278);
  }
  else {
    puVar9 = (ulong *)(**(code **)PTR_DAT_047d1a08)(1,&local_478,0x40);
    lVar33 = 0;
  }
LAB_02fecc80:
  puVar12 = *(uint **)param_2[2];
  if ((*puVar12 & 0xffff) == 0) {
    uVar31 = 0;
  }
  else {
    puVar21 = puVar12 + 8;
    uVar19 = *puVar12 & 0xffff;
    puVar18 = puVar9 + 1;
    uVar16 = 0x7fffffff;
    uVar8 = 1;
    do {
      uVar31 = uVar8;
      puVar18[-1] = (ulong)*puVar21 & 0xffffff | (ulong)(puVar21[1] & 0xffffff) << 0x20;
      *puVar18 = (ulong)puVar21;
      if ((int)uVar19 < 2) {
        if ((uVar16 == 0) || (puVar12 = *(uint **)(puVar12 + 2), puVar12 == (uint *)0x0)) break;
        uVar19 = *puVar12 & 0xffff;
        if ((int)uVar16 <= (int)(*puVar12 & 0xffff)) {
          uVar19 = uVar16;
        }
        if ((int)uVar19 < 1) break;
        uVar16 = uVar16 - uVar19;
        puVar21 = puVar12 + 8;
        Hint_Prefetch(*(long *)(puVar12 + 2),0,0,0);
        Hint_Prefetch(*(long *)(puVar12 + 2) + 0x40,0,0,0);
        Hint_Prefetch(puVar12 + 0x20,0,0,0);
        Hint_Prefetch(puVar12 + 0x30,0,0,0);
      }
      else {
        uVar19 = uVar19 - 1;
        puVar21 = puVar21 + (ulong)*(byte *)((long)puVar21 + 9) * 4;
      }
      puVar18 = puVar18 + 2;
      uVar8 = uVar31 + 1;
    } while (puVar21 != (uint *)0x0);
  }
  local_570 = local_550;
  local_568 = 0x8000001800000000;
  puVar28 = *(undefined8 **)(param_1 + 0x4e0);
  local_580 = (long *)*puVar28;
  local_578 = 0;
  local_574 = '\0';
  uVar19 = *(int *)(puVar28 + 0xb) - 1;
  if (*(int *)(puVar28 + 0xb) < 1) {
    lVar11 = puVar28[1];
    (**(code **)(*local_580 + 0x20))(local_580,lVar11,6);
    *(undefined4 *)(puVar28 + 0xb) = 5;
    puVar28 = (undefined8 *)(lVar11 + 0x28);
  }
  else {
    *(uint *)(puVar28 + 0xb) = uVar19;
    puVar28 = (undefined8 *)(puVar28[1] + (ulong)uVar19 * 8);
  }
  puVar28 = (undefined8 *)*puVar28;
  puVar28[2] = 0;
  puVar28[3] = 0;
  *puVar28 = 0;
  puVar28[1] = 0;
  *(uint *)((long)puVar28 + 4) = (uint)local_568;
  lVar11 = (long)(int)(uint)local_568;
  if ((int)(local_568._4_4_ & 0x7fffffff) <= (int)(uint)local_568) {
    FUN_031c25b4(&local_570,PTR_PTR_047d1a50,lVar11 + 1);
  }
  local_570[(int)(uint)local_568] = (long)puVar28;
  local_568 = CONCAT44(local_568._4_4_,(int)(lVar11 + 1));
  local_490 = "hknpCollisionCacheSorter::cacheStreamOut";
  local_5a0 = *(undefined8 **)(param_1 + 0x4e0);
  local_598 = (uint *)*local_570;
  local_590 = 0;
  Hint_Prefetch(local_598,0,0,0);
  Hint_Prefetch(local_598 + 0x10,0,0,0);
  local_248 = local_5a0;
  if (1 < uVar31) {
    puVar18 = puVar9 + (ulong)(uVar31 - 1) * 2;
    uVar19 = 0;
    local_278[0] = puVar9;
    local_478 = puVar18;
    puVar20 = puVar9;
LAB_02fece38:
    lVar11 = (long)(int)uVar19;
LAB_02fece3c:
    do {
      puVar23 = puVar18;
      do {
        puVar18 = puVar23;
        uVar25 = puVar20[((long)puVar18 - (long)puVar20 >> 5) * 2];
        puVar23 = puVar18;
        puVar24 = puVar20;
        do {
          puVar27 = puVar24 + -2;
          do {
            puVar26 = puVar27;
            puVar27 = puVar26 + 2;
          } while (*puVar27 < uVar25);
          puVar24 = puVar26 + 4;
          do {
            puVar22 = puVar23;
            puVar23 = puVar22 + -2;
          } while (uVar25 < *puVar22);
          if (puVar22 < puVar27) {
            puVar23 = puVar22;
            puVar24 = puVar27;
          }
          else if (puVar26 != puVar23) {
            local_78 = *puVar22;
            uStack_70 = puVar22[1];
            uVar14 = puVar26[3];
            *puVar22 = *puVar27;
            puVar22[1] = uVar14;
            *puVar27 = local_78;
            puVar26[3] = uStack_70;
          }
        } while (puVar24 <= puVar23);
        if (puVar23 <= puVar20) {
          puVar20 = puVar24;
          if (puVar24 < puVar18) goto LAB_02fece3c;
          uVar19 = (int)lVar11 - 1;
          if (0 < (int)lVar11) {
            puVar20 = local_278[uVar19];
            puVar18 = (&local_478)[uVar19];
            goto LAB_02fece38;
          }
          local_248 = *(undefined8 **)(param_1 + 0x4e0);
          goto LAB_02fecf1c;
        }
      } while (puVar18 <= puVar24);
      puVar27 = puVar23;
      puVar26 = puVar20;
      if ((long)puVar18 - (long)puVar24 <= (long)puVar23 - (long)puVar20) {
        puVar27 = puVar18;
        puVar26 = puVar24;
        puVar18 = puVar23;
        puVar24 = puVar20;
      }
      local_278[lVar11] = puVar24;
      (&local_478)[lVar11] = puVar18;
      lVar11 = lVar11 + 1;
      puVar18 = puVar27;
      puVar20 = puVar26;
    } while( true );
  }
LAB_02fecf1c:
  local_278[3] = param_2 + 0x20;
  local_250 = 0;
  local_258 = (uint *)0x0;
  local_5a8 = &local_580;
  if (uVar31 != 0) {
    uVar25 = 0;
    uVar14 = 0xffffffffffffffff;
    do {
      uVar35 = puVar9[uVar25 * 2];
      puVar32 = (undefined4 *)puVar9[uVar25 * 2 + 1];
      if (uVar35 == uVar14) {
        lStack_470 = *(long *)(param_1 + 8) + 0x530;
        lVar11 = *(long *)(*(long *)(param_1 + 8) + 0x500);
        local_478 = (ulong *)0x0;
        if (*(char *)(lVar11 + 0xaa0) != '\0') {
          local_478 = (ulong *)(lVar11 + 0xab0);
        }
        plVar10 = *(long **)(*(long *)(param_1 + 0x40) + (ulong)*(byte *)(puVar32 + 2) * 8 + 0x13b8)
        ;
        (**(code **)(*plVar10 + 0x20))
                  (plVar10,param_1,&local_478,puVar32,local_278,puVar32[1],*puVar32,0xffffffff,
                   0xffffffff);
        uVar35 = uVar14;
      }
      else {
        bVar4 = *(byte *)((long)puVar32 + 9);
        if ((int)((int)local_590 + (uint)bVar4 * 0x10) < 0xfa1) {
          lVar11 = (long)local_598 + (long)(int)local_590 + 0x20;
        }
        else {
          lVar11 = FUN_031c36f4(&local_5a8);
        }
        lVar30 = 0;
        iVar17 = bVar4 + 1;
        do {
          puVar28 = (undefined8 *)((long)puVar32 + lVar30);
          iVar17 = iVar17 + -1;
          uVar2 = *(undefined4 *)(puVar28 + 1);
          uVar3 = *(undefined4 *)((long)puVar28 + 0xc);
          puVar1 = (undefined8 *)(lVar11 + lVar30);
          lVar30 = lVar30 + 0x10;
          *puVar1 = *puVar28;
          *(undefined4 *)(puVar1 + 1) = uVar2;
          *(undefined4 *)((long)puVar1 + 0xc) = uVar3;
        } while (1 < iVar17);
        local_590 = CONCAT44(local_590._4_4_ + 1,(int)local_590 + (uint)bVar4 * 0x10);
        uVar14 = puVar9[uVar25 * 2 + 1];
        if ((((*(char *)(uVar14 + 8) == '\x02') && (2 < *(byte *)(uVar14 + 9))) &&
            (*(long *)(lVar11 + 0x20) != 0)) && ((*(byte *)(lVar11 + 0xb) >> 2 & 1) != 0)) {
          *(long *)((ulong)*(ushort *)(lVar11 + 0x28) + *(long *)(lVar11 + 0x20) + 0x20) = lVar11;
        }
      }
      puVar28 = local_248;
      uVar25 = uVar25 + 1;
      uVar14 = uVar35;
    } while (uVar25 != uVar31);
    if (local_250 != 0) {
      if (local_250 == (*local_258 & 0xffff)) {
        *(undefined8 *)(local_278[3][2] + (long)(int)local_258[1] * 8) = 0;
        *(undefined1 *)((long)local_278[3] + 0xc) = 1;
        iVar17 = *(int *)(local_248 + 0xb);
        lVar11 = local_248[1];
        *(uint **)(lVar11 + (long)iVar17 * 8) = local_258;
        *(int *)(local_248 + 0xb) = iVar17 + 1;
        if (*(int *)((long)local_248 + 0x5c) <= iVar17 + 1) {
          (**(code **)(*(long *)*local_248 + 0x28))
                    ((long *)*local_248,lVar11 + (long)(iVar17 + -5) * 8,6);
          *(int *)(puVar28 + 0xb) = iVar17 + -5;
        }
      }
      else {
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(local_258,0x10);
          if (bVar7) {
            *local_258 = *local_258 - local_250;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      local_250 = 0;
      *(undefined1 *)((long)local_278[3] + 0xc) = 1;
    }
  }
  puVar28 = local_5a0;
  if (local_590._4_4_ == 0) {
    pplVar29 = local_5a8 + 3;
    iVar17 = *(int *)pplVar29;
    if (iVar17 < 2) goto LAB_02fed190;
    iVar5 = *(int *)(local_5a0 + 0xb);
    lVar30 = local_5a8[2][iVar17 + -2];
    lVar11 = local_5a0[1];
    *(long *)(lVar11 + (long)iVar5 * 8) = local_5a8[2][iVar17 + -1];
    *(int *)(local_5a0 + 0xb) = iVar5 + 1;
    if (*(int *)((long)local_5a0 + 0x5c) <= iVar5 + 1) {
      (**(code **)(*(long *)*local_5a0 + 0x28))
                ((long *)*local_5a0,lVar11 + (long)(iVar5 + -5) * 8,6);
      *(int *)(puVar28 + 0xb) = iVar5 + -5;
    }
    *(undefined8 *)(lVar30 + 8) = 0;
    uVar31 = 0xffffffff;
  }
  else {
LAB_02fed190:
    pplVar29 = local_5a8 + 1;
    local_598[2] = 0;
    local_598[3] = 0;
    *local_598 = *local_598 & 0xffff0000 | local_590._4_4_ & 0xffff;
    *local_598 = *local_598 & 0xffff | (int)local_590 << 0x10;
    uVar31 = local_590._4_4_;
  }
  *(uint *)pplVar29 = *(int *)pplVar29 + uVar31;
  local_5a8 = (long **)0x0;
  local_598 = (uint *)0x0;
  lVar11 = *(long *)(param_1 + 0x4e0);
  uVar31 = *(uint *)(param_2 + 3);
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    plVar10 = (long *)param_2[2];
    if ((int)uVar31 < 1) {
      plVar15 = plVar10;
    }
    else {
      plVar15 = plVar10;
      if (uVar31 != 1) {
        iVar17 = -(uVar31 & 0xfffffffe);
        do {
          plVar13 = plVar10;
          if (*plVar15 != 0) {
            plVar13 = plVar10 + 1;
            *plVar10 = *plVar15;
          }
          plVar10 = plVar13;
          if (plVar15[1] != 0) {
            plVar10 = plVar13 + 1;
            *plVar13 = plVar15[1];
          }
          plVar15 = plVar15 + 2;
          iVar17 = iVar17 + 2;
        } while (iVar17 != 0);
      }
      plVar13 = plVar10;
      if (((uVar31 & 1) != 0) && (*plVar15 != 0)) {
        plVar13 = plVar10 + 1;
        *plVar10 = *plVar15;
      }
      plVar10 = plVar13;
      plVar15 = (long *)param_2[2];
    }
    uVar31 = (uint)((ulong)((long)plVar10 - (long)plVar15) >> 3);
    *(undefined1 *)((long)param_2 + 0xc) = 0;
  }
  if (uVar31 != 0) {
    if (lVar11 == 0) {
      (**(code **)(*(long *)*param_2 + 0x28))((long *)*param_2,param_2[2]);
    }
    else {
      FUN_031c2998(lVar11,param_2[2]);
    }
  }
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  FUN_031c2e70(param_2,*(undefined8 *)(param_1 + 0x4e0),&local_580);
  puVar28 = local_5a0;
  if (local_5a8 == (long **)0x0) goto LAB_02fed348;
  if (local_590._4_4_ == 0) {
    pplVar29 = local_5a8 + 3;
    iVar17 = *(int *)pplVar29;
    if (iVar17 < 2) goto LAB_02fed30c;
    iVar5 = *(int *)(local_5a0 + 0xb);
    lVar30 = local_5a8[2][iVar17 + -2];
    lVar11 = local_5a0[1];
    *(long *)(lVar11 + (long)iVar5 * 8) = local_5a8[2][iVar17 + -1];
    *(int *)(local_5a0 + 0xb) = iVar5 + 1;
    if (*(int *)((long)local_5a0 + 0x5c) <= iVar5 + 1) {
      (**(code **)(*(long *)*local_5a0 + 0x28))
                ((long *)*local_5a0,lVar11 + (long)(iVar5 + -5) * 8,6);
      *(int *)(puVar28 + 0xb) = iVar5 + -5;
    }
    *(undefined8 *)(lVar30 + 8) = 0;
    uVar31 = 0xffffffff;
  }
  else {
LAB_02fed30c:
    pplVar29 = local_5a8 + 1;
    local_598[2] = 0;
    local_598[3] = 0;
    *local_598 = *local_598 & 0xffff0000 | local_590._4_4_ & 0xffff;
    *local_598 = *local_598 & 0xffff | (int)local_590 << 0x10;
    uVar31 = local_590._4_4_;
  }
  *(uint *)pplVar29 = *(int *)pplVar29 + uVar31;
  local_5a8 = (long **)0x0;
  local_598 = (uint *)0x0;
LAB_02fed348:
  if (local_580 != (long *)0x0) {
    uVar31 = (uint)local_568;
    if (local_574 != '\0') {
      plVar10 = local_570;
      if (0 < (int)(uint)local_568) {
        plVar13 = local_570;
        plVar15 = local_570;
        if ((uint)local_568 != 1) {
          iVar17 = -((uint)local_568 & 0xfffffffe);
          do {
            plVar10 = plVar13;
            if (*plVar15 != 0) {
              plVar10 = plVar13 + 1;
              *plVar13 = *plVar15;
            }
            plVar13 = plVar10;
            if (plVar15[1] != 0) {
              plVar13 = plVar10 + 1;
              *plVar10 = plVar15[1];
            }
            plVar15 = plVar15 + 2;
            iVar17 = iVar17 + 2;
          } while (iVar17 != 0);
        }
        plVar10 = plVar13;
        if (((local_568 & 1) != 0) && (*plVar15 != 0)) {
          plVar10 = plVar13 + 1;
          *plVar13 = *plVar15;
        }
      }
      uVar31 = (uint)((ulong)((long)plVar10 - (long)local_570) >> 3);
      local_574 = '\0';
    }
    if (uVar31 != 0) {
      (**(code **)(*local_580 + 0x28))(local_580,local_570);
    }
    local_568 = local_568 & 0xffffffff00000000;
    local_578 = 0;
  }
  uVar25 = local_568;
  uVar14 = (ulong)local_568._4_4_;
  local_568 = (ulong)local_568._4_4_ << 0x20;
  if ((-1 < (long)uVar25) && (local_570 != (long *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_570,uVar14 << 3);
  }
  if (lVar33 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,puVar9,puVar34);
    return;
  }
  uVar25 = (long)puVar34 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(lVar33 + 0x28) < uVar25) || (*(long *)(lVar33 + 0x38) != uVar25 + (long)puVar9)) {
    if (puVar9 == (ulong *)0x0) {
      return;
    }
    if (*(ulong *)(lVar33 + 0x28) < uVar25 + 0x40) {
      *(int *)(*(long *)(lVar33 + 0x30) + 0x20) = *(int *)(*(long *)(lVar33 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(lVar33 + 0x10) + 0x18))
                (*(long **)(lVar33 + 0x10),(long)puVar9 - (long)*(int *)((long)puVar9 + -4),
                 uVar25 + 0x44);
      return;
    }
    if (*(long *)(lVar33 + 0x38) != uVar25 + (long)puVar9) {
      FUN_031cf778(lVar33,puVar9);
      return;
    }
    *(ulong **)(lVar33 + 0x38) = puVar9;
  }
  else {
    *(ulong **)(lVar33 + 0x38) = puVar9;
    if (*(ulong **)(lVar33 + 0x48) != puVar9) {
      return;
    }
  }
  FUN_031cf578(lVar33);
  return;
}


