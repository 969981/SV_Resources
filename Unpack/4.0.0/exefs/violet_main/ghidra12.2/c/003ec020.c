/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ec020; name: FUN_003ec020
 */


undefined8 FUN_003ec020(long *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  
  if ((int)param_2 < 0) {
    return 0;
  }
  iVar3 = (int)param_1[1];
  uVar1 = param_2 >> 5;
  if (iVar3 <= (int)uVar1) {
    if (*(int *)((long)param_1 + 0xc) <= (int)uVar1) {
      lVar2 = FUN_003eb670(param_1,uVar1 + 1);
      if (lVar2 == 0) {
        return 0;
      }
      iVar3 = (int)param_1[1];
    }
    if (iVar3 <= (int)uVar1) {
      memset((void *)(*param_1 + (long)iVar3 * 4),0,(ulong)(uVar1 - iVar3) * 4 + 4);
    }
    *(uint *)(param_1 + 1) = uVar1 + 1;
  }
  *(uint *)(*param_1 + (ulong)uVar1 * 4) =
       *(uint *)(*param_1 + (ulong)uVar1 * 4) | 1 << (ulong)(param_2 & 0x1f);
  return 1;
}


