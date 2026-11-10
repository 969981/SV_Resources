/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f5e3bc; name: FUN_02f5e3bc
 */


void FUN_02f5e3bc(undefined8 *param_1,int param_2,uint param_3)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  long *plVar7;
  undefined8 local_38;
  
  param_1[1] = 0;
  param_1[2] = 0x8000000000000000;
  param_1[4] = param_1 + 6;
  param_1[5] = 0x8000000800000000;
  if ((int)param_3 < 9) {
    iVar3 = 0;
  }
  else {
    FUN_02f5fd10(param_1 + 4,(ulong)param_3);
    iVar3 = *(int *)(param_1 + 5);
  }
  if (iVar3 < (int)param_3) {
    lVar5 = param_1[4];
    puVar4 = (undefined8 *)(lVar5 + (long)iVar3 * 0x20);
    *(uint *)(param_1 + 5) = param_3;
    do {
      *puVar4 = 0;
      puVar4[1] = 0x8000000000000000;
      *(undefined4 *)(puVar4 + 2) = 0;
      puVar4 = puVar4 + 4;
    } while (puVar4 != (undefined8 *)(lVar5 + (long)(int)param_3 * 0x20));
  }
  else if ((int)param_3 < iVar3) {
    *(uint *)(param_1 + 5) = param_3;
    puVar1 = PTR_PTR_047d1a50;
    lVar5 = (-(ulong)(param_3 >> 0x1f) & 0xffffffe000000000 | (ulong)param_3 << 5) +
            (long)iVar3 * -0x20;
    plVar2 = (long *)(param_1[4] + (long)iVar3 * 0x20);
    do {
      plVar7 = plVar2 + -4;
      *(undefined4 *)(plVar2 + -3) = 0;
      if ((-1 < (int)*(uint *)((long)plVar2 + -0x14)) && (*plVar7 != 0)) {
        (**(code **)(*(long *)puVar1 + 0x20))
                  (puVar1,*plVar7,(ulong)*(uint *)((long)plVar2 + -0x14) << 2);
      }
      *plVar7 = 0;
      lVar5 = lVar5 + 0x20;
      *(undefined4 *)((long)plVar2 + -0x14) = 0x80000000;
      plVar2 = plVar7;
    } while (lVar5 != 0);
  }
  *(int *)(param_1 + 0x26) = param_2;
  if ((int)(*(uint *)((long)param_1 + 0x14) & 0x7fffffff) < param_2) {
    FUN_02e9b320(param_1 + 1,PTR_PTR_047d1a50,(long)param_2);
  }
  if (*(int *)(param_1 + 2) != param_2) {
    *(int *)(param_1 + 2) = param_2;
  }
  puVar1 = PTR_DAT_047d1a08;
  local_38 = 0x20;
  plVar2 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
  if (*(code **)(puVar1 + 0x10) != (code *)0x0) {
    (**(code **)(puVar1 + 0x10))(plVar2,"hkUnionFind");
  }
  puVar6 = (undefined4 *)param_1[1];
  iVar3 = *(int *)(param_1 + 2);
  *(int *)(plVar2 + 2) = iVar3;
  *plVar2 = (long)puVar6;
  plVar2[1] = (long)(puVar6 + iVar3);
  if ((0 < iVar3) && (*puVar6 = 0xffffffff, 1 < (int)plVar2[2])) {
    lVar5 = 1;
    do {
      *(undefined4 *)(*plVar2 + lVar5 * 4) = 0xffffffff;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)plVar2[2]);
  }
  *(undefined8 *)((long)plVar2 + 0x14) = 0xffffffff00000001;
  *param_1 = plVar2;
  *(undefined1 *)((long)param_1 + 0x134) = 1;
  return;
}


