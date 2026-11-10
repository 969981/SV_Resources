/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034e05d8; name: FUN_034e05d8
 */


int FUN_034e05d8(long *param_1,int *param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  undefined8 *puVar16;
  int iVar17;
  long lVar18;
  undefined8 *puVar19;
  byte bVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  int *piVar25;
  ulong uVar26;
  undefined8 *puVar27;
  uint *puVar28;
  int *piVar29;
  int *piVar30;
  MutexType *pMVar31;
  int local_3e0;
  ulong local_388;
  ulong uStack_380;
  long *local_378;
  undefined8 *local_370;
  undefined4 local_368;
  undefined8 local_360;
  undefined8 local_358;
  long local_350;
  undefined8 local_348;
  long local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  int *local_328;
  undefined8 uStack_320;
  int local_318;
  int local_314;
  undefined1 auStack_310 [80];
  ulong *local_2c0;
  int local_2b8;
  char local_2b0 [5];
  char local_2ab;
  undefined1 auStack_298 [104];
  undefined4 local_230;
  undefined8 local_22c;
  undefined8 uStack_224;
  undefined4 local_21c;
  undefined8 local_218;
  undefined4 local_210;
  undefined2 local_20c;
  ushort local_20a;
  long local_208;
  ulong local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined1 auStack_1e0 [256];
  undefined1 *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  byte local_b8;
  int local_b0;
  int iStack_ac;
  ulong local_a8;
  undefined8 local_a0;
  int local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined1 local_80;
  undefined8 local_78;
  byte local_6c [12];
  
  iVar17 = *param_2;
  local_a0 = *(undefined8 *)(param_2 + 4);
  local_98 = param_2[0xd];
  local_88 = *(undefined1 *)((long)param_2 + 0x99);
  bVar20 = (*(byte *)(param_2 + 0x26) >> 4 | *(byte *)(param_2 + 0x26) << 4) ^ 8;
  if (bVar20 < 3) {
    local_80 = (undefined1)param_2[0x27];
LAB_034e0648:
    local_90 = 0;
    if (*(long *)(param_2 + 2) != 0) {
      local_90 = *(undefined4 *)(*(long *)(param_2 + 2) + 0x10);
    }
  }
  else {
    local_80 = 0xff;
    if (bVar20 != 8) goto LAB_034e0648;
    local_90 = 0;
  }
  local_78 = 0;
  iVar7 = FUN_034deb98(param_1 + 0x24,&local_a0,(int)param_1[0x28],
                       *(undefined4 *)((long)param_1 + 0x13c));
  if (((*(byte *)((long)param_1 + 0xdd) >> 3 & 1) != 0) && ((char)param_2[0x26] == '\0')) {
    uVar8 = (**(code **)(*param_1 + 0x128))(param_1,1);
    puVar6 = PTR_DAT_047e70c0;
    if ((uVar8 & 1) == 0) {
      (**(code **)(*param_1 + 0x130))(param_1,1);
      return 2;
    }
    lVar15 = param_1[0x12];
    plVar9 = DAT_048b0540;
    if ((lVar15 != 0) && (bVar20 = *(byte *)(lVar15 + 0x98), (bVar20 >> 1 & 1) == 0)) {
      plVar9 = (long *)(PTR_DAT_047e70c0 + 0x10);
      do {
        plVar24 = (long *)*plVar9;
        plVar9 = plVar24 + 10;
      } while (plVar24 != (long *)0x0 && plVar24 != param_1);
      if (plVar24 == (long *)0x0) {
        param_1[10] = 0;
        if (*(long *)(puVar6 + 0x10) == 0) {
          *(long **)(puVar6 + 0x10) = param_1;
        }
        else {
          *(long **)(*(long *)(puVar6 + 8) + 0x50) = param_1;
          lVar15 = param_1[0x12];
        }
        *(long **)(puVar6 + 8) = param_1;
        *(int *)puVar6 = *(int *)puVar6 + 1;
        bVar20 = *(byte *)(lVar15 + 0x98);
      }
      *(byte *)(lVar15 + 0x98) = bVar20 | 2;
      plVar9 = DAT_048b0540;
    }
    for (; plVar9 != (long *)0x0; plVar9 = (long *)plVar9[0x780]) {
      if (plVar9[0x782] != 0) goto LAB_034e07e0;
    }
    plVar9 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x3c18);
    if (plVar9 != (long *)0x0) {
      lVar15 = 0x7f;
      plVar9[0x780] = 0;
      *(undefined4 *)(plVar9 + 0x781) = 0;
      plVar9[0x782] = 0;
      plVar24 = plVar9;
      do {
        plVar9[0x782] = (long)plVar24;
        *plVar24 = 0;
        while( true ) {
          *(int *)(plVar9 + 0x781) = (int)plVar9[0x781] + 1;
          if (lVar15 == 0) {
            if (DAT_048b0540 == (long *)0x0) {
              DAT_048b0540 = plVar9;
              plVar9[0x780] = 0;
            }
            else {
              plVar9[0x780] = (long)DAT_048b0540;
              DAT_048b0540 = plVar9;
            }
            goto LAB_034e07e0;
          }
          lVar15 = lVar15 + -1;
          plVar24 = plVar24 + 0xf;
          if (plVar9[0x782] == 0) break;
          *plVar24 = plVar9[0x782];
          plVar9[0x782] = (long)plVar24;
        }
      } while( true );
    }
LAB_034e07f8:
    (**(code **)(*param_1 + 0x130))(param_1,1);
    puVar6 = PTR_DAT_047e70c0;
    lVar15 = param_1[0x12];
    if (((lVar15 != 0) && (bVar20 = *(byte *)(lVar15 + 0x98), (bVar20 >> 1 & 1) != 0)) &&
       (*(short *)(lVar15 + 0x94) == 0)) {
      plVar9 = (long *)(PTR_DAT_047e70c0 + 0x10);
      plVar24 = (long *)0x0;
      do {
        plVar21 = plVar24;
        plVar24 = (long *)*plVar9;
        plVar9 = plVar24 + 10;
      } while (plVar24 != (long *)0x0 && plVar24 != param_1);
      if (plVar24 != (long *)0x0) {
        plVar9 = (long *)(PTR_DAT_047e70c0 + 0x10);
        if (*(long **)(PTR_DAT_047e70c0 + 0x10) != plVar24) {
          plVar9 = plVar21 + 10;
        }
        *plVar9 = plVar24[10];
        if (*(long **)(puVar6 + 8) == plVar24) {
          *(long **)(puVar6 + 8) = plVar21;
        }
        *(int *)puVar6 = *(int *)puVar6 + -1;
        lVar15 = param_1[0x12];
        bVar20 = *(byte *)(lVar15 + 0x98);
      }
      *(byte *)(lVar15 + 0x98) = bVar20 & 0xfd;
    }
    return 2;
  }
  goto LAB_034e0a58;
