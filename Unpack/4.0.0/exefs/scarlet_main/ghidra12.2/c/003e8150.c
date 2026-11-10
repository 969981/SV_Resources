/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e8150; name: FUN_003e8150
 */


uint FUN_003e8150(long param_1,void *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  int *piVar5;
  
  if (((param_2 == (void *)0x0) || (piVar5 = *(int **)(param_1 + 0x38), piVar5 == (int *)0x0)) ||
     (*(long *)(param_1 + 0x40) == 0)) {
    return 0;
  }
  FUN_003e8cb0(param_1,0xf);
  uVar2 = piVar5[4];
  uVar4 = 0;
  while( true ) {
    if (uVar2 != 0) {
      uVar1 = param_3;
      if ((int)uVar2 <= (int)param_3) {
        uVar1 = uVar2;
      }
      memcpy(param_2,(void *)(*(long *)(piVar5 + 2) + (long)piVar5[5]),(long)(int)uVar1);
      uVar4 = uVar1 + uVar4;
      piVar5[4] = piVar5[4] - uVar1;
      piVar5[5] = piVar5[5] + uVar1;
      if ((int)param_3 <= (int)uVar2) {
        return uVar4;
      }
      param_3 = param_3 - uVar1;
      param_2 = (void *)((long)param_2 + (long)(int)uVar1);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    if (*piVar5 < (int)param_3) goto LAB_003e8228;
    uVar2 = FUN_003e8ce0(uVar3,*(undefined8 *)(piVar5 + 2));
    if ((int)uVar2 < 1) break;
    piVar5[4] = uVar2;
    piVar5[5] = 0;
  }
LAB_003e8240:
  FUN_003e9940(param_1);
  uVar1 = uVar4;
  if ((int)uVar4 < 1) {
    uVar1 = uVar2;
  }
  if ((uVar2 & 0x80000000) != 0) {
    uVar4 = uVar1;
  }
  return uVar4;
LAB_003e8228:
  while (uVar2 = FUN_003e8ce0(uVar3,param_2,param_3), 0 < (int)uVar2) {
    uVar4 = uVar2 + uVar4;
    param_3 = param_3 - uVar2;
    if (param_3 == 0) {
      return uVar4;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    param_2 = (void *)((long)param_2 + (ulong)uVar2);
  }
  goto LAB_003e8240;
}


