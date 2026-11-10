/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c6035c; name: FUN_00c6035c
 */


void FUN_00c6035c(long param_1,long param_2,uint param_3,char *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  char *pcVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  long local_4f8;
  long local_4f0;
  ulong local_4e8;
  long local_4e0;
  uint local_4d8;
  long local_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined1 local_438;
  undefined1 auStack_434 [260];
  undefined8 local_330;
  undefined1 local_328;
  undefined1 local_320;
  undefined1 local_310;
  undefined1 local_300;
  undefined1 local_2f0;
  undefined1 local_2e0;
  undefined1 local_2d0;
  undefined1 local_2c0;
  undefined1 local_2b0;
  undefined1 local_2a0;
  undefined1 local_290;
  undefined1 local_280;
  undefined1 local_270;
  undefined1 local_260;
  undefined1 local_250;
  undefined1 local_240;
  undefined1 local_230;
  undefined4 local_220;
  undefined1 local_218;
  undefined4 local_208;
  undefined1 local_1f8;
  undefined1 local_1e0;
  undefined1 local_1d0;
  undefined1 local_1c0;
  undefined1 local_1b0;
  undefined1 local_1a0;
  undefined1 local_190;
  undefined4 local_180;
  undefined1 local_178;
  undefined1 local_168;
  undefined1 local_158;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 local_130;
  undefined1 local_120;
  undefined1 local_110;
  undefined1 local_100;
  undefined1 local_f0;
  undefined1 local_e0;
  undefined1 local_d0;
  undefined1 local_c0;
  undefined1 local_b0;
  undefined1 local_a0;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  
  lVar12 = *(long *)(param_1 + 0x30);
  lVar14 = *(long *)(param_1 + 0x160) - *(long *)(param_1 + 0x158);
  lVar10 = *(long *)(lVar12 + 0x30);
  uVar13 = *(ulong *)(lVar12 + 0x110);
  if (lVar14 == 0x30) {
    uVar13 = uVar13 & 1;
  }
  else {
    uVar15 = (lVar14 >> 3) * -0x5555555555555555;
    iVar4 = 0;
    if (uVar15 != 0) {
      iVar4 = (int)(uVar13 / uVar15);
    }
    uVar13 = (ulong)(uint)((int)uVar13 - iVar4 * (int)uVar15);
  }
  *(int *)(param_1 + 400) = (int)uVar13;
  if (*(char *)(*(long *)(param_1 + 0x158) + uVar13 * 0x18) == '\0') {
    *(long *)(param_1 + 0x150) = lVar10;
    local_4f8 = *(long *)(lVar10 + 8);
    local_4f0 = *(undefined8 *)(lVar10 + 0x6098);
    local_4e8 = lVar10 + 0x10;
    auVar18 = FUN_00c53d38(*(undefined8 *)(lVar10 + 0x6100),&local_4f8);
    *(undefined1 (*) [16])(*(long *)(param_1 + 0x158) + (ulong)*(uint *)(param_1 + 400) * 0x18) =
         auVar18;
    lVar12 = *(long *)(param_1 + 0x30);
  }
  local_4f8 = *(long *)(lVar12 + 0x30);
  local_4e0 = 0;
  local_4e8 = local_4e8 & 0xffffffffffffff00;
  local_4d8 = 0;
  local_320 = 0;
  local_438 = 0;
  local_4c8 = 0;
  uStack_4c0 = 0;
  local_4f0 = 0;
  local_4b8 = 0;
  uStack_4b0 = 0;
  local_4a8 = 0;
  uStack_4a0 = 0;
  local_498 = 0;
  uStack_490 = 0;
  local_488 = 0;
  uStack_480 = 0;
  local_478 = 0;
  uStack_470 = 0;
  local_468 = 0;
  uStack_460 = 0;
  local_458 = 0;
  uStack_450 = 0;
  local_448 = 0;
  uStack_440 = 0;
  memset(auStack_434,0,0x101);
  local_220 = 2;
  local_208 = 1;
  local_180 = 4;
  local_138 = 0xffffffffffffffff;
  local_140 = 0xffffffffffffffff;
  local_148 = 0xffffffffffffffff;
  local_90 = 0xbf800000;
  local_330 = 0;
  local_328 = 0;
  local_310 = 0;
  local_300 = 0;
  local_2f0 = 0;
  local_2e0 = 0;
  local_2d0 = 0;
  local_2c0 = 0;
  local_2b0 = 0;
  local_2a0 = 0;
  local_290 = 0;
  local_280 = 0;
  local_270 = 0;
  local_260 = 0;
  local_250 = 0;
  local_240 = 0;
  local_230 = 0;
  local_218 = 0;
  local_1f8 = 0;
  local_1e0 = 0;
  local_1d0 = 0;
  local_1c0 = 0;
  local_1b0 = 0;
  local_1a0 = 0;
  local_190 = 0;
  local_178 = 0;
  local_168 = 0;
  local_158 = 0;
  local_130 = 0;
  local_120 = 0;
  local_110 = 0;
  local_100 = 0;
  local_f0 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_8c = 0;
  local_84 = 0;
  local_80 = 0x3f800000bf800000;
  local_78 = 0x3f800000;
  local_70 = 0;
  pcVar11 = (char *)(*(long *)(param_1 + 0x158) + (ulong)*(uint *)(param_1 + 400) * 0x18);
  local_4d0 = *(long *)(pcVar11 + 8);
  cVar5 = *param_4;
  local_4e8 = CONCAT71(local_4e8._1_7_,cVar5);
  if (*pcVar11 != '\0') {
    *(undefined8 *)(local_4d0 + 0x140) = 0;
    local_4e0 = param_2;
    local_4d8 = param_3;
    FUN_00c50980(local_4d0);
    FUN_00c50d00(local_4d0);
    if (local_4d0 != 0) {
      local_4f0 = local_4d0;
      (**(code **)PTR_DAT_047e0c70)(local_4d0);
      if (cVar5 != '\0') {
        (**(code **)PTR_DAT_047e0d48)(local_4d0,*(long *)(local_4f8 + 0x6140) + 0xb0);
        (**(code **)PTR_DAT_047e0d50)(local_4d0,*(long *)(local_4f8 + 0x6160) + 0xb0);
        lVar12 = local_4d0;
        lVar10 = local_4f8;
        lVar14 = *(long *)(local_4f8 + 0x62c0);
        if (-1 < lVar14) {
          if (*(long **)(local_4f8 + 0x62b8) == (long *)0x0) {
            uVar7 = 0;
          }
          else {
            uVar7 = (**(code **)(**(long **)(local_4f8 + 0x62b8) + 0x80))();
            lVar14 = *(long *)(lVar10 + 0x62c0);
          }
          (**(code **)PTR_DAT_047e0d58)(lVar12,uVar7,lVar14,*(undefined8 *)(lVar10 + 0x62c8));
        }
      }
      if (*param_4 != '\0') {
        lVar10 = *(long *)(*(long *)(param_1 + 0x30) + 0x90);
        if ((*(int *)(lVar10 + 8) != 0x10) && (*(int *)(lVar10 + 8) != 0)) {
          FUN_00c59b6c(&local_4f8);
        }
        pcVar11 = (char *)FUN_00ccbbb0(*(undefined8 *)
                                        (*(long *)(*(long *)(lVar10 + 0x10) + 0x70) + 0x110),
                                       *(long *)(lVar10 + 0x10) + 0x30);
        lVar12 = local_4d0;
        if ((*pcVar11 != '\0') && (*(long *)(pcVar11 + 8) != 0)) {
          uVar2 = *(undefined4 *)(lVar10 + 8);
          uVar7 = (**(code **)PTR_DAT_047e0be8)(*(undefined8 *)(*(long *)(pcVar11 + 8) + 0x20));
          (**(code **)PTR_DAT_047e0bf0)(lVar12,uVar2,uVar7);
        }
        lVar10 = *(long *)(param_1 + 0x30);
        if (*(long *)(lVar10 + 0x120) != 0) {
          FUN_00c50264(*(long *)(lVar10 + 0x120),0);
          uVar3 = *(uint *)(lVar10 + 0x118);
          uVar2 = *(undefined4 *)(lVar10 + 0x11c);
          pcVar11 = (char *)FUN_00ccbbb0(*(undefined8 *)
                                          (*(long *)(*(long *)(lVar10 + 0x120) + 0x70) + 0x110),
                                         *(long *)(lVar10 + 0x120) + 0x30);
          puVar6 = PTR_DAT_047e0cc0;
          if ((*pcVar11 != '\0') && (uVar3 != 0)) {
            uVar17 = 1;
            uVar7 = *(undefined8 *)(*(long *)(pcVar11 + 8) + 0x20);
            do {
              lVar10 = local_4d0;
              if ((uVar17 & uVar3) != 0) {
                if ((int)uVar17 < 8) {
                  if (uVar17 == 1) {
                    uVar16 = 0;
                  }
                  else if (uVar17 == 4) {
                    uVar16 = 2;
                  }
                  else {
LAB_00c6074c:
                    uVar16 = 1;
                  }
                }
                else if (uVar17 == 8) {
                  uVar16 = 3;
                }
                else if (uVar17 == 0x10) {
                  uVar16 = 4;
                }
                else {
                  if (uVar17 != 0x20) goto LAB_00c6074c;
                  uVar16 = 5;
                }
                uVar8 = (**(code **)PTR_DAT_047e0be8)(uVar7);
                uVar9 = (**(code **)PTR_DAT_047e0bf8)(uVar7);
                (**(code **)puVar6)(lVar10,uVar16,uVar2,uVar8,uVar9);
              }
              uVar17 = uVar17 * 2;
            } while (uVar17 <= uVar3);
          }
        }
      }
      if (*(char *)(param_1 + 0x240) != '\0') {
        (**(code **)PTR_DAT_047e0d40)(local_4d0,*(undefined4 *)(param_1 + 0x244));
      }
      FUN_00c60930(param_1,&local_4f8);
      if (*(char *)(param_1 + 0x248) != '\0') {
        (**(code **)PTR_DAT_047e0d40)(local_4d0,*(undefined4 *)(param_1 + 0x24c));
      }
      if (*(long *)(param_1 + 0x250) != *(long *)(param_1 + 600)) {
        FUN_00c60fc4(param_1,&local_4f8);
      }
      if (param_4[1] != '\0') {
        lVar10 = *(long *)(*(long *)(param_1 + 0x30) + 0x90);
        iVar4 = *(int *)(lVar10 + 8);
        lVar10 = *(long *)(lVar10 + 0x10);
        pcVar11 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar10 + 0x70) + 0x110),
                                       lVar10 + 0x30);
        lVar10 = local_4d0;
        if (*pcVar11 != '\0' && *(long *)(pcVar11 + 8) != 0) {
          iVar1 = 0;
          if (iVar4 != 0x10) {
            iVar1 = iVar4;
          }
          lVar12 = (**(code **)PTR_DAT_047e0be8)(*(undefined8 *)(*(long *)(pcVar11 + 8) + 0x20));
          (**(code **)PTR_DAT_047e0bf0)(lVar10,iVar1,lVar12 + 0x10);
        }
      }
      lVar10 = local_4e0;
      uVar13 = (ulong)local_4d8;
      uVar7 = (**(code **)PTR_DAT_047e0c78)(local_4d0);
      *(undefined8 *)(local_4f0 + 0xa0) = uVar7;
      *(undefined8 *)(*(long *)(lVar10 + 8) + uVar13 * 8) = uVar7;
      *(undefined8 *)(param_1 + 0x98) = 0;
      *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0xa0);
      *(undefined1 *)(param_1 + 0x28c) = 0;
    }
  }
  return;
}


