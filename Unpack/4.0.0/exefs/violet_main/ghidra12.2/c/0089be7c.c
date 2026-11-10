/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0089be7c; name: FUN_0089be7c
 */


void FUN_0089be7c(long param_1,char *param_2,undefined4 param_3,undefined1 param_4,
                 undefined1 param_5,undefined4 param_6,uint param_7,long param_8)

{
  undefined1 *puVar1;
  long lVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined8 *puVar7;
  void *__s;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  bool bVar12;
  
  puVar5 = PTR_DAT_047d2268;
  puVar4 = PTR_DAT_047d2258;
  if (*param_2 == '\0') {
    iVar8 = 0;
    bVar12 = true;
  }
  else if (param_2[1] == '\0') {
    bVar12 = false;
    iVar8 = 1;
  }
  else if (param_2[2] == '\0') {
    bVar12 = false;
    iVar8 = 2;
  }
  else if (param_2[3] == '\0') {
    bVar12 = false;
    iVar8 = 3;
  }
  else if (param_2[4] == '\0') {
    bVar12 = false;
    iVar8 = 4;
  }
  else if (param_2[5] == '\0') {
    bVar12 = false;
    iVar8 = 5;
  }
  else if (param_2[6] == '\0') {
    bVar12 = false;
    iVar8 = 6;
  }
  else if (param_2[7] == '\0') {
    bVar12 = false;
    iVar8 = 7;
  }
  else if (param_2[8] == '\0') {
    bVar12 = false;
    iVar8 = 8;
  }
  else if (param_2[9] == '\0') {
    bVar12 = false;
    iVar8 = 9;
  }
  else if (param_2[10] == '\0') {
    bVar12 = false;
    iVar8 = 10;
  }
  else if (param_2[0xb] == '\0') {
    bVar12 = false;
    iVar8 = 0xb;
  }
  else if (param_2[0xc] == '\0') {
    bVar12 = false;
    iVar8 = 0xc;
  }
  else if (param_2[0xd] == '\0') {
    bVar12 = false;
    iVar8 = 0xd;
  }
  else if (param_2[0xe] == '\0') {
    bVar12 = false;
    iVar8 = 0xe;
  }
  else if (param_2[0xf] == '\0') {
    bVar12 = false;
    iVar8 = 0xf;
  }
  else if (param_2[0x10] == '\0') {
    bVar12 = false;
    iVar8 = 0x10;
  }
  else if (param_2[0x11] == '\0') {
    bVar12 = false;
    iVar8 = 0x11;
  }
  else if (param_2[0x12] == '\0') {
    bVar12 = false;
    iVar8 = 0x12;
  }
  else if (param_2[0x13] == '\0') {
    bVar12 = false;
    iVar8 = 0x13;
  }
  else if (param_2[0x14] == '\0') {
    bVar12 = false;
    iVar8 = 0x14;
  }
  else if (param_2[0x15] == '\0') {
    bVar12 = false;
    iVar8 = 0x15;
  }
  else if (param_2[0x16] == '\0') {
    bVar12 = false;
    iVar8 = 0x16;
  }
  else if (param_2[0x17] == '\0') {
    bVar12 = false;
    iVar8 = 0x17;
  }
  else if (param_2[0x18] == '\0') {
    bVar12 = false;
    iVar8 = 0x18;
  }
  else if (param_2[0x19] == '\0') {
    bVar12 = false;
    iVar8 = 0x19;
  }
  else if (param_2[0x1a] == '\0') {
    bVar12 = false;
    iVar8 = 0x1a;
  }
  else if (param_2[0x1b] == '\0') {
    bVar12 = false;
    iVar8 = 0x1b;
  }
  else if (param_2[0x1c] == '\0') {
    bVar12 = false;
    iVar8 = 0x1c;
  }
  else if (param_2[0x1d] == '\0') {
    bVar12 = false;
    iVar8 = 0x1d;
  }
  else if (param_2[0x1e] == '\0') {
    bVar12 = false;
    iVar8 = 0x1e;
  }
  else {
    bVar12 = false;
    iVar8 = 0x1f;
    if (param_2[0x1f] != '\0') {
      iVar8 = 0x20;
    }
  }
  pcVar6 = (char *)(**(code **)PTR_DAT_047d2258)(iVar8 + 1,4,*(undefined8 *)PTR_DAT_047d2268);
  pcVar9 = pcVar6;
  if (bVar12) {
    pcVar10 = pcVar6;
  }
  else {
    do {
      cVar3 = *param_2;
      pcVar10 = pcVar9;
      if (cVar3 == '\0') break;
      param_2 = param_2 + 1;
      iVar8 = iVar8 + -1;
      pcVar10 = pcVar9 + 1;
      *pcVar9 = cVar3;
      pcVar9 = pcVar10;
    } while (iVar8 != 0);
  }
  *pcVar10 = '\0';
  do {
    cVar3 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar3 != '\0');
  *(char **)(param_1 + 0x10) = pcVar6;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(undefined1 *)(param_1 + 0x1c) = param_4;
  *(undefined1 *)(param_1 + 0x1d) = param_5;
  *(undefined4 *)(param_1 + 0x20) = 1;
  puVar7 = (undefined8 *)(**(code **)puVar4)(0x10,4,*(undefined8 *)puVar5);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = 0;
    puVar7[1] = 0;
  }
  *(undefined8 **)(param_1 + 0x28) = puVar7;
  *(undefined4 *)puVar7 = param_6;
  *(uint *)(*(long *)(param_1 + 0x28) + 4) = param_7;
  __s = (void *)(**(code **)puVar4)((long)(int)param_7,4,*(undefined8 *)puVar5);
  if ((0 < (int)param_7) && (__s != (void *)0x0)) {
    memset(__s,0,(ulong)param_7);
  }
  *(void **)(*(long *)(param_1 + 0x28) + 8) = __s;
  if (0 < (int)param_7) {
    if (param_7 == 1) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      do {
        puVar1 = (undefined1 *)(param_8 + uVar11);
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + uVar11) = *puVar1;
        lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8) + uVar11;
        uVar11 = uVar11 + 2;
        *(undefined1 *)(lVar2 + 1) = puVar1[1];
      } while (((ulong)param_7 & 0xfffffffe) != uVar11);
    }
    if ((param_7 & 1) != 0) {
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + uVar11) =
           *(undefined1 *)(param_8 + uVar11);
    }
  }
  return;
}


