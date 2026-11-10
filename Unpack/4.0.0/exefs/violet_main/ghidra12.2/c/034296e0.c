/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034296e0; name: FUN_034296e0
 */


void FUN_034296e0(long param_1,uint param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  uint uVar13;
  char *pcVar14;
  long *plVar15;
  uint *puVar16;
  long *plVar17;
  ulong uVar18;
  char *pcVar19;
  
  plVar15 = (long *)(param_1 + 0x18);
  lVar6 = *plVar15;
  uVar2 = *(uint *)(param_1 + 0x20);
  if (uVar2 == 0) {
    if (lVar6 != 0) {
      uVar18 = 0;
      goto LAB_03429764;
    }
    if (*(int *)(param_1 + 0x24) != 0) {
      *(undefined4 *)(param_1 + 0x20) = 1;
      return;
    }
    uVar18 = FUN_0342a664(plVar15,1);
    if ((uVar18 & 1) == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x24) == 0) {
      return;
    }
    uVar2 = *(uint *)(param_1 + 0x20);
    lVar6 = *(long *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x20) = uVar2 + 1;
    puVar16 = (uint *)(lVar6 + (ulong)uVar2 * 0x50);
    if (lVar6 != 0) {
      lVar6 = lVar6 + (ulong)uVar2 * 0x50;
      *(undefined2 *)(lVar6 + 0x28) = 0;
      *(undefined8 *)(lVar6 + 8) = 0xffffffffffffffff;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0x3f80000000000000;
      *(undefined8 *)(lVar6 + 0x20) = 0x3f800000;
      *(undefined8 *)(lVar6 + 0x2c) = 1;
      *(undefined8 *)(lVar6 + 0x40) = 0;
      *(undefined1 *)(lVar6 + 0x48) = 0;
      goto LAB_03429944;
    }
  }
  else {
    uVar9 = 0;
    uVar13 = uVar2;
    do {
      iVar1 = uVar9 + (uVar13 >> 1);
      uVar3 = *(uint *)(lVar6 + (long)iVar1 * 0x50);
      if (uVar3 == param_2) {
        puVar16 = (uint *)(lVar6 + (long)iVar1 * 0x50);
        goto LAB_03429948;
      }
      if (uVar3 < param_2) {
        uVar9 = iVar1 + 1;
      }
      uVar13 = uVar13 - (uVar3 < param_2) >> 1;
    } while (uVar13 != 0);
    uVar18 = (ulong)uVar9;
LAB_03429764:
    uVar9 = *(uint *)(param_1 + 0x24);
    if (uVar9 <= uVar2) {
      iVar1 = uVar9 + (uVar9 >> 1);
      if (uVar9 == 0) {
        iVar1 = 1;
      }
      uVar5 = FUN_0342a664(plVar15,iVar1);
      if ((uVar5 & 1) == 0) {
        return;
      }
      uVar9 = *(uint *)(param_1 + 0x24);
    }
    if (uVar9 <= uVar2) {
      return;
    }
    uVar5 = (ulong)*(uint *)(param_1 + 0x20);
    lVar6 = *(long *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) + 1;
    if (lVar6 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = lVar6 + uVar5 * 0x50;
      *(undefined8 *)(lVar11 + 8) = 0xffffffffffffffff;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0x3f80000000000000;
      *(undefined8 *)(lVar11 + 0x20) = 0x3f800000;
      *(undefined2 *)(lVar11 + 0x28) = 0;
      *(undefined1 *)(lVar11 + 0x48) = 0;
      *(undefined8 *)(lVar11 + 0x2c) = 1;
      *(undefined8 *)(lVar11 + 0x40) = 0;
      lVar11 = *plVar15;
    }
    puVar4 = PTR_DAT_047e2fd0;
    if (lVar11 + uVar18 * 0x50 < lVar6 + uVar5 * 0x50) {
      pcVar19 = (char *)(lVar6 + uVar5 * 0x50 + 0x48);
      do {
        *(undefined4 *)(pcVar19 + -0x48) = *(undefined4 *)(pcVar19 + -0x98);
        *(undefined8 *)(pcVar19 + -0x40) = *(undefined8 *)(pcVar19 + -0x90);
        *(undefined8 *)(pcVar19 + -0x38) = *(undefined8 *)(pcVar19 + -0x88);
        *(undefined8 *)(pcVar19 + -0x30) = *(undefined8 *)(pcVar19 + -0x80);
        *(undefined8 *)(pcVar19 + -0x28) = *(undefined8 *)(pcVar19 + -0x78);
        *(undefined2 *)(pcVar19 + -0x20) = *(undefined2 *)(pcVar19 + -0x70);
        *(undefined8 *)(pcVar19 + -0x1c) = *(undefined8 *)(pcVar19 + -0x6c);
        *(undefined8 *)(pcVar19 + -0x14) = *(undefined8 *)(pcVar19 + -100);
        *(undefined4 *)(pcVar19 + -0xc) = *(undefined4 *)(pcVar19 + -0x5c);
        if ((*(long *)(pcVar19 + -8) != 0) && (*pcVar19 != '\0')) {
          (**(code **)(puVar4 + 0x30))(9);
          *pcVar19 = '\0';
        }
        uVar7 = *(undefined8 *)(pcVar19 + -0x58);
        pcVar19[-0x58] = '\0';
        pcVar19[-0x57] = '\0';
        pcVar19[-0x56] = '\0';
        pcVar19[-0x55] = '\0';
        pcVar19[-0x54] = '\0';
        pcVar19[-0x53] = '\0';
        pcVar19[-0x52] = '\0';
        pcVar19[-0x51] = '\0';
        *(undefined8 *)(pcVar19 + -8) = uVar7;
        pcVar8 = pcVar19 + -0x50;
        *pcVar19 = *pcVar8;
        *pcVar8 = '\0';
        lVar11 = *plVar15;
        pcVar14 = pcVar19 + -0x98;
        pcVar19 = pcVar8;
      } while ((char *)(lVar11 + uVar18 * 0x50) < pcVar14);
    }
    plVar17 = (long *)(lVar11 + uVar18 * 0x50 + 0x40);
    if ((*plVar17 != 0) && (pcVar19 = (char *)(lVar11 + uVar18 * 0x50 + 0x48), *pcVar19 != '\0')) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9);
      *pcVar19 = '\0';
    }
    *plVar17 = 0;
    lVar6 = 0;
    if (*plVar15 != 0) {
      lVar6 = *plVar15 + uVar18 * 0x50;
      *(undefined8 *)(lVar6 + 8) = 0xffffffffffffffff;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0x3f80000000000000;
      *(undefined8 *)(lVar6 + 0x20) = 0x3f800000;
      *(undefined2 *)(lVar6 + 0x28) = 0;
      *(undefined8 *)(lVar6 + 0x40) = 0;
      *(undefined1 *)(lVar6 + 0x48) = 0;
      *(undefined8 *)(lVar6 + 0x2c) = 1;
      lVar6 = *plVar15;
    }
    puVar16 = (uint *)(lVar6 + uVar18 * 0x50);
  }
  if (puVar16 == (uint *)0x0) {
    return;
  }
