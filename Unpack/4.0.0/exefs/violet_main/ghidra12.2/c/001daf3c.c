/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001daf3c; name: FUN_001daf3c
 */


void FUN_001daf3c(char *param_1,ulong param_2)

{
  undefined8 uVar1;
  
  uVar1 = s__________03bd1d06._0_8_;
  if ((long)param_2 < 1) {
    param_1[8] = '\0';
    *(undefined8 *)param_1 = uVar1;
    return;
  }
  if ((long)param_2 < 360000) {
    FUN_001ce394(param_1,9,"%2ld:%02ld:%02ld",param_2 / 0xe10,(param_2 % 0xe10) / 0x3c,
                 (param_2 % 0xe10) % 0x3c);
    return;
  }
  if ((long)param_2 < 86400000) {
    FUN_001ce394(param_1,9,"%3ldd %02ldh",param_2 / 0x15180,(param_2 % 0x15180) / 0xe10);
    return;
  }
  FUN_001ce394(param_1,9,"%7ldd");
  return;
}


