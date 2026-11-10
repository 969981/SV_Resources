/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034e15c0; name: FUN_034e15c0
 */


void FUN_034e15c0(long param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_034e1414();
  if ((*(char *)((long)param_2 + 0x23) == '\0') || (*(char *)((long)param_2 + 0x21) == '\0')) {
    return;
  }
  iVar1 = *param_2;
  if ((iVar1 == 0) || (iVar1 == 2)) {
    uVar2 = 0;
  }
  else {
    if (iVar1 != 1) {
      return;
    }
    uVar2 = 1;
  }
  FUN_034dbac0(param_1 + 0x20,uVar2);
  return;
}


