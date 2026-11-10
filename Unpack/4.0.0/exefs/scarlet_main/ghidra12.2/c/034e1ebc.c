/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034e1ebc; name: FUN_034e1ebc
 */


void FUN_034e1ebc(long *param_1,undefined4 param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  
  if ((*(byte *)((long)param_1 + 0xdd) >> 3 & 1) == 0) {
    return;
  }
  lVar1 = param_1[0x12];
  if (((lVar1 == 0) || ((*(short *)(lVar1 + 0x90) < 1 && (*(short *)(lVar1 + 0x94) < 1)))) &&
     (*param_3 != 0)) {
    FUN_034c7a54(*(undefined8 *)PTR_DAT_047e6cc0,*param_3,(int)param_1[3],param_2);
    return;
  }
  (**(code **)(*param_1 + 0x28))(param_1);
  FUN_034e1f80(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x034e1f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1);
  return;
}


