/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0154b7a8; name: FUN_0154b7a8
 */


long FUN_0154b7a8(long param_1,int *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 5) ||
     (uVar2 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2], uVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)((long)param_2 + uVar2);
  }
  uVar1 = FUN_0154b9e8(param_1,*(undefined8 *)(param_1 + 8));
  FUN_0154b804(uVar1,uVar3);
  return param_1;
}


