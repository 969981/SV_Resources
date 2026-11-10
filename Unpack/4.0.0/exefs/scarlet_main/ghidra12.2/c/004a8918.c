/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004a8918; name: FUN_004a8918
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_004a8918(undefined8 *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  byte *pbVar3;
  undefined *puVar4;
  long lVar5;
  ulong *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  byte *pbVar9;
  long lVar10;
  long *plVar11;
  long *local_58;
  undefined *local_50;
  long **pplStack_48;
  undefined **local_38;
  
  uVar7 = *param_1;
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
  puVar4 = PTR_DAT_047cba80;
  puVar6 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    puVar6 = (ulong *)*puVar6;
  }
  puVar8 = *(undefined **)(param_2 + 0x18);
  if (puVar8 == PTR_DAT_047cba80) {
    FUN_001fcdc8((undefined8 *)(param_2 + 0x18),puVar6);
    puVar6 = (ulong *)param_1[5];
  }
  else {
    FUN_001fcec0(puVar8,uVar7);
    puVar6 = (ulong *)param_1[5];
  }
  if ((puVar6 != (ulong *)0x0) && (local_58 = param_1 + 3, *puVar6 != 0xffffffffffffffff)) {
    pplStack_48 = &local_58;
    local_38 = &local_50;
    local_50 = PTR_FUN_047cd760;
    std::__call_once(puVar6,&local_38,(_func_void_void_ptr *)&LAB_004c9520);
  }
  plVar11 = param_1 + 3;
  if (*(char *)(*plVar11 + 0x8d) == '\0') {
    FUN_004a8c68(param_2,&DAT_03bdface);
  }
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 2;
  plVar1 = (long *)(param_2 + 0x20);
  puVar6 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    puVar8 = (undefined *)*plVar1;
  }
  else {
    puVar6 = (ulong *)*puVar6;
    puVar8 = (undefined *)*plVar1;
  }
  if (puVar8 == puVar4) {
    FUN_001fcdc8(plVar1,puVar6,PTR_DAT_047cba80);
    puVar8 = (undefined *)*plVar1;
    puVar6 = (ulong *)param_1[5];
  }
  else {
    puVar6 = (ulong *)param_1[5];
  }
  if ((puVar6 != (ulong *)0x0) && (local_58 = plVar11, *puVar6 != 0xffffffffffffffff)) {
    pplStack_48 = &local_58;
    local_38 = &local_50;
    local_50 = PTR_FUN_047cd760;
    std::__call_once(puVar6,&local_38,(_func_void_void_ptr *)&LAB_004c9520);
  }
  pbVar9 = *(byte **)(param_1[3] + 8);
  uVar2 = *(ulong *)(pbVar9 + 8);
  pbVar3 = *(byte **)(pbVar9 + 0x10);
  if ((*pbVar9 & 1) == 0) {
    pbVar3 = pbVar9 + 1;
    uVar2 = (ulong)(*pbVar9 >> 1);
  }
  FUN_0021d540(puVar8,pbVar3,uVar2);
  puVar6 = (ulong *)param_1[9];
  plVar11 = param_1 + 7;
  if ((puVar6 != (ulong *)0x0) && (local_58 = plVar11, *puVar6 != 0xffffffffffffffff)) {
    pplStack_48 = &local_58;
    local_50 = PTR_FUN_047cd760;
    local_38 = &local_50;
    std::__call_once(puVar6,&local_38,(_func_void_void_ptr *)&LAB_004c9520);
  }
  if (*(char *)(*plVar11 + 0x8d) == '\0') {
    FUN_004a8d94(param_2,&DAT_03bdface);
  }
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 4;
  plVar1 = (long *)(param_2 + 0x28);
  puVar6 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    puVar8 = (undefined *)*plVar1;
  }
  else {
    puVar6 = (ulong *)*puVar6;
    puVar8 = (undefined *)*plVar1;
  }
  if (puVar8 == puVar4) {
    FUN_001fcdc8(plVar1,puVar6,PTR_DAT_047cba80);
    puVar8 = (undefined *)*plVar1;
    puVar6 = (ulong *)param_1[9];
  }
  else {
    puVar6 = (ulong *)param_1[9];
  }
  if ((puVar6 != (ulong *)0x0) && (local_58 = plVar11, *puVar6 != 0xffffffffffffffff)) {
    pplStack_48 = &local_58;
    local_38 = &local_50;
    local_50 = PTR_FUN_047cd760;
    std::__call_once(puVar6,&local_38,(_func_void_void_ptr *)&LAB_004c9520);
  }
  pbVar9 = *(byte **)(param_1[7] + 8);
  uVar2 = *(ulong *)(pbVar9 + 8);
  pbVar3 = *(byte **)(pbVar9 + 0x10);
  if ((*pbVar9 & 1) == 0) {
    pbVar3 = pbVar9 + 1;
    uVar2 = (ulong)(*pbVar9 >> 1);
  }
  FUN_0021d540(puVar8,pbVar3,uVar2);
  lVar10 = param_1[0xb];
  lVar5 = FUN_004e0efc();
  if (lVar10 != lVar5) {
    lVar5 = *(long *)(param_2 + 0x30);
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 8;
    if (lVar5 == 0) {
      puVar6 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_2 + 8) & 1) != 0) {
        puVar6 = (ulong *)*puVar6;
      }
      lVar5 = FUN_004e73d0(puVar6);
      *(long *)(param_2 + 0x30) = lVar5;
    }
    FUN_004e17b8(lVar5,param_1[0xb]);
  }
  if (*(char *)(param_1 + 0xc) != '\0') {
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x10;
    *(undefined1 *)(param_2 + 0x38) = 1;
  }
  if (*(char *)((long)param_1 + 0x61) != '\0') {
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x20;
    *(undefined1 *)(param_2 + 0x39) = 1;
  }
  return;
}


