/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008da264; name: FUN_008da264
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_008da264(long *param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                 long param_7,undefined4 param_8,long param_9,byte param_10,long param_11)

{
  uint *puVar1;
  undefined *puVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  char cVar6;
  undefined1 uVar7;
  short sVar8;
  int iVar9;
  undefined3 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  int *piVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined8 local_428;
  undefined8 *local_420;
  undefined8 *local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  *param_1 = (long)(PTR_DAT_047d25b8 + 0x10);
  local_68 = param_3;
  FUN_008f07f4(param_1 + 0x1e);
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_00fad31c(param_1 + 0x29);
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  FUN_008f07f4(param_1 + 0x54);
  *(undefined1 *)(param_1 + 0x5e) = 0;
  FUN_00fad31c(param_1 + 0x5f);
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  puVar2 = PTR_DAT_047d25c0 + 0x10;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  *(undefined4 *)(param_1 + 0x8d) = 0;
  param_1[0x8a] = (long)puVar2;
  FUN_008dd494(param_1 + 0x98);
  FUN_008dd9c4(param_1 + 0xa1);
  param_1[7] = param_9;
  param_1[8] = param_4;
  param_1[2] = param_2;
  param_1[3] = param_5;
  *(undefined4 *)(param_1 + 9) = param_8;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  *(undefined1 *)((long)param_1 + 9) = 1;
  param_1[0x95] = param_11;
  param_1[6] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x11] = 0;
  *(byte *)(param_1 + 1) = param_10 & 1;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0x96] = 0;
  param_1[0x9f] = 0;
  param_1[0x97] = 0;
  param_1[0xa0] = 0;
  param_1[0xa7] = 0;
  param_1[4] = param_6;
  param_1[5] = param_7;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x8b] = local_68;
  uVar11 = nn::util::BinaryFileHeader::IsSignatureValid(param_4);
  if ((uVar11 & 1) == 0) {
    FUN_008d42b0("Binary Tag Error.\n");
    sVar8 = *(short *)(param_4 + 10);
  }
  else {
    sVar8 = *(short *)(param_4 + 10);
  }
  if (sVar8 == 0x16) {
    cVar6 = *(char *)(param_4 + 9);
  }
  else {
    FUN_008d4680("Data    Version:%d\n");
    FUN_008d4680("Runtime Version:%d\n",0x16);
    FUN_008d42b0("Binary Version Error!!! Please check your binary file.\n");
    cVar6 = *(char *)(param_4 + 9);
  }
  if (cVar6 == '\x04') {
    uVar11 = nn::util::BinaryFileHeader::IsAlignmentValid();
  }
  else {
    FUN_008d4680("Data    API:%d\n");
    FUN_008d4680("Runtime API:%d\n",4);
    FUN_008d42b0("Graphic API Unmatched Error!!! Please check your binary file.\n");
    uVar11 = nn::util::BinaryFileHeader::IsAlignmentValid();
  }
  if ((uVar11 & 1) == 0) {
    uVar12 = nn::util::BinaryFileHeader::GetAlignment();
    FUN_008d4680("Required Alignment:%d\n",uVar12);
    uVar20 = param_1[8];
    uVar13 = nn::util::BinaryFileHeader::GetAlignment();
    uVar11 = 0;
    if (uVar13 != 0) {
      uVar11 = uVar20 / uVar13;
    }
    FUN_008d4680("               Gap:%d\n",uVar20 - uVar11 * uVar13);
    FUN_008d42b0("Alignment Unmatched Error!!! Please check your binary file.\n");
  }
  piVar18 = (int *)(param_1[8] + (ulong)*(ushort *)(param_4 + 0x16));
  lVar21 = param_1[2];
  *(undefined4 *)(param_1 + 10) = 0;
  local_78 = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  FUN_008f0470(&local_2f8);
  local_2f8 = CONCAT44(0x10,(undefined4)local_2f8);
  local_70 = FUN_008f06e0(lVar21,&local_2f8);
  if (piVar18 == (int *)0x0) {
    uVar12 = 0;
    lVar21 = 0;
  }
  else {
    lVar21 = 0;
    do {
      uVar10 = (undefined3)*piVar18;
      uVar7 = *(undefined1 *)((long)piVar18 + 3);
      if (*piVar18 == 0x46545247) {
        lVar23 = param_1[0x8c];
        FUN_008dadd4(param_1,piVar18);
        if (piVar18[2] == 0xffffffff) {
          piVar16 = (int *)0x0;
        }
        else {
          piVar16 = (int *)((long)piVar18 + (ulong)(uint)piVar18[2]);
          do {
            if (*piVar16 == 0x544e5447) {
              if (piVar16 != (int *)0x0) {
                piVar16 = (int *)((long)piVar16 + (ulong)(uint)piVar16[5]);
              }
              break;
            }
            puVar1 = (uint *)(piVar16 + 3);
            piVar4 = (int *)((long)piVar16 + (ulong)*puVar1);
            piVar16 = (int *)0x0;
            if (*puVar1 != 0xffffffff) {
              piVar16 = piVar4;
            }
          } while (piVar16 != (int *)0x0);
        }
        param_1[0x16] = (long)piVar16;
        param_1[0x8f] = param_1[0x8c] - lVar23;
        uVar10 = (undefined3)*piVar18;
        uVar7 = *(undefined1 *)((long)piVar18 + 3);
      }
      if (CONCAT13(uVar7,uVar10) == 0x414d5250) {
        lVar23 = param_1[0x8c];
        FUN_008daf64(param_1,piVar18);
        param_1[0x90] = param_1[0x8c] - lVar23;
        uVar10 = (undefined3)*piVar18;
        uVar7 = *(undefined1 *)((long)piVar18 + 3);
        if (*piVar18 != 0x52503347) goto LAB_008da660;
LAB_008da6c4:
        lVar23 = param_1[0x8c];
        if (piVar18[2] == 0xffffffff) {
          piVar16 = (int *)0x0;
        }
        else {
          piVar16 = (int *)((long)piVar18 + (ulong)(uint)piVar18[2]);
          do {
            if (*piVar16 == 0x544e3347) {
              if (piVar16 != (int *)0x0) {
                piVar16 = (int *)((long)piVar16 + (ulong)(uint)piVar16[5]);
              }
              break;
            }
            puVar1 = (uint *)(piVar16 + 3);
            piVar4 = (int *)((long)piVar16 + (ulong)*puVar1);
            piVar16 = (int *)0x0;
            if (*puVar1 != 0xffffffff) {
              piVar16 = piVar4;
            }
          } while (piVar16 != (int *)0x0);
        }
        param_1[0x17] = (long)piVar16;
        FUN_008db35c(param_1,piVar18);
        param_1[0x92] = param_1[0x8c] - lVar23;
        uVar10 = (undefined3)*piVar18;
        uVar7 = *(undefined1 *)((long)piVar18 + 3);
        if (*piVar18 != 0x4e535247) goto LAB_008da66c;
LAB_008da74c:
        lVar23 = param_1[0x8c];
        FUN_008db574(param_1,piVar18);
        param_1[0x91] = param_1[0x8c] - lVar23;
        uVar10 = (undefined3)*piVar18;
        uVar7 = *(undefined1 *)((long)piVar18 + 3);
        if (*piVar18 != 0x41545345) goto LAB_008da678;
LAB_008da788:
        lVar23 = param_1[0x8c];
        FUN_008db6c4(param_1,piVar18,&local_78);
        param_1[0x93] = param_1[0x8c] - lVar23;
        iVar9 = *piVar18;
        uVar12 = local_78;
      }
      else {
        if (CONCAT13(uVar7,uVar10) == 0x52503347) goto LAB_008da6c4;
LAB_008da660:
        if (CONCAT13(uVar7,uVar10) == 0x4e535247) goto LAB_008da74c;
LAB_008da66c:
        if (CONCAT13(uVar7,uVar10) == 0x41545345) goto LAB_008da788;
LAB_008da678:
        iVar9 = CONCAT13(uVar7,uVar10);
        uVar12 = local_78;
      }
      if (iVar9 == 0x54465345) {
        lVar21 = (long)piVar18 + (ulong)(uint)piVar18[5];
      }
      puVar1 = (uint *)(piVar18 + 3);
      piVar16 = (int *)((long)piVar18 + (ulong)*puVar1);
      piVar18 = (int *)0x0;
      if (*puVar1 != 0xffffffff) {
        piVar18 = piVar16;
      }
      local_78 = uVar12;
    } while (piVar18 != (int *)0x0);
  }
  plVar3 = param_1 + 0x1e;
  lVar23 = param_1[0x8c];
  uVar11 = FUN_008ee488(plVar3,param_1[2],param_1 + 0x8a,0x10,uVar12);
  if ((uVar11 & 1) != 0) {
    FUN_008f0980(plVar3,param_1 + 0x50);
  }
  param_1[0x8e] = param_1[0x8c] - lVar23;
  memset(&local_2f8,0,0x280);
  local_308 = 0;
  uStack_300 = 0;
  local_318 = 0;
  uStack_310 = 0;
  local_328 = 0;
  uStack_320 = 0;
  local_338 = 0;
  uStack_330 = 0;
  local_348 = 0;
  uStack_340 = 0;
  local_358 = 0;
  uStack_350 = 0;
  local_368 = 0;
  uStack_360 = 0;
  local_378 = 0;
  uStack_370 = 0;
  local_388 = 0;
  uStack_380 = 0;
  local_398 = 0;
  uStack_390 = 0;
  local_3a8 = 0;
  uStack_3a0 = 0;
  local_3b8 = 0;
  uStack_3b0 = 0;
  local_3c8 = 0;
  uStack_3c0 = 0;
  local_3d8 = 0;
  uStack_3d0 = 0;
  local_3e8 = 0;
  uStack_3e0 = 0;
  local_3f8 = 0;
  uStack_3f0 = 0;
  local_408 = 0;
  uStack_400 = 0;
  local_418 = (undefined8 *)0x0;
  uStack_410 = 0;
  local_428 = 0;
  local_420 = (undefined8 *)0x0;
  FUN_008f04e8(&local_428);
  local_428 = CONCAT44(local_428._4_4_,0x100010);
  local_418 = &local_3f8;
  local_2f8._0_4_ = CONCAT22(0xf,(undefined2)local_2f8);
  local_420 = &local_2f8;
  lVar23 = FUN_008f216c(&local_428);
  uVar11 = lVar23 + 7U & 0xfffffffffffffff8;
  lVar23 = uVar11 * (long)(int)param_1[10];
  lVar14 = (**(code **)(*(long *)param_1[0x8b] + 0x10))((long *)param_1[0x8b],lVar23,8);
  lVar23 = param_1[0x8c] + lVar23;
  param_1[0x8c] = lVar23;
  param_1[0xa7] = lVar14;
  *(int *)(param_1 + 0x8d) = (int)param_1[0x8d] + 1;
  param_1[0x52] = 0;
  lVar15 = FUN_008f0928(plVar3);
  param_1[0x53] = lVar15;
  if (0 < *(int *)((long)param_1 + 0x4c)) {
    lVar15 = 0;
    lVar24 = 0;
    do {
      lVar17 = param_1[0xb];
      if (0 < *(int *)(lVar17 + lVar15 * 0x38 + 4)) {
        lVar25 = 0;
        lVar22 = 0;
        do {
          lVar19 = lVar15 * 0x38;
          lVar5 = lVar14 + lVar24;
          lVar24 = lVar24 + uVar11;
          *(long *)(*(long *)(lVar17 + lVar19 + 0x18) + lVar25 + 0x360) = lVar5;
          *(ulong *)(*(long *)(param_1[0xb] + lVar19 + 0x18) + lVar25 + 0x368) = uVar11;
          FUN_008db898(param_1,*(long *)(param_1[0xb] + lVar19 + 0x18) + lVar25);
          lVar17 = param_1[0xb];
          lVar22 = lVar22 + 1;
          lVar25 = lVar25 + 0x3e0;
        } while (lVar22 < *(int *)(lVar17 + lVar19 + 4));
      }
      if (lVar21 != 0) {
        *(long *)(lVar17 + lVar15 * 0x38 + 0x30) = lVar21 + 0x18;
        puVar1 = (uint *)(lVar21 + 0x10);
        lVar17 = lVar21 + (ulong)*puVar1;
        lVar21 = 0;
        if (*puVar1 != 0) {
          lVar21 = lVar17;
        }
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 < *(int *)((long)param_1 + 0x4c));
  }
  FUN_008f0940(plVar3,0,param_1[0x27]);
  FUN_008f093c(plVar3);
  param_1[0x94] = param_1[0x8c] - lVar23;
  return;
}