code_r0x034e0ae4:
  plVar9 = (long *)*plVar9;
  if (plVar9 == (long *)0x0) goto LAB_034e0aec;
  goto LAB_034e0ad8;
  while( true ) {
    plVar21 = plVar23 + 1;
    plVar2 = plVar23 + 1;
    plVar23 = plVar21;
    if (*plVar2 == lVar15) break;
LAB_034e0f84:
    lVar18 = lVar18 + -8;
    if (lVar18 == 0) {
      plVar21 = plVar22 + uVar14;
      goto LAB_034e1048;
    }
  }
LAB_034e1048:
  if (((plVar21 != (long *)0x0) && (plVar22 + uVar14 != plVar21)) &&
     (*(short *)(lVar15 + 0x40) != -1)) {
    *(short *)(lVar15 + 0x40) = *(short *)(lVar15 + 0x40) + 1;
    local_350 = *local_378;
  }
LAB_034e1074:
  if ((int)plVar24[4] == 1) {
    FUN_03499b7c(param_1,local_2c0[3],&local_370);
  }
  else {
    puVar16 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x18);
    puVar27 = local_370;
    if (puVar16 != (undefined8 *)0x0) {
      *puVar16 = 0;
      puVar16[1] = 0;
      *(undefined4 *)(puVar16 + 2) = 1;
    }
    if (local_370 != (undefined8 *)0x0) {
      iVar12 = *(int *)(local_370 + 2);
      *(int *)(local_370 + 2) = iVar12 + -1;
      local_370 = puVar16;
      if (iVar12 + -1 == 0) {
        FUN_034783fc(puVar27);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,puVar27);
      }
      puVar16 = local_370;
    }
    local_370 = puVar16;
    if (local_370 == (undefined8 *)0x0) {
      local_3e0 = 0x34;
      goto LAB_034e11dc;
    }
    local_3e0 = FUN_03499cdc(param_1,&local_388,&local_348,&local_a8);
    if (local_3e0 != 1) goto LAB_034e11dc;
  }
  local_2c0 = &local_388;
  if ((local_2b0[0] == -0x70) && (local_2ab != '\0')) {
    local_6c[0] = local_b8 & 1;
    if (local_340 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined4 *)(local_340 + 0x10);
    }
    local_3e0 = FUN_034a7e5c(plVar9,local_2b0,uVar10,local_6c,local_338,local_314);
    if (local_3e0 != 1) goto LAB_034e11dc;
    local_b8 = local_b8 & 0xfe | local_6c[0];
  }
  local_3e0 = FUN_034a9828(plVar9,&local_348);
  if (local_3e0 == 3) {
    local_3e0 = 1;
  }
  else if (local_3e0 == 1) {
    local_3e0 = (**(code **)(*plVar9 + 0x240))(plVar9,&local_348);
  }
