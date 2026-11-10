/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c0b480; name: FUN_01c0b480
 */


undefined8
FUN_01c0b480(byte *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (3 < *param_1) {
    return 0;
  }
  switch(*param_1) {
  default:
    if (*(long *)(param_1 + 8) == 0) {
      return 0;
    }
    plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1));
    break;
  case 2:
    if (*(long *)(param_1 + 8) == 0) {
      return 0;
    }
    lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x10);
    if (lVar3 == 0) {
      return 0;
    }
    plVar1 = (long *)(lVar3 + ((long)param_3 >> 1) + -0x28);
    break;
  case 3:
    uVar2 = FUN_01c0b6c0(param_1 + 8,UNRECOVERED_JUMPTABLE);
    return uVar2;
  }
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x01c0b4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(plVar1,param_4,param_5,param_6,param_7);
  return uVar2;
}


