/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004f4588; name: FUN_004f4588
 */


uint FUN_004f4588(long param_1,long param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  ulong *puVar4;
  long *plVar5;
  uint *puVar6;
  double *pdVar7;
  float *pfVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  int iVar12;
  uint uVar13;
  long local_58;
  undefined *puStack_50;
  undefined ***local_48;
  undefined **local_40;
  long *plStack_38;
  
  if (*(uint *)(param_1 + 0x20) != 0xffffffff) {
    if (*(char *)(param_3 + 0x43) == '\0') {
      plVar5 = (long *)(*(long *)(param_3 + 0x50) + 0x28);
    }
    else if (*(long *)(param_3 + 0x60) == 0) {
      plVar5 = (long *)(*(long *)(param_3 + 0x28) + 0x80);
    }
    else {
      plVar5 = (long *)(*(long *)(param_3 + 0x60) + 0x50);
    }
    uVar13 = (int)((ulong)(param_3 - *plVar5) >> 3) * 0x286bca1b;
    if (*(int *)(*(long *)(param_1 + 0x18) +
                (-(ulong)(uVar13 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar13 << 2)) != -1) {
      if (*(char *)(param_3 + 0x43) == '\0') {
        plVar5 = (long *)(*(long *)(param_3 + 0x50) + 0x28);
      }
      else if (*(long *)(param_3 + 0x60) == 0) {
        plVar5 = (long *)(*(long *)(param_3 + 0x28) + 0x80);
      }
      else {
        plVar5 = (long *)(*(long *)(param_3 + 0x60) + 0x50);
      }
      uVar13 = (int)((ulong)(param_3 - *plVar5) >> 3) * 0x286bca1b;
      uVar13 = *(uint *)(*(long *)(param_1 + 0x18) +
                        (-(ulong)(uVar13 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar13 << 2));
      return *(uint *)(param_2 + (ulong)*(uint *)(param_1 + 0x20) +
                      ((ulong)(uVar13 >> 3) & 0x1ffffffc)) >> (ulong)(uVar13 & 0x1f) & 1;
    }
  }
  puVar4 = *(ulong **)(param_3 + 0x30);
  if ((puVar4 != (ulong *)0x0) &&
     (puStack_50 = PTR_LAB_047cd728, local_58 = param_3, *puVar4 != 0xffffffffffffffff)) {
    local_40 = &puStack_50;
    plStack_38 = &local_58;
    local_48 = &local_40;
    std::__call_once(puVar4,&local_48,(_func_void_void_ptr *)&LAB_004f9a40);
  }
  puVar2 = PTR_DAT_047cd750;
  iVar12 = *(int *)(PTR_DAT_047cd750 + (ulong)*(uint *)(param_3 + 0x38) * 4);
  if (iVar12 == 10) {
    if (*(long *)(param_1 + 8) == param_2) {
      return 0;
    }
    plVar5 = (long *)FUN_004f1094(param_1,param_2,param_3);
    bVar3 = *plVar5 == 0;
    goto LAB_004f4818;
  }
  puVar4 = *(ulong **)(param_3 + 0x30);
  if (puVar4 != (ulong *)0x0) {
    puStack_50 = PTR_LAB_047cd728;
    local_58 = param_3;
    if (*puVar4 != 0xffffffffffffffff) {
      local_40 = &puStack_50;
      plStack_38 = &local_58;
      local_48 = &local_40;
      std::__call_once(puVar4,&local_48,(_func_void_void_ptr *)&LAB_004f9a40);
    }
    iVar12 = *(int *)(puVar2 + (ulong)*(uint *)(param_3 + 0x38) * 4);
  }
  switch(iVar12) {
  case 1:
  case 8:
    puVar6 = (uint *)FUN_004f9d48(param_1,param_2,param_3);
    goto LAB_004f47a4;
  case 2:
    plVar5 = (long *)FUN_004f9e84(param_1,param_2,param_3);
    bVar3 = *plVar5 == 0;
    break;
  case 3:
    puVar6 = (uint *)FUN_004f9fc0(param_1,param_2,param_3);
LAB_004f47a4:
    uVar13 = *puVar6;
LAB_004f4814:
    bVar3 = uVar13 == 0;
    break;
  case 4:
    plVar5 = (long *)FUN_004fa0fc(param_1,param_2,param_3);
    bVar3 = *plVar5 == 0;
    break;
  case 5:
    pdVar7 = (double *)FUN_004fa374(param_1,param_2,param_3);
    bVar3 = *pdVar7 == 0.0;
    break;
  case 6:
    pfVar8 = (float *)FUN_004fa238(param_1,param_2,param_3);
    bVar3 = *pfVar8 == 0.0;
    break;
  case 7:
    pbVar10 = (byte *)FUN_004f9c0c(param_1,param_2,param_3);
    uVar13 = (uint)*pbVar10;
    goto LAB_004f4814;
  case 9:
    uVar9 = FUN_004f9a80((long *)(param_1 + 8),param_3);
    if ((uVar9 & 1) == 0) {
      puVar11 = (undefined8 *)FUN_004f0f58(param_1,param_2,param_3);
      bVar1 = *(byte *)*puVar11;
      if ((bVar1 & 1) == 0) {
        bVar3 = bVar1 >> 1 == 0;
      }
      else {
        bVar3 = *(long *)((byte *)*puVar11 + 8) == 0;
      }
    }
    else {
      pbVar10 = (byte *)FUN_004f0e1c(param_1,param_2,param_3);
      uVar9 = (ulong)(*pbVar10 >> 1);
      if ((*pbVar10 & 1) != 0) {
        uVar9 = *(ulong *)(pbVar10 + 8);
      }
      bVar3 = uVar9 == 0;
    }
    break;
  default:
    return 0;
  }
LAB_004f4818:
  return (uint)!bVar3;
}


