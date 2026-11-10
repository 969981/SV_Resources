/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034677c0; name: FUN_034677c0
 */


undefined4 FUN_034677c0(long param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  size_t sVar9;
  char *pcVar10;
  undefined4 uVar11;
  uint *puVar12;
  ulong uVar13;
  char *__dest;
  char acStack_c0 [128];
  uint local_24;
  
  puVar5 = PTR_DAT_047e2fd0;
  if (param_2 == 0) {
    return 1;
  }
  puVar12 = (uint *)(param_1 + (ulong)*(uint *)(param_1 + 0x28) * 4 + 0x20);
  uVar4 = *puVar12;
  uVar13 = (ulong)param_2;
  if (uVar4 < param_2) {
    bVar6 = (uVar4 & 0x1f) != 0;
    uVar2 = param_2;
    if (bVar6) {
      uVar2 = param_2 + 0x1f;
    }
    uVar3 = 0;
    if (bVar6) {
      uVar3 = 0x20 - (uVar4 & 0x1f);
    }
    lVar8 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,uVar2,0x20);
    pcVar10 = (char *)(lVar8 + (ulong)uVar3);
    *(long *)(param_1 + 0x40) = lVar8;
    iVar7 = FUN_0346d17c(param_1 + 8,pcVar10,uVar13,&local_24);
    if (iVar7 != 1 || local_24 != param_2) {
      (**(code **)(puVar5 + 0x30))(0,*(undefined8 *)(param_1 + 0x40));
      *(undefined8 *)(param_1 + 0x40) = 0;
      return 1;
    }
  }
  else {
    *puVar12 = uVar4 - param_2;
    pcVar10 = *(char **)(param_1 + 0x58);
    if (pcVar10 == (char *)0x0) {
      pcVar10 = *(char **)(param_1 + 0x18);
      *(char **)(param_1 + 0x18) = pcVar10 + uVar13;
    }
    else {
      *(char **)(param_1 + 0x58) = pcVar10 + uVar13;
    }
  }
  if (*pcVar10 != '\0') {
    uVar13 = 0;
    do {
      uVar1 = uVar13 + 1;
      lVar8 = uVar13 + 1;
      uVar13 = uVar1;
    } while (pcVar10[lVar8] != '\0');
    if ((int)uVar1 != 0) {
      __dest = acStack_c0 + (0x80 - ((ulong)((int)uVar1 + 1) + 0xf & 0x1fffffff0));
      strncpy(__dest,pcVar10,uVar1 & 0xffffffff);
      puVar5 = PTR_DAT_047e7150;
      __dest[uVar1 & 0xffffffff] = '\0';
      if (*(char **)PTR_DAT_047e7150 != (char *)0x0) {
        iVar7 = strcmp(__dest,*(char **)PTR_DAT_047e7150);
        uVar11 = 0x53;
        if (iVar7 == 0) {
          uVar11 = 1;
        }
        goto LAB_03467944;
      }
      sVar9 = strlen(__dest);
      pcVar10 = (char *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0x10,sVar9 + 1);
      *(char **)puVar5 = pcVar10;
      if (pcVar10 == (char *)0x0) {
        uVar11 = 0x34;
        goto LAB_03467944;
      }
      strcpy(pcVar10,__dest);
    }
  }
  uVar11 = 1;
LAB_03467944:
  if (*(long *)(param_1 + 0x40) != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return uVar11;
}


