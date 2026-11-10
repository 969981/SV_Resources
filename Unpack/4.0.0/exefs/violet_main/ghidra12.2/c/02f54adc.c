/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f54adc; name: FUN_02f54adc
 */


void FUN_02f54adc(long *param_1,long param_2,long param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  undefined8 *puVar20;
  uint *unaff_x24;
  uint uVar21;
  undefined8 *puVar22;
  long *plVar23;
  int iVar24;
  uint *puVar25;
  uint *puVar26;
  uint uVar27;
  uint uVar28;
  uint *puVar29;
  ulong local_4d8;
  long *local_4b0;
  undefined8 local_4a8;
  long local_4a0;
  undefined8 local_498;
  long *local_490;
  undefined8 local_488;
  uint *local_480;
  uint local_478;
  uint local_474;
  uint *local_468 [3];
  uint local_450;
  uint local_44c;
  uint *local_268 [3];
  long local_250;
  uint *local_248;
  uint local_240;
  undefined8 *local_238;
  
  if (*(int *)(param_3 + 8) == 0) {
    return;
  }
  plVar5 = param_1 + 0x42;
  local_468[1] = *(uint **)(param_2 + 0x4e0);
  puVar14 = *(uint **)(param_1[4] + (long)(int)param_1[5] * 8 + -8);
  local_468[0] = (uint *)(param_1 + 2);
  uVar6 = *puVar14 >> 0x10;
  local_4d8 = (ulong)uVar6;
  uVar28 = *puVar14;
  local_44c = uVar28 & 0xffff;
  lVar12 = param_1[3];
  *(uint *)(param_1 + 3) = (int)lVar12 - (uVar28 & 0xffff);
  puVar22 = *(undefined8 **)(param_2 + 0x4e0);
  *(undefined1 *)(param_3 + 0xc) = 1;
  puVar25 = (uint *)**(undefined8 **)(param_3 + 0x10);
  local_238 = *(undefined8 **)(param_2 + 0x4e0);
  local_250 = param_3 + 0x100;
  local_240 = 0;
  local_248 = (uint *)0x0;
  uVar21 = *puVar25 & 0xffff;
  local_490 = (long *)0x0;
  local_468[2] = puVar14;
  local_450 = uVar6;
  FUN_031c3378(plVar5);
  local_488 = *(undefined8 **)(param_2 + 0x4e0);
  local_480 = *(uint **)(param_1[0x44] + (long)(int)param_1[0x45] * 8 + -8);
  local_478 = *local_480 >> 0x10;
  local_474 = *local_480 & 0xffff;
  *(uint *)(param_1 + 0x43) = (int)param_1[0x43] - (*local_480 & 0xffff);
  local_490 = plVar5;
  if (uVar21 != 0) {
    puVar26 = puVar25 + 8;
    uVar27 = 0x7fffffff;
    uVar18 = uVar21;
    do {
      iVar24 = (uint)*(byte *)((long)puVar26 + 9) * 0x10 + 0x10;
      if ((int)(iVar24 + uVar6) < 0xfa1) {
        unaff_x24 = (uint *)((long)local_468[2] + (long)(int)uVar6 + 0x20);
      }
      else {
        unaff_x24 = (uint *)FUN_031c36f4(local_468);
      }
      unaff_x24[0] = 0xffffffff;
      unaff_x24[1] = 0xffffffff;
      memcpy(unaff_x24 + 4,puVar26,(ulong)*(byte *)((long)puVar26 + 9) << 4);
      local_450 = local_450 + iVar24;
      local_44c = local_44c + 1;
      lVar8 = *(long *)(param_2 + 0x40);
      if (((ulong)(byte)unaff_x24[6] == 2) && (2 < *(byte *)((long)unaff_x24 + 0x19))) {
        if (*(long *)(unaff_x24 + 0xc) != 0) {
          *(byte *)((long)unaff_x24 + 0x1f) = *(byte *)((long)unaff_x24 + 0x1f) | 8;
        }
        unaff_x24[0xc] = 0;
        unaff_x24[0xd] = 0;
        *(undefined2 *)(unaff_x24 + 0xe) = 0;
      }
      plVar5 = *(long **)(lVar8 + (ulong)(byte)unaff_x24[6] * 8 + 0x13b8);
      if ((int)plVar5[1] != 0) {
        (**(code **)(*plVar5 + 0x30))(plVar5,unaff_x24 + 4,local_268,&local_490);
      }
      uVar19 = uVar18 - 1;
      uVar6 = local_450;
      if (uVar19 == 0 || (int)uVar18 < 1) {
        if (uVar27 == 0) {
          puVar26 = (uint *)0x0;
          puVar29 = (uint *)0x0;
        }
        else {
          puVar29 = *(uint **)(puVar25 + 2);
          if (puVar29 != (uint *)0x0) {
            uVar18 = *puVar29 & 0xffff;
            if ((int)uVar27 <= (int)(*puVar29 & 0xffff)) {
              uVar18 = uVar27;
            }
            if (0 < (int)uVar18) {
              uVar27 = uVar27 - uVar18;
              puVar26 = puVar29 + 8;
              Hint_Prefetch(*(long *)(puVar29 + 2),0,0,0);
              Hint_Prefetch(*(long *)(puVar29 + 2) + 0x40,0,0,0);
              Hint_Prefetch(puVar29 + 0x20,0,0,0);
              Hint_Prefetch(puVar29 + 0x30,0,0,0);
              uVar19 = uVar18;
              goto LAB_02f54d20;
            }
          }
          puVar26 = (uint *)0x0;
        }
LAB_02f54d20:
        uVar18 = uVar19;
        if (uVar21 == (*puVar25 & 0xffff)) {
          *(undefined8 *)(*(long *)(param_3 + 0x10) + (long)(int)puVar25[1] * 8) = 0;
          *(undefined1 *)(param_3 + 0xc) = 1;
          iVar24 = *(int *)(puVar22 + 0xb);
          lVar8 = puVar22[1];
          *(uint **)(lVar8 + (long)iVar24 * 8) = puVar25;
          *(int *)(puVar22 + 0xb) = iVar24 + 1;
          if (*(int *)((long)puVar22 + 0x5c) <= iVar24 + 1) {
            (**(code **)(*(long *)*puVar22 + 0x28))
                      ((long *)*puVar22,lVar8 + (long)(iVar24 + -5) * 8,6);
            *(int *)(puVar22 + 0xb) = iVar24 + -5;
            uVar6 = local_450;
          }
        }
        else {
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar25,0x10);
            if (bVar3) {
              *puVar25 = *puVar25 - uVar21;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
      }
      else {
        puVar26 = puVar26 + (ulong)*(byte *)((long)puVar26 + 9) * 4;
        puVar29 = puVar25;
        uVar18 = uVar19;
        uVar19 = uVar21;
      }
      uVar21 = uVar19;
      puVar25 = puVar29;
      local_450 = uVar6;
    } while (puVar26 != (uint *)0x0);
  }
  puVar22 = local_488;
  if (local_474 == 0) {
    plVar5 = local_490 + 3;
    iVar24 = (int)*plVar5;
    if (iVar24 < 2) goto LAB_02f54e44;
    iVar7 = *(int *)(local_488 + 0xb);
    lVar17 = *(long *)(local_490[2] + (long)(iVar24 + -2) * 8);
    lVar8 = local_488[1];
    *(undefined8 *)(lVar8 + (long)iVar7 * 8) =
         *(undefined8 *)(local_490[2] + (long)(iVar24 + -1) * 8);
    *(int *)(local_488 + 0xb) = iVar7 + 1;
    if (*(int *)((long)local_488 + 0x5c) <= iVar7 + 1) {
      (**(code **)(*(long *)*local_488 + 0x28))((long *)*local_488,lVar8 + (long)(iVar7 + -5) * 8,6)
      ;
      *(int *)(puVar22 + 0xb) = iVar7 + -5;
    }
    *(undefined8 *)(lVar17 + 8) = 0;
    uVar21 = 0xffffffff;
  }
  else {
LAB_02f54e44:
    plVar5 = local_490 + 1;
    local_480[2] = 0;
    local_480[3] = 0;
    *local_480 = *local_480 & 0xffff0000 | local_474 & 0xffff;
    *local_480 = *local_480 & 0xffff | local_478 << 0x10;
    uVar21 = local_474;
  }
  puVar25 = local_468[1];
  *(uint *)plVar5 = (int)*plVar5 + uVar21;
  local_490 = (long *)0x0;
  local_480 = (uint *)0x0;
  puVar26 = local_468[0] + 2;
  iVar24 = (*puVar26 - (int)lVar12) + local_44c;
  if (iVar24 == 0) {
LAB_02f54edc:
    if (local_44c == 0) goto LAB_02f54ef0;
LAB_02f54f70:
    uVar21 = *puVar26 + local_44c;
    local_468[2][2] = 0;
    local_468[2][3] = 0;
    *local_468[2] = *local_468[2] & 0xffff0000 | local_44c & 0xffff;
    *local_468[2] = *local_468[2] & 0xffff | local_450 << 0x10;
  }
  else {
    if (puVar14 != local_468[2]) {
      if ((uVar28 & 0xffff) == (*puVar14 & 0xffff)) {
        puVar14 = *(uint **)(puVar14 + 2);
        uVar28 = 0;
        local_4d8 = 0;
      }
      if (puVar14 != local_468[2]) {
        uVar28 = *puVar14 - uVar28;
        goto LAB_02f54edc;
      }
      puVar14 = local_468[2];
    }
    uVar28 = local_44c - uVar28;
    if (local_44c != 0) goto LAB_02f54f70;
LAB_02f54ef0:
    puVar29 = local_468[0] + 6;
    uVar21 = *puVar29;
    if ((int)uVar21 < 2) goto LAB_02f54f70;
    lVar8 = *(long *)(*(long *)(local_468[0] + 4) + (long)(int)(uVar21 - 2) * 8);
    iVar7 = *(int *)((long)local_468[1] + 0x58);
    lVar12 = *(long *)((long)local_468[1] + 8);
    *(undefined8 *)(lVar12 + (long)iVar7 * 8) =
         *(undefined8 *)(*(long *)(local_468[0] + 4) + (long)(int)(uVar21 - 1) * 8);
    *(int *)((long)local_468[1] + 0x58) = iVar7 + 1;
    if (*(int *)((long)local_468[1] + 0x5c) <= iVar7 + 1) {
      (**(code **)(**(long **)local_468[1] + 0x28))
                (*(long **)local_468[1],lVar12 + (long)(iVar7 + -5) * 8,6);
      *(int *)((long)puVar25 + 0x58) = iVar7 + -5;
    }
    *(undefined8 *)(lVar8 + 8) = 0;
    uVar21 = *puVar29 - 1;
    puVar26 = puVar29;
    unaff_x24 = puVar14;
  }
  puVar22 = local_238;
  *puVar26 = uVar21;
  local_468[0] = (uint *)0x0;
  local_468[2] = (uint *)0x0;
  if (local_240 != 0) {
    if (local_240 == (*local_248 & 0xffff)) {
      *(undefined8 *)(*(long *)(local_250 + 0x10) + (long)(int)local_248[1] * 8) = 0;
      *(undefined1 *)(local_250 + 0xc) = 1;
      iVar7 = *(int *)(local_238 + 0xb);
      lVar12 = local_238[1];
      *(uint **)(lVar12 + (long)iVar7 * 8) = local_248;
      *(int *)(local_238 + 0xb) = iVar7 + 1;
      if (*(int *)((long)local_238 + 0x5c) <= iVar7 + 1) {
        (**(code **)(*(long *)*local_238 + 0x28))
                  ((long *)*local_238,lVar12 + (long)(iVar7 + -5) * 8,6);
        *(int *)(puVar22 + 0xb) = iVar7 + -5;
      }
    }
    else {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(local_248,0x10);
        if (bVar3) {
          *local_248 = *local_248 - local_240;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_240 = 0;
    *(undefined1 *)(local_250 + 0xc) = 1;
  }
  puVar22 = local_488;
  local_250 = 0;
  local_238 = (undefined8 *)0x0;
  if (local_490 != (long *)0x0) {
    if (local_474 == 0) {
      plVar5 = local_490 + 3;
      iVar7 = (int)*plVar5;
      if (iVar7 < 2) goto LAB_02f550d8;
      lVar8 = *(long *)(local_490[2] + (long)(iVar7 + -2) * 8);
      iVar1 = *(int *)(local_488 + 0xb);
      lVar12 = local_488[1];
      *(undefined8 *)(lVar12 + (long)iVar1 * 8) =
           *(undefined8 *)(local_490[2] + (long)(iVar7 + -1) * 8);
      *(int *)(local_488 + 0xb) = iVar1 + 1;
      if (*(int *)((long)local_488 + 0x5c) <= iVar1 + 1) {
        (**(code **)(*(long *)*local_488 + 0x28))
                  ((long *)*local_488,lVar12 + (long)(iVar1 + -5) * 8,6);
        *(int *)(puVar22 + 0xb) = iVar1 + -5;
      }
      *(undefined8 *)(lVar8 + 8) = 0;
      unaff_x24 = puVar14;
      uVar21 = 0xffffffff;
    }
    else {
LAB_02f550d8:
      plVar5 = local_490 + 1;
      local_480[2] = 0;
      local_480[3] = 0;
      *local_480 = *local_480 & 0xffff0000 | local_474 & 0xffff;
      *local_480 = *local_480 & 0xffff | local_478 << 0x10;
      uVar21 = local_474;
    }
    *(uint *)plVar5 = (int)*plVar5 + uVar21;
    local_490 = (long *)0x0;
    local_480 = (uint *)0x0;
  }
  puVar25 = local_468[1];
  if (local_468[0] == (uint *)0x0) goto LAB_02f551dc;
  if (local_44c == 0) {
    puVar26 = local_468[0] + 6;
    uVar21 = *puVar26;
    if ((int)uVar21 < 2) goto LAB_02f551a0;
    lVar8 = *(long *)(*(long *)(local_468[0] + 4) + (long)(int)(uVar21 - 2) * 8);
    iVar7 = *(int *)((long)local_468[1] + 0x58);
    lVar12 = *(long *)((long)local_468[1] + 8);
    *(undefined8 *)(lVar12 + (long)iVar7 * 8) =
         *(undefined8 *)(*(long *)(local_468[0] + 4) + (long)(int)(uVar21 - 1) * 8);
    *(int *)((long)local_468[1] + 0x58) = iVar7 + 1;
    if (*(int *)((long)local_468[1] + 0x5c) <= iVar7 + 1) {
      (**(code **)(**(long **)local_468[1] + 0x28))
                (*(long **)local_468[1],lVar12 + (long)(iVar7 + -5) * 8,6);
      *(int *)((long)puVar25 + 0x58) = iVar7 + -5;
    }
    *(undefined8 *)(lVar8 + 8) = 0;
    unaff_x24 = puVar14;
    uVar21 = 0xffffffff;
  }
  else {
LAB_02f551a0:
    puVar26 = local_468[0] + 2;
    local_468[2][2] = 0;
    local_468[2][3] = 0;
    *local_468[2] = *local_468[2] & 0xffff0000 | local_44c & 0xffff;
    *local_468[2] = *local_468[2] & 0xffff | local_450 << 0x10;
    uVar21 = local_44c;
  }
  *puVar26 = *puVar26 + uVar21;
  local_468[0] = (uint *)0x0;
  local_468[2] = (uint *)0x0;
LAB_02f551dc:
  local_490 = (long *)0x0;
  local_488 = (undefined8 *)0x8000000000000000;
  local_480 = (uint *)((ulong)local_480 & 0xffffffff00000000);
  local_4a0 = 0;
  local_498 = 0x8000000000000000;
  if (iVar24 == 0) {
    puVar25 = (uint *)0x0;
    uVar28 = 0;
  }
  else {
    uVar28 = uVar28 & 0xffff;
    unaff_x24 = (uint *)(ulong)uVar28;
    puVar25 = (uint *)0x0;
    if (uVar28 != 0) {
      puVar25 = (uint *)((long)puVar14 + local_4d8 + 0x20);
    }
    uVar28 = iVar24 - uVar28;
  }
  local_4b0 = (long *)0x0;
  local_4a8 = 0x8000000000000000;
  if (puVar25 != (uint *)0x0) {
    lVar12 = 0;
    plVar5 = param_1 + 0x73;
    do {
      puVar4 = PTR_DAT_047d1a08;
      lVar8 = *(long *)(*param_1 + 0x38);
      uVar27 = *(uint *)(lVar8 + ((ulong)puVar25[5] & 0xffffff) * 0xc0 + 0x80);
      lVar17 = *(long *)(*param_1 + 0x150);
      uVar18 = *(uint *)(lVar8 + ((ulong)puVar25[4] & 0xffffff) * 0xc0 + 0x80);
      puVar26 = (uint *)(param_1[0x71] + (long)(int)uVar27 * 0x20 + 0x10);
      uVar21 = *puVar26;
      puVar29 = (uint *)(param_1[0x71] + (long)(int)uVar18 * 0x20 + 0x10);
      uVar6 = *puVar29;
      iVar24 = *(int *)(lVar17 + (ulong)uVar27 * 0x80 + 0x4c);
      if ((iVar24 == 0x7fffffff || iVar24 == 0) &&
         (iVar24 = *(int *)(lVar17 + (ulong)uVar18 * 0x80 + 0x4c),
         iVar24 == 0 || iVar24 == 0x7fffffff)) {
        lVar8 = (long)(int)uVar21;
        if (iVar24 == 0) {
          if (uVar21 != 0xffffffff) {
            lVar8 = *(long *)(param_1[0x73] + lVar8 * 8);
            goto LAB_02f55598;
          }
          if ((int)param_1[0x69] == 0) {
            local_268[0] = (uint *)&DAT_00000070;
            puVar22 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,local_268,0);
            if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
              (**(code **)(puVar4 + 0x10))(puVar22,"hknpDeactivatedIsland");
            }
            *(int *)(puVar22 + 4) = (int)param_1[0x74];
            puVar22[5] = 0xffffffffffffffff;
            puVar22[6] = puVar22 + 8;
            *(undefined4 *)(puVar22 + 10) = 0;
            *puVar22 = 0;
            puVar22[1] = 0x8000000000000000;
            puVar22[2] = 0;
            puVar22[3] = 0x8000000000000000;
            *(undefined2 *)((long)puVar22 + 0x24) = 0;
            *(undefined4 *)(puVar22 + 0xd) = 0;
            puVar22[7] = 0x8000000100000000;
            puVar22[0xb] = 0;
            puVar22[0xc] = 0x8000000000000000;
            uVar21 = *(uint *)(param_1 + 0x74);
            lVar8 = (long)(int)uVar21;
            uVar6 = uVar21;
            if ((int)(*(uint *)((long)param_1 + 0x3a4) & 0x7fffffff) <= (int)uVar21) {
              FUN_02f5e87c(plVar5,lVar8 + 1);
              uVar6 = *(uint *)(param_1 + 0x74);
            }
            *(undefined8 **)(param_1[0x73] + (long)(int)uVar6 * 8) = puVar22;
            *(int *)(param_1 + 0x74) = (int)(lVar8 + 1);
          }
          else {
            iVar24 = (int)param_1[0x69] + -1;
            uVar21 = *(uint *)(param_1[0x68] + (long)iVar24 * 4);
            *(int *)(param_1 + 0x69) = iVar24;
            puVar4 = PTR_DAT_047d1a08;
            local_268[0] = (uint *)&DAT_00000070;
            lVar8 = (long)(int)uVar21;
            puVar22 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,local_268,0);
            if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
              (**(code **)(puVar4 + 0x10))(puVar22,"hknpDeactivatedIsland");
            }
            *(uint *)(puVar22 + 4) = uVar21;
            puVar22[5] = 0xffffffffffffffff;
            puVar22[6] = puVar22 + 8;
            *(undefined2 *)((long)puVar22 + 0x24) = 0;
            puVar22[7] = 0x8000000100000000;
            *(undefined4 *)(puVar22 + 10) = 0;
            *(undefined4 *)(puVar22 + 0xd) = 0;
            *puVar22 = 0;
            puVar22[1] = 0x8000000000000000;
            puVar22[2] = 0;
            puVar22[3] = 0x8000000000000000;
            puVar22[0xb] = 0;
            puVar22[0xc] = 0x8000000000000000;
            *(undefined8 **)(param_1[0x73] + lVar8 * 8) = puVar22;
          }
          plVar23 = *(long **)(param_1[0x73] + lVar8 * 8);
          FUN_02f560c0(plVar23,puVar25,&local_490,&local_4a0);
          *puVar26 = uVar21;
          lVar17 = *param_1;
          uVar21 = puVar25[5];
          lVar8 = *(long *)(lVar17 + 0x38);
          uVar6 = uVar21;
          do {
            uVar11 = (ulong)(uVar6 & 0xffffff);
            if ((*(byte *)(lVar8 + uVar11 * 0xc0 + 0x88) & 1) != 0) {
              iVar24 = (int)plVar23[1];
              lVar9 = (long)iVar24;
              if ((int)(*(uint *)((long)plVar23 + 0xc) & 0x7fffffff) <= iVar24) {
                FUN_02f23d90(plVar23,PTR_PTR_047d1a50,lVar9 + 1);
                iVar24 = (int)plVar23[1];
              }
              lVar8 = lVar8 + uVar11 * 0xc0;
              *(undefined4 *)(*plVar23 + (long)iVar24 * 4) = *(undefined4 *)(lVar8 + 0x50);
              *(int *)(plVar23 + 1) = (int)(lVar9 + 1);
              uVar6 = *(uint *)(lVar8 + 0x50);
              if (uVar6 < *(uint *)((long)plVar23 + 0x2c)) {
                *(uint *)((long)plVar23 + 0x2c) = uVar6;
                *(undefined4 *)(plVar23 + 5) = *(undefined4 *)(lVar17 + 0x5bc);
              }
            }
            lVar8 = *(long *)(lVar17 + 0x38);
            uVar6 = *(uint *)(lVar8 + uVar11 * 0xc0 + 0x84);
          } while (uVar6 != uVar21);
        }
        else if (uVar21 == 0xffffffff || uVar6 != 0xffffffff) {
          if (uVar21 == 0xffffffff && uVar6 != 0xffffffff) {
            *puVar26 = uVar6;
            plVar23 = *(long **)(param_1[0x73] + (long)(int)uVar6 * 8);
            FUN_02f560c0(plVar23,puVar25,&local_490,&local_4a0);
            lVar17 = *param_1;
            uVar21 = puVar25[5];
            lVar8 = *(long *)(lVar17 + 0x38);
            uVar6 = uVar21;
            do {
              uVar11 = (ulong)(uVar6 & 0xffffff);
              if ((*(byte *)(lVar8 + uVar11 * 0xc0 + 0x88) & 1) != 0) {
                iVar24 = (int)plVar23[1];
                lVar9 = (long)iVar24;
                if ((int)(*(uint *)((long)plVar23 + 0xc) & 0x7fffffff) <= iVar24) {
                  FUN_02f23d90(plVar23,PTR_PTR_047d1a50,lVar9 + 1);
                  iVar24 = (int)plVar23[1];
                }
                lVar8 = lVar8 + uVar11 * 0xc0;
                *(undefined4 *)(*plVar23 + (long)iVar24 * 4) = *(undefined4 *)(lVar8 + 0x50);
                *(int *)(plVar23 + 1) = (int)(lVar9 + 1);
                uVar6 = *(uint *)(lVar8 + 0x50);
                if (uVar6 < *(uint *)((long)plVar23 + 0x2c)) {
                  *(uint *)((long)plVar23 + 0x2c) = uVar6;
                  *(undefined4 *)(plVar23 + 5) = *(undefined4 *)(lVar17 + 0x5bc);
                }
              }
              lVar8 = *(long *)(lVar17 + 0x38);
              uVar6 = *(uint *)(lVar8 + uVar11 * 0xc0 + 0x84);
            } while (uVar6 != uVar21);
          }
          else if ((uVar6 & uVar21) == 0xffffffff) {
            if ((int)param_1[0x69] == 0) {
              local_268[0] = (uint *)&DAT_00000070;
              puVar22 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,local_268,0);
              if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
                (**(code **)(puVar4 + 0x10))(puVar22,"hknpDeactivatedIsland");
              }
              *(int *)(puVar22 + 4) = (int)param_1[0x74];
              puVar22[5] = 0xffffffffffffffff;
              puVar22[6] = puVar22 + 8;
              *(undefined4 *)(puVar22 + 10) = 0;
              *puVar22 = 0;
              puVar22[1] = 0x8000000000000000;
              puVar22[2] = 0;
              puVar22[3] = 0x8000000000000000;
              *(undefined2 *)((long)puVar22 + 0x24) = 0;
              *(undefined4 *)(puVar22 + 0xd) = 0;
              puVar22[7] = 0x8000000100000000;
              puVar22[0xb] = 0;
              puVar22[0xc] = 0x8000000000000000;
              uVar21 = *(uint *)(param_1 + 0x74);
              lVar8 = (long)(int)uVar21;
              uVar6 = uVar21;
              if ((int)(*(uint *)((long)param_1 + 0x3a4) & 0x7fffffff) <= (int)uVar21) {
                FUN_02f5e87c(plVar5,lVar8 + 1);
                uVar6 = *(uint *)(param_1 + 0x74);
              }
              *(undefined8 **)(param_1[0x73] + (long)(int)uVar6 * 8) = puVar22;
              *(int *)(param_1 + 0x74) = (int)(lVar8 + 1);
            }
            else {
              iVar24 = (int)param_1[0x69] + -1;
              uVar21 = *(uint *)(param_1[0x68] + (long)iVar24 * 4);
              *(int *)(param_1 + 0x69) = iVar24;
              puVar4 = PTR_DAT_047d1a08;
              local_268[0] = (uint *)&DAT_00000070;
              lVar8 = (long)(int)uVar21;
              puVar22 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,local_268,0);
              if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
                (**(code **)(puVar4 + 0x10))(puVar22,"hknpDeactivatedIsland");
              }
              *(uint *)(puVar22 + 4) = uVar21;
              puVar22[5] = 0xffffffffffffffff;
              puVar22[6] = puVar22 + 8;
              *(undefined2 *)((long)puVar22 + 0x24) = 0;
              puVar22[7] = 0x8000000100000000;
              *(undefined4 *)(puVar22 + 10) = 0;
              *(undefined4 *)(puVar22 + 0xd) = 0;
              *puVar22 = 0;
              puVar22[1] = 0x8000000000000000;
              puVar22[2] = 0;
              puVar22[3] = 0x8000000000000000;
              puVar22[0xb] = 0;
              puVar22[0xc] = 0x8000000000000000;
              *(undefined8 **)(param_1[0x73] + lVar8 * 8) = puVar22;
            }
            *puVar26 = uVar21;
            *puVar29 = uVar21;
            plVar23 = *(long **)(param_1[0x73] + lVar8 * 8);
            FUN_02f560c0(plVar23,puVar25,&local_490,&local_4a0);
            lVar17 = *param_1;
            uVar21 = puVar25[5];
            lVar8 = *(long *)(lVar17 + 0x38);
            uVar6 = uVar21;
            do {
              uVar11 = (ulong)(uVar6 & 0xffffff);
              if ((*(byte *)(lVar8 + uVar11 * 0xc0 + 0x88) & 1) != 0) {
                iVar24 = (int)plVar23[1];
                lVar9 = (long)iVar24;
                if ((int)(*(uint *)((long)plVar23 + 0xc) & 0x7fffffff) <= iVar24) {
                  FUN_02f23d90(plVar23,PTR_PTR_047d1a50,lVar9 + 1);
                  iVar24 = (int)plVar23[1];
                }
                lVar8 = lVar8 + uVar11 * 0xc0;
                *(undefined4 *)(*plVar23 + (long)iVar24 * 4) = *(undefined4 *)(lVar8 + 0x50);
                *(int *)(plVar23 + 1) = (int)(lVar9 + 1);
                uVar6 = *(uint *)(lVar8 + 0x50);
                if (uVar6 < *(uint *)((long)plVar23 + 0x2c)) {
                  *(uint *)((long)plVar23 + 0x2c) = uVar6;
                  *(undefined4 *)(plVar23 + 5) = *(undefined4 *)(lVar17 + 0x5bc);
                }
              }
              lVar8 = *(long *)(lVar17 + 0x38);
              uVar6 = *(uint *)(lVar8 + uVar11 * 0xc0 + 0x84);
            } while (uVar6 != uVar21);
            lVar17 = *param_1;
            uVar21 = puVar25[4];
            lVar8 = *(long *)(lVar17 + 0x38);
            uVar6 = uVar21;
            do {
              uVar11 = (ulong)(uVar6 & 0xffffff);
              if ((*(byte *)(lVar8 + uVar11 * 0xc0 + 0x88) & 1) != 0) {
                iVar24 = (int)plVar23[1];
                lVar9 = (long)iVar24;
                if ((int)(*(uint *)((long)plVar23 + 0xc) & 0x7fffffff) <= iVar24) {
                  FUN_02f23d90(plVar23,PTR_PTR_047d1a50,lVar9 + 1);
                  iVar24 = (int)plVar23[1];
                }
                lVar8 = lVar8 + uVar11 * 0xc0;
                *(undefined4 *)(*plVar23 + (long)iVar24 * 4) = *(undefined4 *)(lVar8 + 0x50);
                *(int *)(plVar23 + 1) = (int)(lVar9 + 1);
                uVar6 = *(uint *)(lVar8 + 0x50);
                if (uVar6 < *(uint *)((long)plVar23 + 0x2c)) {
                  *(uint *)((long)plVar23 + 0x2c) = uVar6;
                  *(undefined4 *)(plVar23 + 5) = *(undefined4 *)(lVar17 + 0x5bc);
                }
              }
              lVar8 = *(long *)(lVar17 + 0x38);
              uVar6 = *(uint *)(lVar8 + uVar11 * 0xc0 + 0x84);
            } while (uVar6 != uVar21);
          }
          else if (uVar21 == uVar6) {
            FUN_02f560c0(*(undefined8 *)(param_1[0x73] + lVar8 * 8),puVar25,&local_490,&local_4a0);
          }
          else {
            lVar8 = (long)(int)local_4a8;
            if ((int)(local_4a8._4_4_ & 0x7fffffff) <= (int)local_4a8) {
              FUN_02f5ed94(&local_4b0,PTR_PTR_047d1a50 + 0x20,lVar8 + 1);
            }
            local_4b0[(int)local_4a8] = (long)puVar25;
            local_4a8 = CONCAT44(local_4a8._4_4_,(int)(lVar8 + 1));
          }
        }
        else {
          *puVar29 = uVar21;
          plVar23 = *(long **)(param_1[0x73] + lVar8 * 8);
          FUN_02f560c0(plVar23,puVar25,&local_490,&local_4a0);
          lVar17 = *param_1;
          uVar21 = puVar25[4];
          lVar8 = *(long *)(lVar17 + 0x38);
          uVar6 = uVar21;
          do {
            uVar11 = (ulong)(uVar6 & 0xffffff);
            if ((*(byte *)(lVar8 + uVar11 * 0xc0 + 0x88) & 1) != 0) {
              iVar24 = (int)plVar23[1];
              lVar9 = (long)iVar24;
              if ((int)(*(uint *)((long)plVar23 + 0xc) & 0x7fffffff) <= iVar24) {
                FUN_02f23d90(plVar23,PTR_PTR_047d1a50,lVar9 + 1);
                iVar24 = (int)plVar23[1];
              }
              lVar8 = lVar8 + uVar11 * 0xc0;
              *(undefined4 *)(*plVar23 + (long)iVar24 * 4) = *(undefined4 *)(lVar8 + 0x50);
              *(int *)(plVar23 + 1) = (int)(lVar9 + 1);
              uVar6 = *(uint *)(lVar8 + 0x50);
              if (uVar6 < *(uint *)((long)plVar23 + 0x2c)) {
                *(uint *)((long)plVar23 + 0x2c) = uVar6;
                *(undefined4 *)(plVar23 + 5) = *(undefined4 *)(lVar17 + 0x5bc);
              }
            }
            lVar8 = *(long *)(lVar17 + 0x38);
            uVar6 = *(uint *)(lVar8 + uVar11 * 0xc0 + 0x84);
          } while (uVar6 != uVar21);
        }
      }
      else {
        lVar8 = lVar12;
        if (lVar12 == 0) {
          if ((int)param_1[0x69] == 0) {
            local_268[0] = (uint *)&DAT_00000070;
            puVar22 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,local_268,0);
            if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
              (**(code **)(puVar4 + 0x10))(puVar22,"hknpDeactivatedIsland");
            }
            *(int *)(puVar22 + 4) = (int)param_1[0x74];
            puVar22[5] = 0xffffffffffffffff;
            puVar22[6] = puVar22 + 8;
            *(undefined4 *)(puVar22 + 10) = 0;
            *puVar22 = 0;
            puVar22[1] = 0x8000000000000000;
            puVar22[2] = 0;
            puVar22[3] = 0x8000000000000000;
            *(undefined2 *)((long)puVar22 + 0x24) = 0;
            *(undefined4 *)(puVar22 + 0xd) = 0;
            puVar22[7] = 0x8000000100000000;
            puVar22[0xb] = 0;
            puVar22[0xc] = 0x8000000000000000;
            iVar24 = (int)param_1[0x74];
            lVar12 = (long)iVar24;
            iVar7 = iVar24;
            if ((int)(*(uint *)((long)param_1 + 0x3a4) & 0x7fffffff) <= iVar24) {
              FUN_02f5e87c(plVar5,lVar12 + 1);
              iVar7 = (int)param_1[0x74];
            }
            *(undefined8 **)(param_1[0x73] + (long)iVar7 * 8) = puVar22;
            *(int *)(param_1 + 0x74) = (int)(lVar12 + 1);
          }
          else {
            iVar7 = (int)param_1[0x69] + -1;
            iVar24 = *(int *)(param_1[0x68] + (long)iVar7 * 4);
            *(int *)(param_1 + 0x69) = iVar7;
            puVar4 = PTR_DAT_047d1a08;
            local_268[0] = (uint *)&DAT_00000070;
            lVar12 = (long)iVar24;
            puVar22 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,local_268,0);
            if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
              (**(code **)(puVar4 + 0x10))(puVar22,"hknpDeactivatedIsland");
            }
            *(int *)(puVar22 + 4) = iVar24;
            puVar22[5] = 0xffffffffffffffff;
            puVar22[6] = puVar22 + 8;
            *(undefined2 *)((long)puVar22 + 0x24) = 0;
            puVar22[7] = 0x8000000100000000;
            *(undefined4 *)(puVar22 + 10) = 0;
            *(undefined4 *)(puVar22 + 0xd) = 0;
            *puVar22 = 0;
            puVar22[1] = 0x8000000000000000;
            puVar22[2] = 0;
            puVar22[3] = 0x8000000000000000;
            puVar22[0xb] = 0;
            puVar22[0xc] = 0x8000000000000000;
            *(undefined8 **)(param_1[0x73] + lVar12 * 8) = puVar22;
          }
          lVar8 = *(long *)(param_1[0x73] + lVar12 * 8);
          *(undefined2 *)(lVar8 + 0x24) = 0x101;
          *(undefined8 *)(lVar8 + 0x28) = 0xfffffffffffffffe;
          iVar7 = (int)param_1[0x67];
          lVar12 = (long)iVar7;
          if ((int)(*(uint *)((long)param_1 + 0x33c) & 0x7fffffff) <= iVar7) {
            FUN_0133bb88(param_1 + 0x66,PTR_PTR_047d1a50,lVar12 + 1);
            iVar7 = (int)param_1[0x67];
          }
          *(int *)(param_1[0x66] + (long)iVar7 * 4) = iVar24;
          *(int *)(param_1 + 0x67) = (int)(lVar12 + 1);
        }
        lVar12 = lVar8;
