/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dc1c68; name: FUN_01dc1c68
 */


void FUN_01dc1c68(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x58))(plVar2);
    lVar1 = FUN_00c8c7b4(plVar2[0x2e],param_2);
    (**(code **)(*plVar2 + 0x60))(plVar2);
    if ((param_3 != 0) && (lVar1 != 0)) {
      FUN_01dcc4e8(lVar1,param_3);
      return;
    }
  }
  return;
}


