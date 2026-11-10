/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0043f250; name: FUN_0043f250
 */


undefined8
FUN_0043f250(long *param_1,long param_2,ulong *param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  
  if (((param_1 == (long *)0x0) || (lVar3 = *param_1, lVar3 == 0)) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0x48), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    FUN_004806c0(6,0x8c,0x96,"external/openssl/crypto/evp/pmeth_fn.c",0x3a);
    return 0xfffffffe;
  }
  if ((int)param_1[4] != 8) {
    FUN_004806c0(6,0x8c,0x97,"external/openssl/crypto/evp/pmeth_fn.c",0x3e);
    return 0xffffffff;
  }
  if ((*(byte *)(lVar3 + 4) >> 1 & 1) == 0) {
LAB_0043f298:
                    /* WARNING: Could not recover jumptable at 0x0043f2b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5);
    return uVar2;
  }
  iVar1 = FUN_0043dbf0(param_1[2]);
  if (iVar1 == 0) {
    uVar2 = 0xa3;
  }
  else {
    if (param_2 == 0) {
      *param_3 = (long)iVar1;
      return 1;
    }
    if ((ulong)(long)iVar1 <= *param_3) {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x48);
      goto LAB_0043f298;
    }
    uVar2 = 0x9b;
  }
  FUN_004806c0(6,0x8c,uVar2,"external/openssl/crypto/evp/pmeth_fn.c",0x41);
  return 0;
}


