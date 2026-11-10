/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0259f024; name: FUN_0259f024
 */


undefined8 FUN_0259f024(long *param_1,char *param_2)

{
  long lVar1;
  ulong uVar2;
  char cVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  uVar2 = param_1[1];
  cVar3 = *param_2;
  lVar1 = (long)uVar2 >> 1;
  if (cVar3 == '\x02') {
    if ((*(long *)(param_2 + 8) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar5 != 0)) {
      if ((uVar2 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar5 + lVar1 + -0x28))
        ;
      }
                    /* WARNING: Could not recover jumptable at 0x0259f05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*UNRECOVERED_JUMPTABLE)();
      return uVar4;
    }
  }
  else {
    if (cVar3 == '\x03') {
      uVar4 = FUN_01a73114(param_2 + 8);
      return uVar4;
    }
    if (cVar3 == '\x01') {
      if (*(long *)(param_2 + 8) != 0) {
        if ((uVar2 & 1) != 0) {
          UNRECOVERED_JUMPTABLE =
               *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_2 + 8) + lVar1));
        }
                    /* WARNING: Could not recover jumptable at 0x0259f0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*UNRECOVERED_JUMPTABLE)();
        return uVar4;
      }
    }
    else if ((cVar3 == '\0') && (*(long *)(param_2 + 8) != 0)) {
      if ((uVar2 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_2 + 8) + lVar1));
      }
                    /* WARNING: Could not recover jumptable at 0x0259f08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*UNRECOVERED_JUMPTABLE)();
      return uVar4;
    }
  }
  return 0;
}


