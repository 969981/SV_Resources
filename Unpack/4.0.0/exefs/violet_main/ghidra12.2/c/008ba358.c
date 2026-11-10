/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008ba358; name: FUN_008ba358
 */


void FUN_008ba358(long *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  if ((*(byte *)((long)param_1 + 0xdd) & 1) != 0) {
    *(byte *)((long)param_1 + 0xdd) = *(byte *)((long)param_1 + 0xdd) & 0xfe;
    FUN_008a82bc(param_1,param_3,1);
    if ((*(byte *)((long)param_1 + 0xdd) >> 1 & 1) == 0) {
      if (*(uint *)((long)param_1 + 0xd4) < 2) {
        FUN_008ba404();
      }
      else {
        FUN_008bae44();
      }
    }
    else if (*(uint *)((long)param_1 + 0xd4) < 2) {
      FUN_008bafe8();
    }
    else {
      FUN_008bba3c(param_1);
    }
  }
  FUN_008a729c(param_1,param_2,param_3,param_4 & 1);
                    /* WARNING: Could not recover jumptable at 0x008ba400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd0))(param_1,param_2);
  return;
}


