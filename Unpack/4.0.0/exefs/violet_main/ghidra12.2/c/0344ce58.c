/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0344ce58; name: FUN_0344ce58
 */


undefined8 FUN_0344ce58(long param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  int *piVar3;
  byte bVar4;
  
  if (*(char *)(param_1 + 0x29) != *(char *)(param_2 + 0x29)) {
    return 0;
  }
  bVar4 = *(byte *)(param_1 + 0x28);
  uVar1 = bVar4 - 0x80;
  if (0x20 < uVar1 || (1L << ((ulong)uVar1 & 0x3f) & 0x100010001U) == 0) {
    return 0;
  }
  uVar1 = *(byte *)(param_2 + 0x28) - 0x80;
  if (0x20 < uVar1) {
    return 0;
  }
  if ((1L << ((ulong)uVar1 & 0x3f) & 0x100010001U) == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x2c) != *(char *)(param_2 + 0x2c)) {
    return 0;
  }
  bVar2 = *(byte *)(param_2 + 0x38);
  if ((bVar2 >> 2 & 1) != 0) {
    return 0;
  }
  if (bVar4 == 0x80) {
LAB_0344cee4:
    if ((*(byte *)(param_2 + 0x28) == 0x90) && (*(char *)(param_2 + 0x2d) != '\0')) {
      *(undefined1 *)(param_1 + 0x28) = 0x80;
      *(undefined1 *)(param_1 + 0x2d) = *(undefined1 *)(param_2 + 0x2d);
      piVar3 = *(int **)(param_2 + 0x10);
      *(int **)(param_1 + 0x10) = piVar3;
      *piVar3 = *piVar3 + 1;
      bVar4 = *(byte *)(param_1 + 0x28);
    }
LAB_0344cf1c:
    if (bVar4 == 0x90) {
      bVar2 = *(byte *)(param_2 + 0x38);
      if (*(char *)(param_1 + 0x2d) == '\0') goto LAB_0344cf4c;
    }
    else {
      if (bVar4 == 0x80) {
        bVar2 = *(byte *)(param_2 + 0x38);
LAB_0344cf4c:
        bVar4 = 4;
        goto LAB_0344cf5c;
      }
      bVar2 = *(byte *)(param_2 + 0x38);
    }
  }
  else {
    if (bVar4 != 0x90) goto LAB_0344cf1c;
    if (*(char *)(param_1 + 0x2d) == '\0') goto LAB_0344cee4;
  }
  bVar4 = 0;
LAB_0344cf5c:
  *(byte *)(param_2 + 0x38) = bVar2 & 0xfb | bVar4;
  return 1;
}


