/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a5e40; name: FUN_007a5e40
 */


void FUN_007a5e40(long *param_1)

{
  ulong uVar1;
  int *piVar2;
  undefined4 local_40 [4];
  undefined1 auStack_30 [16];
  undefined4 local_18 [2];
  
  uVar1 = FUN_0078cdf4();
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)(param_1 + 9) = 1;
    do {
      FUN_00792f30(param_1,2);
      uVar1 = FUN_0078cdf4(param_1);
    } while ((uVar1 & 1) != 0);
  }
  piVar2 = (int *)param_1[0xb];
  if (piVar2 != (int *)0x0) {
    if (*piVar2 == 1) {
      local_40[0] = 0x6c05;
      local_18[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_18);
      FUN_00cbd7c0(auStack_30,local_40);
      FUN_0078cb94(piVar2,auStack_30);
    }
    param_1[0xb] = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 10;
  *(undefined4 *)(param_1 + 0x19) = 0xc;
  *(undefined2 *)((long)param_1 + 100) = 0;
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}


