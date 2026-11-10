/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030da740; name: FUN_030da740
 */


void FUN_030da740(long *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_030da7ac();
  if ((int)param_1[1] == iVar2) {
    iVar1 = iVar2 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar2) {
      FUN_030da8a0(param_1,(long)iVar1);
      iVar2 = (int)param_1[1];
    }
    *(undefined4 *)(*param_1 + (long)iVar2 * 4) = *param_2;
    *(int *)(param_1 + 1) = iVar1;
  }
  return;
}


