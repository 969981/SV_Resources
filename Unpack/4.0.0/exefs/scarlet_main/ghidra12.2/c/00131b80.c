/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00131b80; name: FUN_00131b80
 */


void FUN_00131b80(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 0x10) == 0x123) {
    FUN_00132300(param_1,param_2);
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0x28) goto LAB_00131d94;
    FUN_00138a10(param_1);
    FUN_00131050(param_1,param_2,0);
    if (*(int *)(param_1 + 0x10) != 0x29) {
      if (*(int *)(param_1 + 4) == iVar1) {
        FUN_001329f0(param_1,0x29);
      }
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      uVar3 = FUN_00138700(param_1,0x29);
      uVar4 = FUN_00138700(param_1,0x28);
      uVar3 = FUN_0012e860(uVar5,"%s expected (to close %s at line %d)",uVar3,uVar4,iVar1);
                    /* WARNING: Subroutine does not return */
      FUN_00138770(param_1,uVar3);
    }
    FUN_00138a10(param_1);
    FUN_00133b50(*(undefined8 *)(param_1 + 0x30),param_2);
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if (0x5a < iVar2) goto LAB_00131ce0;
LAB_00131c48:
  if (iVar2 == 0x28) goto LAB_00131c20;
  if (iVar2 == 0x2e) {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    FUN_001346c0(uVar4,param_2);
    FUN_00138a10(param_1);
    if (*(int *)(param_1 + 0x10) != 0x123) goto LAB_00131d7c;
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    FUN_00138a10(param_1);
    local_68[0] = 7;
    uStack_58 = 0xffffffffffffffff;
    local_60 = uVar5;
    while( true ) {
      FUN_00135110(uVar4,param_2,local_68);
      iVar2 = *(int *)(param_1 + 0x10);
      while( true ) {
        if (iVar2 < 0x5b) goto LAB_00131c48;
LAB_00131ce0:
        if (iVar2 == 0x5b) break;
        if ((iVar2 != 0x7b) && (iVar2 != 0x124)) {
          return;
        }
LAB_00131c20:
        FUN_00133e30(uVar3,param_2);
LAB_00131c2c:
        FUN_00132110(param_1,param_2,iVar1);
        iVar2 = *(int *)(param_1 + 0x10);
      }
      FUN_001346c0(uVar3,param_2);
      FUN_00138a10(param_1);
      FUN_00131050(param_1,local_68,0);
      FUN_001346e0(*(undefined8 *)(param_1 + 0x30),local_68);
      if (*(int *)(param_1 + 0x10) != 0x5d) break;
      FUN_00138a10(param_1);
      uVar4 = uVar3;
    }
  }
  else {
    if (iVar2 != 0x3a) {
      return;
    }
    FUN_00138a10(param_1);
    if (*(int *)(param_1 + 0x10) == 0x123) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      FUN_00138a10(param_1);
      local_68[0] = 7;
      uStack_58 = 0xffffffffffffffff;
      local_60 = uVar4;
      FUN_00134a90(uVar3,param_2,local_68);
      goto LAB_00131c2c;
    }
LAB_00131d7c:
    FUN_001329f0(param_1,0x123);
  }
  FUN_001329f0(param_1,0x5d);
LAB_00131d94:
                    /* WARNING: Subroutine does not return */
  FUN_00138770(param_1,"unexpected symbol");
}


