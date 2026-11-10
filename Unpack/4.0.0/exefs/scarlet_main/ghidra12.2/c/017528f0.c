/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017528f0; name: FUN_017528f0
 */


void FUN_017528f0(undefined4 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  
  lVar1 = FUN_0175296c();
  if ((ulong)param_3[1] < (ulong)(param_3[2] + lVar1)) {
    *param_1 = 0xd;
    return;
  }
  *(undefined1 *)(*param_3 + param_3[2]) = 0xbd;
  param_3[2] = param_3[2] + 1;
  FUN_017529d8(param_1,0xbd,param_2,param_3);
  return;
}


