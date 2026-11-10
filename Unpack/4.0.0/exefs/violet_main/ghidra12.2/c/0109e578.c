/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0109e578; name: FUN_0109e578
 */


short * FUN_0109e578(long *param_1,long param_2,short *param_3)

{
  ushort uVar1;
  short sVar2;
  short *psVar3;
  
  if ((*param_3 == 0x10) && (1 < (ushort)param_3[1])) {
    sVar2 = param_3[3];
  }
  else {
    sVar2 = 0;
  }
  (**(code **)(*param_1 + 0x78))(param_1,param_1[8],sVar2);
  psVar3 = *(short **)(param_1[8] + 0x30);
  sVar2 = *psVar3;
  if (sVar2 != 0) {
    do {
      psVar3 = psVar3 + 1;
      if (*(char *)(param_2 + 0x54) != '\0') {
        uVar1 = *(ushort *)(param_2 + 0x52);
        if (uVar1 + 1 < (uint)*(ushort *)(param_2 + 0x50)) {
          *(ushort *)(param_2 + 0x52) = uVar1 + 1;
          *(short *)(*(long *)(param_2 + 0x30) + (ulong)uVar1 * 2) = sVar2;
          *(undefined2 *)(*(long *)(param_2 + 0x30) + (ulong)*(ushort *)(param_2 + 0x52) * 2) = 0;
        }
      }
      sVar2 = *psVar3;
    } while (sVar2 != 0);
  }
  if (*param_3 == 0x10) {
    param_3 = param_3 + (ulong)(ushort)param_3[1] + 2;
  }
  return param_3;
}


