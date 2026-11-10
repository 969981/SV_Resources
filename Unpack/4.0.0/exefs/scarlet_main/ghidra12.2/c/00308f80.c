/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00308f80; name: FUN_00308f80
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00308f80(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong uVar4;
  char *pcVar5;
  byte *pbVar6;
  ulong uVar7;
  char cVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined1 *puVar13;
  bool bVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  int iVar22;
  uint uVar23;
  undefined8 *local_1f0;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  ulong local_1d0;
  ulong uStack_1c8;
  undefined1 *puStack_1c0;
  undefined8 uStack_1b8;
  ulong local_1b0;
  ulong uStack_1a8;
  undefined1 *puStack_1a0;
  undefined8 uStack_198;
  ulong local_190;
  ulong uStack_188;
  undefined1 *puStack_180;
  undefined8 uStack_178;
  ulong local_170;
  ulong uStack_168;
  undefined1 *puStack_160;
  undefined8 uStack_158;
  ulong local_150;
  ulong uStack_148;
  undefined1 *puStack_140;
  undefined8 uStack_138;
  undefined8 *local_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  uint local_104;
  ulong local_100;
  ulong uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  ulong local_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined1 local_88 [8];
  ulong local_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (((*(char *)(param_1 + 0xc48) != '\0') || (*(char *)(param_2 + 0x939) != '\0')) ||
     (uVar16 = FUN_00375b90(param_3), (uVar16 & 1) == 0)) {
    if (((*(char *)(param_2 + 0x1b1) == '\0') || (*(char *)(param_2 + 0x1b0) == '\0')) &&
       (*(int *)(param_2 + 0xa0) != 0)) {
      FUN_00375900(param_3,*(undefined8 *)(param_2 + 0x8f0),0,0,&local_80,0);
      FUN_003101c0(param_1,*(undefined4 *)(param_2 + 0xa0),local_80 & 0xffffffff,param_2 + 0x198);
      if (*(int *)(param_1 + 0x38) == 1) {
        *(undefined4 *)(param_1 + 0x38) = 2;
      }
      else if (*(int *)(param_1 + 0x38) == 0) {
        *(undefined4 *)(param_1 + 0x38) = 1;
        plVar18 = (long *)(param_1 + 8);
        do {
          cVar8 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar14) {
            *plVar18 = *plVar18 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        *(undefined8 *)(param_1 + 0xe0) = 0;
        *(undefined1 **)(param_1 + 0xd0) = &LAB_003080d0;
        *(long *)(param_1 + 0xd8) = param_1;
        thunk_FUN_00350da0(*(undefined8 *)(param_1 + 0x28),param_1 + 200,0);
      }
    }
    if ((param_3 != 0) && (*(char *)(param_2 + 0x1b3) == '\0')) {
      *(undefined1 *)(param_2 + 0x1b3) = 1;
    }
    FUN_00309ae0(param_1,param_2,1,1,param_3);
    return;
  }
  FUN_00375900(param_3,*(undefined8 *)(param_2 + 0x8f0),&local_104,&local_128,0,0);
  if (99 < local_104) goto LAB_00309ad0;
  if (*(char *)(param_2 + 0x938) == '\0') {
    FUN_003670f0(&local_80,0xd);
    puVar10 = local_70;
    uVar12 = uStack_78;
    uVar16 = local_80;
    uStack_b8 = uStack_78;
    local_c0 = local_80;
    uStack_a8 = uStack_68;
    local_b0 = local_70;
    bVar14 = local_80 != 0;
    puVar19 = (undefined1 *)((ulong)&local_c0 | 9);
    puVar20 = (undefined1 *)((ulong)&local_c0 | 10);
    puVar21 = puVar19;
    if (bVar14) {
      puVar20 = local_70 + 1;
      puVar21 = local_70;
    }
    *puVar21 = 0;
    *puVar20 = 7;
    puVar20 = (undefined1 *)((ulong)&local_c0 | 0xb);
    if (bVar14) {
      puVar20 = local_70 + 2;
    }
    *puVar20 = 0x3a;
    puVar20 = (undefined1 *)((ulong)&local_c0 | 0xd);
    puVar21 = (undefined1 *)((ulong)&local_c0 | 0xc);
    if (bVar14) {
      puVar20 = local_70 + 4;
      puVar21 = local_70 + 3;
    }
    *puVar21 = 0x73;
    *puVar20 = 0x74;
    puVar20 = (undefined1 *)((ulong)&local_c0 | 0xe);
    if (bVar14) {
      puVar20 = local_70 + 5;
    }
    puVar21 = (undefined1 *)((ulong)&local_c0 | 0xf);
    if (bVar14) {
      puVar21 = local_70 + 6;
    }
    *puVar20 = 0x61;
    puVar17 = &local_b0;
    if (bVar14) {
      puVar17 = (undefined8 *)(local_70 + 7);
    }
    *puVar21 = 0x74;
    puVar20 = (undefined1 *)((long)&local_b0 + 1);
    if (bVar14) {
      puVar20 = local_70 + 8;
    }
    *(undefined1 *)puVar17 = 0x75;
    puVar21 = (undefined1 *)((long)&local_b0 + 2);
    if (bVar14) {
      puVar21 = puVar10 + 9;
    }
    *puVar20 = 0x73;
    puVar20 = (undefined1 *)((long)&local_b0 + 3);
    if (bVar14) {
      puVar20 = puVar10 + 10;
    }
    *puVar21 = 3;
    puVar21 = (undefined1 *)((long)&local_b0 + 4);
    if (bVar14) {
      puVar21 = puVar10 + 0xb;
    }
    *puVar20 = 0x32;
    puVar20 = (undefined1 *)((long)&local_b0 + 5);
    if (bVar14) {
      puVar20 = puVar10 + 0xc;
    }
    *puVar21 = 0x30;
    *puVar20 = 0x30;
    puVar20 = (undefined1 *)((long)&local_b0 + 6);
    if (bVar14) {
      puVar20 = puVar10 + 0xd;
    }
    if (uVar16 != 0) {
      puVar19 = local_b0;
    }
    uVar7 = uVar12 & 0xff;
    if (uVar16 != 0) {
      uVar7 = uVar12;
    }
    if (puVar20 != puVar19 + uVar7) goto LAB_00309ad0;
    FUN_003670f0(&local_80,0x1f);
    puVar10 = local_70;
    uVar12 = uStack_78;
    uVar16 = local_80;
    puVar20 = (undefined1 *)((ulong)&local_e0 | 10);
    uStack_d8 = uStack_78;
    local_e0 = local_80;
    local_c8 = uStack_68;
    local_d0 = local_70;
    bVar14 = local_80 != 0;
    puVar19 = (undefined1 *)((ulong)&local_e0 | 9);
    puVar21 = puVar19;
    if (bVar14) {
      puVar20 = local_70 + 1;
      puVar21 = local_70;
    }
    *puVar21 = 0;
    *puVar20 = 0xc;
    puVar20 = (undefined1 *)((ulong)&local_e0 | 0xc);
    puVar21 = (undefined1 *)((ulong)&local_e0 | 0xb);
    if (bVar14) {
      puVar20 = local_70 + 3;
      puVar21 = local_70 + 2;
    }
    *puVar21 = 99;
    puVar21 = (undefined1 *)((ulong)&local_e0 | 0xe);
    puVar9 = (undefined1 *)((ulong)&local_e0 | 0xd);
    if (bVar14) {
      puVar21 = local_70 + 5;
      puVar9 = local_70 + 4;
    }
    *puVar20 = 0x6f;
    *puVar9 = 0x6e;
    *puVar21 = 0x74;
    puVar17 = &local_d0;
    puVar20 = (undefined1 *)((ulong)&local_e0 | 0xf);
    if (bVar14) {
      puVar17 = (undefined8 *)(local_70 + 7);
      puVar20 = local_70 + 6;
    }
    *puVar20 = 0x65;
    puVar20 = (undefined1 *)((long)&local_d0 + 1);
    if (bVar14) {
      puVar20 = local_70 + 8;
    }
    *(undefined1 *)puVar17 = 0x6e;
    puVar21 = (undefined1 *)((long)&local_d0 + 2);
    if (bVar14) {
      puVar21 = puVar10 + 9;
    }
    *puVar20 = 0x74;
    puVar20 = (undefined1 *)((long)&local_d0 + 3);
    if (bVar14) {
      puVar20 = puVar10 + 10;
    }
    *puVar21 = 0x2d;
    puVar21 = (undefined1 *)((long)&local_d0 + 4);
    if (bVar14) {
      puVar21 = puVar10 + 0xb;
    }
    *puVar20 = 0x74;
    puVar20 = (undefined1 *)((long)&local_d0 + 5);
    if (bVar14) {
      puVar20 = puVar10 + 0xc;
    }
    *puVar21 = 0x79;
    puVar21 = (undefined1 *)((long)&local_d0 + 6);
    if (bVar14) {
      puVar21 = puVar10 + 0xd;
    }
    *puVar20 = 0x70;
    *puVar21 = 0x65;
    puVar17 = &local_c8;
    puVar20 = (undefined1 *)((long)&local_d0 + 7);
    if (bVar14) {
      puVar17 = (undefined8 *)(puVar10 + 0xf);
      puVar20 = puVar10 + 0xe;
    }
    *puVar20 = 0x10;
    puVar20 = (undefined1 *)((long)&local_c8 + 1);
    if (bVar14) {
      puVar20 = puVar10 + 0x10;
    }
    *(undefined1 *)puVar17 = 0x61;
    puVar21 = (undefined1 *)((long)&local_c8 + 2);
    if (bVar14) {
      puVar21 = puVar10 + 0x11;
    }
    *puVar20 = 0x70;
    puVar20 = (undefined1 *)((long)&local_c8 + 3);
    if (bVar14) {
      puVar20 = puVar10 + 0x12;
    }
    *puVar21 = 0x70;
    puVar21 = (undefined1 *)((long)&local_c8 + 4);
    if (bVar14) {
      puVar21 = puVar10 + 0x13;
    }
    *puVar20 = 0x6c;
    puVar20 = (undefined1 *)((long)&local_c8 + 5);
    if (bVar14) {
      puVar20 = puVar10 + 0x14;
    }
    *puVar21 = 0x69;
    puVar21 = (undefined1 *)((long)&local_c8 + 6);
    if (bVar14) {
      puVar21 = puVar10 + 0x15;
    }
    *puVar20 = 99;
    *puVar21 = 0x61;
    puVar20 = (undefined1 *)((long)&local_c8 + 7);
    if (bVar14) {
      puVar20 = puVar10 + 0x16;
    }
    *puVar20 = 0x74;
    puVar17 = &local_c0;
    if (bVar14) {
      puVar17 = (undefined8 *)(puVar10 + 0x17);
    }
    *(undefined1 *)puVar17 = 0x69;
    puVar20 = (undefined1 *)((long)&local_c0 + 1);
    if (bVar14) {
      puVar20 = puVar10 + 0x18;
    }
    *puVar20 = 0x6f;
    puVar20 = (undefined1 *)((long)&local_c0 + 2);
    if (bVar14) {
      puVar20 = puVar10 + 0x19;
    }
    *puVar20 = 0x6e;
    puVar20 = (undefined1 *)((long)&local_c0 + 4);
    puVar21 = (undefined1 *)((long)&local_c0 + 3);
    if (bVar14) {
      puVar20 = puVar10 + 0x1b;
      puVar21 = puVar10 + 0x1a;
    }
    *puVar21 = 0x2f;
    puVar21 = (undefined1 *)((long)&local_c0 + 5);
    if (bVar14) {
      puVar21 = puVar10 + 0x1c;
    }
    *puVar20 = 0x67;
    puVar20 = (undefined1 *)((long)&local_c0 + 6);
    if (bVar14) {
      puVar20 = puVar10 + 0x1d;
    }
    *puVar21 = 0x72;
    *puVar20 = 0x70;
    puVar20 = (undefined1 *)((long)&local_c0 + 7);
    if (bVar14) {
      puVar20 = puVar10 + 0x1e;
    }
    *puVar20 = 99;
    puVar3 = &uStack_b8;
    if (bVar14) {
      puVar3 = (ulong *)(puVar10 + 0x1f);
    }
    if (uVar16 != 0) {
      puVar19 = local_d0;
    }
    uVar4 = uVar12 & 0xff;
    if (uVar16 != 0) {
      uVar4 = uVar12;
    }
    if (puVar3 != (ulong *)(puVar19 + uVar4)) goto LAB_00309ad0;
    iVar22 = (int)uVar4 + (int)uVar7;
  }
  else {
    iVar22 = 0;
  }
  uVar2 = 0xf;
  if (9 < (int)local_104) {
    uVar2 = 0x10;
  }
  FUN_003670f0(&local_80,uVar2);
  puVar13 = local_70;
  uVar12 = uStack_78;
  uVar16 = local_80;
  uStack_98 = uStack_78;
  local_a0 = local_80;
  local_88 = (undefined1  [8])uStack_68;
  local_90 = local_70;
  bVar14 = local_80 != 0;
  puVar20 = (undefined1 *)((ulong)&local_a0 | 9);
  puVar21 = (undefined1 *)((ulong)&local_a0 | 10);
  puVar19 = puVar20;
  puVar10 = (undefined1 *)((ulong)&local_a0 | 0xd);
  puVar9 = (undefined1 *)((ulong)&local_a0 | 0xc);
  puVar11 = (undefined1 *)((ulong)&local_a0 | 0xb);
  if (bVar14) {
    puVar21 = local_70 + 1;
    puVar19 = local_70;
    puVar10 = local_70 + 4;
    puVar9 = local_70 + 3;
    puVar11 = local_70 + 2;
  }
  *puVar19 = 0;
  *puVar21 = 0xb;
  *puVar11 = 0x67;
  *puVar9 = 0x72;
  *puVar10 = 0x70;
  puVar19 = (undefined1 *)((ulong)&local_a0 | 0xf);
  puVar21 = (undefined1 *)((ulong)&local_a0 | 0xe);
  if (bVar14) {
    puVar19 = local_70 + 6;
    puVar21 = local_70 + 5;
  }
  *puVar21 = 99;
  puVar17 = &local_90;
  if (bVar14) {
    puVar17 = (undefined8 *)(local_70 + 7);
  }
  *puVar19 = 0x2d;
  puVar19 = (undefined1 *)((long)&local_90 + 1);
  if (bVar14) {
    puVar19 = local_70 + 8;
  }
  *(undefined1 *)puVar17 = 0x73;
  puVar21 = (undefined1 *)((long)&local_90 + 2);
  if (bVar14) {
    puVar21 = puVar13 + 9;
  }
  *puVar19 = 0x74;
  puVar19 = (undefined1 *)((long)&local_90 + 3);
  if (bVar14) {
    puVar19 = puVar13 + 10;
  }
  *puVar21 = 0x61;
  *puVar19 = 0x74;
  puVar19 = (undefined1 *)((long)&local_90 + 5);
  puVar21 = (undefined1 *)((long)&local_90 + 4);
  if (bVar14) {
    puVar19 = puVar13 + 0xc;
    puVar21 = puVar13 + 0xb;
  }
  *puVar21 = 0x75;
  *puVar19 = 0x73;
  pcVar5 = (char *)((long)&local_90 + 7);
  puVar19 = (undefined1 *)((long)&local_90 + 6);
  if (bVar14) {
    pcVar5 = puVar13 + 0xe;
    puVar19 = puVar13 + 0xd;
  }
  if ((int)local_104 < 10) {
    *puVar19 = 1;
    *pcVar5 = (char)local_104 + '0';
    puVar17 = (undefined8 *)local_88;
    if (uVar16 != 0) {
      puVar17 = (undefined8 *)(puVar13 + 0xf);
    }
  }
  else {
    *puVar19 = 2;
    pbVar6 = local_88;
    if (uVar16 != 0) {
      pbVar6 = puVar13 + 0xf;
    }
    *pcVar5 = (char)(local_104 / 10) + '0';
    puVar17 = (undefined8 *)((long)local_88 + 1);
    if (uVar16 != 0) {
      puVar17 = (undefined8 *)(puVar13 + 0x10);
    }
    *pbVar6 = (byte)(local_104 % 10) | 0x30;
  }
  if (uVar16 != 0) {
    puVar20 = local_90;
  }
  uVar7 = uVar12 & 0xff;
  if (uVar16 != 0) {
    uVar7 = uVar12;
  }
  if (puVar17 == (undefined8 *)(puVar20 + uVar7)) {
    uVar16 = uStack_120 & 0xff;
    if (local_128 != (undefined8 *)0x0) {
      uVar16 = uStack_120;
    }
    if (uVar16 >> 0x20 == 0) {
      uVar23 = (uint)uVar16;
      if (uVar23 < 0x7f) {
        uVar15 = 1;
      }
      else {
        uVar15 = FUN_00319a80(uVar23 - 0x7f);
      }
      FUN_003670f0(&local_80,uVar15 + 0xe);
      puVar10 = local_70;
      uVar12 = local_80;
      uStack_f8 = uStack_78;
      local_100 = local_80;
      uStack_e8 = uStack_68;
      local_f0 = local_70;
      puVar20 = (undefined1 *)((ulong)&local_100 | 9);
      puVar21 = (undefined1 *)((ulong)&local_100 | 10);
      bVar14 = local_80 != 0;
      puVar19 = puVar20;
      if (bVar14) {
        puVar21 = local_70 + 1;
        puVar19 = local_70;
      }
      *puVar19 = 0;
      *puVar21 = 0xc;
      puVar19 = (undefined1 *)((ulong)&local_100 | 0xe);
      puVar21 = (undefined1 *)((ulong)&local_100 | 0xd);
      puVar9 = (undefined1 *)((ulong)&local_100 | 0xc);
      puVar11 = (undefined1 *)((ulong)&local_100 | 0xb);
      if (bVar14) {
        puVar19 = local_70 + 5;
        puVar21 = local_70 + 4;
        puVar9 = local_70 + 3;
        puVar11 = local_70 + 2;
      }
      *puVar11 = 0x67;
      *puVar9 = 0x72;
      *puVar21 = 0x70;
      puVar21 = (undefined1 *)((ulong)&local_100 | 0xf);
      if (bVar14) {
        puVar21 = local_70 + 6;
      }
      *puVar19 = 99;
      puVar17 = &local_f0;
      if (bVar14) {
        puVar17 = (undefined8 *)(local_70 + 7);
      }
      *puVar21 = 0x2d;
      puVar19 = (undefined1 *)((long)&local_f0 + 1);
      if (bVar14) {
        puVar19 = local_70 + 8;
      }
      *(undefined1 *)puVar17 = 0x6d;
      puVar21 = (undefined1 *)((long)&local_f0 + 2);
      if (bVar14) {
        puVar21 = puVar10 + 9;
      }
      *puVar19 = 0x65;
      puVar19 = (undefined1 *)((long)&local_f0 + 3);
      if (bVar14) {
        puVar19 = puVar10 + 10;
      }
      *puVar21 = 0x73;
      puVar21 = (undefined1 *)((long)&local_f0 + 4);
      if (bVar14) {
        puVar21 = puVar10 + 0xb;
      }
      *puVar19 = 0x73;
      puVar19 = (undefined1 *)((long)&local_f0 + 5);
      if (bVar14) {
        puVar19 = puVar10 + 0xc;
      }
      *puVar21 = 0x61;
      puVar21 = (undefined1 *)((long)&local_f0 + 6);
      if (bVar14) {
        puVar21 = puVar10 + 0xd;
      }
      *puVar19 = 0x67;
      puVar19 = (undefined1 *)((long)&local_f0 + 7);
      if (bVar14) {
        puVar19 = puVar10 + 0xe;
      }
      *puVar21 = 0x65;
      if (uVar15 - 1 == 0) {
        *puVar19 = (char)uVar16;
      }
      else {
        *puVar19 = 0x7f;
        puVar17 = &uStack_e8;
        if (uVar12 != 0) {
          puVar17 = (undefined8 *)(puVar10 + 0xf);
        }
        FUN_00319ac0(uVar23 - 0x7f,puVar17,uVar15 - 1);
      }
      if (local_100 != 0) {
        puVar20 = local_f0;
      }
      uVar16 = uStack_f8 & 0xff;
      if (local_100 != 0) {
        uVar16 = uStack_f8;
      }
      if (puVar19 + uVar15 == puVar20 + uVar16) {
        iVar22 = iVar22 + (int)uVar7 + uVar23 + (int)uVar16;
        FUN_003670f0(&local_150,9);
        uStack_78 = uStack_148;
        local_80 = local_150;
        uStack_68 = uStack_138;
        local_70 = puStack_140;
        puVar20 = (undefined1 *)((ulong)&local_80 | 9);
        bVar14 = local_150 != 0;
        puVar19 = puVar20;
        if (bVar14) {
          puVar19 = puStack_140;
        }
        puVar21 = (undefined1 *)((ulong)&local_80 | 10);
        if (bVar14) {
          puVar21 = puStack_140 + 1;
        }
        *puVar19 = (char)((uint)iVar22 >> 0x10);
        *puVar21 = (char)((uint)iVar22 >> 8);
        puVar19 = (undefined1 *)((ulong)&local_80 | 0xb);
        if (bVar14) {
          puVar19 = puStack_140 + 2;
        }
        *puVar19 = (char)iVar22;
        puVar19 = (undefined1 *)((ulong)&local_80 | 0xc);
        if (bVar14) {
          puVar19 = puStack_140 + 3;
        }
        puVar21 = (undefined1 *)((ulong)&local_80 | 0xd);
        if (bVar14) {
          puVar21 = puStack_140 + 4;
        }
        *puVar19 = 1;
        puVar19 = (undefined1 *)((ulong)&local_80 | 0xe);
        if (bVar14) {
          puVar19 = puStack_140 + 5;
        }
        *puVar21 = 5;
        *puVar19 = *(undefined1 *)(param_2 + 0xa3);
        puVar19 = (undefined1 *)((ulong)&local_80 | 0xf);
        if (bVar14) {
          puVar19 = puStack_140 + 6;
        }
        *puVar19 = (char)*(undefined2 *)(param_2 + 0xa2);
        puVar19 = (undefined1 *)((long)&local_70 + 1);
        puVar17 = &local_70;
        if (bVar14) {
          puVar19 = puStack_140 + 8;
          puVar17 = (undefined8 *)(puStack_140 + 7);
        }
        *(char *)puVar17 = (char)((uint)*(undefined4 *)(param_2 + 0xa0) >> 8);
        puVar21 = (undefined1 *)((long)&local_70 + 2);
        if (bVar14) {
          puVar21 = puStack_140 + 9;
        }
        *puVar19 = (char)*(undefined4 *)(param_2 + 0xa0);
        uVar16 = uStack_148 & 0xff;
        if (local_150 != 0) {
          uVar16 = uStack_148;
          puVar20 = local_70;
        }
        if (puVar21 == puVar20 + uVar16) {
          lVar1 = param_1 + 0xc50;
          uStack_138 = uStack_68;
          puStack_140 = local_70;
          FUN_003686e0(lVar1,&local_150);
          if (*(char *)(param_2 + 0x938) == '\0') {
            uStack_168 = uStack_b8;
            local_170 = local_c0;
            uStack_158 = uStack_a8;
            puStack_160 = local_b0;
            FUN_003686e0(lVar1,&local_170);
            uStack_188 = uStack_d8;
            local_190 = local_e0;
            uStack_178 = local_c8;
            puStack_180 = local_d0;
            FUN_003686e0(lVar1,&local_190);
          }
          uStack_1a8 = uStack_98;
          local_1b0 = local_a0;
          uStack_198 = local_88;
          puStack_1a0 = local_90;
          FUN_003686e0(lVar1,&local_1b0);
          uStack_1c8 = uStack_f8;
          local_1d0 = local_100;
          uStack_1b8 = uStack_e8;
          puStack_1c0 = local_f0;
          FUN_003686e0(lVar1,&local_1d0);
          if ((local_128 != (undefined8 *)0x0) &&
             (plVar18 = (long *)*local_128, plVar18 != (long *)0x0)) {
            do {
              cVar8 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar14) {
                *plVar18 = *plVar18 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          uStack_1e8 = uStack_120;
          local_1f0 = local_128;
          uStack_1d8 = uStack_110;
          uStack_1e0 = uStack_118;
          FUN_003686e0(lVar1,&local_1f0);
          if (*(char *)(param_1 + 0xc48) == '\0') {
            *(undefined8 *)(param_1 + 0xee8) = 0x8000000000000000;
            *(undefined4 *)(param_1 + 0xef0) = 0;
          }
          *(undefined4 *)(param_1 + 0xe68) = *(undefined4 *)(param_1 + 0xe48);
          FUN_003101c0(param_1,*(undefined4 *)(param_2 + 0xa0),0,param_2 + 0x198);
          FUN_00309ae0(param_1,param_2,1,1,param_3);
          if (*(int *)(param_1 + 0x38) == 1) {
            *(undefined4 *)(param_1 + 0x38) = 2;
            return;
          }
          if (*(int *)(param_1 + 0x38) != 0) {
            return;
          }
          *(undefined4 *)(param_1 + 0x38) = 1;
          plVar18 = (long *)(param_1 + 8);
          do {
            cVar8 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar14) {
              *plVar18 = *plVar18 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          *(undefined8 *)(param_1 + 0xe0) = 0;
          *(undefined1 **)(param_1 + 0xd0) = &LAB_003080d0;
          *(long *)(param_1 + 0xd8) = param_1;
          thunk_FUN_00350da0(*(undefined8 *)(param_1 + 0x28),param_1 + 200,0);
          return;
        }
      }
    }
  }
LAB_00309ad0:
                    /* WARNING: Subroutine does not return */
  abort();
}


