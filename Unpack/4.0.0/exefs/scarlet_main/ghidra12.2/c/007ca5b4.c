/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ca5b4; name: FUN_007ca5b4
 */


void FUN_007ca5b4(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)PTR_DAT_047d1140;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)PTR_DAT_047d1140 = 0;
    (**(code **)*puVar2)();
    puVar1 = PTR_DAT_047d08a0;
    puVar2 = *(undefined8 **)PTR_DAT_047d08a0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      FUN_007bfaa0(puVar2);
    }
    *(undefined8 *)puVar1 = 0;
  }
  return;
}


