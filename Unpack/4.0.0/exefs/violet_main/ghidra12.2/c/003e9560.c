/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e9560; name: FUN_003e9560
 */


long FUN_003e9560(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  if ((*param_1 == 0) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x40), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    FUN_004806c0(0x20,0x67,0x79,"external/openssl/crypto/bio/bio_lib.c",0x206);
    return -2;
  }
  pcVar1 = (code *)param_1[2];
  if ((code *)param_1[1] == (code *)0x0) {
    if (pcVar1 == (code *)0x0) goto LAB_003e9640;
LAB_003e9608:
    lVar2 = (*pcVar1)(param_1,6,param_4,0,param_2,param_3,1,0);
  }
  else {
    if (pcVar1 != (code *)0x0) goto LAB_003e9608;
    lVar2 = (*(code *)param_1[1])(param_1,6,param_4,param_2,param_3,1);
  }
  if (lVar2 < 1) {
    return lVar2;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x40);
LAB_003e9640:
  lVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  UNRECOVERED_JUMPTABLE = (code *)param_1[2];
  if ((code *)param_1[1] == (code *)0x0) {
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return lVar2;
    }
  }
  else if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003e9688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = (*(code *)param_1[1])(param_1,0x86,param_4,param_2,param_3,lVar2);
    return lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x003e96b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,0x86,param_4,0,param_2,param_3,lVar2,0);
  return lVar2;
}


