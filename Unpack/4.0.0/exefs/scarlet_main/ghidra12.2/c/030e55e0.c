/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030e55e0; name: FUN_030e55e0
 */


void FUN_030e55e0(undefined8 param_1,long *param_2,undefined4 *param_3,undefined4 *param_4,
                 long *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined4 local_48 [2];
  undefined4 local_28 [2];
  
  lVar4 = FUN_030e7a5c(param_2,param_3);
  if (lVar4 == 0) {
    uVar8 = 0;
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (ulong)*(uint *)(lVar4 + 4);
    uVar8 = (lVar4 - param_2[2]) * 0x20000000;
  }
  if ((int)(uVar6 | uVar8) < 0) {
    local_28[0] = *param_3;
    local_48[0] = *param_4;
    FUN_030e77e0(param_1,local_28,local_48,param_5 + 2);
    uVar3 = FUN_030e96b8(param_2,param_3);
    if (*(uint *)(param_2 + 1) == uVar3) {
      iVar5 = uVar3 + 1;
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= (int)uVar3) {
        FUN_030e97b4(param_2,(long)iVar5);
        uVar3 = *(uint *)(param_2 + 1);
      }
      puVar1 = (undefined4 *)(*param_2 + (long)(int)uVar3 * 8);
      *puVar1 = *param_3;
      puVar1[1] = 0x1000000;
      *(int *)(param_2 + 1) = iVar5;
    }
    else {
      *(undefined4 *)(*param_2 + ((long)((ulong)uVar3 << 0x20) >> 0x1d) + 4) = 0x1000000;
    }
    iVar5 = (int)param_5[1];
    lVar4 = (long)iVar5;
    uVar2 = *param_3;
    if ((int)(*(uint *)((long)param_5 + 0xc) & 0x7fffffff) <= iVar5) {
      FUN_030e71f8(param_5,lVar4 + 1);
      iVar5 = (int)param_5[1];
    }
    puVar7 = (undefined1 *)(*param_5 + (long)iVar5 * 0xc);
    *puVar7 = 2;
    *(undefined4 *)(puVar7 + 4) = uVar2;
    *(int *)(param_5 + 1) = (int)(lVar4 + 1);
  }
  else {
    lVar4 = *param_2 + ((long)((uVar6 | uVar8) << 0x20) >> 0x1d);
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 0x1000000;
  }
  return;
}


