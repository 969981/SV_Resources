/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0040db50; name: FUN_0040db50
 */


undefined8 FUN_0040db50(long *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x78);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    uVar1 = 0x42;
    uVar2 = 0x2fd;
  }
  else {
    if (*param_1 == *param_2) {
      if ((((int)param_1[4] == 0) || ((int)param_2[1] == 0)) || ((int)param_1[4] == (int)param_2[1])
         ) {
                    /* WARNING: Could not recover jumptable at 0x0040dbc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*UNRECOVERED_JUMPTABLE)();
        return uVar1;
      }
    }
    uVar1 = 0x65;
    uVar2 = 0x302;
  }
  FUN_004806c0(0x10,0x7e,uVar1,"external/openssl/crypto/ec/ec_lib.c",uVar2);
  return 0;
}


