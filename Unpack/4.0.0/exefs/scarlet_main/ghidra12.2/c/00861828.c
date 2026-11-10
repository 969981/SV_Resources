/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00861828; name: FUN_00861828
 */


void FUN_00861828(long param_1,long param_2,long *param_3,long *param_4)

{
  long lVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong local_50;
  ulong uStack_48;
  
  lVar1 = *param_3;
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x60) != *(int *)(param_1 + 500))) {
    *(int *)(lVar1 + 0x60) = *(int *)(param_1 + 500);
    lVar1 = *param_3;
    if ((long)*(int *)(lVar1 + 0x40) * (long)*(int *)(param_2 + 0x20) +
        (long)*(int *)(lVar1 + 0x44) * (long)*(int *)(param_2 + 0x24) + *(long *)(lVar1 + 0x50) +
        (long)*(int *)(lVar1 + 0x48) * (long)*(int *)(param_2 + 0x28) < 0) {
      lVar1 = *param_3;
      *(int *)(param_4 + 1) = (int)param_3[1];
      *param_4 = lVar1;
    }
    else {
      local_50 = *(ulong *)(lVar1 + (long)(int)param_3[1] * 8 + 0x28);
      uStack_48 = local_50 & 3;
      local_50 = local_50 & 0xfffffffffffffffc;
      FUN_00861828(param_1,param_2,&local_50,param_4);
      local_50 = *(ulong *)(*param_3 +
                            (ulong)(9U >> (ulong)((*(uint *)(param_3 + 1) & 0xf) << 1) & 3) * 8 +
                           0x28);
      uStack_48 = local_50 & 3;
      local_50 = local_50 & 0xfffffffffffffffc;
      FUN_00861828(param_1,param_2,&local_50,param_4);
      local_50 = *(ulong *)(*param_3 +
                            (ulong)(0x12U >> (ulong)((*(uint *)(param_3 + 1) & 0xf) << 1) & 3) * 8 +
                           0x28);
      uStack_48 = local_50 & 3;
      local_50 = local_50 & 0xfffffffffffffffc;
      FUN_00861828(param_1,param_2,&local_50,param_4);
      lVar1 = *param_3;
      lVar3 = (long)(int)param_3[1];
      uVar4 = *(ulong *)(lVar1 + lVar3 * 8 + 0x28);
      if (3 < uVar4) {
        *(undefined8 *)((uVar4 & 0xfffffffffffffffc) + (uVar4 & 3) * 8 + 0x28) = 0;
        lVar1 = *param_3;
        lVar3 = (long)(int)param_3[1];
      }
      *(undefined8 *)(lVar1 + lVar3 * 8 + 0x28) = 0;
      puVar2 = (ulong *)(*param_3 +
                         (ulong)(9U >> (ulong)((*(uint *)(param_3 + 1) & 0xf) << 1) & 3) * 8 + 0x28)
      ;
      uVar4 = *puVar2;
      if (3 < uVar4) {
        *(undefined8 *)((uVar4 & 0xfffffffffffffffc) + (uVar4 & 3) * 8 + 0x28) = 0;
      }
      *puVar2 = 0;
      puVar2 = (ulong *)(*param_3 +
                         (ulong)(0x12U >> (ulong)((*(uint *)(param_3 + 1) & 0xf) << 1) & 3) * 8 +
                        0x28);
      uVar4 = *puVar2;
      if (3 < uVar4) {
        *(undefined8 *)((uVar4 & 0xfffffffffffffffc) + (uVar4 & 3) * 8 + 0x28) = 0;
      }
      *puVar2 = 0;
      FUN_00861a24(param_1,*param_3);
    }
  }
  return;
}


