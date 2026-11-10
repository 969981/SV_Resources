/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f41f8; name: FUN_001f41f8
 */


undefined8 FUN_001f41f8(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  long local_28;
  
  if (param_2 < (ulong)param_1[7]) {
    uVar1 = 0xfffffe0b;
  }
  else {
    uVar1 = FUN_001f4184(&local_28,param_2,param_1[2]);
    if ((int)uVar1 == 0) {
      FUN_001f4288(param_1);
      *param_1 = local_28;
      param_1[1] = local_28;
      *(long *)(local_28 + 0x18) = *(long *)(local_28 + 0x18) + param_1[7];
      uVar1 = 0;
      *(long *)(param_1[1] + 0x20) = *(long *)(param_1[1] + 0x20) + param_1[7];
      param_1[3] = param_2;
      param_1[5] = 1;
    }
  }
  return uVar1;
}


