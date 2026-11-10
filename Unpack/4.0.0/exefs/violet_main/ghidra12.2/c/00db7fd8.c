/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00db7fd8; name: FUN_00db7fd8
 */


undefined8 FUN_00db7fd8(char *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  
  cVar2 = *param_1;
  lVar1 = (long)param_3 >> 1;
  if (cVar2 == '\x01') {
    if (*(long *)(param_1 + 8) != 0) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_1 + 8) + lVar1));
      }
                    /* WARNING: Could not recover jumptable at 0x00db7ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE)();
      return uVar3;
    }
  }
  else if (cVar2 == '\x02') {
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar4 != 0)) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar4 + lVar1 + -0x28))
        ;
      }
                    /* WARNING: Could not recover jumptable at 0x00db802c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE)();
      return uVar3;
    }
  }
  else {
    if (cVar2 == '\x03') {
      uVar3 = FUN_00db82a8(param_1 + 8);
      return uVar3;
    }
    if ((cVar2 == '\0') && (*(long *)(param_1 + 8) != 0)) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_1 + 8) + lVar1));
      }
                    /* WARNING: Could not recover jumptable at 0x00db8054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE)();
      return uVar3;
    }
  }
  return 0;
}


