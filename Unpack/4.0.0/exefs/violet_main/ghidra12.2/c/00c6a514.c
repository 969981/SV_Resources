/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c6a514; name: FUN_00c6a514
 */


void FUN_00c6a514(long *param_1,char param_2)

{
  long lVar1;
  
  if (((char)param_1[4] == param_2) && (*(char *)((long)param_1 + 0x21) == param_2)) {
    return;
  }
  lVar1 = param_1[4];
  *(char *)(param_1 + 4) = param_2;
  *(char *)((long)param_1 + 0x21) = param_2;
  if (param_1[2] != 0) {
    FUN_00c6a584(param_1[2],param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00c6a568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,(short)lVar1);
  return;
}


