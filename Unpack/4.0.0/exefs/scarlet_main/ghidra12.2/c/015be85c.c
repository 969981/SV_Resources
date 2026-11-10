/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015be85c; name: FUN_015be85c
 */


void FUN_015be85c(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long *plStack_58;
  
  plVar1 = (long *)param_1[1];
  lVar10 = param_1[2];
  if (lVar10 - (long)plVar1 == 0) {
    param_2 = param_2 + 1;
  }
  uVar8 = param_2 / 0x1e;
  uVar7 = param_1[8];
  if (param_2 % 0x1e != 0) {
    uVar8 = uVar8 + 1;
  }
  uVar9 = uVar8;
  if (uVar7 / 0x1e <= uVar8) {
    uVar9 = uVar7 / 0x1e;
  }
  uVar8 = uVar8 - uVar9;
  if (uVar8 == 0) {
    param_1[8] = uVar7 + uVar9 * -0x1e;
    if (uVar9 != 0) {
      local_78 = *plVar1;
      param_1[1] = (long)(plVar1 + 1);
      FUN_015f8f60(param_1,&local_78);
      while (uVar9 = uVar9 - 1, uVar9 != 0) {
        local_78 = *(long *)param_1[1];
        param_1[1] = (long)((long *)param_1[1] + 1);
        FUN_015f8f60(param_1,&local_78);
      }
    }
  }
  else {
    lVar3 = param_1[3];
    lVar2 = lVar10 - (long)plVar1 >> 3;
    if ((ulong)((lVar3 - *param_1 >> 3) - lVar2) < uVar8) {
      uVar5 = lVar3 - *param_1 >> 2;
      uVar7 = uVar8 + lVar2;
      if (uVar8 + lVar2 <= uVar5) {
        uVar7 = uVar5;
      }
      plVar1 = param_1 + 4;
      local_60 = 0;
      plStack_58 = plVar1;
      if (uVar7 == 0) {
        local_78 = 0;
      }
      else {
        local_78 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar7 << 3,8);
        if (local_78 == 0) {
          (**(code **)(*(long *)*plVar1 + 0xe8))();
        }
      }
      lVar10 = uVar9 * -0x1e;
      local_70 = local_78 + (lVar2 - uVar9) * 8;
      local_60 = local_78 + uVar7 * 8;
      local_68 = local_70;
      do {
        lVar2 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0xff0,8);
        if (lVar2 == 0) {
          (**(code **)(*(long *)param_1[10] + 0xe8))();
        }
        local_80 = lVar2;
        FUN_015faf5c(&local_78,&local_80);
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      lVar2 = param_1[1];
      for (; uVar9 != 0; uVar9 = uVar9 - 1) {
        FUN_01ea4a00(&local_78,lVar2);
        lVar2 = param_1[1] + 8;
        param_1[1] = lVar2;
      }
      lVar3 = param_1[2];
      if (lVar3 != lVar2) {
        lVar2 = lVar3;
        do {
          lVar2 = lVar2 + -8;
          FUN_015fc40c(&local_78,lVar2);
        } while (lVar2 != param_1[1]);
        lVar3 = param_1[2];
      }
      lVar6 = *param_1;
      *param_1 = local_78;
      param_1[1] = local_70;
      param_1[2] = local_68;
      lVar4 = param_1[3];
      param_1[3] = local_60;
      param_1[8] = param_1[8] + lVar10;
      local_78 = lVar6;
      local_70 = lVar2;
      local_68 = lVar3;
      local_60 = lVar4;
      FUN_015f9934(&local_78);
    }
    else {
      while (lVar3 != lVar10) {
        lVar10 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0xff0,8);
        if (lVar10 == 0) {
          (**(code **)(*(long *)param_1[10] + 0xe8))();
        }
        local_78 = lVar10;
        FUN_01ea46cc(param_1,&local_78);
        uVar8 = uVar8 - 1;
        if (uVar8 == 0) {
          lVar10 = param_1[8];
          goto LAB_015beb70;
        }
        lVar10 = param_1[2];
        lVar3 = param_1[3];
      }
      uVar7 = uVar8;
      do {
        lVar10 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0xff0,8);
        if (lVar10 == 0) {
          (**(code **)(*(long *)param_1[10] + 0xe8))();
        }
        local_78 = lVar10;
        FUN_01ea4860(param_1,&local_78);
        lVar10 = 0x1d;
        if (param_1[2] - param_1[1] != 8) {
          lVar10 = 0x1e;
        }
        uVar7 = uVar7 - 1;
        lVar10 = lVar10 + param_1[8];
        param_1[8] = lVar10;
      } while (uVar7 != 0);
      uVar9 = uVar8 + uVar9;
LAB_015beb70:
      param_1[8] = lVar10 + uVar9 * -0x1e;
      for (; uVar9 != 0; uVar9 = uVar9 - 1) {
        local_78 = *(long *)param_1[1];
        param_1[1] = (long)((long *)param_1[1] + 1);
        FUN_015f8f60(param_1,&local_78);
      }
    }
  }
  return;
}


