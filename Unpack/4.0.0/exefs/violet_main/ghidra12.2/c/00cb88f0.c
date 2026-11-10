/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cb88f0; name: FUN_00cb88f0
 */


void FUN_00cb88f0(ulong *param_1,ulong *param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  undefined1 local_68;
  
LAB_00cb8920:
  puVar10 = param_2 + -2;
  puVar11 = param_1;
LAB_00cb892c:
  while( true ) {
    param_1 = puVar11;
    lVar7 = (long)param_2 - (long)param_1;
    uVar3 = lVar7 >> 4;
    if (uVar3 < 2) {
      return;
    }
    switch(uVar3) {
    case 2:
      if (*puVar10 < *param_1) {
        uVar3 = *param_1;
        uVar2 = param_1[1];
        uVar9 = *puVar10;
        *(char *)(param_1 + 1) = (char)param_2[-1];
        *param_1 = uVar9;
        local_68 = (undefined1)uVar2;
        *(undefined1 *)(param_2 + -1) = local_68;
        *puVar10 = uVar3;
        return;
      }
      return;
    case 3:
      FUN_00cba750(param_1,param_1 + 2,puVar10);
      return;
    case 4:
      FUN_00cba650(param_1,param_1 + 2,param_1 + 4,puVar10);
      return;
    case 5:
      FUN_00cba880(param_1,param_1 + 2,param_1 + 4,param_1 + 6,puVar10);
      return;
    }
    if (lVar7 < 0x1f0) {
      FUN_021d5c20(param_1,param_2);
      return;
    }
    uVar2 = uVar3;
    if ((long)uVar3 < 0) {
      uVar2 = uVar3 + 1;
    }
    puVar11 = param_1 + (uVar2 & 0x1ffffffffffffffe);
    if (lVar7 < 0x3e71) {
      iVar1 = FUN_00cba750(param_1,puVar11,puVar10);
    }
    else {
      uVar2 = uVar3 + 3;
      if (-1 < (long)uVar3) {
        uVar2 = uVar3;
      }
      lVar7 = (uVar2 & 0x3ffffffffffffffc) * 4;
      iVar1 = FUN_00cba880(param_1,(long)param_1 + lVar7,puVar11,(long)puVar11 + lVar7,puVar10);
    }
    uVar3 = *param_1;
    if (uVar3 < *puVar11) break;
    puVar6 = param_2 + -4;
    while (puVar4 = puVar6, param_1 != puVar4) {
      puVar6 = puVar4 + -2;
      if (*puVar4 < *puVar11) goto code_r0x00cb8b4c;
    }
    puVar6 = param_1 + 2;
    if (*puVar10 <= uVar3) {
      if (puVar6 == puVar10) {
        return;
      }
      puVar6 = param_1 + 4;
      while (puVar6[-2] <= uVar3) {
        puVar6 = puVar6 + 2;
        if (param_2 == puVar6) {
          return;
        }
      }
      uVar3 = puVar6[-2];
      uVar2 = puVar6[-1];
      uVar9 = *puVar10;
      *(char *)(puVar6 + -1) = (char)param_2[-1];
      puVar6[-2] = uVar9;
      local_68 = (undefined1)uVar2;
      *(undefined1 *)(param_2 + -1) = local_68;
      *puVar10 = uVar3;
    }
    if (puVar6 == puVar10) {
      return;
    }
    puVar4 = puVar10;
    while( true ) {
      puVar11 = puVar6 + -2;
      do {
        puVar12 = puVar11;
        puVar11 = puVar12 + 2;
      } while (*puVar11 <= *param_1);
      puVar6 = puVar12 + 4;
      do {
        puVar8 = puVar4;
        puVar4 = puVar8 + -2;
      } while (*param_1 < *puVar4);
      if (puVar4 <= puVar11) break;
      uVar3 = *puVar11;
      uVar2 = puVar12[3];
      uVar9 = *puVar4;
      *(char *)(puVar12 + 3) = (char)puVar8[-1];
      *puVar11 = uVar9;
      local_68 = (undefined1)uVar2;
      *(undefined1 *)(puVar8 + -1) = local_68;
      *puVar4 = uVar3;
    }
  }
  puVar4 = puVar10;
  goto LAB_00cb8ac4;
code_r0x00cb8b4c:
  uVar3 = *param_1;
  uVar2 = param_1[1];
  iVar1 = iVar1 + 1;
  uVar9 = *puVar4;
  *(char *)(param_1 + 1) = (char)puVar4[1];
  *param_1 = uVar9;
  local_68 = (undefined1)uVar2;
  *(undefined1 *)(puVar4 + 1) = local_68;
  *puVar4 = uVar3;
LAB_00cb8ac4:
  puVar6 = param_1 + 2;
  puVar12 = puVar6;
  if (puVar6 < puVar4) {
    while( true ) {
      puVar6 = puVar12 + -2;
      do {
        puVar8 = puVar6;
        puVar6 = puVar8 + 2;
      } while (*puVar6 < *puVar11);
      puVar12 = puVar8 + 4;
      do {
        puVar5 = puVar4;
        puVar4 = puVar5 + -2;
      } while (*puVar11 <= *puVar4);
      if (puVar4 < puVar6) break;
      uVar3 = *puVar6;
      uVar2 = puVar8[3];
      uVar9 = *puVar4;
      *(char *)(puVar8 + 3) = (char)puVar5[-1];
      *puVar6 = uVar9;
      local_68 = (undefined1)uVar2;
      *(undefined1 *)(puVar5 + -1) = local_68;
      *puVar4 = uVar3;
      iVar1 = iVar1 + 1;
      puVar8 = puVar4;
      if (puVar11 != puVar6) {
        puVar8 = puVar11;
      }
      puVar11 = puVar8;
    }
  }
  if ((puVar6 != puVar11) && (*puVar11 < *puVar6)) {
    uVar3 = *puVar6;
    uVar2 = puVar6[1];
    iVar1 = iVar1 + 1;
    uVar9 = *puVar11;
    *(char *)(puVar6 + 1) = (char)puVar11[1];
    *puVar6 = uVar9;
    local_68 = (undefined1)uVar2;
    *(undefined1 *)(puVar11 + 1) = local_68;
    *puVar11 = uVar3;
  }
  if (iVar1 == 0) {
    uVar3 = FUN_021d5ce0(param_1,puVar6);
    uVar2 = FUN_021d5ce0(puVar6 + 2,param_2);
    if ((uVar2 & 1) != 0) goto LAB_00cb8d24;
    puVar11 = puVar6 + 2;
    if ((uVar3 & 1) != 0) goto LAB_00cb892c;
  }
  if ((long)param_2 - (long)puVar6 <= (long)puVar6 - (long)param_1) {
    FUN_00cb88f0(puVar6 + 2,param_2,param_3);
    param_2 = puVar6;
    goto LAB_00cb8920;
  }
  FUN_00cb88f0(param_1,puVar6,param_3);
  puVar11 = puVar6 + 2;
  goto LAB_00cb892c;
LAB_00cb8d24:
  param_2 = puVar6;
  if ((uVar3 & 1) != 0) {
    return;
  }
  goto LAB_00cb8920;
}


