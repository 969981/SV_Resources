/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030dec10; name: FUN_030dec10
 */


void FUN_030dec10(long param_1,long param_2,int *param_3)

{
  ushort uVar1;
  short sVar2;
  ulong uVar3;
  ulong uVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  long *plVar16;
  ushort uVar17;
  int local_90 [2];
  ushort local_88 [4];
  int local_80 [2];
  ushort local_78 [4];
  int local_70 [2];
  int *local_68;
  ulong local_60;
  int local_58;
  int local_54;
  int local_38 [2];
  
  if (*(char *)(param_2 + 0x30) == '\x01') {
    lVar7 = *(long *)(param_2 + 0x20);
    lVar6 = lVar7;
  }
  else {
    lVar6 = FUN_0307d71c();
    lVar7 = *(long *)(param_2 + 0x20);
  }
  local_58 = *param_3;
  lVar10 = (long)local_58;
  if ((*(int *)(lVar7 + 0x108) != 0) && ((*(byte *)(*(long *)(lVar7 + 0x100) + lVar10) & 1) != 0)) {
    iVar8 = *(int *)(lVar7 + 0x20);
    lVar12 = *(long *)(lVar7 + 0x18);
    iVar15 = local_58 - iVar8;
    if (local_58 < iVar8) {
      iVar15 = local_58;
      if (*(int *)(lVar7 + 0x98) != 0) {
        iVar15 = *(int *)(*(long *)(lVar7 + 0x90) + lVar10 * 4);
      }
      if (iVar15 != -1) {
        lVar10 = *(long *)(lVar7 + 0xb0);
        goto LAB_030dedcc;
      }
      piVar11 = (int *)(lVar12 + lVar10 * 0x10);
    }
    else {
      lVar10 = *(long *)(lVar7 + 0xd0);
LAB_030dedcc:
      piVar11 = (int *)(lVar10 + (long)iVar15 * 0x10);
    }
    uVar17 = *(ushort *)(param_3 + 2);
    if ((int)(short)uVar17 < (int)(short)piVar11[2]) {
      local_54 = *piVar11 + (uint)uVar17;
    }
    else {
      local_54 = piVar11[1] + ((int)(short)uVar17 - (int)(short)piVar11[2] & 0xffffU);
    }
    iVar15 = param_3[1];
    iVar9 = iVar15 - iVar8;
    if (iVar15 < iVar8) {
      iVar9 = iVar15;
      if (*(int *)(lVar7 + 0x98) != 0) {
        iVar9 = *(int *)(*(long *)(lVar7 + 0x90) + (long)iVar15 * 4);
      }
      if (iVar9 != -1) {
        plVar16 = (long *)(lVar7 + 0xb0);
        goto LAB_030dee34;
      }
      iVar9 = iVar15;
    }
    else {
      plVar16 = (long *)(lVar7 + 0xd0);
LAB_030dee34:
      lVar12 = *plVar16;
    }
    uVar1 = *(ushort *)((long)param_3 + 10);
    sVar2 = *(short *)(lVar12 + (long)iVar9 * 0x10 + 8);
    if ((short)uVar1 < sVar2) {
      iVar8 = *(int *)(lVar12 + (long)iVar9 * 0x10) + (uint)uVar1;
    }
    else {
      iVar8 = *(int *)(lVar12 + (long)iVar9 * 0x10 + 4) + ((uint)uVar1 - (int)sVar2 & 0xffff);
    }
    goto LAB_030dee78;
  }
  iVar9 = param_3[1];
  iVar8 = *(int *)(lVar7 + 0x20);
  lVar12 = *(long *)(lVar7 + 0x18);
  iVar15 = iVar9 - iVar8;
  if (iVar9 < iVar8) {
    iVar15 = iVar9;
    if (*(int *)(lVar7 + 0x98) != 0) {
      iVar15 = *(int *)(*(long *)(lVar7 + 0x90) + (long)iVar9 * 4);
    }
    lVar13 = lVar12;
    iVar14 = iVar9;
    if (iVar15 != -1) {
      plVar16 = (long *)(lVar7 + 0xb0);
      goto LAB_030deccc;
    }
  }
  else {
    plVar16 = (long *)(lVar7 + 0xd0);
LAB_030deccc:
    lVar13 = *plVar16;
    iVar14 = iVar15;
  }
  uVar17 = *(ushort *)((long)param_3 + 10);
  iVar15 = (int)*(short *)(lVar13 + (long)iVar14 * 0x10 + 8);
  if ((short)uVar17 < iVar15) {
    local_54 = *(int *)(lVar13 + (long)iVar14 * 0x10) + (uint)uVar17;
  }
  else {
    local_54 = *(int *)(lVar13 + (long)iVar14 * 0x10 + 4) + ((short)uVar17 - iVar15 & 0xffffU);
  }
  iVar15 = local_58 - iVar8;
  if (local_58 < iVar8) {
    iVar15 = local_58;
    if (*(int *)(lVar7 + 0x98) != 0) {
      iVar15 = *(int *)(*(long *)(lVar7 + 0x90) + lVar10 * 4);
    }
    iVar8 = local_58;
    if (iVar15 != -1) {
      plVar16 = (long *)(lVar7 + 0xb0);
      goto LAB_030ded44;
    }
  }
  else {
    plVar16 = (long *)(lVar7 + 0xd0);
LAB_030ded44:
    lVar12 = *plVar16;
    iVar8 = iVar15;
  }
  uVar1 = *(ushort *)(param_3 + 2);
  sVar2 = *(short *)(lVar12 + (long)iVar8 * 0x10 + 8);
  if ((short)uVar1 < sVar2) {
    iVar8 = *(int *)(lVar12 + (long)iVar8 * 0x10) + (uint)uVar1;
  }
  else {
    iVar8 = *(int *)(lVar12 + (long)iVar8 * 0x10 + 4) + ((uint)uVar1 - (int)sVar2 & 0xffff);
  }
  iVar15 = local_58;
  local_58 = iVar9;
LAB_030dee78:
  iVar9 = local_58;
  local_68 = (int *)0x0;
  local_60 = 0x8000000000000000;
  local_78[0] = uVar17;
  local_70[0] = local_58;
  cVar5 = FUN_030df010(param_1,param_2,local_70,local_78);
  local_80[0] = iVar9;
  if (cVar5 != '\0') {
    FUN_030d9db8(param_1 + 0xb8,&local_58);
    local_80[0] = local_58;
  }
  local_88[0] = uVar17;
  FUN_030df1a8(param_2,local_80,local_88,&local_68,0);
  local_90[0] = iVar8;
  lVar7 = FUN_03092a6c(lVar6,local_90);
  piVar11 = local_68;
  *(int *)(lVar7 + 0xc) = *local_68;
  *(int *)(lVar7 + 8) = local_68[1];
  lVar6 = *(long *)(lVar6 + 0xe0) + (long)(local_68[1] - *(int *)(lVar6 + 0x30)) * 0x14;
  *(int *)(lVar6 + 8) = iVar8;
  *(int *)(lVar6 + 0xc) = iVar15;
  if (*(int *)(param_2 + 0x40) != 0) {
    iVar8 = *local_68;
    lVar6 = (long)*(int *)(param_2 + 0x40) * 0x18;
    plVar16 = *(long **)(param_2 + 0x38);
    do {
      lVar7 = *plVar16;
      if (lVar7 != 0) {
        if ((char)plVar16[2] != '\x01') {
          lVar7 = FUN_03065a74(plVar16);
        }
        local_38[0] = iVar8;
        FUN_03077488(lVar7,param_2,local_38);
      }
      plVar16 = plVar16 + 3;
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != 0);
    if (*(int *)(param_2 + 0x40) != 0) {
      plVar16 = *(long **)(param_2 + 0x38);
      lVar6 = (long)*(int *)(param_2 + 0x40) * 0x18;
      do {
        lVar7 = *plVar16;
        if (lVar7 != 0) {
          if ((char)plVar16[2] != '\x01') {
            lVar7 = FUN_03065a74(plVar16);
          }
          local_38[0] = iVar15;
          FUN_03077488(lVar7,param_2,local_38);
        }
        plVar16 = plVar16 + 3;
        lVar6 = lVar6 + -0x18;
      } while (lVar6 != 0);
    }
  }
  uVar4 = local_60;
  uVar3 = local_60 >> 0x20;
  local_60 = uVar3 << 0x20;
  if ((piVar11 != (int *)0x0) && (-1 < (long)uVar4)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,piVar11,uVar3 << 3);
  }
  return;
}


