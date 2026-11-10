/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0292cbc0; name: FUN_0292cbc0
 */


ulong FUN_0292cbc0(long param_1,undefined2 *param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  *param_2 = *(undefined2 *)(param_1 + 0x70);
  param_2[1] = *(undefined2 *)(param_1 + 0x72);
  plVar3 = *(long **)(param_1 + 0x38);
  if (plVar3 == (long *)0x0) {
    uVar2 = 4;
  }
  else {
    uVar2 = 4;
    do {
      iVar1 = FUN_0292cc24(plVar3 + 3,(long)param_2 + uVar2);
      plVar3 = (long *)*plVar3;
      uVar2 = (ulong)(uint)(iVar1 + (int)uVar2);
    } while (plVar3 != (long *)0x0);
  }
  return uVar2;
}


