/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bd4788; name: FUN_01bd4788
 */


uint FUN_01bd4788(long *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  if (*param_1 != 0) {
    puVar2 = (undefined8 *)(*(code *)**(undefined8 **)(*param_1 + 8))();
    FUN_01bd40c8();
    for (; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
      if (puVar2 == &DAT_0480e2e0) {
        uVar1 = (**(code **)(*(long *)*param_1 + 0xc0))();
        return ~uVar1 & 1;
      }
    }
  }
  return 0;
}


