/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0351c51c; name: FUN_0351c51c
 */


void FUN_0351c51c(undefined4 param_1,long *param_2,int param_3,ulong param_4)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = false;
  bVar2 = false;
  switch(param_3 - 0x1000000U >> 0x18 | param_3 << 8) {
  case 1:
    bVar1 = true;
  case 0:
    *(undefined4 *)((long)param_2 + 0x4c) = param_1;
    (**(code **)(*param_2 + 0x28))(param_2);
    if (((param_4 & 1) != 0) && (param_2[7] = 0, bVar1)) {
                    /* WARNING: Could not recover jumptable at 0x0351c5ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x10))(param_2,0xffffffff);
      return;
    }
    break;
  case 3:
    bVar2 = true;
  case 7:
    *(undefined4 *)(param_2 + 10) = param_1;
    (**(code **)(*param_2 + 0x28))(param_2);
    if (((param_4 & 1) != 0) && (param_2[8] = 0, bVar2)) {
                    /* WARNING: Could not recover jumptable at 0x0351c5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x18))(param_2);
      return;
    }
  }
  return;
}


