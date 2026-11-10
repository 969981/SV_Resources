/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0037b140; name: FUN_0037b140
 */


void FUN_0037b140(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar1 = FUN_00358000(param_3);
  if (lVar1 == 0) {
    lVar1 = FUN_00358020(param_3);
    if (lVar1 == 0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x20);
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x0037b198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,lVar1);
  return;
}


