/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031d0650; name: FUN_031d0650
 */


void FUN_031d0650(ulong *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (*PTR_DAT_047e3360 != '\0') {
    plVar3 = (long *)(*param_1 & 0xfffffffffffffffc);
    if (plVar3 != (long *)0x0) {
      if ((*param_1 & 3) == 0) {
        *param_1 = (ulong)plVar3 | 1;
        do {
          lVar2 = *plVar3;
          plVar3 = (long *)(plVar3[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar3 != (long *)0x0);
        *param_1 = 0;
      }
      else {
        do {
          plVar1 = (long *)(plVar3[1] & 0xfffffffffffffffc);
          plVar3[1] = (ulong)plVar1 | 1;
          plVar3 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
  }
  return;
}


