/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027ff114; name: FUN_027ff114
 */


void FUN_027ff114(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    if ((*(char *)(param_1 + 0x638) == '\0') && (iVar1 = *(int *)(param_1 + 0x48), iVar1 != 3)) {
      if (iVar1 == 2) {
        if (*(code **)(lVar2 + 0xd0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x027ff17c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar2 + 0xd0))(lVar2 + 0xf0,param_1 + 0x5d8);
          return;
        }
      }
      else if (((iVar1 == 1) && (*(char *)(param_1 + 0xd0) != '\0')) &&
              (*(code **)(lVar2 + 0x50) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x027ff168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar2 + 0x50))(lVar2 + 0x70,param_1 + 0xd8);
        return;
      }
    }
    else if (*(code **)(lVar2 + 0x150) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x027ff130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x150))(lVar2 + 0x170);
      return;
    }
  }
  return;
}


