/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03092dcc; name: FUN_03092dcc
 */


void FUN_03092dcc(long param_1,int *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  
  iVar4 = *param_2;
  if (iVar4 < *(int *)(param_1 + 0x20)) {
    lVar8 = *(long *)(param_1 + 0x18);
    iVar6 = iVar4;
    if (*(int *)(param_1 + 0x98) != 0) {
      iVar6 = *(int *)(*(long *)(param_1 + 0x90) + (long)iVar4 * 4);
    }
    if (iVar6 == -1) goto LAB_03092e28;
    plVar5 = (long *)(param_1 + 0xb0);
    iVar4 = iVar6;
  }
  else {
    plVar5 = (long *)(param_1 + 0xd0);
    iVar4 = iVar4 - *(int *)(param_1 + 0x20);
  }
  lVar8 = *plVar5;
LAB_03092e28:
  puVar1 = (undefined4 *)(lVar8 + (long)iVar4 * 0x10);
  *param_3 = *puVar1;
  param_3[1] = puVar1[1];
  *(undefined8 *)(param_3 + 2) = *(undefined8 *)(puVar1 + 2);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x108) != 0) {
    uVar3 = *(undefined1 *)(*(long *)(param_1 + 0x100) + (long)*param_2);
  }
  *(undefined1 *)(param_3 + 4) = uVar3;
  iVar4 = *param_2;
  iVar2 = iVar4 - *(int *)(param_1 + 0x20);
  iVar6 = *(int *)(param_1 + 0x50);
  if (iVar4 < *(int *)(param_1 + 0x20)) {
    lVar8 = *(long *)(param_1 + 0x48);
    if (*(int *)(param_1 + 0x98) == 0) {
      iVar7 = iVar4;
    }
    else {
      iVar7 = *(int *)(*(long *)(param_1 + 0x90) + (long)iVar4 * 4);
    }
    iVar2 = iVar4;
    if (iVar7 != -1) {
      lVar8 = *(long *)(param_1 + 0x120);
      iVar2 = iVar7;
    }
  }
  else {
    lVar8 = *(long *)(param_1 + 0x140);
  }
  if ((int)(param_3[9] & 0x7fffffff) < iVar6) {
    FUN_02f5f190(param_3 + 6,PTR_PTR_047d1a50,(long)iVar6);
  }
  memcpy(*(void **)(param_3 + 6),(void *)(lVar8 + (long)(iVar2 * iVar6) * 4),(long)iVar6 << 2);
  param_3[8] = iVar6;
  return;
}


