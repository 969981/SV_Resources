/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007fde08; name: FUN_007fde08
 */


void FUN_007fde08(long param_1)

{
  ulong uVar1;
  int *piVar2;
  undefined4 local_40 [4];
  undefined1 auStack_30 [16];
  undefined4 local_18 [2];
  
  if (*(int *)(param_1 + 0x60) == 1) {
    FUN_0078cc8c();
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    uVar1 = FUN_0078cdf4();
    while ((uVar1 & 1) != 0) {
      FUN_00792f30(*(undefined8 *)(param_1 + 0x90),2);
      uVar1 = FUN_0078cdf4(*(undefined8 *)(param_1 + 0x90));
    }
  }
  piVar2 = *(int **)(param_1 + 0x58);
  if (piVar2 != (int *)0x0) {
    if (*piVar2 == 1) {
      local_40[0] = 0x6c05;
      local_18[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_18);
      FUN_00cbd7c0(auStack_30,local_40);
      FUN_0078cb94(piVar2,auStack_30);
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  return;
}


