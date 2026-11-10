/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015fbbbc; name: FUN_015fbbbc
 */


void FUN_015fbbbc(long *param_1)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long local_78;
  long lStack_70;
  long local_68;
  long local_60;
  long *plStack_58;
  
  local_68 = param_1[2];
  lVar6 = param_1[1];
  lVar4 = local_68 - lVar6;
  if ((ulong)(lVar4 >> 3) < (ulong)(param_1[3] - *param_1 >> 3)) {
    plVar1 = param_1 + 4;
    local_60 = 0;
    plStack_58 = plVar1;
    if (lVar4 == 0) {
      lVar5 = 0;
      lVar3 = 0;
      bVar2 = true;
    }
    else {
      lVar3 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar4,4);
      if (lVar3 == 0) {
        (**(code **)(*(long *)*plVar1 + 0xe8))();
      }
      lVar6 = param_1[1];
      local_68 = param_1[2];
      bVar2 = local_68 - lVar6 == 0;
      lVar5 = local_68 - lVar6 >> 3;
    }
    lVar4 = lVar3 + (lVar4 >> 3) * 8;
    if (!bVar2) {
      lVar5 = lVar5 << 3;
      lVar7 = lVar3;
      local_78 = lVar3;
      lStack_70 = lVar3;
      local_68 = lVar3;
      local_60 = lVar4;
      do {
        FUN_015f96bc(plVar1,lVar7,lVar6);
        lVar7 = lVar7 + 8;
        lVar6 = lVar6 + 8;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
      lVar6 = param_1[1];
      local_68 = param_1[2];
      lVar5 = local_68 - lVar6 >> 3;
    }
    local_78 = *param_1;
    *param_1 = lVar3;
    param_1[1] = lVar3;
    local_60 = param_1[3];
    param_1[2] = lVar3 + lVar5 * 8;
    param_1[3] = lVar4;
    lStack_70 = lVar6;
    FUN_015f9874(&local_78);
  }
  return;
}


