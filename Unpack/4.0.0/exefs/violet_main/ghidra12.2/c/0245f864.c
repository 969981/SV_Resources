/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0245f864; name: FUN_0245f864
 */


float FUN_0245f864(long param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  
  switch(param_3) {
  case 1:
    fVar3 = 1.0;
    if (*(char *)(param_1 + param_2) == '\0') {
      fVar3 = 0.0;
    }
    return fVar3;
  case 2:
    iVar1 = (int)*(char *)(param_1 + param_2);
    goto LAB_0245f8bc;
  case 3:
    uVar2 = (uint)*(byte *)(param_1 + param_2);
    break;
  case 4:
    iVar1 = (int)*(short *)(param_1 + param_2);
LAB_0245f8bc:
    return (float)iVar1;
  case 5:
    uVar2 = (uint)*(ushort *)(param_1 + param_2);
    break;
  case 6:
    return (float)*(int *)(param_1 + param_2);
  case 7:
    uVar2 = *(uint *)(param_1 + param_2);
    break;
  case 8:
    return (float)*(long *)(param_1 + param_2);
  case 9:
    return (float)*(ulong *)(param_1 + param_2);
  case 10:
    return *(float *)(param_1 + param_2);
  case 0xb:
    return (float)*(double *)(param_1 + param_2);
  default:
    return 0.0;
  }
  fVar3 = (float)NEON_ucvtf(uVar2);
  return fVar3;
}


