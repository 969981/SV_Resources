/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0322f5e8; name: FUN_0322f5e8
 */


void FUN_0322f5e8(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  void *__s;
  undefined8 uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  undefined8 local_458;
  uint local_450;
  ulong local_448 [123];
  undefined8 local_70 [2];
  
  *param_1 = &PTR_FUN_046ab130;
  param_1[1] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 2),true,0);
  puVar2 = PTR_DAT_047e5fe0;
  param_1[8] = param_2;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[6] = param_2;
  param_1[7] = puVar2 + 0x10;
  *(undefined4 *)(param_1 + 0x11) = 0;
  local_458 = 0x148;
  __s = (void *)(**(code **)(*param_2 + 0x10))(param_2,&local_458);
  plVar16 = param_1 + 0xb;
  *plVar16 = (long)__s;
  memset(__s,0,0x148);
  local_458 = 0x148;
  uVar4 = (**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],&local_458);
  param_1[0xc] = uVar4;
  local_458 = 0x11f0;
  uVar4 = (**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],&local_458);
  param_1[0x10] = uVar4;
  local_448[0] = 0x200;
  local_448[1] = 0x80;
  local_448[2] = 0x2000;
  local_448[3] = 0x100;
  local_458 = 0x2000;
  local_450 = 2;
  local_448[4] = 0x20;
  local_448[5] = 0x2000;
  lVar11 = 0;
  puVar5 = local_448;
  do {
    if (*puVar5 == 0) {
      iVar10 = (int)lVar11;
      if (-1 < iVar10) goto LAB_0322f720;
      break;
    }
    lVar11 = lVar11 + 1;
    puVar5 = puVar5 + 3;
  } while (lVar11 != 2);
  local_450 = 3;
  iVar10 = 2;
LAB_0322f720:
  lVar11 = (long)iVar10;
  local_448[lVar11 * 3] = 0;
  local_448[lVar11 * 3 + 1] = 8;
  local_448[lVar11 * 3 + 2] = 0x2000;
  if (local_450 != 0) {
    uVar9 = 0;
    puVar5 = local_448;
    do {
      if (*puVar5 == 0x280) {
        uVar8 = (uint)uVar9;
        if (-1 < (int)uVar8) goto LAB_0322f784;
        break;
      }
      uVar9 = uVar9 + 1;
      puVar5 = puVar5 + 3;
    } while (local_450 != uVar9);
  }
  uVar8 = local_450;
  local_450 = local_450 + 1;
