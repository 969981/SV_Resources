/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030fc690; name: FUN_030fc690
 */


void FUN_030fc690(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 local_18 [2];
  
  local_18[0] = 0;
  iVar7 = *(int *)PTR_DAT_047e4f38;
  lVar3 = tpidr_el0;
  lVar2 = *(long *)(lVar3 + 0x1000b8);
  if (lVar2 == 0) {
    lVar2 = FUN_00e5d3b4();
    *(long *)(lVar3 + 0x1000b8) = lVar2;
  }
  if (*(long *)(lVar2 + (long)iVar7 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (int)uVar4) {
    FUN_030fd700(*param_1,0,uVar4 - 1,local_18);
    uVar4 = *(uint *)(param_1 + 1);
  }
  if (uVar4 == 0) {
    iVar7 = 0;
  }
  else {
    if ((int)uVar4 < 2) {
      iVar1 = 0;
    }
    else {
      piVar5 = (int *)*param_1;
      lVar3 = 0;
      lVar2 = (ulong)uVar4 - 1;
      piVar6 = piVar5;
      do {
        piVar6 = piVar6 + 1;
        if (piVar5[(int)lVar3] != *piVar6) {
          lVar3 = (long)(int)lVar3 + 1;
          piVar5[lVar3] = *piVar6;
        }
        iVar1 = (int)lVar3;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    iVar7 = iVar1 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar1) {
      FUN_0309cc54(param_1,PTR_PTR_047d1a50,(long)iVar7);
    }
  }
  if (*(int *)(param_1 + 1) != iVar7) {
    *(int *)(param_1 + 1) = iVar7;
  }
  return;
}


