/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015a774c; name: FUN_015a774c
 */


void FUN_015a774c(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  
  FUN_015a7914();
  puVar1 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)param_1[2];
  if (puVar1 != puVar3) {
    plVar8 = (long *)param_1[10];
    uVar7 = *puVar1;
    uVar4 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar4 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,uVar7,0x1000,8);
    }
    else {
      FUN_00c48fe8(plVar8,uVar7,0x1000,8);
    }
    while (puVar1 = puVar1 + 1, puVar1 != puVar3) {
      plVar8 = (long *)param_1[10];
      uVar7 = *puVar1;
      uVar4 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar4 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,uVar7,0x1000,8);
      }
      else {
        FUN_00c48fe8(plVar8,uVar7,0x1000,8);
      }
    }
    lVar6 = param_1[2] - param_1[1];
    if (lVar6 != 0) {
      param_1[2] = param_1[2] + (lVar6 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  lVar6 = *param_1;
  if (lVar6 == 0) {
    return;
  }
  lVar2 = param_1[3];
  plVar8 = (long *)param_1[4];
  uVar4 = (**(code **)(*plVar8 + 0xf8))(plVar8);
  if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x015a783c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar6,lVar2 - lVar6,8);
    return;
  }
  FUN_00c48fe8(plVar8,lVar6,lVar2 - lVar6,8);
  return;
}


