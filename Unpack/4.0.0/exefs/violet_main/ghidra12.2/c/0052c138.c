/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0052c138; name: FUN_0052c138
 */


ulong FUN_0052c138(long *param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1] - (int)lVar1;
  if ((iVar3 < 10) && (iVar3 < 1)) {
    if ((int)param_1[1] == (int)lVar1) {
      if (((0 < *(int *)((long)param_1 + 0x2c)) || ((int)param_1[3] == (int)param_1[5])) &&
         ((int)param_1[3] - *(int *)((long)param_1 + 0x2c) < (int)param_1[6])) {
        *(undefined1 *)((long)param_1 + 0x24) = 1;
        return 0;
      }
    }
    uVar4 = FUN_0052bfc0();
    return uVar4;
  }
  if (param_2 == 0) {
    *param_1 = lVar1 + 1;
    return 0;
  }
  uVar2 = (param_2 + (uint)*(byte *)(lVar1 + 1) * 0x80) - 0x80;
  if (-1 < (char)*(byte *)(lVar1 + 1)) {
    *param_1 = lVar1 + 2;
    return (ulong)uVar2;
  }
  uVar2 = (uVar2 + (uint)*(byte *)(lVar1 + 2) * 0x4000) - 0x4000;
  if (-1 < (char)*(byte *)(lVar1 + 2)) {
    *param_1 = lVar1 + 3;
    return (ulong)uVar2;
  }
  uVar2 = (uVar2 + (uint)*(byte *)(lVar1 + 3) * 0x200000) - 0x200000;
  if (-1 < (char)*(byte *)(lVar1 + 3)) {
    *param_1 = lVar1 + 4;
    return (ulong)uVar2;
  }
  uVar2 = uVar2 + (uint)*(byte *)(lVar1 + 4) * 0x10000000 + 0xf0000000;
  if (-1 < (char)*(byte *)(lVar1 + 4)) {
    *param_1 = lVar1 + 5;
    return (ulong)uVar2;
  }
  if (-1 < *(char *)(lVar1 + 5)) {
    *param_1 = lVar1 + 6;
    return (ulong)uVar2;
  }
  if (-1 < *(char *)(lVar1 + 6)) {
    *param_1 = lVar1 + 7;
    return (ulong)uVar2;
  }
  if (-1 < *(char *)(lVar1 + 7)) {
    *param_1 = lVar1 + 8;
    return (ulong)uVar2;
  }
  pcVar5 = (char *)(lVar1 + 9);
  if (*(char *)(lVar1 + 8) < '\0') {
    if (*pcVar5 < '\0') {
      return 0;
    }
    pcVar5 = (char *)(lVar1 + 10);
  }
  *param_1 = (long)pcVar5;
  return (ulong)uVar2;
}


