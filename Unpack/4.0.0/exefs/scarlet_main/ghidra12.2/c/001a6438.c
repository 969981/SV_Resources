/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001a6438; name: FUN_001a6438
 */


void FUN_001a6438(long *param_1,long param_2,int param_3,int param_4,long param_5,int param_6,
                 long param_7,int param_8)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  
  *param_1 = (long)&PTR_FUN_044841a0;
  *(undefined4 *)(param_1 + 10) = 0x1995;
  *(undefined4 *)(param_1 + 0x17) = 0xcca;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  FUN_0015cf00(param_1 + 0x18,0x100);
  *(undefined4 *)(param_1 + 0x52) = 0x248;
  *(undefined4 *)(param_1 + 0xd5) = 0xff;
  param_2 = param_2 + -1;
  param_1[0x51] = 0;
  uVar5 = 0x10000;
  if (param_8 != 2) {
    uVar5 = 0x1000000;
  }
  param_1[0x50] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[1] = param_2;
  *(int *)(param_1 + 2) = param_3 + 1;
  *(int *)((long)param_1 + 0x6fc) = param_8;
  *(uint *)(param_1 + 0xe0) = uVar5 - 1;
  lVar1 = FUN_001645b0(param_1 + 0xd6,(ulong)uVar5,0);
  memset((void *)(param_1[0xd6] + param_1[0xd8] * 4),0,(ulong)(uVar5 << 2));
  param_1[0xd8] = param_1[0xd8] + (ulong)uVar5;
  if (lVar1 != 0) {
    (**(code **)PTR_PTR_047cb898)(lVar1);
  }
  uVar4 = param_1[0xdb];
  uVar3 = (long)((ulong)(param_3 + 0x4000) << 0x20) >> 0x2e;
  if (uVar4 <= uVar3) {
    lVar1 = uVar3 - uVar4;
    if ((ulong)param_1[0xda] < uVar3) {
      lVar2 = FUN_001a7cbc(param_1 + 0xd9);
      lVar6 = param_1[0xdb];
      if (lVar1 != 0) {
        memset((void *)(param_1[0xd9] + lVar6 * 8),0,lVar1 * 8);
        lVar6 = param_1[0xdb];
      }
      param_1[0xdb] = lVar6 + lVar1;
      if (lVar2 != 0) {
        (**(code **)PTR_PTR_047cb898)(lVar2);
      }
      goto LAB_001a65fc;
    }
    if (lVar1 != 0) {
      memset((void *)(param_1[0xd9] + uVar4 * 8),0,lVar1 * 8);
      uVar3 = param_1[0xdb] + lVar1;
    }
  }
  param_1[0xdb] = uVar3;
LAB_001a65fc:
  param_1[0xde] = 0x100000000;
  param_1[0xdd] = 0;
  param_1[0xdc] = 0;
  *(undefined4 *)(param_1 + 0xdf) = 1;
  lVar1 = (**(code **)PTR_PTR_047cb890)(0x80000,0x40);
  if (lVar1 == 0) {
    FUN_0015ed40(0x80000);
  }
  *(long *)param_1[0xd9] = lVar1;
  *(bool *)((long)param_1 + 0x704) = param_5 != 0;
  *(bool *)((long)param_1 + 0x705) = param_6 != 1;
  FUN_00164100(param_1 + 0xe1,param_5,param_2 + (param_4 + 1),param_2 + (param_3 + 1),0x7fffffff);
  param_1[0x11b] = param_7;
                    /* WARNING: Could not recover jumptable at 0x001a66ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_4,0,0);
  return;
}


