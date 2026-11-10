/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0040e1d0; name: FUN_0040e1d0
 */


undefined8 FUN_0040e1d0(long *param_1,long param_2,long *param_3)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xe8);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    uVar2 = 0x42;
    uVar3 = 0x3d9;
LAB_0040e250:
    FUN_004806c0(0x10,0x88,uVar2,"external/openssl/crypto/ec/ec_lib.c",uVar3);
    return 0;
  }
  if (param_2 != 0) {
    do {
      if ((*param_1 != *(long *)*param_3) ||
         (((int)param_1[4] != 0 &&
          (iVar1 = (int)((long *)*param_3)[1], iVar1 != 0 && (int)param_1[4] != iVar1)))) {
        uVar2 = 0x65;
        uVar3 = 0x3de;
        goto LAB_0040e250;
      }
      param_2 = param_2 + -1;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x0040e268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)();
  return uVar2;
}


