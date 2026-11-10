/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014a3d64; name: FUN_014a3d64
 */


undefined4 FUN_014a3d64(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  
  plVar2 = (long *)*param_1;
  if (plVar2 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    (**(code **)(*plVar2 + 0x58))(plVar2);
    lVar1 = FUN_00c8c7b4(plVar2[0x2e],param_2);
    (**(code **)(*plVar2 + 0x60))(plVar2);
    uVar3 = 0;
    if (lVar1 != 0) {
      uVar3 = *(undefined4 *)(lVar1 + 0x30);
    }
  }
  return uVar3;
}


