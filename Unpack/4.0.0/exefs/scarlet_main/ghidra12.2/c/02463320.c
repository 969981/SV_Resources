/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02463320; name: FUN_02463320
 */


ulong FUN_02463320(int *param_1,ushort param_2,undefined4 param_3)

{
  ulong uVar1;
  
  switch(param_3) {
  case 1:
  case 3:
    if ((param_2 < *(ushort *)((long)param_1 - (long)*param_1)) &&
       (uVar1 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_2), uVar1 != 0))
    {
      return (ulong)*(byte *)((long)param_1 + uVar1);
    }
    break;
  case 2:
    if ((param_2 < *(ushort *)((long)param_1 - (long)*param_1)) &&
       (uVar1 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_2), uVar1 != 0))
    {
      return (long)*(char *)((long)param_1 + uVar1);
    }
    break;
  case 4:
    if ((param_2 < *(ushort *)((long)param_1 - (long)*param_1)) &&
       (uVar1 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_2), uVar1 != 0))
    {
      return (long)*(short *)((long)param_1 + uVar1);
    }
    break;
  case 5:
    if ((param_2 < *(ushort *)((long)param_1 - (long)*param_1)) &&
       (uVar1 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_2), uVar1 != 0))
    {
      return (ulong)*(ushort *)((long)param_1 + uVar1);
    }
    break;
  case 6:
  case 7:
  case 8:
  case 9:
    if ((param_2 < *(ushort *)((long)param_1 - (long)*param_1)) &&
       (uVar1 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_2), uVar1 != 0))
    {
      return (ulong)*(uint *)((long)param_1 + uVar1);
    }
    break;
  case 10:
    if ((param_2 < *(ushort *)((long)param_1 - (long)*param_1)) &&
       (uVar1 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_2), uVar1 != 0))
    {
      return (ulong)(uint)(int)*(float *)((long)param_1 + uVar1);
    }
    break;
  case 0xb:
    if ((param_2 < *(ushort *)((long)param_1 - (long)*param_1)) &&
       (uVar1 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_2), uVar1 != 0))
    {
      return (ulong)(uint)(int)*(double *)((long)param_1 + uVar1);
    }
  }
  return 0;
}


