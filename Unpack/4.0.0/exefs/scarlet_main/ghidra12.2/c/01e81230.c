/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e81230; name: FUN_01e81230
 */


void FUN_01e81230(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    if ((*(char *)(param_1 + 0x140) == '\0') && (iVar1 = *(int *)(param_1 + 0x48), iVar1 != 3)) {
      if (iVar1 == 2) {
        if (*(code **)(lVar2 + 0xd0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01e81298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar2 + 0xd0))(lVar2 + 0xf0,param_1 + 0xe0);
          return;
        }
      }
      else if (((iVar1 == 1) && (*(char *)(param_1 + 0xd0) != '\0')) &&
              (*(code **)(lVar2 + 0x50) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x01e81284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar2 + 0x50))(lVar2 + 0x70,param_1 + 0xd8);
        return;
      }
    }
    else if (*(code **)(lVar2 + 0x150) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01e8124c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x150))(lVar2 + 0x170);
      return;
    }
  }
  return;
}


