/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0089b398; name: FUN_0089b398
 */


void FUN_0089b398(long param_1,undefined8 param_2,long param_3,char *param_4)

{
  long lVar1;
  char cVar2;
  long lVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_1 + 0x40);
  lVar1 = param_1 + 0x38;
  if (lVar1 != lVar9) {
    do {
      lVar3 = (**(code **)(**(long **)(param_3 + 0x18) + 0x78))
                        (*(long **)(param_3 + 0x18),*(undefined8 *)(lVar9 + 0x10),1);
      if (lVar3 == 0) {
        return;
      }
      lVar9 = *(long *)(lVar9 + 8);
    } while (lVar1 != lVar9);
    lVar9 = *(long *)(param_1 + 0x40);
  }
  for (; lVar1 != lVar9; lVar9 = *(long *)(lVar9 + 8)) {
    if (*(int *)(lVar9 + 0x18) == 0x1b) {
      *(undefined1 *)(param_1 + 0x10f) = 1;
      *(long *)(param_1 + 0x10) = param_3;
      cVar2 = *param_4;
      goto joined_r0x0089b554;
    }
  }
  *(undefined1 *)(param_1 + 0x10f) = 0;
  *(long *)(param_1 + 0x10) = param_3;
  cVar2 = *param_4;
joined_r0x0089b554:
  if (cVar2 == '\0') {
    iVar5 = 0;
    bVar8 = true;
  }
  else if (param_4[1] == '\0') {
    bVar8 = false;
    iVar5 = 1;
  }
  else if (param_4[2] == '\0') {
    bVar8 = false;
    iVar5 = 2;
  }
  else if (param_4[3] == '\0') {
    bVar8 = false;
    iVar5 = 3;
  }
  else if (param_4[4] == '\0') {
    bVar8 = false;
    iVar5 = 4;
  }
  else if (param_4[5] == '\0') {
    bVar8 = false;
    iVar5 = 5;
  }
  else if (param_4[6] == '\0') {
    bVar8 = false;
    iVar5 = 6;
  }
  else if (param_4[7] == '\0') {
    bVar8 = false;
    iVar5 = 7;
  }
  else if (param_4[8] == '\0') {
    bVar8 = false;
    iVar5 = 8;
  }
  else if (param_4[9] == '\0') {
    bVar8 = false;
    iVar5 = 9;
  }
  else if (param_4[10] == '\0') {
    bVar8 = false;
    iVar5 = 10;
  }
  else if (param_4[0xb] == '\0') {
    bVar8 = false;
    iVar5 = 0xb;
  }
  else if (param_4[0xc] == '\0') {
    bVar8 = false;
    iVar5 = 0xc;
  }
  else if (param_4[0xd] == '\0') {
    bVar8 = false;
    iVar5 = 0xd;
  }
  else if (param_4[0xe] == '\0') {
    bVar8 = false;
    iVar5 = 0xe;
  }
  else if (param_4[0xf] == '\0') {
    bVar8 = false;
    iVar5 = 0xf;
  }
  else if (param_4[0x10] == '\0') {
    bVar8 = false;
    iVar5 = 0x10;
  }
  else if (param_4[0x11] == '\0') {
    bVar8 = false;
    iVar5 = 0x11;
  }
  else if (param_4[0x12] == '\0') {
    bVar8 = false;
    iVar5 = 0x12;
  }
  else if (param_4[0x13] == '\0') {
    bVar8 = false;
    iVar5 = 0x13;
  }
  else if (param_4[0x14] == '\0') {
    bVar8 = false;
    iVar5 = 0x14;
  }
  else if (param_4[0x15] == '\0') {
    bVar8 = false;
    iVar5 = 0x15;
  }
  else if (param_4[0x16] == '\0') {
    bVar8 = false;
    iVar5 = 0x16;
  }
  else if (param_4[0x17] == '\0') {
    bVar8 = false;
    iVar5 = 0x17;
  }
  else if (param_4[0x18] == '\0') {
    bVar8 = false;
    iVar5 = 0x18;
  }
  else if (param_4[0x19] == '\0') {
    bVar8 = false;
    iVar5 = 0x19;
  }
  else if (param_4[0x1a] == '\0') {
    bVar8 = false;
    iVar5 = 0x1a;
  }
  else if (param_4[0x1b] == '\0') {
    bVar8 = false;
    iVar5 = 0x1b;
  }
  else if (param_4[0x1c] == '\0') {
    bVar8 = false;
    iVar5 = 0x1c;
  }
  else if (param_4[0x1d] == '\0') {
    bVar8 = false;
    iVar5 = 0x1d;
  }
  else if (param_4[0x1e] == '\0') {
    bVar8 = false;
    iVar5 = 0x1e;
  }
  else {
    bVar8 = false;
    iVar5 = 0x1f;
    if (param_4[0x1f] != '\0') {
      iVar5 = 0x20;
    }
  }
  pcVar4 = (char *)(**(code **)PTR_DAT_047d2258)(iVar5 + 1,4,*(undefined8 *)PTR_DAT_047d2268);
  pcVar6 = pcVar4;
  pcVar7 = pcVar4;
  if (!bVar8) {
    do {
      cVar2 = *param_4;
      pcVar7 = pcVar6;
      if (cVar2 == '\0') break;
      param_4 = param_4 + 1;
      iVar5 = iVar5 + -1;
      pcVar7 = pcVar6 + 1;
      *pcVar6 = cVar2;
      pcVar6 = pcVar7;
    } while (iVar5 != 0);
  }
  *pcVar7 = '\0';
  do {
    cVar2 = *param_4;
    param_4 = param_4 + 1;
  } while (cVar2 != '\0');
  *(char **)(param_1 + 0x18) = pcVar4;
  FUN_008bd300(param_1 + 0x48,param_3,param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined2 *)(param_1 + 0x10d) = 0;
  FUN_0089c344(param_1 + 0x130,param_1 + 0x38);
  return;
}