LAB_0322f784:
  lVar11 = (long)(int)uVar8;
  local_448[lVar11 * 3] = 0x280;
  local_448[lVar11 * 3 + 1] = 0x80;
  local_448[lVar11 * 3 + 2] = 0x2000;
  uVar9 = 0x200;
  do {
    uVar3 = uVar9 & 0xffffffe0;
    if (uVar9 < 0x81) {
      uVar3 = uVar9;
    }
    uVar13 = uVar9 & 0xffffffc0;
    if (uVar9 < 0x100) {
      uVar13 = uVar3;
    }
    uVar3 = 0x20;
    if (uVar13 < 0x40) {
      uVar3 = 0x10;
    }
    uVar13 = (uVar13 + uVar3) - 1 & -uVar3;
    if (0 < (int)local_450) {
      uVar14 = 0;
      puVar5 = local_448;
      do {
        if (*puVar5 == uVar13) {
          if (-1 < (int)uVar14) goto LAB_0322f864;
          break;
        }
        uVar14 = uVar14 + 1;
        puVar5 = puVar5 + 3;
      } while (local_450 != uVar14);
      uVar14 = 0;
      puVar5 = local_448;
      do {
        if (*puVar5 == uVar13) {
          uVar8 = (uint)uVar14;
          if (-1 < (int)uVar8) goto LAB_0322f858;
          break;
        }
        uVar14 = uVar14 + 1;
        puVar5 = puVar5 + 3;
      } while (local_450 != uVar14);
    }
    uVar8 = local_450;
    local_450 = local_450 + 1;
LAB_0322f858:
    lVar11 = (long)(int)uVar8;
    local_448[lVar11 * 3] = uVar13;
    local_448[lVar11 * 3 + 1] = uVar3;
    local_448[lVar11 * 3 + 2] = 0x2000;
LAB_0322f864:
    bVar1 = 0x1f < uVar9;
    uVar9 = uVar9 - 0x10;
  } while (bVar1);
  local_70[0] = 0x90;
  puVar6 = (undefined8 *)(**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],local_70);
  uVar4 = param_1[6];
  puVar2 = puVar2 + 0x10;
  *puVar6 = &PTR_LAB_046ab1a8;
  puVar6[1] = 0;
  puVar6[2] = puVar2;
  puVar6[3] = uVar4;
  puVar6[5] = 0;
  puVar15 = puVar6 + 4;
  *puVar15 = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xc] = 0;
  puVar6[0xd] = 0;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0;
  FUN_031ce688(puVar15);
  *puVar15 = 0;
  puVar6[9] = 0x2000;
  puVar6[10] = 8;
  puVar6[0xf] = 0;
  puVar6[5] = 0x20;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0;
  puVar6[0xd] = 0;
  puVar6[0xe] = puVar6 + 2;
  puVar6[0xb] = 0x100;
  puVar6[0xc] = 0;
  param_1[9] = puVar6;
  local_70[0] = 0x10;
  plVar7 = (long *)(**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],local_70);
  lVar11 = param_1[9];
  *plVar7 = (long)puVar2;
  plVar7[1] = lVar11;
  puVar15 = (undefined8 *)param_1[0x10];
  puVar6 = puVar15 + 0x23e;
  param_1[10] = plVar7;
  param_1[0xe] = puVar15;
  param_1[0xf] = puVar6;
  if ((int)local_450 < 1) {
LAB_0322fa60:
    plVar7 = (long *)*plVar16;
    lVar11 = plVar7[0x28];
    if (lVar11 == 0) {
      plVar7[0x28] = 0;
      plVar7 = (long *)*plVar16;
    }
    lVar12 = plVar7[0x27];
    if (plVar7[0x27] == 0) {
      plVar7[0x27] = lVar11;
      plVar7 = (long *)*plVar16;
      lVar12 = lVar11;
    }
    if (plVar7[0x26] == 0) {
      plVar7[0x26] = lVar12;
      plVar7 = (long *)*plVar16;
    }
    else {
      lVar12 = plVar7[0x26];
    }
    if (plVar7[0x25] == 0) {
      plVar7[0x25] = lVar12;
      plVar7 = (long *)*plVar16;
    }
    else {
      lVar12 = plVar7[0x25];
    }
    if (plVar7[0x24] == 0) {
      plVar7[0x24] = lVar12;
      plVar7 = (long *)*plVar16;
    }
    else {
      lVar12 = plVar7[0x24];
    }
    if (plVar7[0x23] == 0) {
      plVar7[0x23] = lVar12;
      plVar7 = (long *)*plVar16;
    }
    else {
      lVar12 = plVar7[0x23];
    }
    if (plVar7[0x22] == 0) {
      plVar7[0x22] = lVar12;
      plVar7 = (long *)*plVar16;
    }
    else {
      lVar12 = plVar7[0x22];
    }
    if (plVar7[0x21] == 0) {
      plVar7[0x21] = lVar12;
      plVar7 = (long *)*plVar16;
    }
    else {
      lVar12 = plVar7[0x21];
    }
    if (plVar7[0x20] == 0) {
      plVar7[0x20] = lVar12;
      plVar7 = (long *)*plVar16;
    }
    else {
      lVar12 = plVar7[0x20];
    }
    if (plVar7[0x1f] == 0) {
      plVar7[0x1f] = lVar12;
      plVar7 = (long *)*plVar16;
    }
    else {
      lVar12 = plVar7[0x1f];
    }
    if (plVar7[0x1e] == 0) {
      plVar7[0x1e] = lVar12;
      plVar7 = (long *)*plVar16;
    }
    else {
      lVar12 = plVar7[0x1e];
    }
    if (plVar7[0x1d] == 0) {
      plVar7[0x1d] = lVar12;
      plVar7 = (long *)*plVar16;
    }
    else {
      lVar12 = plVar7[0x1d];
    }
    if (plVar7[0x1c] == 0) {
      plVar7[0x1c] = lVar12;
      plVar7 = (long *)*plVar16;
    }
    else {
      lVar12 = plVar7[0x1c];
    }
    if (plVar7[0x1b] == 0) {
      plVar7[0x1b] = lVar12;
      plVar7 = (long *)*plVar16;
    }
    else {
      lVar12 = plVar7[0x1b];
    }
    if (plVar7[0x1a] == 0) {
      plVar7[0x1a] = lVar12;
      plVar7 = (long *)*plVar16;
    }
    else {
      lVar12 = plVar7[0x1a];
    }
    if (plVar7[0x19] == 0) {
      plVar7[0x19] = lVar12;
      plVar7 = (long *)*plVar16;
    }
    else {
      lVar12 = plVar7[0x19];
    }
    if (plVar7[0x18] == 0) {
      plVar7[0x18] = lVar12;
      plVar7 = (long *)*plVar16;
    }
    else {
      lVar12 = plVar7[0x18];
    }
    if (plVar7[0x17] == 0) {
      plVar7[0x17] = lVar12;
      plVar7 = (long *)*plVar16;
    }
    else {
      lVar12 = plVar7[0x17];
    }
    if (plVar7[0x16] == 0) {
      plVar7[0x16] = lVar12;
      plVar7 = (long *)*plVar16;
    }
    else {
      lVar12 = plVar7[0x16];
    }
    if (plVar7[0x15] == 0) {
      plVar7[0x15] = lVar12;
      plVar7 = (long *)*plVar16;
    }
    else {
      lVar12 = plVar7[0x15];
    }
    if (plVar7[0x14] == 0) {
      plVar7[0x14] = lVar12;
      plVar7 = (long *)*plVar16;
    }
    else {
      lVar12 = plVar7[0x14];
    }
    if (plVar7[0x13] == 0) {
      plVar7[0x13] = lVar12;
      plVar7 = (long *)*plVar16;
    }
    else {
      lVar12 = plVar7[0x13];
    }
    if (plVar7[0x12] == 0) {
      plVar7[0x12] = lVar12;
      plVar7 = (long *)*plVar16;
    }
    else {
      lVar12 = plVar7[0x12];
    }
    if (plVar7[0x11] == 0) {
      plVar7[0x11] = lVar12;
      plVar7 = (long *)*plVar16;
    }
    else {
      lVar12 = plVar7[0x11];
    }
    if (plVar7[0x10] == 0) {
      plVar7[0x10] = lVar12;
      plVar7 = (long *)*plVar16;
    }
    else {
      lVar12 = plVar7[0x10];
    }
    if (plVar7[0xf] == 0) {
      plVar7[0xf] = lVar12;
      plVar7 = (long *)*plVar16;
    }
    else {
      lVar12 = plVar7[0xf];
    }
    if (plVar7[0xe] == 0) {
      plVar7[0xe] = lVar12;
      plVar7 = (long *)*plVar16;
    }
    else {
      lVar12 = plVar7[0xe];
    }
    if (plVar7[0xd] == 0) {
      plVar7[0xd] = lVar12;
      plVar7 = (long *)*plVar16;
    }
    else {
      lVar12 = plVar7[0xd];
    }
    if (plVar7[0xc] == 0) {
      plVar7[0xc] = lVar12;
      plVar7 = (long *)*plVar16;
    }
    else {
      lVar12 = plVar7[0xc];
    }
    if (plVar7[0xb] == 0) {
      plVar7[0xb] = lVar12;
      plVar7 = (long *)*plVar16;
    }
    else {
      lVar12 = plVar7[0xb];
    }
    if (plVar7[10] == 0) {
      plVar7[10] = lVar12;
      plVar7 = (long *)*plVar16;
    }
    else {
      lVar12 = plVar7[10];
    }
    if (plVar7[9] == 0) {
      plVar7[9] = lVar12;
      plVar7 = (long *)*plVar16;
    }
    else {
      lVar12 = plVar7[9];
    }
    if (plVar7[8] == 0) {
      plVar7[8] = lVar12;
      plVar7 = (long *)*plVar16;
    }
    else {
      lVar12 = plVar7[8];
    }
    if (plVar7[7] == 0) {
      plVar7[7] = lVar12;
      plVar7 = (long *)*plVar16;
    }
    else {
      lVar12 = plVar7[7];
    }
    if (plVar7[6] == 0) {
      plVar7[6] = lVar12;
      plVar7 = (long *)*plVar16;
    }
    else {
      lVar12 = plVar7[6];
    }
    if (plVar7[5] == 0) {
      plVar7[5] = lVar12;
      plVar7 = (long *)*plVar16;
    }
    else {
      lVar12 = plVar7[5];
    }
    if (plVar7[4] == 0) {
      plVar7[4] = lVar12;
      plVar7 = (long *)*plVar16;
    }
    else {
      lVar12 = plVar7[4];
    }
    if (plVar7[3] == 0) {
      plVar7[3] = lVar12;
      plVar7 = (long *)*plVar16;
    }
    else {
      lVar12 = plVar7[3];
    }
    if (plVar7[2] == 0) {
      plVar7[2] = lVar12;
      plVar7 = (long *)*plVar16;
    }
    else {
      lVar12 = plVar7[2];
    }
    if (plVar7[1] == 0) {
      plVar7[1] = lVar12;
      plVar7 = (long *)*plVar16;
    }
    else {
      lVar12 = plVar7[1];
    }
    if (*plVar7 == 0) {
      *plVar7 = lVar12;
    }
    return;
  }
  lVar11 = 0;
  do {
    lVar12 = lVar11 * 3;
    uVar13 = local_448[lVar12];
    uVar9 = local_448[lVar11 * 3 + 1];
    uVar3 = local_448[lVar11 * 3 + 2];
    if (puVar6 <= puVar15) {
      CallSupervisor(0x26);
      puVar15 = (undefined8 *)param_1[0xe];
    }
    uVar4 = param_1[10];
    param_1[0xe] = puVar15 + 0xe;
    puVar15[4] = 0;
    puVar15[5] = uVar3;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[10] = param_1 + 7;
    puVar15[0xb] = uVar4;
    uVar14 = uVar9;
    if (uVar9 <= uVar13) {
      uVar14 = (uVar13 + uVar9) - 1 & -uVar9;
    }
    puVar15[8] = 0;
    puVar15[9] = 0;
    uVar13 = 0;
    if (uVar14 != 0) {
      uVar13 = uVar3 / uVar14;
    }
    puVar15[2] = 0;
    puVar15[3] = 0;
    *puVar15 = 0;
    puVar15[1] = uVar14;
    puVar15[6] = uVar9;
    puVar15[7] = uVar13;
    uVar8 = *(uint *)(param_1 + 0xd);
    if (0 < (int)uVar8) {
      lVar17 = 0;
      do {
        if (*(ulong *)(*(long *)(param_1[0xc] + lVar17) + 8) == uVar14) {
          FUN_031ce688(puVar15);
          if (puVar15 + 0xe == (undefined8 *)param_1[0xe]) {
            param_1[0xe] = puVar15;
          }
          puVar15 = *(undefined8 **)(param_1[0xc] + lVar17);
          goto LAB_0322fa34;
        }
        lVar17 = lVar17 + 8;
      } while ((ulong)uVar8 * 8 != lVar17);
    }
    *(uint *)(param_1 + 0xd) = uVar8 + 1;
    *(undefined8 **)(param_1[0xc] + (long)(int)uVar8 * 8) = puVar15;
LAB_0322fa34:
    lVar11 = lVar11 + 1;
    *(undefined8 **)(*plVar16 + (local_448[lVar12] >> 1 & 0x7ffffffffffffff8)) = puVar15;
    if ((int)local_450 <= lVar11) goto LAB_0322fa60;
    puVar15 = (undefined8 *)param_1[0xe];
    puVar6 = (undefined8 *)param_1[0xf];
  } while( true );
}