LAB_034e11dc:
  FUN_034997f4(&local_388);
LAB_034e11ec:
  if (local_3e0 == 1) {
LAB_034e11f4:
    iVar7 = iVar7 + 1;
    local_3e0 = 1;
  }
LAB_034e1208:
  (**(code **)(*plVar9 + 0x30))(plVar9);
LAB_034e0df4:
  if (local_208 != 0) {
    local_200 = local_200 & 0xffffffff00000000;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    local_208 = 0;
    local_200 = local_200 & 0xffffffff;
  }
  if (local_e0 != (undefined1 *)0x0) {
    local_d8 = 0;
    if (auStack_1e0 != local_e0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    }
    local_e0 = (undefined1 *)0x0;
    local_d4 = 0;
  }
  piVar29 = local_328;
  if ((local_328 != (int *)0x0) && (iVar12 = *local_328, *local_328 = iVar12 + -1, iVar12 + -1 == 0)
     ) {
    uVar14 = local_328[1];
    if (uVar14 != 0) {
      uVar8 = 0;
      plVar9 = (long *)(local_328 + 4);
      do {
        if (*plVar9 != 0) {
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
          uVar14 = piVar29[1];
        }
        uVar8 = uVar8 + 1;
        plVar9 = plVar9 + 4;
      } while (uVar8 < uVar14);
    }
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,piVar29);
  }
  puVar28 = puVar28 + 1;
  if (puVar28 == (uint *)(plVar24[3] + (ulong)*(uint *)(plVar24 + 4) * 4)) goto LAB_034e121c;
  goto LAB_034e0c90;
LAB_034e121c:
  if (iVar17 == 0) goto LAB_034e131c;
  if (iVar7 == 0) goto LAB_034e0af4;
  goto LAB_034e122c;
