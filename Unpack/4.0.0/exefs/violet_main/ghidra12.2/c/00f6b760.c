/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f6b760; name: FUN_00f6b760
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f6b760(undefined8 *param_1,long param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_03cabe58;
  uVar1 = _DAT_03cabe50;
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[4] = 0x3f4ccccd3f000000;
    param_1[5] = 0x83e4ccccd;
    param_1[3] = uVar2;
    param_1[2] = uVar1;
    return;
  }
  if ((param_4 & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(param_2 + ((long)param_4 >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x00f6b774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


