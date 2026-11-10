/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ceb804; name: FUN_00ceb804
 */


void FUN_00ceb804(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long *local_58;
  long local_38;
  
  plVar7 = (long *)param_1[1];
  lVar1 = param_1[2] - (long)plVar7;
  if (lVar1 == 0) {
    param_2 = param_2 + 1;
  }
  uVar6 = param_2 >> 10;
  uVar4 = param_1[8];
  if ((param_2 & 0x3ff) != 0) {
    uVar6 = uVar6 + 1;
  }
  uVar9 = uVar6;
  if (uVar4 >> 10 <= uVar6) {
    uVar9 = uVar4 >> 10;
  }
  uVar6 = uVar6 - uVar9;
  if (uVar6 == 0) {
    param_1[8] = uVar4 + uVar9 * -0x400;
    if (uVar9 != 0) {
      local_78 = *plVar7;
      param_1[1] = (long)(plVar7 + 1);
      FUN_027330f4(param_1,&local_78);
      if (uVar9 != 1) {
        lVar1 = -uVar9;
        do {
          lVar1 = lVar1 + 1;
          local_78 = *(long *)param_1[1];
          param_1[1] = (long)((long *)param_1[1] + 1);
          FUN_027330f4(param_1,&local_78);
        } while (lVar1 != -1);
      }
    }
  }
  else {
    lVar5 = param_1[3] - *param_1;
    lVar1 = lVar1 >> 3;
    if ((ulong)((lVar5 >> 3) - lVar1) < uVar6) {
      uVar2 = lVar5 >> 2;
      uVar4 = uVar6 + lVar1;
      if (uVar6 + lVar1 <= uVar2) {
        uVar4 = uVar2;
      }
      plVar7 = param_1 + 4;
      local_60 = 0;
      local_58 = plVar7;
      if (uVar4 == 0) {
        local_78 = 0;
      }
      else {
        local_78 = (**(code **)(*(long *)*plVar7 + 0x10))((long *)*plVar7,uVar4 << 3,4);
        if (local_78 == 0) {
          (**(code **)(*(long *)*plVar7 + 0xe8))();
        }
      }
      local_70 = local_78 + (lVar1 - uVar9) * 8;
      local_60 = local_78 + uVar4 * 8;
      local_68 = local_70;
      do {
        lVar1 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0x1000,4);
        if (lVar1 == 0) {
          (**(code **)(*(long *)param_1[10] + 0xe8))();
        }
        local_38 = lVar1;
        FUN_00c44f54(&local_78,&local_38);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      lVar1 = param_1[1];
      for (uVar6 = uVar9; uVar6 != 0; uVar6 = uVar6 - 1) {
        FUN_02733374(&local_78,lVar1);
        lVar1 = param_1[1] + 8;
        param_1[1] = lVar1;
      }
      lVar5 = param_1[2];
      if (lVar5 != lVar1) {
        lVar1 = lVar5;
        do {
          lVar1 = lVar1 + -8;
          FUN_00c44cc0(&local_78,lVar1);
        } while (lVar1 != param_1[1]);
        lVar5 = param_1[2];
      }
      lVar8 = *param_1;
      *param_1 = local_78;
      param_1[1] = local_70;
      param_1[2] = local_68;
      lVar3 = param_1[3];
      param_1[3] = local_60;
      param_1[8] = param_1[8] + uVar9 * -0x400;
      local_68 = lVar5;
      if (lVar1 != lVar5) {
        local_68 = lVar5 + ((lVar5 - lVar1) - 8U >> 3 ^ 0xffffffffffffffff) * 8;
      }
      if (lVar8 != 0) {
        lVar5 = lVar3 - lVar8;
        plVar7 = (long *)*local_58;
        local_78 = lVar8;
        local_70 = lVar1;
        local_60 = lVar3;
        uVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7);
        if (((uVar6 & 1) == 0) || (lVar1 = FUN_00c4e600(), *(int *)(lVar1 + 0x12c8) < 1)) {
          (**(code **)(*plVar7 + 0x18))(plVar7,lVar8,lVar5,4);
        }
        else {
          FUN_00c48fe8(plVar7,lVar8,lVar5,4);
        }
      }
    }
    else {
      if (param_1[3] != param_1[2]) {
        do {
          lVar1 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0x1000,4);
          if (lVar1 == 0) {
            (**(code **)(*(long *)param_1[10] + 0xe8))();
          }
          local_78 = lVar1;
          FUN_00c44a40(param_1,&local_78);
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            lVar1 = param_1[8];
            goto LAB_00cebab8;
          }
        } while (param_1[3] != param_1[2]);
      }
      uVar4 = uVar6;
      do {
        lVar1 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0x1000,4);
        if (lVar1 == 0) {
          (**(code **)(*(long *)param_1[10] + 0xe8))();
        }
        local_78 = lVar1;
        FUN_00c45458(param_1,&local_78);
        lVar1 = 0x3ff;
        if (param_1[2] - param_1[1] != 8) {
          lVar1 = 0x400;
        }
        uVar4 = uVar4 - 1;
        lVar1 = lVar1 + param_1[8];
        param_1[8] = lVar1;
      } while (uVar4 != 0);
      uVar9 = uVar6 + uVar9;
LAB_00cebab8:
      param_1[8] = lVar1 + uVar9 * -0x400;
      for (; uVar9 != 0; uVar9 = uVar9 - 1) {
        local_78 = *(long *)param_1[1];
        param_1[1] = (long)((long *)param_1[1] + 1);
        FUN_027330f4(param_1,&local_78);
      }
    }
  }
  return;
}