LAB_034e07e0:
  plVar24 = (long *)plVar9[0x782];
  if (plVar24 == (long *)0x0) goto LAB_034e07f8;
  if (*plVar24 == 0) {
    plVar9[0x782] = 0;
  }
  else {
    plVar9[0x782] = *plVar24;
  }
  *(int *)(plVar9 + 0x781) = (int)plVar9[0x781] + -1;
  plVar24[2] = 0;
  plVar24[3] = 0;
  plVar24[1] = 0;
  *(undefined4 *)((long)plVar24 + 0x6c) = 0;
  if (param_1[0x35] == 0) {
    param_1[0x35] = (long)plVar24;
    *plVar24 = 0;
  }
  else {
    *plVar24 = param_1[0x35];
    param_1[0x35] = (long)plVar24;
  }
  *(int *)(param_1 + 0x34) = (int)param_1[0x34] + 1;
  *(int *)(plVar24 + 0xe) = param_2[0x20];
  plVar24[4] = *(long *)(param_2 + 4);
  *(int *)((long)plVar24 + 0x1c) = param_2[0xd];
  plVar24[2] = *(long *)(param_2 + 10);
  *(int *)(plVar24 + 3) = param_2[0xc];
  piVar30 = *(int **)(param_2 + 8);
  piVar29 = (int *)plVar24[1];
  if (piVar29 != (int *)0x0) {
    iVar12 = *piVar29;
    *piVar29 = iVar12 + -1;
    puVar6 = PTR_DAT_047e2fd0;
    if (iVar12 + -1 == 0) {
      uVar11 = piVar29[1];
      if (uVar11 != 0) {
        uVar8 = 0;
        plVar9 = (long *)(piVar29 + 4);
        do {
          if (*plVar9 != 0) {
            (**(code **)(puVar6 + 0x30))(0);
            uVar11 = piVar29[1];
          }
          uVar8 = uVar8 + 1;
          plVar9 = plVar9 + 4;
        } while (uVar8 < uVar11);
      }
      (**(code **)(puVar6 + 0x30))(0,piVar29);
    }
  }
  if (piVar30 != (int *)0x0) {
    *piVar30 = *piVar30 + 1;
  }
  plVar24[1] = (long)piVar30;
  memcpy(plVar24 + 5,param_2 + 0xe,0x44);
  *(int *)((long)plVar24 + 0x6c) = param_2[0x1f];
  lVar15 = plVar24[4];
  uVar11 = *(uint *)(lVar15 + 0x80);
  if (uVar11 < 2) {
    *(uint *)(lVar15 + 0x80) = uVar11 + 1;
    if ((uVar11 != 0) && (*(char *)(lVar15 + 0x84) != '\0')) {
      FUN_034c60b0(*(undefined8 *)PTR_DAT_047e6cc0);
    }
  }
  else {
    *(uint *)(lVar15 + 0x80) = uVar11 + 1;
  }
  uVar11 = param_2[0xd];
  if (uVar11 != 0) {
    plVar9 = *(long **)PTR_DAT_047e6f38;
    nn::os::LockMutex((MutexType *)(plVar9 + 3));
    uVar14 = *(uint *)(plVar9 + 1);
    if (uVar14 != 0) {
      uVar4 = 0;
      if (uVar14 != 0) {
        uVar4 = uVar11 / uVar14;
      }
      for (lVar15 = *(long *)(*plVar9 + (ulong)(uVar11 - uVar4 * uVar14) * 8); lVar15 != 0;
          lVar15 = *(long *)(lVar15 + 0x70)) {
        if (*(uint *)(lVar15 + 0x54) == uVar11) {
          *(int *)(lVar15 + 0x30) = *(int *)(lVar15 + 0x30) + 1;
          break;
        }
      }
    }
    nn::os::UnlockMutex((MutexType *)(plVar9 + 3));
  }
