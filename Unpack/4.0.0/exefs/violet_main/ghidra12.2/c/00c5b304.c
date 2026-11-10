/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c5b304; name: FUN_00c5b304
 */


long FUN_00c5b304(int *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((param_3 == 0) || ((char)param_1[0xc] == '\0')) {
    return 0;
  }
  lVar4 = (long)*param_1;
  lVar5 = *(long *)(param_1 + lVar4 * 0x6c + 0x76);
  uVar1 = (*(long *)(param_1 + lVar4 * 0x6c + 0x70) + param_3 + -1 &
          -*(long *)(param_1 + lVar4 * 0x6c + 0x70)) + lVar5;
  if (uVar1 <= *(ulong *)(param_1 + lVar4 * 0x6c + 0x20)) {
    *(ulong *)(param_1 + lVar4 * 0x6c + 0x76) = uVar1;
    if (*(long *)(param_1 + lVar4 * 0x6c + 0x78) != 0) {
      lVar5 = *(long *)(param_1 + lVar4 * 0x6c + 0x78) + lVar5;
      lVar2 = *(long *)(param_1 + lVar4 * 0x6c + 0x72);
      lVar3 = *(long *)(param_1 + lVar4 * 0x6c + 0x74);
      *param_2 = lVar2;
      param_2[1] = lVar3;
      *param_2 = (lVar5 - *(long *)(param_1 + lVar4 * 0x6c + 0x78)) + lVar2;
      lVar4 = (long)*param_1;
      *(long *)(param_1 + lVar4 * 2 + 4) =
           (*(long *)(param_1 + lVar4 * 0x6c + 0x70) + param_3 + -1 &
           -*(long *)(param_1 + lVar4 * 0x6c + 0x70)) + *(long *)(param_1 + lVar4 * 2 + 4);
      return lVar5;
    }
  }
  FUN_008d43d0(0,0x800);
  FUN_008d43e0("TemporaryBuffer Allocation Failed. Allocation size : %d Byte.\n",param_3);
  FUN_008d43e0("Current TemporaryBuffer Allocation : %d/%d.\n",
               *(undefined8 *)(param_1 + (long)*param_1 * 2 + 4),*(undefined8 *)(param_1 + 10));
  return 0;
}


