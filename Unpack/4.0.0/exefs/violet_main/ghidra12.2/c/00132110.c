/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00132110; name: FUN_00132110
 */


void FUN_00132110(long param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  uint local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  
  iVar5 = *(int *)(param_1 + 0x10);
  lVar6 = *(long *)(param_1 + 0x30);
  if (iVar5 == 0x124) {
    local_40 = *(undefined8 *)(param_1 + 0x18);
    local_48[0] = 7;
    uStack_38 = 0xffffffffffffffff;
  }
  else {
    if (iVar5 == 0x7b) {
      FUN_001313d0(param_1,local_48);
      goto LAB_001321fc;
    }
    if (iVar5 != 0x28) {
                    /* WARNING: Subroutine does not return */
      FUN_00138770(param_1,"function arguments expected");
    }
    FUN_00138a10(param_1);
    if (*(int *)(param_1 + 0x10) == 0x29) {
      local_48[0] = 0;
    }
    else {
      while( true ) {
        FUN_00131050(param_1,local_48,0);
        iVar5 = *(int *)(param_1 + 0x10);
        if (iVar5 != 0x2c) break;
        FUN_00138a10(param_1);
        FUN_00133e30(*(undefined8 *)(param_1 + 0x30),local_48);
      }
      if ((local_48[0] & 0xfffffffe) == 0x12) {
        FUN_00133a60(lVar6,local_48,0xffffffff);
        iVar5 = *(int *)(param_1 + 0x10);
      }
      if (iVar5 != 0x29) {
        if (*(int *)(param_1 + 4) == param_3) {
          FUN_001329f0(param_1,0x29);
        }
        uVar7 = *(undefined8 *)(param_1 + 0x38);
        uVar2 = FUN_00138700(param_1,0x29);
        uVar3 = FUN_00138700(param_1,0x28);
        uVar2 = FUN_0012e860(uVar7,"%s expected (to close %s at line %d)",uVar2,uVar3,param_3);
                    /* WARNING: Subroutine does not return */
        FUN_00138770(param_1,uVar2);
      }
    }
  }
  FUN_00138a10(param_1);
LAB_001321fc:
  iVar5 = param_2[2];
  if (local_48[0] - 0x12 < 2) {
    iVar4 = 0;
  }
  else {
    if (local_48[0] != 0) {
      FUN_00133e30(lVar6,local_48);
    }
    iVar4 = (uint)*(byte *)(lVar6 + 0x44) - iVar5;
  }
  uVar1 = FUN_00133250(lVar6,0x44,iVar5,iVar4,2,0);
  *(undefined8 *)(param_2 + 4) = 0xffffffffffffffff;
  param_2[2] = uVar1;
  *param_2 = 0x12;
  FUN_00137b60(lVar6,param_3);
  *(char *)(lVar6 + 0x44) = (char)iVar5 + '\x01';
  return;
}


