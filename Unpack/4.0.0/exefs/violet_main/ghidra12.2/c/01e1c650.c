/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e1c650; name: FUN_01e1c650
 */


undefined4 FUN_01e1c650(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x570) == '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x2c0) == '\0') {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x578);
  lVar1 = *(long *)(param_1 + 0x580) - lVar2;
  if (lVar1 == 0) {
    return 0;
  }
  uVar4 = 0;
  while (*(int *)(lVar2 + uVar4 * 0x2dc + 4) != param_2) {
    uVar4 = (ulong)((int)uVar4 + 1);
    if ((ulong)((lVar1 >> 2) * 0x6fe99e1395aedd07) <= uVar4) {
      return 0;
    }
  }
  if ((int)uVar4 < 0) {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0x2c8);
  lVar1 = *(long *)(param_1 + 0x2d0) - lVar3;
  if (lVar1 == 0) {
    return 0;
  }
  uVar5 = 0;
  do {
    if (*(int *)(lVar2 + uVar4 * 0x2dc + 8) == *(int *)(lVar3 + uVar5 * 0x110)) {
      if ((int)uVar5 < 0) {
        return 0;
      }
      return *(undefined4 *)(lVar3 + uVar5 * 0x110 + 0x10c);
    }
    uVar5 = (ulong)((int)uVar5 + 1);
  } while (uVar5 < (ulong)((lVar1 >> 4) * -0xf0f0f0f0f0f0f0f));
  return 0;
}


