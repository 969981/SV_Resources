/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00103d00; name: FUN_00103d00
 */


void FUN_00103d00(undefined8 param_1,uint param_2,int param_3,uint param_4,undefined8 *param_5,
                 long *param_6,undefined4 param_7,undefined8 param_8,uint param_9,int param_10,
                 long param_11)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined1 auStack_a0 [8];
  uint local_98;
  int local_94;
  undefined8 local_90;
  ulong *local_88;
  ulong local_80;
  uint local_78;
  undefined8 local_68;
  
  uVar8 = (ulong)param_2;
  lVar6 = -(uVar8 * 4 + 0x6f & 0x7fffffff0);
  uVar7 = (long)&local_68 + lVar6 + 7 & 0xffffffffffffffc0;
  lVar1 = param_6[1] + 0x48;
  local_88 = (ulong *)*param_6 + 1;
  local_80 = *(ulong *)*param_6;
  local_78 = 0x40;
  if ((param_4 & 1) != 0) {
    local_80 = local_80 >> 2;
    local_78 = 0x3e;
  }
  if (param_3 == 1) {
    if ((param_4 >> 2 & 1) == 0) {
      FUN_00105820();
    }
    else {
      FUN_00104040(uVar7,param_2,param_7,&local_88,param_8,lVar1);
    }
    FUN_00105c90(param_1,param_4,param_5,uVar7,param_2,param_11,param_9,param_10);
  }
  else {
    local_68 = param_11;
    local_90 = param_8;
    if ((param_4 >> 1 & 1) == 0) {
      uVar4 = param_2 * 4;
      puVar9 = (undefined1 *)*param_5;
      uVar5 = *(int *)(param_5 + 2) - (int)puVar9;
      uVar2 = *(uint *)(param_5 + 3);
      uVar3 = uVar2;
      if (uVar5 <= uVar2) {
        uVar3 = uVar5;
      }
      if (uVar3 < uVar4) {
        if (uVar2 - uVar3 < uVar4) {
          puVar9 = auStack_a0 + (lVar6 - ((ulong)(uVar4 + 0x10) + 0xf & 0x1fffffff0));
        }
        else {
          puVar9 = (undefined1 *)param_5[1];
        }
      }
      local_98 = param_9;
      if ((param_4 >> 2 & 1) == 0) {
        FUN_00105820();
        FUN_00105d30(param_1,param_4,puVar9 + uVar8 * 2,uVar7,param_2,0,0,0);
        FUN_00105820(uVar7,param_2,param_7,&local_88,local_90,lVar1);
      }
      else {
        FUN_00104040(uVar7,param_2,param_7,&local_88,param_8,lVar1);
        FUN_00105d30(param_1,param_4,puVar9 + uVar8 * 2,uVar7,param_2,0,0,0);
        FUN_00104040(uVar7,param_2,param_7,&local_88,local_90,lVar1);
      }
      FUN_00105e30(param_1,param_5,puVar9,uVar7,param_2,local_68,local_98,param_10);
    }
    else {
      uVar3 = *(uint *)((long)param_5 + 0x1c);
      local_94 = 0;
      if (param_10 != 0) {
        local_94 = param_10 + -1;
      }
      uVar8 = (ulong)(param_9 >> 1);
      uVar2 = uVar3 >> 1;
      *(uint *)((long)param_5 + 0x1c) = uVar2;
      if ((param_4 >> 2 & 1) == 0) {
        FUN_00105820(uVar7,param_2,param_7,&local_88,param_8,lVar1);
      }
      else {
        FUN_00104040();
      }
      FUN_00105c90(param_1,param_4,param_5,uVar7,param_2,local_68,uVar8,local_94);
      *(uint *)((long)param_5 + 0x1c) = (uVar3 - uVar2) + *(int *)((long)param_5 + 0x1c);
      if ((param_4 >> 2 & 1) == 0) {
        FUN_00105820(uVar7,param_2,param_7,&local_88,local_90,lVar1);
      }
      else {
        FUN_00104040();
      }
      FUN_00105c90(param_1,param_4,param_5,uVar7,param_2,local_68 + uVar8,uVar8,local_94);
    }
  }
  *param_6 = *param_6 +
             ((long)local_88 + (-(ulong)(local_78 >> 3) - *param_6) + 3 & 0xfffffffffffffffc);
  return;
}


