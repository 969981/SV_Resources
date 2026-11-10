/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ec0d0; name: FUN_003ec0d0
 */


undefined8 FUN_003ec0d0(long *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if (((int)param_2 < 0) || ((int)param_1[1] <= (int)(param_2 >> 5))) {
    return 0;
  }
  lVar4 = *param_1;
  lVar2 = (ulong)(param_2 >> 5) * 4;
  *(uint *)(lVar4 + lVar2) = *(uint *)(lVar4 + lVar2) & (1 << (ulong)(param_2 & 0x1f) ^ 0xffffffffU)
  ;
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    do {
      if (*(int *)(lVar4 + -4 + uVar3 * 4) != 0) goto LAB_003ec12c;
      uVar3 = uVar3 - 1;
    } while (1 < (int)uVar3 + 1);
    uVar3 = 0;
LAB_003ec12c:
    uVar1 = (uint)uVar3;
    *(uint *)(param_1 + 1) = uVar1;
  }
  if (uVar1 == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    return 1;
  }
  return 1;
}


