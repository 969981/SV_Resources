/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f0870; name: FUN_003f0870
 */


undefined8 FUN_003f0870(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  uVar1 = FUN_003ed910(0,param_1,param_2,param_3,param_4);
  if ((int)uVar1 != 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      UNRECOVERED_JUMPTABLE = (code *)PTR_FUN_047cd258;
      if (*(int *)(param_3 + 0x10) != 0) {
        UNRECOVERED_JUMPTABLE = (code *)PTR_FUN_047cd250;
      }
                    /* WARNING: Could not recover jumptable at 0x003f08d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_1,param_3);
      return uVar1;
    }
    uVar1 = 1;
  }
  return uVar1;
}