LAB_034e0a58:
  local_a8 = 0;
  if ((*param_2 != 0) && (uVar8 = *(ulong *)(*(long *)(param_2 + 0x22) + 0x18), uVar8 != 0)) {
    *(int *)(uVar8 + 0x10) = *(int *)(uVar8 + 0x10) + 1;
    local_a8 = uVar8;
    lVar15 = FUN_0349a150(param_1 + 0x22,uVar8,&local_348);
    if (lVar15 != 0) {
      iVar12 = *(int *)(lVar15 + 8);
      if (iVar12 == 0) {
        *(int *)(uVar8 + 0x10) = *(int *)(uVar8 + 0x10) + 1;
        iVar12 = *(int *)(lVar15 + 8);
      }
      *(int *)(lVar15 + 8) = iVar12 + 1;
    }
  }
  plVar9 = (long *)param_1[0x2a];
  if (plVar9 != (long *)0x0) {
    plVar24 = plVar9;
    do {
      if ((int)plVar24[1] == iVar7) goto LAB_034e0b14;
      plVar24 = (long *)*plVar24;
    } while (plVar24 != (long *)0x0);
    iVar7 = *(int *)((long)param_1 + 0x144);
LAB_034e0ad8:
    if ((int)plVar9[1] != iVar7) goto code_r0x034e0ae4;
    plVar24 = plVar9;
LAB_034e0b14:
    lVar15 = *(long *)(param_2 + 4);
    iVar12 = (int)param_1[3];
    if (lVar15 == 0) {
LAB_034e0ba0:
      local_b0 = 0;
      iVar3 = 0;
    }
    else {
      lVar18 = *(long *)(lVar15 + 0x50);
      if (lVar18 == 0) {
        local_b0 = 0;
        iVar3 = 0;
      }
      else {
        piVar29 = *(int **)(lVar18 + 0x20);
        uVar11 = *(uint *)(lVar18 + 0x28);
        if ((uVar11 == 0) || (*piVar29 == iVar12)) {
          piVar30 = piVar29;
        }
        else {
          lVar18 = (ulong)uVar11 * 0xc;
          piVar25 = piVar29;
          do {
            lVar18 = lVar18 + -0xc;
            if (lVar18 == 0) goto LAB_034e0ba0;
            piVar30 = piVar25 + 3;
            piVar1 = piVar25 + 3;
            piVar25 = piVar30;
          } while (*piVar1 != iVar12);
        }
        if (piVar30 == piVar29 + (ulong)uVar11 * 3) goto LAB_034e0ba0;
        local_b0 = piVar30[1];
        iVar3 = piVar30[2];
      }
    }
    if (iVar7 == local_b0) {
      iVar13 = iVar3 + 1;
      uVar11 = (uint)(iVar3 == 0);
    }
    else {
      iVar13 = 1;
      uVar11 = 1;
      local_b0 = iVar7;
    }
    _local_b0 = CONCAT44(iVar13,local_b0);
    FUN_034c7718(*(undefined8 *)PTR_DAT_047e6cc0,lVar15,iVar12,&local_b0);
    uVar14 = *(uint *)(plVar24 + 4);
    if (uVar14 == 0 && iVar17 == 0) goto LAB_034e1318;
    if (1 < uVar14) {
      FUN_034a5f70(param_2,param_1);
      uVar14 = *(uint *)(plVar24 + 4);
    }
    if (uVar14 == 0) {
      local_3e0 = 2;
      if (iVar17 == 0) goto LAB_034e131c;
      goto LAB_034e0af4;
    }
    puVar28 = (uint *)plVar24[3];
    iVar7 = 0;
    local_3e0 = 2;
LAB_034e0c90:
    local_348 = *(undefined8 *)param_2;
    local_340 = *(long *)(param_2 + 2);
    local_338 = *(undefined8 *)(param_2 + 4);
    uStack_330 = *(undefined8 *)(param_2 + 6);
    uStack_320 = *(undefined8 *)(param_2 + 10);
    local_314 = param_2[0xd];
    local_318 = param_2[0xc];
    local_328 = *(int **)(param_2 + 8);
    if (local_328 != (int *)0x0) {
      *local_328 = *local_328 + 1;
    }
    memcpy(auStack_310,param_2 + 0xe,0x78);
    local_218 = 0;
    local_210 = 0;
    memset(auStack_298,0,0x68);
    local_20a = local_20a & 0xfc00;
    local_20c = 0;
    local_21c = 0;
    local_22c = 0;
    uStack_224 = 0;
    local_230 = 0x3f800000;
    local_e0 = (undefined1 *)0x0;
    local_d8 = 0;
    local_d4 = 0;
    local_1e8 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_208 = 0;
    local_200 = 0;
    local_d0 = *(undefined8 *)(param_2 + 0x9e);
    local_c8 = *(undefined8 *)(param_2 + 0xa0);
    FUN_03486f58(auStack_298,param_2 + 0x2c);
    local_c0 = *(undefined8 *)(param_2 + 0xa2);
    local_b8 = *(byte *)(param_2 + 0xa4);
    uVar14 = *puVar28;
    for (plVar9 = (long *)param_1[0x2f]; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if (*(uint *)(plVar9 + 1) == uVar14) {
        if ((~uVar11 & (*(byte *)((long)plVar9 + 0x14) & 8) >> 3) != 0) goto LAB_034e0df4;
        break;
      }
    }
    if ((iVar7 == 0) || (local_2b8 == 0)) {
      pMVar31 = *(MutexType **)PTR_DAT_047e6f28;
      nn::os::LockMutex(pMVar31);
      uVar4 = *(uint *)(pMVar31 + 0x28);
      if (uVar4 != 0) {
        uVar5 = 0;
        if (uVar4 != 0) {
          uVar5 = uVar14 / uVar4;
        }
        for (lVar15 = *(long *)(*(long *)(pMVar31 + 0x20) + (ulong)(uVar14 - uVar5 * uVar4) * 8);
            lVar15 != 0; lVar15 = *(long *)(lVar15 + 8)) {
          if (*(uint *)(lVar15 + 0x10) == uVar14) {
            plVar9 = (long *)(lVar15 + -8);
            *(int *)(lVar15 + 0x14) = *(int *)(lVar15 + 0x14) + 1;
            nn::os::UnlockMutex(pMVar31);
            if (iVar17 != 0) {
              local_388 = *local_2c0;
              uStack_380 = local_2c0[1];
              local_378 = (long *)local_2c0[2];
              local_370 = (undefined8 *)0x0;
              local_368 = (undefined4)local_2c0[4];
              local_360 = 0;
              local_358 = 0;
              local_350 = 0;
              if (((local_378 == (long *)0x0) ||
                  (plVar21 = *(long **)PTR_DAT_047e7040, plVar21 == (long *)0x0)) ||
                 (lVar15 = *local_378, lVar15 == 0)) goto LAB_034e1074;
              plVar22 = (long *)*plVar21;
              uVar14 = *(uint *)(plVar21 + 1);
              plVar21 = plVar22;
              if ((uVar14 == 0) || (*plVar22 == lVar15)) goto LAB_034e1048;
              lVar18 = (ulong)uVar14 * 8;
              plVar23 = plVar22;
              goto LAB_034e0f84;
            }
            if ((local_2b0[0] == -0x70) && (local_2ab != '\0')) {
              local_388 = CONCAT71(local_388._1_7_,local_b8) & 0xffffffffffffff01;
              if (local_340 == 0) {
                uVar10 = 0;
              }
              else {
                uVar10 = *(undefined4 *)(local_340 + 0x10);
              }
              local_3e0 = FUN_034a7e5c(plVar9,local_2b0,uVar10,&local_388,local_338,local_314);
              if (local_3e0 != 1) goto LAB_034e1208;
              local_b8 = local_b8 & 0xfe | (byte)local_388;
            }
            local_3e0 = FUN_034a9828(plVar9,&local_348);
            if (local_3e0 == 3) goto LAB_034e11f4;
            if (local_3e0 != 1) goto LAB_034e1208;
            local_3e0 = (**(code **)(*plVar9 + 0x240))(plVar9,&local_348);
            goto LAB_034e11ec;
          }
        }
      }
      nn::os::UnlockMutex(pMVar31);
    }
    goto LAB_034e0df4;
  }
