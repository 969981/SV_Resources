/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c51134; name: FUN_00c51134
 */


void FUN_00c51134(char *param_1,undefined8 *param_2,char *param_3)

{
  void *__s1;
  char *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  
  pcVar1 = param_3;
  if (*param_1 != '\0') {
    pcVar1 = param_1;
  }
  FUN_00c52430(param_2,pcVar1);
  if ((*(long *)(param_1 + 0x10) != 0) && (*(int *)(*(long *)(param_1 + 0x10) + 0xc) != 0)) {
    fVar11 = *(float *)(param_1 + 0x34);
    fVar12 = *(float *)(param_1 + 0x38);
    if ((*(float *)((long)param_2 + 0x47c) != *(float *)(param_1 + 0x30)) ||
       ((*(float *)(param_2 + 0x90) != fVar11 || (*(float *)((long)param_2 + 0x484) != fVar12)))) {
      *(float *)((long)param_2 + 0x47c) = *(float *)(param_1 + 0x30);
      *(float *)(param_2 + 0x90) = fVar11;
      *(float *)((long)param_2 + 0x484) = fVar12;
      (**(code **)PTR_DAT_047e0ce8)(param_2[5]);
    }
  }
  if (*(char *)(param_2 + 0x3a) != param_1[0x44]) {
    *(char *)(param_2 + 0x3a) = param_1[0x44];
    (**(code **)PTR_DAT_047e0d00)(param_2[5]);
  }
  pcVar1 = param_3 + 0x10;
  if (param_1[0x48] != '\0') {
    pcVar1 = param_1 + 0x48;
  }
  FUN_00c52644(param_2,pcVar1);
  cVar5 = param_1[0x80];
  fVar11 = *(float *)(param_1 + 0x78);
  fVar12 = *(float *)(param_1 + 0x7c);
  if ((*(char *)((long)param_2 + 0x1c4) != cVar5) ||
     ((cVar5 != '\0' &&
      ((*(float *)(param_2 + 0x39) != fVar11 || (*(float *)((long)param_2 + 0x1cc) != fVar12)))))) {
    *(char *)((long)param_2 + 0x1c4) = cVar5;
    *(float *)(param_2 + 0x39) = fVar11;
    *(float *)((long)param_2 + 0x1cc) = fVar12;
    (**(code **)PTR_DAT_047e0d08)(param_2[5]);
  }
  puVar7 = PTR_DAT_047e0cc8;
  iVar8 = *(int *)(param_1 + 0x84);
  iVar2 = *(int *)(param_1 + 0x88);
  if (*(int *)(param_2 + 0x76) != iVar8) {
    (**(code **)PTR_DAT_047e0cc8)(param_2[5],1,iVar8);
    *(int *)(param_2 + 0x76) = iVar8;
  }
  if (*(int *)((long)param_2 + 0x3bc) != iVar2) {
    (**(code **)puVar7)(param_2[5],2,iVar2);
    *(int *)((long)param_2 + 0x3bc) = iVar2;
  }
  puVar7 = PTR_DAT_047e0cd0;
  iVar8 = *(int *)(param_1 + 0x8c);
  iVar2 = *(int *)(param_1 + 0x90);
  if (*(int *)((long)param_2 + 0x3b4) != iVar8) {
    (**(code **)PTR_DAT_047e0cd0)(param_2[5],1,iVar8);
    *(int *)((long)param_2 + 0x3b4) = iVar8;
  }
  if (*(int *)(param_2 + 0x78) != iVar2) {
    (**(code **)puVar7)(param_2[5],2,iVar2);
    *(int *)(param_2 + 0x78) = iVar2;
  }
  puVar7 = PTR_DAT_047e0cd8;
  iVar8 = *(int *)(param_1 + 0x94);
  iVar2 = *(int *)(param_1 + 0x98);
  if (*(int *)(param_2 + 0x77) != iVar8) {
    (**(code **)PTR_DAT_047e0cd8)(param_2[5],1,iVar8);
    *(int *)(param_2 + 0x77) = iVar8;
  }
  if (*(int *)((long)param_2 + 0x3c4) != iVar2) {
    (**(code **)puVar7)(param_2[5],2,iVar2);
    *(int *)((long)param_2 + 0x3c4) = iVar2;
  }
  cVar5 = param_1[0x3d];
  (**(code **)PTR_DAT_047e0ce0)(param_2[5],cVar5);
  *(char *)(param_2 + 0x91) = cVar5;
  if (cVar5 != '\0') {
    (**(code **)PTR_DAT_047e0cf8)(*(undefined4 *)(param_1 + 0x40),param_2[5]);
  }
  pcVar1 = param_3 + 0x20;
  if (param_1[0xa0] != '\0') {
    pcVar1 = param_1 + 0xa0;
  }
  cVar5 = *pcVar1;
  if ((cVar5 == '\0') || (*(char *)(param_2 + 0x79) == '\0')) {
    if (*(char *)(param_2 + 0x79) == '\0' && cVar5 == '\0') goto LAB_00c51304;
    uVar9 = *(undefined8 *)(pcVar1 + 8);
    param_2[0x79] = *(undefined8 *)pcVar1;
    param_2[0x7a] = uVar9;
    if (cVar5 == '\0') goto LAB_00c51304;
  }
  else {
    if (*(long *)(pcVar1 + 8) == param_2[0x7a]) goto LAB_00c51304;
    uVar9 = *(undefined8 *)(pcVar1 + 8);
    param_2[0x79] = *(undefined8 *)pcVar1;
    param_2[0x7a] = uVar9;
  }
  uVar9 = FUN_00c52c80(*param_2);
  (**(code **)PTR_DAT_047e0cf0)(param_2[5],uVar9);
LAB_00c51304:
  pcVar1 = param_3 + 0x30;
  if (param_1[0xd8] != '\0') {
    pcVar1 = param_1 + 0xd8;
  }
  FUN_00c52858(param_2,pcVar1);
  FUN_00c51b1c(param_1,param_2,param_3 + 0x40);
  piVar10 = *(int **)(param_1 + 0x1a0);
  piVar3 = *(int **)(param_1 + 0x1a8);
  if (piVar3 == piVar10) {
    if (param_3[0xc0] != '\0') {
      __s1 = (void *)((long)param_2 + 0x144);
      iVar8 = memcmp(__s1,param_3 + 0xc4,0x80);
      if (iVar8 != 0) {
        memcpy(__s1,param_3 + 0xc4,0x80);
        (**(code **)PTR_DAT_047e0c90)(param_2[5],0,8,__s1);
      }
    }
  }
  else if (piVar10 != piVar3) {
    iVar4 = *piVar10;
    uVar6 = iVar4 << 2;
    iVar8 = piVar10[3];
    iVar2 = piVar10[4];
    *(undefined8 *)((long)param_2 + (ulong)uVar6 * 4 + 0x144) = *(undefined8 *)(piVar10 + 1);
    *(int *)((long)param_2 + (ulong)uVar6 * 4 + 0x14c) = iVar8;
    *(int *)((long)param_2 + (ulong)uVar6 * 4 + 0x150) = iVar2;
    puVar7 = PTR_DAT_047e0c90;
    (**(code **)PTR_DAT_047e0c90)(param_2[5],iVar4,1);
    if (piVar10 + 5 != piVar3) {
      iVar4 = piVar10[5];
      uVar6 = iVar4 << 2;
      iVar8 = piVar10[8];
      iVar2 = piVar10[9];
      *(undefined8 *)((long)param_2 + (ulong)uVar6 * 4 + 0x144) = *(undefined8 *)(piVar10 + 6);
      *(int *)((long)param_2 + (ulong)uVar6 * 4 + 0x14c) = iVar8;
      *(int *)((long)param_2 + (ulong)uVar6 * 4 + 0x150) = iVar2;
      (**(code **)puVar7)(param_2[5],iVar4,1);
      for (piVar10 = piVar10 + 10; piVar10 != piVar3; piVar10 = piVar10 + 5) {
        iVar4 = *piVar10;
        uVar6 = iVar4 << 2;
        iVar8 = piVar10[3];
        iVar2 = piVar10[4];
        *(undefined8 *)((long)param_2 + (ulong)uVar6 * 4 + 0x144) = *(undefined8 *)(piVar10 + 1);
        *(int *)((long)param_2 + (ulong)uVar6 * 4 + 0x14c) = iVar8;
        *(int *)((long)param_2 + (ulong)uVar6 * 4 + 0x150) = iVar2;
        (**(code **)puVar7)(param_2[5],iVar4,1);
      }
    }
  }
  pcVar1 = param_3 + 0x148;
  if (param_1[0x1d8] != '\0') {
    pcVar1 = param_1 + 0x1d8;
  }
  FUN_00c52a6c(param_2,pcVar1);
  return;
}


