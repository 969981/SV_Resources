/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ec180; name: FUN_003ec180
 */


undefined8 FUN_003ec180(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  if ((int)param_2 < 0) {
    return 0;
  }
  uVar1 = param_2 >> 5;
  uVar3 = (ulong)uVar1;
  if ((int)param_1[1] <= (int)uVar1) {
    return 0;
  }
  if ((param_2 & 0x1f) == 0) {
    *(uint *)(param_1 + 1) = uVar1;
    uVar2 = 0;
    if (uVar1 == 0) goto joined_r0x003ec21c;
  }
  else {
    *(uint *)(param_1 + 1) = uVar1 + 1;
    *(uint *)(*param_1 + uVar3 * 4) =
         *(uint *)(*param_1 + uVar3 * 4) & (-1 << (ulong)(param_2 & 0x1f) ^ 0xffffffffU);
    uVar2 = *(uint *)(param_1 + 1);
    uVar3 = (ulong)uVar2;
    if ((int)uVar2 < 1) goto joined_r0x003ec21c;
  }
  do {
    if (*(int *)(*param_1 + -4 + uVar3 * 4) != 0) goto LAB_003ec1f4;
    uVar3 = uVar3 - 1;
  } while (1 < (int)uVar3 + 1);
  uVar3 = 0;
LAB_003ec1f4:
  uVar2 = (uint)uVar3;
  *(uint *)(param_1 + 1) = uVar2;
joined_r0x003ec21c:
  if (uVar2 == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    return 1;
  }
  return 1;
}


