/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ea75b4; name: FUN_01ea75b4
 */


ulong FUN_01ea75b4(undefined8 *param_1)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar1 = FUN_01ea77c4(*param_1);
  if (uVar1 == 0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = 0;
    uVar4 = 1;
    do {
      plVar2 = (long *)FUN_01ea77d4(*param_1,uVar3);
      if (*plVar2 == *(long *)param_1[1]) goto LAB_01ea7620;
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
    uVar4 = 0;
    uVar3 = uVar1;
  }
LAB_01ea7620:
  return uVar4 | (ulong)uVar3 << 0x20;
}


