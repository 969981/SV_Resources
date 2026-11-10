/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024637f0; name: FUN_024637f0
 */


float FUN_024637f0(int *param_1,ushort param_2,undefined4 param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  
  fVar4 = 0.0;
  switch(param_3) {
  case 1:
    if ((param_2 < *(ushort *)((long)param_1 - (long)*param_1)) &&
       (uVar2 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_2), uVar2 != 0))
    {
      fVar4 = 1.0;
      if (*(char *)((long)param_1 + uVar2) == '\0') {
        fVar4 = 0.0;
      }
      return fVar4;
    }
    break;
  case 2:
    if ((param_2 < *(ushort *)((long)param_1 - (long)*param_1)) &&
       (uVar2 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_2), uVar2 != 0))
    {
      iVar1 = (int)*(char *)((long)param_1 + uVar2);
LAB_02463874:
      return (float)iVar1;
    }
    break;
  case 3:
    if ((param_2 < *(ushort *)((long)param_1 - (long)*param_1)) &&
       (uVar2 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_2), uVar2 != 0))
    {
      uVar3 = (uint)*(byte *)((long)param_1 + uVar2);
LAB_024638a0:
      fVar4 = (float)NEON_ucvtf(uVar3);
      return fVar4;
    }
    break;
  case 4:
    if ((param_2 < *(ushort *)((long)param_1 - (long)*param_1)) &&
       (uVar2 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_2), uVar2 != 0))
    {
      iVar1 = (int)*(short *)((long)param_1 + uVar2);
      goto LAB_02463874;
    }
    break;
  case 5:
    if ((param_2 < *(ushort *)((long)param_1 - (long)*param_1)) &&
       (uVar2 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_2), uVar2 != 0))
    {
      uVar3 = (uint)*(ushort *)((long)param_1 + uVar2);
      goto LAB_024638a0;
    }
    break;
  case 6:
    if ((param_2 < *(ushort *)((long)param_1 - (long)*param_1)) &&
       (uVar2 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_2), uVar2 != 0))
    {
      return (float)*(int *)((long)param_1 + uVar2);
    }
    break;
  case 7:
    if ((param_2 < *(ushort *)((long)param_1 - (long)*param_1)) &&
       (uVar2 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_2), uVar2 != 0))
    {
      uVar3 = *(uint *)((long)param_1 + uVar2);
      goto LAB_024638a0;
    }
    break;
  case 8:
    if ((param_2 < *(ushort *)((long)param_1 - (long)*param_1)) &&
       (uVar2 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_2), uVar2 != 0))
    {
      return (float)*(long *)((long)param_1 + uVar2);
    }
    break;
  case 9:
    if ((param_2 < *(ushort *)((long)param_1 - (long)*param_1)) &&
       (uVar2 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_2), uVar2 != 0))
    {
      return (float)*(ulong *)((long)param_1 + uVar2);
    }
    break;
  case 10:
    if ((param_2 < *(ushort *)((long)param_1 - (long)*param_1)) &&
       (uVar2 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_2), uVar2 != 0))
    {
      return *(float *)((long)param_1 + uVar2);
    }
    break;
  case 0xb:
    if ((param_2 < *(ushort *)((long)param_1 - (long)*param_1)) &&
       (uVar2 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_2), uVar2 != 0))
    {
      fVar4 = (float)*(double *)((long)param_1 + uVar2);
    }
  }
  return fVar4;
}


