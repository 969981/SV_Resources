/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d4d1f4; name: FUN_00d4d1f4
 */


void FUN_00d4d1f4(long *param_1,int *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  uVar2 = *(long *)(param_2 + 2) + 7U & 0xfffffffffffffff8;
  *(ulong *)(param_2 + 2) = uVar2;
  *(int *)(param_1 + 1) = (int)uVar2 - *param_2;
  lVar3 = *(long *)(param_2 + 2);
  *(long *)(param_2 + 2) = lVar3 + 8;
  *(int *)((long)param_1 + 0xc) = (int)(lVar3 + 8) - *param_2;
  lVar3 = *(long *)(param_2 + 2);
  *(long *)(param_2 + 2) = lVar3 + 1;
  *(int *)(param_1 + 2) = (int)(lVar3 + 1) - *param_2;
  lVar3 = *(long *)(param_2 + 2);
  *(long *)(param_2 + 2) = lVar3 + 1;
  *(int *)((long)param_1 + 0x14) = (int)(lVar3 + 1) - *param_2;
  lVar3 = *(long *)(param_2 + 2) + 1;
  *(long *)(param_2 + 2) = lVar3;
  puVar1 = (undefined8 *)param_1[4];
  if ((undefined8 *)param_1[3] != puVar1) {
    puVar5 = (undefined8 *)param_1[3];
    while( true ) {
      plVar4 = (long *)*puVar5;
      uVar2 = lVar3 + 7U & 0xfffffffffffffff8;
      *(ulong *)(param_2 + 2) = uVar2;
      *(int *)((long)plVar4 + 0x4c) = (int)uVar2 - *param_2;
      lVar3 = *(long *)(param_2 + 2);
      *(long *)(param_2 + 2) = lVar3 + 8;
      *(int *)(plVar4 + 9) = (int)(lVar3 + 8) - *param_2;
      *(long *)(param_2 + 2) = *(long *)(param_2 + 2) + 1;
      (**(code **)(*plVar4 + 0x40))(plVar4,param_2);
      (**(code **)(*plVar4 + 0x30))(plVar4,param_2);
      if (puVar1 + -1 == puVar5) break;
      lVar3 = *(long *)(param_2 + 2);
      puVar5 = puVar5 + 1;
    }
  }
  puVar1 = (undefined8 *)param_1[10];
  puVar5 = (undefined8 *)param_1[0xb];
  if (puVar1 != puVar5) {
    plVar4 = (long *)*puVar1;
    uVar2 = *(long *)(param_2 + 2) + 7U & 0xfffffffffffffff8;
    *(ulong *)(param_2 + 2) = uVar2;
    *(int *)((long)plVar4 + 0x4c) = (int)uVar2 - *param_2;
    lVar3 = *(long *)(param_2 + 2);
    *(long *)(param_2 + 2) = lVar3 + 8;
    *(int *)(plVar4 + 9) = (int)(lVar3 + 8) - *param_2;
    *(long *)(param_2 + 2) = *(long *)(param_2 + 2) + 1;
    (**(code **)(*plVar4 + 0x48))(plVar4,param_2);
    (**(code **)(*plVar4 + 0x38))(plVar4,param_2);
    while (puVar1 = puVar1 + 1, puVar1 != puVar5) {
      plVar4 = (long *)*puVar1;
      uVar2 = *(long *)(param_2 + 2) + 7U & 0xfffffffffffffff8;
      *(ulong *)(param_2 + 2) = uVar2;
      *(int *)((long)plVar4 + 0x4c) = (int)uVar2 - *param_2;
      lVar3 = *(long *)(param_2 + 2);
      *(long *)(param_2 + 2) = lVar3 + 8;
      *(int *)(plVar4 + 9) = (int)(lVar3 + 8) - *param_2;
      *(long *)(param_2 + 2) = *(long *)(param_2 + 2) + 1;
      (**(code **)(*plVar4 + 0x48))(plVar4,param_2);
      (**(code **)(*plVar4 + 0x38))(plVar4,param_2);
    }
  }
  (**(code **)(*param_1 + 0x78))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00d4d2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,param_2);
  return;
}


