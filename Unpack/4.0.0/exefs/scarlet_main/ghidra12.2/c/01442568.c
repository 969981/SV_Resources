/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01442568; name: FUN_01442568
 */


void FUN_01442568(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_4;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x58))(plVar2);
    lVar1 = FUN_00c8c7b4(plVar2[0x2e],param_5);
    (**(code **)(*plVar2 + 0x60))(plVar2);
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x30) = param_1;
      *(undefined4 *)(lVar1 + 0x34) = param_2;
      *(undefined4 *)(lVar1 + 0x38) = param_3;
      *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 0x10;
    }
  }
  return;
}


