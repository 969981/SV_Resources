/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0013b770; name: FUN_0013b770
 */


void FUN_0013b770(long param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  char *pcVar2;
  
  if ((*(byte *)(*(long *)(param_1 + 0x10) + -8) & 0xf) == 4) {
    pcVar2 = (char *)(*(long *)(*(long *)(param_1 + 0x10) + -0x10) + 0x18);
    lVar1 = *(long *)(param_1 + 0x18);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x578);
  }
  else {
    pcVar2 = "error object is not a string";
    lVar1 = *(long *)(param_1 + 0x18);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x578);
  }
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(lVar1 + 0x580),"error in ",1);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x18) + 0x578);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x580),param_2,1);
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x18) + 0x578);
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x580),&DAT_03c2afeb,1)
        ;
        UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x18) + 0x578);
        if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
          (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x580),pcVar2,1);
          UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x18) + 0x578);
          if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0013b85c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)
                      (*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x580),&DAT_03c8f4f1,0);
            return;
          }
        }
      }
    }
  }
  return;
}


