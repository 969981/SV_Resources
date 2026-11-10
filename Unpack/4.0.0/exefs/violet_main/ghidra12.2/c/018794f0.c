/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018794f0; name: FUN_018794f0
 */


ulong FUN_018794f0(long param_1,long param_2,ulong param_3)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  char cVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ulong uVar14;
  long lVar15;
  ulong *puVar16;
  ushort uVar17;
  long lVar18;
  long lVar19;
  undefined4 local_98 [2];
  undefined1 *local_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined4 *local_78;
  undefined4 *local_70;
  undefined4 *puStack_68;
  
  if ((param_3 & 1) == 0) {
    uVar12 = 0;
    uVar11 = 0;
  }
  else {
    uVar11 = FUN_0187a9f0(param_2,param_1 + 8);
    uVar11 = FUN_0187a8f0(param_2,uVar11);
    lVar19 = 0;
    plVar1 = (long *)(param_2 + 0x48);
    local_70 = (undefined4 *)0x0;
    puStack_68 = (undefined4 *)0x0;
    local_78 = (undefined4 *)0x0;
    do {
      *(undefined1 *)(param_2 + 0x46) = 1;
      iVar5 = *(int *)(param_2 + 0x20);
      iVar6 = *(int *)(param_2 + 0x30);
      lVar18 = param_1 + lVar19 * 0x1c + 0x1a;
      iVar7 = *(int *)(param_2 + 0x28);
      uVar12 = FUN_0187a19c(lVar18,0);
      FUN_0187a314(param_2,4,uVar12,0);
      cVar10 = FUN_0187a19c(lVar18,1);
      if (*(char *)(param_2 + 0x50) != '\0' || cVar10 != '\0') {
        if (*plVar1 == 0) {
          *plVar1 = 1;
        }
        lVar15 = *(long *)(param_2 + 0x30);
        if (lVar15 == *(long *)(param_2 + 0x38)) {
          FUN_0157184c(param_2,1);
          lVar15 = *(long *)(param_2 + 0x30);
        }
        *(long *)(param_2 + 0x30) = lVar15 + -1;
        *(char *)(lVar15 + -1) = cVar10;
        lVar15 = *(long *)(param_2 + 0x20);
        lVar4 = *(long *)(param_2 + 0x28);
        lVar3 = *(long *)(param_2 + 0x30);
        puVar16 = *(ulong **)(param_2 + 0x38);
        if ((ulong)(lVar3 - (long)puVar16) < 8) {
          FUN_0157184c(param_2,8);
          puVar16 = *(ulong **)(param_2 + 0x38);
        }
        *puVar16 = (lVar15 - lVar3) + lVar4 & 0xffffffffU | 0x600000000;
        *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 8;
        *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
        uVar17 = *(ushort *)(param_2 + 0x44);
        if (uVar17 < 7) {
          uVar17 = 6;
        }
        *(ushort *)(param_2 + 0x44) = uVar17;
      }
      cVar10 = FUN_0187a19c(lVar18,2);
      if (*(char *)(param_2 + 0x50) != '\0' || cVar10 != '\0') {
        if (*plVar1 == 0) {
          *plVar1 = 1;
        }
        lVar15 = *(long *)(param_2 + 0x30);
        if (lVar15 == *(long *)(param_2 + 0x38)) {
          FUN_0157184c(param_2,1);
          lVar15 = *(long *)(param_2 + 0x30);
        }
        *(long *)(param_2 + 0x30) = lVar15 + -1;
        *(char *)(lVar15 + -1) = cVar10;
        lVar15 = *(long *)(param_2 + 0x20);
        lVar4 = *(long *)(param_2 + 0x28);
        lVar3 = *(long *)(param_2 + 0x30);
        puVar16 = *(ulong **)(param_2 + 0x38);
        if ((ulong)(lVar3 - (long)puVar16) < 8) {
          FUN_0157184c(param_2,8);
          puVar16 = *(ulong **)(param_2 + 0x38);
        }
        *puVar16 = (lVar15 - lVar3) + lVar4 & 0xffffffffU | 0x800000000;
        *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 8;
        *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
        uVar17 = *(ushort *)(param_2 + 0x44);
        if (uVar17 < 9) {
          uVar17 = 8;
        }
        *(ushort *)(param_2 + 0x44) = uVar17;
      }
      cVar10 = FUN_0187a19c(lVar18,3);
      if (*(char *)(param_2 + 0x50) != '\0' || cVar10 != '\0') {
        if (*plVar1 == 0) {
          *plVar1 = 1;
        }
        lVar15 = *(long *)(param_2 + 0x30);
        if (lVar15 == *(long *)(param_2 + 0x38)) {
          FUN_0157184c(param_2,1);
          lVar15 = *(long *)(param_2 + 0x30);
        }
        *(long *)(param_2 + 0x30) = lVar15 + -1;
        *(char *)(lVar15 + -1) = cVar10;
        lVar15 = *(long *)(param_2 + 0x20);
        lVar4 = *(long *)(param_2 + 0x28);
        lVar3 = *(long *)(param_2 + 0x30);
        puVar16 = *(ulong **)(param_2 + 0x38);
        if ((ulong)(lVar3 - (long)puVar16) < 8) {
          FUN_0157184c(param_2,8);
          puVar16 = *(ulong **)(param_2 + 0x38);
        }
        *puVar16 = (lVar15 - lVar3) + lVar4 & 0xffffffffU | 0xa00000000;
        *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 8;
        *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
        uVar17 = *(ushort *)(param_2 + 0x44);
        if (uVar17 < 0xb) {
          uVar17 = 10;
        }
        *(ushort *)(param_2 + 0x44) = uVar17;
      }
      cVar10 = FUN_0187a19c(lVar18,4);
      if (*(char *)(param_2 + 0x50) != '\0' || cVar10 != '\0') {
        if (*plVar1 == 0) {
          *plVar1 = 1;
        }
        lVar15 = *(long *)(param_2 + 0x30);
        if (lVar15 == *(long *)(param_2 + 0x38)) {
          FUN_0157184c(param_2,1);
          lVar15 = *(long *)(param_2 + 0x30);
        }
        *(long *)(param_2 + 0x30) = lVar15 + -1;
        *(char *)(lVar15 + -1) = cVar10;
        lVar15 = *(long *)(param_2 + 0x20);
        lVar4 = *(long *)(param_2 + 0x28);
        lVar3 = *(long *)(param_2 + 0x30);
        puVar16 = *(ulong **)(param_2 + 0x38);
        if ((ulong)(lVar3 - (long)puVar16) < 8) {
          FUN_0157184c(param_2,8);
          puVar16 = *(ulong **)(param_2 + 0x38);
        }
        *puVar16 = (lVar15 - lVar3) + lVar4 & 0xffffffffU | 0xc00000000;
        *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 8;
        *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
        uVar17 = *(ushort *)(param_2 + 0x44);
        if (uVar17 < 0xd) {
          uVar17 = 0xc;
        }
        *(ushort *)(param_2 + 0x44) = uVar17;
      }
      cVar10 = FUN_0187a19c(lVar18,5);
      if (*(char *)(param_2 + 0x50) != '\0' || cVar10 != '\0') {
        if (*plVar1 == 0) {
          *plVar1 = 1;
        }
        lVar18 = *(long *)(param_2 + 0x30);
        if (lVar18 == *(long *)(param_2 + 0x38)) {
          FUN_0157184c(param_2,1);
          lVar18 = *(long *)(param_2 + 0x30);
        }
        *(long *)(param_2 + 0x30) = lVar18 + -1;
        *(char *)(lVar18 + -1) = cVar10;
        lVar18 = *(long *)(param_2 + 0x20);
        lVar3 = *(long *)(param_2 + 0x28);
        lVar15 = *(long *)(param_2 + 0x30);
        puVar16 = *(ulong **)(param_2 + 0x38);
        if ((ulong)(lVar15 - (long)puVar16) < 8) {
          FUN_0157184c(param_2,8);
          puVar16 = *(ulong **)(param_2 + 0x38);
        }
        *puVar16 = (lVar18 - lVar15) + lVar3 & 0xffffffffU | 0xe00000000;
        *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 8;
        *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
        uVar17 = *(ushort *)(param_2 + 0x44);
        if (uVar17 < 0xf) {
          uVar17 = 0xe;
        }
        *(ushort *)(param_2 + 0x44) = uVar17;
      }
      uVar12 = FUN_01571a80(param_2,(iVar5 - iVar6) + iVar7);
      uVar14 = 0;
      local_88 = (undefined *)0x0;
      puStack_80 = (undefined *)0x0;
      local_90 = (undefined *)0x0;
      do {
        if ((*(ushort *)(param_1 + lVar19 * 0x1c + 0x28) >> (uVar14 & 0x3f) & 1) != 0) {
          local_98[0] = CONCAT31(local_98[0]._1_3_,(char)uVar14);
          if (local_88 < puStack_80) {
            *local_88 = (char)uVar14;
            local_88 = local_88 + 1;
          }
          else {
            FUN_0187b2bc(&local_90,local_98);
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != 7);
      puVar2 = &DAT_047ecd80;
      if ((long)local_88 - (long)local_90 != 0) {
        puVar2 = local_90;
      }
      uVar13 = FUN_0187a3bc(param_2,puVar2,(long)local_88 - (long)local_90);
      *(undefined1 *)(param_2 + 0x46) = 1;
      uVar8 = *(uint *)(param_1 + lVar19 * 0x1c + 0x10);
      cVar10 = *(char *)(param_2 + 0x50);
      iVar5 = *(int *)(param_2 + 0x20);
      lVar18 = *(long *)(param_2 + 0x30);
      iVar6 = *(int *)(param_2 + 0x28);
      if (cVar10 != '\0' || (uVar8 & 0xff) != 0) {
        if (*plVar1 == 0) {
          *plVar1 = 1;
        }
        lVar15 = lVar18;
        if (lVar18 == *(long *)(param_2 + 0x38)) {
          FUN_0157184c(param_2,1);
          lVar15 = *(long *)(param_2 + 0x30);
        }
        *(long *)(param_2 + 0x30) = lVar15 + -1;
        *(char *)(lVar15 + -1) = (char)uVar8;
        lVar15 = *(long *)(param_2 + 0x20);
        lVar4 = *(long *)(param_2 + 0x28);
        lVar3 = *(long *)(param_2 + 0x30);
        puVar16 = *(ulong **)(param_2 + 0x38);
        if ((ulong)(lVar3 - (long)puVar16) < 8) {
          FUN_0157184c(param_2,8);
          puVar16 = *(ulong **)(param_2 + 0x38);
        }
        *puVar16 = (lVar15 - lVar3) + lVar4 & 0xffffffffU | 0x400000000;
        *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 8;
        uVar17 = *(ushort *)(param_2 + 0x44);
        *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
        if (uVar17 < 5) {
          uVar17 = 4;
        }
        *(ushort *)(param_2 + 0x44) = uVar17;
        cVar10 = *(char *)(param_2 + 0x50);
      }
      cVar9 = *(char *)(param_1 + lVar19 * 0x1c + 0x14);
      if (cVar9 != '\0' || cVar10 != '\0') {
        if (*plVar1 == 0) {
          *plVar1 = 1;
        }
        lVar15 = *(long *)(param_2 + 0x30);
        if (lVar15 == *(long *)(param_2 + 0x38)) {
          FUN_0157184c(param_2,1);
          lVar15 = *(long *)(param_2 + 0x30);
        }
        *(long *)(param_2 + 0x30) = lVar15 + -1;
        *(char *)(lVar15 + -1) = cVar9;
        lVar15 = *(long *)(param_2 + 0x20);
        lVar4 = *(long *)(param_2 + 0x28);
        lVar3 = *(long *)(param_2 + 0x30);
        puVar16 = *(ulong **)(param_2 + 0x38);
        if ((ulong)(lVar3 - (long)puVar16) < 8) {
          FUN_0157184c(param_2,8);
          puVar16 = *(ulong **)(param_2 + 0x38);
        }
        *puVar16 = (lVar15 - lVar3) + lVar4 & 0xffffffffU | 0x600000000;
        *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 8;
        uVar17 = *(ushort *)(param_2 + 0x44);
        *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
        if (uVar17 < 7) {
          uVar17 = 6;
        }
        *(ushort *)(param_2 + 0x44) = uVar17;
        cVar10 = *(char *)(param_2 + 0x50);
      }
      cVar9 = *(char *)(param_1 + lVar19 * 0x1c + 0x15);
      if (cVar9 != '\0' || cVar10 != '\0') {
        if (*plVar1 == 0) {
          *plVar1 = 1;
        }
        lVar15 = *(long *)(param_2 + 0x30);
        if (lVar15 == *(long *)(param_2 + 0x38)) {
          FUN_0157184c(param_2,1);
          lVar15 = *(long *)(param_2 + 0x30);
        }
        *(long *)(param_2 + 0x30) = lVar15 + -1;
        *(char *)(lVar15 + -1) = cVar9;
        lVar15 = *(long *)(param_2 + 0x20);
        lVar4 = *(long *)(param_2 + 0x28);
        lVar3 = *(long *)(param_2 + 0x30);
        puVar16 = *(ulong **)(param_2 + 0x38);
        if ((ulong)(lVar3 - (long)puVar16) < 8) {
          FUN_0157184c(param_2,8);
          puVar16 = *(ulong **)(param_2 + 0x38);
        }
        *puVar16 = (lVar15 - lVar3) + lVar4 & 0xffffffffU | 0x800000000;
        *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 8;
        uVar17 = *(ushort *)(param_2 + 0x44);
        *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
        if (uVar17 < 9) {
          uVar17 = 8;
        }
        *(ushort *)(param_2 + 0x44) = uVar17;
        cVar10 = *(char *)(param_2 + 0x50);
      }
      cVar9 = *(char *)(param_1 + lVar19 * 0x1c + 0x16);
      if (cVar9 != '\0' || cVar10 != '\0') {
        if (*plVar1 == 0) {
          *plVar1 = 1;
        }
        lVar15 = *(long *)(param_2 + 0x30);
        if (lVar15 == *(long *)(param_2 + 0x38)) {
          FUN_0157184c(param_2,1);
          lVar15 = *(long *)(param_2 + 0x30);
        }
        *(long *)(param_2 + 0x30) = lVar15 + -1;
        *(char *)(lVar15 + -1) = cVar9;
        lVar15 = *(long *)(param_2 + 0x20);
        lVar4 = *(long *)(param_2 + 0x28);
        lVar3 = *(long *)(param_2 + 0x30);
        puVar16 = *(ulong **)(param_2 + 0x38);
        if ((ulong)(lVar3 - (long)puVar16) < 8) {
          FUN_0157184c(param_2,8);
          puVar16 = *(ulong **)(param_2 + 0x38);
        }
        *puVar16 = (lVar15 - lVar3) + lVar4 & 0xffffffffU | 0xa00000000;
        *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 8;
        uVar17 = *(ushort *)(param_2 + 0x44);
        *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
        if (uVar17 < 0xb) {
          uVar17 = 10;
        }
        *(ushort *)(param_2 + 0x44) = uVar17;
        cVar10 = *(char *)(param_2 + 0x50);
      }
      cVar9 = *(char *)(param_1 + lVar19 * 0x1c + 0x17);
      if (cVar9 != '\0' || cVar10 != '\0') {
        if (*plVar1 == 0) {
          *plVar1 = 1;
        }
        lVar15 = *(long *)(param_2 + 0x30);
        if (lVar15 == *(long *)(param_2 + 0x38)) {
          FUN_0157184c(param_2,1);
          lVar15 = *(long *)(param_2 + 0x30);
        }
        *(long *)(param_2 + 0x30) = lVar15 + -1;
        *(char *)(lVar15 + -1) = cVar9;
        lVar15 = *(long *)(param_2 + 0x20);
        lVar4 = *(long *)(param_2 + 0x28);
        lVar3 = *(long *)(param_2 + 0x30);
        puVar16 = *(ulong **)(param_2 + 0x38);
        if ((ulong)(lVar3 - (long)puVar16) < 8) {
          FUN_0157184c(param_2,8);
          puVar16 = *(ulong **)(param_2 + 0x38);
        }
        *puVar16 = (lVar15 - lVar3) + lVar4 & 0xffffffffU | 0xc00000000;
        *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 8;
        uVar17 = *(ushort *)(param_2 + 0x44);
        *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
        if (uVar17 < 0xd) {
          uVar17 = 0xc;
        }
        *(ushort *)(param_2 + 0x44) = uVar17;
        cVar10 = *(char *)(param_2 + 0x50);
      }
      cVar9 = *(char *)(param_1 + lVar19 * 0x1c + 0x18);
      if (cVar9 != '\0' || cVar10 != '\0') {
        if (*plVar1 == 0) {
          *plVar1 = 1;
        }
        lVar15 = *(long *)(param_2 + 0x30);
        if (lVar15 == *(long *)(param_2 + 0x38)) {
          FUN_0157184c(param_2,1);
          lVar15 = *(long *)(param_2 + 0x30);
        }
        *(long *)(param_2 + 0x30) = lVar15 + -1;
        *(char *)(lVar15 + -1) = cVar9;
        lVar15 = *(long *)(param_2 + 0x20);
        lVar4 = *(long *)(param_2 + 0x28);
        lVar3 = *(long *)(param_2 + 0x30);
        puVar16 = *(ulong **)(param_2 + 0x38);
        if ((ulong)(lVar3 - (long)puVar16) < 8) {
          FUN_0157184c(param_2,8);
          puVar16 = *(ulong **)(param_2 + 0x38);
        }
        *puVar16 = (lVar15 - lVar3) + lVar4 & 0xffffffffU | 0xe00000000;
        *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 8;
        *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
        uVar17 = *(ushort *)(param_2 + 0x44);
        if (uVar17 < 0xf) {
          uVar17 = 0xe;
        }
        *(ushort *)(param_2 + 0x44) = uVar17;
      }
      FUN_0187a790(param_2,uVar12);
      cVar10 = *(char *)(param_1 + lVar19 * 0x1c + 0x25);
      cVar9 = *(char *)(param_2 + 0x50);
      if (cVar9 != '\0' || cVar10 != '\0') {
        if (*plVar1 == 0) {
          *plVar1 = 1;
        }
        lVar15 = *(long *)(param_2 + 0x30);
        if (lVar15 == *(long *)(param_2 + 0x38)) {
          FUN_0157184c(param_2,1);
          lVar15 = *(long *)(param_2 + 0x30);
        }
        *(long *)(param_2 + 0x30) = lVar15 + -1;
        *(char *)(lVar15 + -1) = cVar10;
        lVar15 = *(long *)(param_2 + 0x20);
        lVar4 = *(long *)(param_2 + 0x28);
        lVar3 = *(long *)(param_2 + 0x30);
        puVar16 = *(ulong **)(param_2 + 0x38);
        if ((ulong)(lVar3 - (long)puVar16) < 8) {
          FUN_0157184c(param_2,8);
          puVar16 = *(ulong **)(param_2 + 0x38);
        }
        *puVar16 = (lVar15 - lVar3) + lVar4 & 0xffffffffU | 0x1400000000;
        *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 8;
        uVar17 = *(ushort *)(param_2 + 0x44);
        *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
        if (uVar17 < 0x15) {
          uVar17 = 0x14;
        }
        *(ushort *)(param_2 + 0x44) = uVar17;
        cVar9 = *(char *)(param_2 + 0x50);
      }
      cVar10 = *(char *)(param_1 + lVar19 * 0x1c + 0x26);
      if (cVar10 != '\0' || cVar9 != '\0') {
        if (*plVar1 == 0) {
          *plVar1 = 1;
        }
        lVar15 = *(long *)(param_2 + 0x30);
        if (lVar15 == *(long *)(param_2 + 0x38)) {
          FUN_0157184c(param_2,1);
          lVar15 = *(long *)(param_2 + 0x30);
        }
        *(long *)(param_2 + 0x30) = lVar15 + -1;
        *(char *)(lVar15 + -1) = cVar10;
        lVar15 = *(long *)(param_2 + 0x20);
        lVar4 = *(long *)(param_2 + 0x28);
        lVar3 = *(long *)(param_2 + 0x30);
        puVar16 = *(ulong **)(param_2 + 0x38);
        if ((ulong)(lVar3 - (long)puVar16) < 8) {
          FUN_0157184c(param_2,8);
          puVar16 = *(ulong **)(param_2 + 0x38);
        }
        *puVar16 = (lVar15 - lVar3) + lVar4 & 0xffffffffU | 0x1600000000;
        *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 8;
        *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
        uVar17 = *(ushort *)(param_2 + 0x44);
        if (uVar17 < 0x17) {
          uVar17 = 0x16;
        }
        *(ushort *)(param_2 + 0x44) = uVar17;
      }
      FUN_0187a518(param_2,0x18,uVar13);
      local_98[0] = FUN_01571a80(param_2,(iVar5 - (int)lVar18) + iVar6);
      if (local_70 == puStack_68) {
        FUN_0187a678(&local_78,local_98);
      }
      else {
        *local_70 = local_98[0];
        local_70 = local_70 + 1;
      }
      if (local_90 != (undefined *)0x0) {
        local_88 = local_90;
        operator_delete(local_90);
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 != 6);
    uVar12 = FUN_0187a940(param_2,&local_78);
    if (local_78 != (undefined4 *)0x0) {
      local_70 = local_78;
      operator_delete(local_78);
    }
  }
  uVar14 = FUN_0187aa70(param_2,*(undefined1 *)(param_1 + 0xba),*(undefined1 *)(param_1 + 0xbb),
                        *(undefined1 *)(param_1 + 0xbc),uVar11,uVar12,
                        *(undefined2 *)(param_1 + 0xb8));
  FUN_01692868(param_2,uVar14,0,0);
  return uVar14 & 0xffffffff;
}


