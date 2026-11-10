/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0351d16c; name: FUN_0351d16c
 */


void FUN_0351d16c(long *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_1[2] == 0) {
    lVar2 = param_1[0xc];
    FUN_0351e400(lVar2);
    FUN_0351e68c(lVar2,param_2,param_3);
  }
  iVar1 = (int)param_1[9] + -1;
  *(int *)(param_1 + 9) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  if (param_1[2] == 0) {
    FUN_03518540(param_1);
  }
  else {
    FUN_0351c44c(param_1[2],param_1);
    param_1[2] = 0;
  }
  (**(code **)(*param_1 + 0x50))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0351d21c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,param_1);
  return;
}


