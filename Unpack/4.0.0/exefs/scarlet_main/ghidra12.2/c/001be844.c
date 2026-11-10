/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001be844; name: FUN_001be844
 */


void FUN_001be844(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long *param_5,
                 int param_6)

{
  long lVar1;
  void *__s;
  long lVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  *(uint *)(param_1 + 2) = (uint)param_2;
  *(int *)((long)param_1 + 0x14) = ~(-1 << (ulong)((uint)param_2 & 0x1f));
  iVar4 = 4;
  if (0 < param_6) {
    iVar4 = param_6;
  }
  if (7 < iVar4) {
    iVar4 = 8;
  }
  uVar3 = iVar4 * -8 + 0x40;
  if (iVar4 < 2) {
    uVar3 = 0x38;
  }
  lVar2 = 4L << (param_2 & 0x3f);
  lVar7 = lVar2 + 0x40;
  param_1[4] = 0;
  param_1[7] = -0x30e44323485a9b9d << ((ulong)uVar3 & 0x3f);
  if (param_5 != (long *)0x0) {
    lVar1 = param_5[1];
    uVar5 = ((param_5[3] - lVar1) + *param_5) - 0x10;
    if (lVar7 <= (long)(uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU))) {
      uVar6 = lVar2 + 0x4fU & 0xfffffffffffffff0;
      uVar5 = lVar1 + uVar6;
      if ((ulong)(*param_5 + param_5[3]) < uVar5) {
        if ((int)param_5[4] != 0) {
          lVar1 = (**(code **)PTR_PTR_047cb890)(uVar6,0x10);
          if (lVar1 != 0) {
            lVar7 = 0;
            goto LAB_001be908;
          }
          FUN_0015ed40(uVar6);
        }
        lVar7 = 0;
        lVar1 = 0;
      }
      else {
        param_5[1] = uVar5;
        uVar6 = param_5[2];
        if ((ulong)param_5[2] <= uVar5) {
          uVar6 = uVar5;
        }
        lVar7 = 0;
        param_5[2] = uVar6;
      }
      goto LAB_001be908;
    }
  }
  lVar1 = (**(code **)PTR_PTR_047cb890)(lVar7,0x10);
  if (lVar1 == 0) {
    FUN_0015ed40(lVar7);
  }
  lVar7 = lVar1;
LAB_001be908:
  __s = (void *)(lVar1 + 0x3fU & 0xffffffffffffffc0);
  *param_1 = lVar7;
  param_1[1] = (long)__s;
  memset(__s,0,4L << ((ulong)*(uint *)(param_1 + 2) & 0x3f));
  return;
}


