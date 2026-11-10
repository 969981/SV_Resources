/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005123e0; name: FUN_005123e0
 */


ulong FUN_005123e0(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = FUN_005121c0();
  lVar3 = *param_4;
  iVar1 = (int)uVar2;
  lVar4 = *param_3;
  if (*(char *)(lVar3 + 0x43) == '\0') {
    if ((*(char *)(lVar4 + 0x43) == '\0') &&
       ((int)((ulong)(lVar4 - *(long *)(*(long *)(lVar4 + 0x50) + 0x28)) >> 3) * 0x286bca1b <=
        (int)((ulong)(lVar3 - *(long *)(*(long *)(lVar3 + 0x50) + 0x28)) >> 3) * 0x286bca1b)) {
      return uVar2;
    }
  }
  else {
    if (*(char *)(lVar4 + 0x43) == '\0') {
      return uVar2;
    }
    if (*(int *)(lVar4 + 0x44) <= *(int *)(lVar3 + 0x44)) {
      return uVar2;
    }
  }
  *param_3 = lVar3;
  uVar2 = (ulong)(iVar1 + 1);
  *param_4 = lVar4;
  lVar3 = *param_3;
  lVar4 = *param_2;
  if (*(char *)(lVar3 + 0x43) == '\0') {
    if ((*(char *)(lVar4 + 0x43) == '\0') &&
       ((int)((ulong)(lVar4 - *(long *)(*(long *)(lVar4 + 0x50) + 0x28)) >> 3) * 0x286bca1b <=
        (int)((ulong)(lVar3 - *(long *)(*(long *)(lVar3 + 0x50) + 0x28)) >> 3) * 0x286bca1b)) {
      return uVar2;
    }
  }
  else {
    if (*(char *)(lVar4 + 0x43) == '\0') {
      return uVar2;
    }
    if (*(int *)(lVar4 + 0x44) <= *(int *)(lVar3 + 0x44)) {
      return uVar2;
    }
  }
  *param_2 = lVar3;
  *param_3 = lVar4;
  lVar4 = *param_2;
  lVar3 = *param_1;
  if (*(char *)(lVar4 + 0x43) == '\0') {
    if ((*(char *)(lVar3 + 0x43) != '\0') ||
       ((int)((ulong)(lVar4 - *(long *)(*(long *)(lVar4 + 0x50) + 0x28)) >> 3) * 0x286bca1b <
        (int)((ulong)(lVar3 - *(long *)(*(long *)(lVar3 + 0x50) + 0x28)) >> 3) * 0x286bca1b))
    goto LAB_00512560;
  }
  else if ((*(char *)(lVar3 + 0x43) != '\0') && (*(int *)(lVar4 + 0x44) < *(int *)(lVar3 + 0x44))) {
LAB_00512560:
    *param_1 = lVar4;
    *param_2 = lVar3;
    return (ulong)(iVar1 + 3);
  }
  return (ulong)(iVar1 + 2);
}


