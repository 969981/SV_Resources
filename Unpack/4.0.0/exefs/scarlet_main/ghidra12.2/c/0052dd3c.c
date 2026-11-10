/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0052dd3c; name: FUN_0052dd3c
 */


undefined1  [16] FUN_0052dd3c(long *param_1,long param_2,undefined4 param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = param_2 - param_1[1];
  if (*(int *)((long)param_1 + 0x1c) < (int)uVar5) {
    param_2 = 0;
    uVar3 = 1;
  }
  else {
    do {
      lVar2 = FUN_0052da24(param_1,uVar5 & 0xffffffff,param_3);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((int)uVar5 == 0) {
          *param_1 = param_1[1];
          *(undefined4 *)(param_1 + 10) = 1;
        }
        else {
          param_2 = 0;
        }
        goto LAB_0052ddc4;
      }
      lVar4 = param_1[1];
      param_2 = lVar2 + (int)uVar5;
      uVar1 = *(int *)((long)param_1 + 0x1c) + ((int)lVar2 - (int)lVar4);
      uVar5 = param_2 - lVar4;
      *(uint *)((long)param_1 + 0x1c) = uVar1;
    } while (-1 < (int)uVar5);
    uVar3 = 0;
    *param_1 = lVar4 + (int)(uVar1 & (int)uVar1 >> 0x1f);
  }
LAB_0052ddc4:
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = param_2;
  return auVar6;
}


