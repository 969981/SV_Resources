/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0052be68; name: FUN_0052be68
 */


ulong FUN_0052be68(ulong *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  char *pcVar3;
  undefined1 auVar4 [12];
  
  uVar2 = *param_1;
  if (((int)param_1[1] - (int)uVar2 < 10) && (param_1[1] <= uVar2)) {
    auVar4 = FUN_0052bc08();
    uVar2 = auVar4._0_8_ & 0xffffffff;
    if ((auVar4._8_4_ & 1) == 0) {
      uVar2 = 0xffffffffffffffff;
    }
    return uVar2;
  }
  uVar1 = (param_2 + (uint)*(byte *)(uVar2 + 1) * 0x80) - 0x80;
  if ((char)*(byte *)(uVar2 + 1) < '\0') {
    uVar1 = (uVar1 + (uint)*(byte *)(uVar2 + 2) * 0x4000) - 0x4000;
    if (-1 < (char)*(byte *)(uVar2 + 2)) {
      *param_1 = uVar2 + 3;
      return (ulong)uVar1;
    }
    uVar1 = (uVar1 + (uint)*(byte *)(uVar2 + 3) * 0x200000) - 0x200000;
    if (-1 < (char)*(byte *)(uVar2 + 3)) {
      *param_1 = uVar2 + 4;
      return (ulong)uVar1;
    }
    uVar1 = uVar1 + (uint)*(byte *)(uVar2 + 4) * 0x10000000 + 0xf0000000;
    if (-1 < (char)*(byte *)(uVar2 + 4)) {
      *param_1 = uVar2 + 5;
      return (ulong)uVar1;
    }
    if (-1 < *(char *)(uVar2 + 5)) {
      *param_1 = uVar2 + 6;
      return (ulong)uVar1;
    }
    if (-1 < *(char *)(uVar2 + 6)) {
      *param_1 = uVar2 + 7;
      return (ulong)uVar1;
    }
    if (-1 < *(char *)(uVar2 + 7)) {
      *param_1 = uVar2 + 8;
      return (ulong)uVar1;
    }
    pcVar3 = (char *)(uVar2 + 9);
    if (*(char *)(uVar2 + 8) < '\0') {
      if (*pcVar3 < '\0') {
        return 0xffffffffffffffff;
      }
      *param_1 = uVar2 + 10;
      return (ulong)uVar1;
    }
  }
  else {
    pcVar3 = (char *)(uVar2 + 2);
  }
  *param_1 = (ulong)pcVar3;
  return (ulong)uVar1;
}


