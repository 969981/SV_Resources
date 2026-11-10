/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019367c0; name: FUN_019367c0
 */


bool FUN_019367c0(long *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = (long)param_2 - *param_1;
  if (((uVar6 & 3) == 0) || ((char)param_1[5] == '\0')) {
    uVar5 = param_1[1];
    if (uVar5 < 5) {
      return false;
    }
    if (uVar5 - 4 < uVar6) {
      return false;
    }
    uVar1 = (int)param_1[2] + 1;
    iVar4 = *param_2;
    *(uint *)(param_1 + 2) = uVar1;
    uVar2 = (int)param_1[3] + 1;
    *(uint *)(param_1 + 3) = uVar2;
    if (((((uVar1 <= *(uint *)((long)param_1 + 0x14)) && (uVar2 <= *(uint *)((long)param_1 + 0x1c)))
         && ((uVar6 = uVar6 - (long)iVar4, (uVar6 & 1) == 0 || ((char)param_1[5] == '\0')))) &&
        (uVar6 <= uVar5 - 2)) &&
       ((uVar3 = *(ushort *)(*param_1 + uVar6), (uVar3 & 1) == 0 || ((char)param_1[5] == '\0')))) {
      return uVar3 < uVar5 && uVar6 <= uVar5 - uVar3;
    }
  }
  return false;
}