LAB_02f55598:
        FUN_02f560c0(lVar8,puVar25,&local_490,&local_4a0);
      }
      uVar21 = (int)unaff_x24 - 1;
      if (uVar21 == 0 || (int)unaff_x24 < 1) {
        if ((uVar28 == 0) || (puVar14 = *(uint **)(puVar14 + 2), puVar14 == (uint *)0x0)) break;
        uVar21 = *puVar14 & 0xffff;
        if ((int)uVar28 <= (int)(*puVar14 & 0xffff)) {
          uVar21 = uVar28;
        }
        if ((int)uVar21 < 1) break;
        uVar28 = uVar28 - uVar21;
        puVar25 = puVar14 + 8;
      }
      else {
        puVar25 = puVar25 + (ulong)*(byte *)((long)puVar25 + 0x19) * 4 + 4;
      }
      unaff_x24 = (uint *)(ulong)uVar21;
    } while (puVar25 != (uint *)0x0);
    if (0 < (int)local_498) {
      lVar12 = 0;
      do {
        piVar10 = (int *)(local_4a0 + lVar12 * 0xc);
        iVar24 = piVar10[1];
        lVar8 = (long)iVar24;
        plVar5 = *(long **)(param_1[0x73] + (long)*piVar10 * 8);
        iVar7 = (int)plVar5[1] - piVar10[2];
        if (1 < iVar7) {
          puVar14 = (uint *)(*plVar5 + (long)piVar10[2] * 4);
          puVar25 = puVar14 + (iVar7 - 1);
          uVar21 = 0;
          local_268[0] = puVar14;
          local_468[0] = puVar25;
LAB_02f55c74:
          lVar17 = (long)(int)uVar21;
LAB_02f55c78:
          do {
            puVar26 = puVar25;
            do {
              puVar25 = puVar26;
              uVar21 = puVar14[(long)puVar25 - (long)puVar14 >> 3];
              puVar29 = puVar14;
              puVar26 = puVar25;
              do {
                do {
                  puVar15 = puVar29;
                  puVar29 = puVar15 + 1;
                } while (*puVar15 < uVar21);
                puVar16 = puVar26 + 1;
                do {
                  puVar26 = puVar16;
                  puVar16 = puVar26 + -1;
                  uVar28 = *puVar16;
                } while (uVar21 < uVar28);
                if (puVar16 < puVar15) {
                  puVar29 = puVar15;
                  puVar26 = puVar16;
                }
                else {
                  puVar26 = puVar26 + -2;
                  if (puVar15 != puVar16) {
                    *puVar16 = *puVar15;
                    *puVar15 = uVar28;
                  }
                }
              } while (puVar29 <= puVar26);
              if (puVar26 <= puVar14) {
                puVar14 = puVar29;
                if (puVar29 < puVar25) goto LAB_02f55c78;
                uVar21 = (int)lVar17 - 1;
                if ((int)lVar17 < 1) goto LAB_02f55c08;
                puVar14 = local_268[uVar21];
                puVar25 = local_468[uVar21];
                goto LAB_02f55c74;
              }
            } while (puVar25 <= puVar29);
            puVar15 = puVar26;
            puVar16 = puVar14;
            if ((long)puVar25 - (long)puVar29 <= (long)puVar26 - (long)puVar14) {
              puVar15 = puVar25;
              puVar16 = puVar29;
              puVar25 = puVar26;
              puVar29 = puVar14;
            }
            local_268[lVar17] = puVar29;
            local_468[lVar17] = puVar25;
            lVar17 = lVar17 + 1;
            puVar14 = puVar16;
            puVar25 = puVar15;
          } while( true );
        }
LAB_02f55c08:
        FUN_02f56290(plVar5[2] + lVar8 * 8,(int)plVar5[3] - iVar24);
        if (iVar24 < (int)plVar5[3]) {
          do {
            *(int *)(*(long *)(plVar5[2] + lVar8 * 8) + 4) = (int)lVar8;
            lVar8 = lVar8 + 1;
          } while (lVar8 < (int)plVar5[3]);
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 < (int)local_498);
    }
  }
  local_498 = local_498 & 0xffffffff00000000;
  if (0 < (int)local_488) {
    uVar11 = (ulong)local_488 & 3;
    if (((ulong)local_488 & 0xffffffff) - 1 < 3) {
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      do {
        *(undefined4 *)((long)local_490 + uVar13 * 4) = 0xffffffff;
        *(undefined4 *)((long)local_490 + uVar13 * 4 + 4) = 0xffffffff;
        *(undefined4 *)((long)local_490 + uVar13 * 4 + 8) = 0xffffffff;
        lVar12 = uVar13 * 4;
        uVar13 = uVar13 + 4;
        *(undefined4 *)((long)local_490 + lVar12 + 0xc) = 0xffffffff;
      } while (((ulong)local_488 & 0xfffffffc) != uVar13);
    }
    if (((ulong)local_488 & 3) != 0) {
      lVar12 = uVar13 << 2;
      do {
        *(undefined4 *)((long)local_490 + lVar12) = 0xffffffff;
        uVar11 = uVar11 - 1;
        lVar12 = lVar12 + 4;
      } while (uVar11 != 0);
    }
  }
  uVar11 = local_4a8 & 0xffffffff;
  local_480 = (uint *)((ulong)local_480 & 0xffffffff00000000);
  if ((int)local_4a8 < 1) {
    local_4a8 = local_4a8 & 0xffffffff00000000;
  }
  else {
    plVar5 = local_4b0;
    do {
      lVar12 = *plVar5;
      iVar24 = *(int *)(param_1[0x71] +
                        (long)*(int *)(*(long *)(*param_1 + 0x38) +
                                       ((ulong)*(uint *)(lVar12 + 0x14) & 0xffffff) * 0xc0 + 0x80) *
                        0x20 + 0x10);
      iVar7 = *(int *)(param_1[0x71] +
                       (long)*(int *)(*(long *)(*param_1 + 0x38) +
                                      ((ulong)*(uint *)(lVar12 + 0x10) & 0xffffff) * 0xc0 + 0x80) *
                       0x20 + 0x10);
      puVar22 = *(undefined8 **)(param_1[0x73] + (long)iVar24 * 8);
      if (iVar24 == iVar7) {
LAB_02f55e64:
        puVar20 = puVar22;
      }
      else {
        puVar20 = *(undefined8 **)(param_1[0x73] + (long)iVar7 * 8);
        if ((*(uint *)*puVar22 & 0xffffff) < (*(uint *)*puVar20 & 0xffffff)) {
          FUN_02f563c4(param_1,iVar24,iVar7);
          goto LAB_02f55e64;
        }
        FUN_02f563c4(param_1,iVar7);
      }
      FUN_02f560c0(puVar20,lVar12,&local_490,&local_4a0);
      uVar11 = uVar11 - 1;
      plVar5 = plVar5 + 1;
    } while (uVar11 != 0);
    local_4a8 = local_4a8 & 0xffffffff00000000;
    if (0 < (int)local_498) {
      lVar12 = 0;
      do {
        puVar22 = *(undefined8 **)(param_1[0x73] + (long)*(int *)(local_4a0 + lVar12 * 0xc) * 8);
        if (puVar22 != (undefined8 *)0x0) {
          uVar21 = *(int *)(puVar22 + 1) - 1;
          if (uVar21 != 0 && 0 < *(int *)(puVar22 + 1)) {
            puVar14 = (uint *)*puVar22;
            puVar25 = puVar14 + uVar21;
            uVar21 = 0;
            local_268[0] = puVar14;
            local_468[0] = puVar25;
LAB_02f55f40:
            lVar8 = (long)(int)uVar21;
LAB_02f55f44:
            do {
              puVar26 = puVar25;
              do {
                puVar25 = puVar26;
                uVar21 = puVar14[(long)puVar25 - (long)puVar14 >> 3];
                puVar29 = puVar14;
                puVar26 = puVar25;
                do {
                  do {
                    puVar15 = puVar29;
                    puVar29 = puVar15 + 1;
                  } while (*puVar15 < uVar21);
                  puVar16 = puVar26 + 1;
                  do {
                    puVar26 = puVar16;
                    puVar16 = puVar26 + -1;
                    uVar28 = *puVar16;
                  } while (uVar21 < uVar28);
                  if (puVar16 < puVar15) {
                    puVar29 = puVar15;
                    puVar26 = puVar16;
                  }
                  else {
                    puVar26 = puVar26 + -2;
                    if (puVar15 != puVar16) {
                      *puVar16 = *puVar15;
                      *puVar15 = uVar28;
                    }
                  }
                } while (puVar29 <= puVar26);
                if (puVar26 <= puVar14) {
                  puVar14 = puVar29;
                  if (puVar29 < puVar25) goto LAB_02f55f44;
                  uVar21 = (int)lVar8 - 1;
                  if ((int)lVar8 < 1) goto LAB_02f55ee0;
                  puVar14 = local_268[uVar21];
                  puVar25 = local_468[uVar21];
                  goto LAB_02f55f40;
                }
              } while (puVar25 <= puVar29);
              puVar15 = puVar26;
              puVar16 = puVar14;
              if ((long)puVar25 - (long)puVar29 <= (long)puVar26 - (long)puVar14) {
                puVar15 = puVar25;
                puVar16 = puVar29;
                puVar25 = puVar26;
                puVar29 = puVar14;
              }
              local_268[lVar8] = puVar29;
              local_468[lVar8] = puVar25;
              lVar8 = lVar8 + 1;
              puVar14 = puVar16;
              puVar25 = puVar15;
            } while( true );
          }
LAB_02f55ee0:
          FUN_02f56290(puVar22[2],*(undefined4 *)(puVar22 + 3));
          if (0 < *(int *)(puVar22 + 3)) {
            lVar8 = 0;
            do {
              *(int *)(*(long *)(puVar22[2] + lVar8 * 8) + 4) = (int)lVar8;
              lVar8 = lVar8 + 1;
            } while (lVar8 < *(int *)(puVar22 + 3));
          }
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 < (int)local_498);
    }
  }
  uVar11 = local_4a8;
  uVar13 = (ulong)local_4a8._4_4_;
  local_4a8 = (ulong)local_4a8._4_4_ << 0x20;
  if ((-1 < (long)uVar11) && (local_4b0 != (long *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_4b0,uVar13 << 3);
  }
  uVar11 = local_498;
  uVar13 = (ulong)local_498._4_4_;
  local_498 = (ulong)local_498._4_4_ << 0x20;
  if ((-1 < (long)uVar11) && (local_4a0 != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_4a0,uVar13 * 0xc);
  }
  uVar11 = (ulong)local_488;
  uVar13 = (ulong)local_488._4_4_;
  local_488 = (undefined8 *)((ulong)local_488._4_4_ << 0x20);
  if ((-1 < (long)uVar11) && (local_490 != (long *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_490,uVar13 << 2);
  }
  return;
}


