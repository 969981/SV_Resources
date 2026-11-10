/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0293dc2c; name: FUN_0293dc2c
 */


void FUN_0293dc2c(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  long *plVar3;
  
  *param_2 = 0;
  plVar3 = (long *)*param_3;
  uVar1 = FUN_01932e08(param_1,plVar3);
  if ((uVar1 & 1) == 0) {
    if (((param_3[2] == 0) || (*(char *)(param_3 + 3) != '\0')) ||
       (uVar1 = FUN_01972ce0(param_1), (uVar1 & 1) == 0)) {
      if (*(char *)(param_3 + 1) != '\0') {
        return;
      }
      uVar1 = FUN_01972ce0(param_1,plVar3);
      if ((uVar1 & 1) == 0) {
        return;
      }
      uVar2 = 2;
    }
    else {
      uVar2 = 3;
    }
  }
  else {
    uVar1 = (**(code **)(*plVar3 + 0x1f8))(plVar3);
    uVar2 = 4;
    if ((uVar1 & 1) != 0) {
      uVar2 = 1;
    }
  }
  *param_2 = uVar2;
  return;
}


