/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007b5ad8; name: FUN_007b5ad8
 */


void FUN_007b5ad8(long param_1)

{
  int *piVar1;
  undefined4 local_40 [4];
  undefined1 auStack_30 [16];
  undefined4 local_18 [2];
  
  piVar1 = *(int **)(param_1 + 0x58);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == 1) {
      local_40[0] = 0x6c05;
      local_18[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_18);
      FUN_00cbd7c0(auStack_30,local_40);
      FUN_0078cb94(piVar1,auStack_30);
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  FUN_007965fc(param_1 + 0x60);
  return;
}


