/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001313d0; name: FUN_001313d0
 */


void FUN_001313d0(long param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  int local_70 [2];
  undefined4 local_68;
  undefined8 local_60;
  undefined4 *local_58;
  undefined8 local_50;
  int local_48;
  
  lVar7 = *(long *)(param_1 + 0x30);
  iVar6 = *(int *)(param_1 + 4);
  uVar2 = FUN_00133250(lVar7,0x13,0,0,0,0);
  FUN_001335d0(lVar7,0);
  local_48 = 0;
  local_50 = 0;
  bVar1 = *(byte *)(lVar7 + 0x44);
  *(undefined8 *)(param_2 + 4) = 0xffffffffffffffff;
  *param_2 = 8;
  param_2[2] = (uint)bVar1;
  local_58 = param_2;
  FUN_00133830(lVar7,1);
  local_60 = 0xffffffffffffffff;
  local_70[0] = 0;
  local_68 = 0;
  if (*(int *)(param_1 + 0x10) != 0x7b) {
LAB_00131640:
    FUN_001329f0(param_1,0x7b);
LAB_0013164c:
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    uVar4 = FUN_00138700(param_1,0x7d);
    uVar5 = FUN_00138700(param_1,0x7b);
    uVar4 = FUN_0012e860(uVar8,"%s expected (to close %s at line %d)",uVar4,uVar5,iVar6);
                    /* WARNING: Subroutine does not return */
    FUN_00138770(param_1,uVar4);
  }
  FUN_00138a10(param_1);
  if (*(int *)(param_1 + 0x10) == 0x7d) {
LAB_0013147c:
    FUN_00138a10(param_1);
    if (local_48 == 0) {
      iVar6 = local_50._4_4_;
    }
    else {
      if (local_70[0] - 0x12U < 2) {
        FUN_00133a60(lVar7,local_70,0xffffffff);
        FUN_00137c50(lVar7,local_58[2],local_50._4_4_,0xffffffff);
        iVar6 = local_50._4_4_ + -1;
        local_50 = local_50 & 0xffffffff;
      }
      else {
        if (local_70[0] != 0) {
          FUN_00133e30(lVar7,local_70);
        }
        FUN_00137c50(lVar7,local_58[2],local_50._4_4_,local_48);
        iVar6 = local_50._4_4_;
      }
      local_50 = CONCAT44(local_48 + iVar6,(undefined4)local_50);
      iVar6 = local_48 + iVar6;
    }
    FUN_00137bc0(lVar7,uVar2,param_2[2],iVar6,local_50 & 0xffffffff);
    return;
  }
LAB_00131524:
  if ((*(int *)(param_1 + 0x10) == 0x5b) ||
     ((*(int *)(param_1 + 0x10) == 0x123 && (iVar3 = FUN_0013a350(param_1), iVar3 == 0x3d)))) {
    FUN_00131e10(param_1,local_70);
    iVar3 = *(int *)(param_1 + 0x10);
  }
  else {
    FUN_00131050(param_1,local_70,0);
    local_48 = local_48 + 1;
    iVar3 = *(int *)(param_1 + 0x10);
  }
  if (iVar3 != 0x2c) {
    if (iVar3 == 0x7d) goto LAB_0013147c;
    if (iVar3 != 0x3b) {
      if (*(int *)(param_1 + 4) != iVar6) goto LAB_0013164c;
      FUN_001329f0(param_1,0x7d);
      goto LAB_00131640;
    }
  }
  FUN_00138a10(param_1);
  if (*(int *)(param_1 + 0x10) == 0x7d) goto LAB_0013147c;
  if (local_70[0] != 0) {
    FUN_00133e30(lVar7,local_70);
    local_70[0] = 0;
    if (local_48 == 0x32) {
      FUN_00137c50(lVar7,local_58[2],local_50._4_4_,0x32);
      local_50 = CONCAT44(local_50._4_4_ + local_48,(undefined4)local_50);
      local_48 = 0;
    }
  }
  goto LAB_00131524;
}


