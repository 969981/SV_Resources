/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ddb00; name: FUN_003ddb00
 */


undefined8 FUN_003ddb00(undefined8 param_1,char *param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_3 == -1) {
    strlen(param_2);
  }
  if (param_4 - 0x1000U < 5) {
                    /* WARNING: Could not recover jumptable at 0x003ddb94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK_003ddb98 + (ulong)(byte)(&DAT_03cdd3fa)[param_4 - 0x1000] * 4))();
    return uVar1;
  }
  FUN_004806c0(0xd,0x7a,0xa0,"external/openssl/crypto/asn1/a_mbstr.c",0x5f);
  return 0xffffffff;
}


