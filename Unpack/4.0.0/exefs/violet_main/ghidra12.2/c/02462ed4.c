/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02462ed4; name: FUN_02462ed4
 */


uint FUN_02462ed4(int *param_1,ushort param_2,undefined4 param_3)

{
  ulong uVar1;
  
  switch(param_3) {
  case 1:
    if ((param_2 < *(ushort *)((long)param_1 - (long)*param_1)) &&
       (uVar1 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_2), uVar1 != 0))
    {
      return (uint)(*(char *)((long)param_1 + uVar1) != '\0');
    }
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 8:
  case 9:
    if ((param_2 < *(ushort *)((long)param_1 - (long)*param_1)) &&
       (uVar1 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_2), uVar1 != 0))
    {
      return (uint)*(byte *)((long)param_1 + uVar1);
    }
    break;
  case 6:
  case 7:
    if ((param_2 < *(ushort *)((long)param_1 - (long)*param_1)) &&
       (uVar1 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_2), uVar1 != 0))
    {
      return *(uint *)((long)param_1 + uVar1);
    }
    break;
  case 10:
    if ((param_2 < *(ushort *)((long)param_1 - (long)*param_1)) &&
       (uVar1 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_2), uVar1 != 0))
    {
      return (int)*(float *)((long)param_1 + uVar1);
    }
    break;
  case 0xb:
    if ((param_2 < *(ushort *)((long)param_1 - (long)*param_1)) &&
       (uVar1 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_2), uVar1 != 0))
    {
      return (int)*(double *)((long)param_1 + uVar1);
    }
  }
  return 0;
}


