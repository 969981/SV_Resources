/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0043fae0; name: FUN_0043fae0
 */


undefined8 FUN_0043fae0(long *param_1,long param_2,ulong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  
  if (((param_1 == (long *)0x0) || (lVar3 = *param_1, lVar3 == 0)) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0xb8), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    FUN_004806c0(6,0x99,0x96,"external/openssl/crypto/evp/pmeth_fn.c",0x120);
    return 0xfffffffe;
  }
  if ((int)param_1[4] != 0x400) {
    FUN_004806c0(6,0x99,0x97,"external/openssl/crypto/evp/pmeth_fn.c",0x124);
    return 0xffffffff;
  }
  if ((*(byte *)(lVar3 + 4) >> 1 & 1) == 0) {
LAB_0043fb1c:
                    /* WARNING: Could not recover jumptable at 0x0043fb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
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
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb8);
      goto LAB_0043fb1c;
    }
    uVar2 = 0x9b;
  }
  FUN_004806c0(6,0x99,uVar2,"external/openssl/crypto/evp/pmeth_fn.c",0x127);
  return 0;
}


