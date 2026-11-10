/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005304a0; name: FUN_005304a0
 */


long FUN_005304a0(ulong *param_1,void *param_2,uint param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar5 = ((int)param_1[1] - (int)param_2) + 0x10;
  if ((int)uVar5 < (int)param_3) {
    do {
      FUN_005319ec(param_4,*param_4 + ((int)uVar5 >> 3));
      uVar1 = uVar5 & 0xfffffff8;
      iVar2 = *param_4;
      *param_4 = iVar2 + ((int)uVar5 >> 3);
      memcpy((void *)(*(long *)(param_4 + 2) + (long)iVar2 * 8),param_2,(long)(int)uVar1);
      param_2 = (void *)((long)param_2 + (long)(int)uVar1);
      if (param_2 < (void *)*param_1) {
        uVar4 = param_1[1];
      }
      else {
        uVar6 = (long)param_2 - param_1[1];
        if ((uVar6 == (long)*(int *)((long)param_1 + 0x1c)) ||
           (*(int *)((long)param_1 + 0x1c) < (int)uVar6)) {
          return 0;
        }
        do {
          lVar3 = FUN_0052da24(param_1,uVar6 & 0xffffffff,0xffffffff);
          if (lVar3 == 0) {
            if ((int)uVar6 == 0) {
              *param_1 = param_1[1];
              *(undefined4 *)(param_1 + 10) = 1;
              return 0;
            }
            return 0;
          }
          uVar4 = param_1[1];
          param_2 = (void *)(lVar3 + (int)uVar6);
          uVar5 = *(int *)((long)param_1 + 0x1c) + ((int)lVar3 - (int)uVar4);
          uVar6 = (long)param_2 - uVar4;
          *(uint *)((long)param_1 + 0x1c) = uVar5;
        } while (-1 < (int)uVar6);
        *param_1 = uVar4 + (long)(int)(uVar5 & (int)uVar5 >> 0x1f);
      }
      param_3 = param_3 - uVar1;
      uVar5 = ((int)uVar4 - (int)param_2) + 0x10;
    } while ((int)uVar5 < (int)param_3);
  }
  FUN_005319ec(param_4,*param_4 + ((int)param_3 >> 3));
  uVar5 = param_3 & 0xfffffff8;
  iVar2 = *param_4;
  *param_4 = iVar2 + ((int)param_3 >> 3);
  memcpy((void *)(*(long *)(param_4 + 2) + (long)iVar2 * 8),param_2,(long)(int)uVar5);
  lVar3 = (long)param_2 + (long)(int)uVar5;
  if (param_3 != uVar5) {
    lVar3 = 0;
  }
  return lVar3;
}