LAB_03429944:
  *puVar16 = param_2;
LAB_03429948:
  uVar7 = *param_4;
  uVar10 = param_4[1];
  uVar12 = param_4[2];
  *(undefined2 *)(puVar16 + 10) = *(undefined2 *)(param_4 + 3);
  *(undefined8 *)(puVar16 + 4) = uVar7;
  *(undefined8 *)(puVar16 + 6) = uVar10;
  *(undefined8 *)(puVar16 + 8) = uVar12;
  uVar7 = *(undefined8 *)((long)param_4 + 0x1c);
  uVar10 = *(undefined8 *)((long)param_4 + 0x24);
  puVar16[0xf] = *(uint *)((long)param_4 + 0x2c);
  *(undefined8 *)(puVar16 + 0xd) = uVar10;
  *(undefined8 *)(puVar16 + 0xb) = uVar7;
  if ((*(long *)(puVar16 + 0x10) != 0) && ((char)puVar16[0x12] != '\0')) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9);
    *(undefined1 *)(puVar16 + 0x12) = 0;
  }
  puVar16[0x10] = 0;
  puVar16[0x11] = 0;
  *(undefined8 *)(puVar16 + 0x10) = param_4[6];
  param_4[6] = 0;
  *(undefined1 *)(puVar16 + 0x12) = *(undefined1 *)(param_4 + 7);
  *(undefined1 *)(param_4 + 7) = 0;
  *(undefined8 *)(puVar16 + 2) = param_3;
  return;
}


