/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03376114; name: FUN_03376114
 */


void FUN_03376114(long *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  char *pcVar12;
  int local_70;
  undefined4 local_6c;
  undefined1 local_68;
  
  *param_1 = 0;
  param_1[1] = -0x8000000000000000;
  param_1[2] = (long)&DAT_03d7702c;
  *(undefined4 *)(param_1 + 3) = 0;
  plVar6 = param_1 + 4;
  *plVar6 = 0;
  param_1[5] = -0x8000000000000000;
  param_1[6] = (long)&DAT_03d7702c;
  *(undefined4 *)(param_1 + 7) = 0;
  plVar7 = param_1 + 8;
  *plVar7 = 0;
  param_1[0xf] = (long)&DAT_03d7702c;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[9] = -0x8000000000000000;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = -0x8000000000000000;
  param_1[0x11] = -1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  iVar4 = FUN_033787f8();
  if ((int)param_1[1] == iVar4) {
    iVar9 = iVar4 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar4) {
      FUN_03335164(param_1,PTR_PTR_047d1a50,(long)iVar9);
      iVar4 = (int)param_1[1];
    }
    puVar1 = (undefined8 *)(*param_1 + (long)iVar4 * 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(int *)(param_1 + 1) = iVar9;
  }
  uVar10 = (param_3 - param_2 >> 3) * -0x5555555555555555;
  iVar9 = (int)uVar10;
  iVar4 = iVar9;
  if (iVar9 < 2) {
    iVar4 = 1;
  }
  if ((int)(*(uint *)((long)param_1 + 0x4c) & 0x7fffffff) < iVar4) {
    FUN_031d93e4(plVar7,PTR_PTR_047d1a50,iVar4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  if ((int)uVar8 < iVar4) {
    *(int *)(param_1 + 9) = iVar4;
    memset((void *)(param_1[8] + (long)(int)uVar8 * 8),0,(ulong)(iVar4 + ~uVar8) * 8 + 8);
  }
  else if (iVar4 < (int)uVar8) {
    *(int *)(param_1 + 9) = iVar4;
  }
  if ((int)(*(uint *)((long)param_1 + 0x2c) & 0x7fffffff) < iVar9) {
    FUN_033788d8(plVar6,(long)iVar9);
  }
  iVar4 = (int)param_1[7];
  uVar8 = iVar9 + 1;
  uVar2 = (-(ulong)(uVar8 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar8 << 1) + (long)(int)uVar8;
  if (((((uint)((long)iVar4 << 1) < (uint)uVar2) && (-2 < iVar9)) && (uVar2 >> 0x20 == 0)) &&
     ((-1 < iVar4 && (((long)iVar4 & 0x7fffffffffffffffU) >> 0x1f == 0)))) {
    FUN_02e8d9d0(param_1 + 6);
  }
  puVar3 = PTR_DAT_047e5f40;
  if (1 < uVar10) {
    uVar8 = 2;
    do {
      local_70 = uVar8 - 1;
      plVar5 = (long *)(param_2 + (long)local_70 * 0x18);
      if (*plVar5 != 0) {
        lVar11 = (long)local_70;
        pcVar12 = (char *)(param_2 + lVar11 * 0x18 + 0x14);
        local_68 = *pcVar12 != '\0';
        if ((bool)local_68) {
          local_6c = *(undefined4 *)(param_2 + lVar11 * 0x18 + 0x10);
        }
        FUN_033786f4(plVar6,plVar5,&local_70);
        if (*pcVar12 == '\0') {
          *(undefined **)(*plVar7 + lVar11 * 8) = puVar3;
        }
      }
      uVar2 = (ulong)uVar8;
      uVar8 = uVar8 + 1;
    } while (uVar2 < uVar10);
  }
  return;
}


