/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0040e150; name: FUN_0040e150
 */


undefined8 FUN_0040e150(long *param_1,long *param_2)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xe0);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    uVar1 = 0x42;
    uVar2 = 0x3c9;
  }
  else {
    if (*param_1 == *param_2) {
      if ((((int)param_1[4] == 0) || ((int)param_2[1] == 0)) || ((int)param_1[4] == (int)param_2[1])
         ) {
                    /* WARNING: Could not recover jumptable at 0x0040e1c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*UNRECOVERED_JUMPTABLE)();
        return uVar1;
      }
    }
    uVar1 = 0x65;
    uVar2 = 0x3cd;
  }
  FUN_004806c0(0x10,0x78,uVar1,"external/openssl/crypto/ec/ec_lib.c",uVar2);
  return 0;
}