LAB_034e0aec:
  if (iVar17 != 0) {
    local_3e0 = 2;
LAB_034e0af4:
    if ((*(byte *)((long)param_1 + 0xdd) >> 3 & 1) == 0) {
      local_3e0 = FUN_03499f44(param_1,param_2);
      goto LAB_034e131c;
    }
LAB_034e122c:
    uVar8 = local_a8;
    if (local_a8 == 0) {
      return local_3e0;
    }
    uVar11 = *(uint *)(param_1 + 0x23);
    if (uVar11 != 0) {
      iVar17 = 0;
      do {
        uVar14 = iVar17 + (uVar11 >> 1);
        uVar26 = *(ulong *)(param_1[0x22] +
                           (-(ulong)(uVar14 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar14 << 4));
        if (uVar26 == local_a8) {
          puVar27 = (undefined8 *)(param_1[0x22] + (long)(int)uVar14 * 0x10);
          iVar17 = *(int *)(puVar27 + 1);
          iVar7 = iVar17 + -1;
          if (iVar17 == 0 || iVar7 == 0) {
            iVar17 = *(int *)(local_a8 + 0x10) + -1;
            *(int *)(local_a8 + 0x10) = iVar17;
            if (iVar17 == 0) {
              FUN_034783fc(local_a8);
              (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,uVar8);
            }
            uVar11 = *(uint *)(param_1 + 0x23);
            puVar16 = (undefined8 *)((param_1[0x22] + (ulong)uVar11 * 0x10) - 0x10);
            if (puVar27 < puVar16) {
              do {
                puVar19 = puVar27 + 2;
                *puVar27 = *puVar19;
                *(undefined4 *)(puVar27 + 1) = *(undefined4 *)(puVar27 + 3);
                puVar27 = puVar19;
              } while (puVar19 < puVar16);
              uVar11 = *(uint *)(param_1 + 0x23);
            }
            *(uint *)(param_1 + 0x23) = uVar11 - 1;
          }
          else {
            *(int *)(puVar27 + 1) = iVar7;
          }
          break;
        }
        if (uVar26 < local_a8) {
          iVar17 = uVar14 + 1;
        }
        uVar11 = uVar11 - (uVar26 < local_a8) >> 1;
      } while (uVar11 != 0);
    }
  }
LAB_034e1318:
  local_3e0 = 1;
LAB_034e131c:
  uVar8 = local_a8;
  if ((local_a8 != 0) &&
     (iVar17 = *(int *)(local_a8 + 0x10) + -1, *(int *)(local_a8 + 0x10) = iVar17, iVar17 == 0)) {
    FUN_034783fc(local_a8);
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,uVar8);
  }
  return local_3e0;
}


