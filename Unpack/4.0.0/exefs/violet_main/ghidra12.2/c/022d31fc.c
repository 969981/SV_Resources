/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022d31fc; name: FUN_022d31fc
 */


undefined8
FUN_022d31fc(undefined1 *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined4 *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  
  switch(*param_1) {
  case 0:
  case 1:
    if (*(long *)(param_1 + 8) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1));
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
      }
                    /* WARNING: Could not recover jumptable at 0x022d3240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)(plVar1,*param_4);
      return uVar2;
    }
    break;
  case 2:
    uVar2 = FUN_022d6e14(param_1 + 8,UNRECOVERED_JUMPTABLE);
    return uVar2;
  case 3:
    uVar2 = FUN_022d6e4c(param_1 + 8,UNRECOVERED_JUMPTABLE);
    return uVar2;
  }
  return 0;
}


