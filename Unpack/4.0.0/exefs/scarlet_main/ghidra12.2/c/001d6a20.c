/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001d6a20; name: FUN_001d6a20
 */


int FUN_001d6a20(undefined8 param_1,undefined8 *param_2,int *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *param_3;
  if (iVar1 == 4) {
    FUN_001ec308(*param_2);
    *param_2 = 0;
    iVar1 = *param_3;
  }
  if (iVar1 != 0) {
    iVar1 = FUN_003822f0(param_2);
    if ((param_4 == 0) && (iVar1 != 0)) {
      FUN_001d6780(param_1,param_2);
      param_4 = 0x3d;
    }
    *param_3 = 0;
  }
  return param_4;
}


