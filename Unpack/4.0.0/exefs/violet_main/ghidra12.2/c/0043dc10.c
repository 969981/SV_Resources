/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0043dc10; name: FUN_0043dc10
 */


undefined8 FUN_0043dc10(int *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*param_1 == 0) {
    uVar2 = FUN_0043dd30(param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  else if (*param_1 != *param_2) {
    uVar2 = 0x65;
    uVar3 = 0x51;
    goto LAB_0043dd1c;
  }
  if (((*(long *)(param_2 + 4) == 0) ||
      (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_2 + 4) + 0x80),
      UNRECOVERED_JUMPTABLE == (code *)0x0)) ||
     (iVar1 = (*UNRECOVERED_JUMPTABLE)(param_2), iVar1 == 0)) {
    if (((*(long *)(param_1 + 4) != 0) &&
        (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 4) + 0x80),
        UNRECOVERED_JUMPTABLE != (code *)0x0)) &&
       (iVar1 = (*UNRECOVERED_JUMPTABLE)(param_1), iVar1 != 0)) {
      if (*(long *)(param_2 + 4) == 0) {
        return 0;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_2 + 4) + 0x88);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        return 0;
      }
                    /* WARNING: Could not recover jumptable at 0x0043dccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return uVar2;
    }
    if (((*param_1 == *param_2) && (*(long *)(param_1 + 4) != 0)) &&
       ((UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 4) + 0x90),
        UNRECOVERED_JUMPTABLE != (code *)0x0 &&
        (uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2), (int)uVar2 == 1)))) {
      return uVar2;
    }
    uVar2 = 0x99;
    uVar3 = 0x5d;
  }
  else {
    uVar3 = 0x56;
    uVar2 = 0x67;
  }
LAB_0043dd1c:
  FUN_004806c0(6,0x67,uVar2,"external/openssl/crypto/evp/p_lib.c",uVar3);
  return 0;
}


