/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016b3fe4; name: FUN_016b3fe4
 */


void FUN_016b3fe4(undefined8 *param_1,char *param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined4 *param_7,undefined4 *param_8,
                 undefined4 *param_9,undefined8 *param_10,undefined4 *param_11)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  
  cVar1 = *param_2;
  if (cVar1 == '\x02') {
    if ((*(long *)(param_2 + 8) == 0) ||
       (lVar3 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar3 == 0)) {
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    plVar2 = (long *)(lVar3 + ((long)param_4 >> 1) + -0x28);
    if ((param_4 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x016b408c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (*param_5,*param_9,*param_10,*param_11,plVar2,*param_6,*param_7,*param_8);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_016b4638(param_2 + 8);
    return;
  }
  if (cVar1 == '\x01') {
    FUN_016b45ec(param_2 + 8);
    return;
  }
  if (cVar1 == '\0') {
    FUN_016b45a4(*(undefined8 *)(param_2 + 8));
    return;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


