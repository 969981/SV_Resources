/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024eb4d8; name: FUN_024eb4d8
 */


undefined1  [16]
FUN_024eb4d8(char *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  
  if (((*param_1 != '\x01') && (*param_1 != '\0')) || (*(long *)(param_1 + 8) == 0)) {
    return ZEXT816(0);
  }
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1))
                   );
  }
                    /* WARNING: Could not recover jumptable at 0x024eb504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar1 = (*UNRECOVERED_JUMPTABLE)(*param_4);
  return auVar1;
}


