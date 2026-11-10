/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f40d8; name: FUN_001f40d8
 */


undefined8
FUN_001f40d8(long *param_1,ulong param_2,ulong param_3,long param_4,ulong param_5,long param_6)

{
  undefined8 uVar1;
  long local_48;
  
  uVar1 = 0xfffffe0b;
  if (((param_4 - 1U < param_3) && (param_5 <= param_2)) &&
     (uVar1 = FUN_001f4184(&local_48,param_2,param_6), (int)uVar1 == 0)) {
    param_1[7] = param_5;
    *param_1 = local_48;
    param_1[1] = local_48;
    param_1[2] = param_6;
    *(ulong *)(local_48 + 0x18) = *(long *)(local_48 + 0x18) + param_5;
    *(ulong *)(param_1[1] + 0x20) = *(long *)(param_1[1] + 0x20) + param_5;
    param_1[3] = param_2;
    param_1[4] = param_3;
    param_1[5] = 1;
    param_1[6] = param_4;
  }
  return uVar1;
}


