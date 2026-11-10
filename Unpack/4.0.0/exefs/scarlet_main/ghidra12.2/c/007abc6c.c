/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007abc6c; name: FUN_007abc6c
 */


void FUN_007abc6c(long *param_1)

{
  ulong uVar1;
  int *piVar2;
  undefined4 local_40 [4];
  undefined4 local_30 [4];
  
  FUN_0078cc8c(param_1[0xc]);
  piVar2 = (int *)param_1[0xb];
  if (piVar2 != (int *)0x0) {
    if (*piVar2 == 1) {
      local_40[0] = 0x2c18;
      local_30[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_30);
      FUN_00cbd7c0(local_30,local_40);
      FUN_0078cb94(piVar2,local_30);
    }
    param_1[0xb] = 0;
  }
  uVar1 = FUN_0078cdf4(param_1);
  if ((uVar1 & 1) != 0) {
    (**(code **)(*param_1 + 0x10))(param_1,0);
  }
  return;
}


