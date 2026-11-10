/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ca434; name: FUN_007ca434
 */


void FUN_007ca434(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1140;
  *param_1 = (long)(PTR_DAT_047d1138 + 0x10);
  if (*(long **)puVar1 == param_1) {
    *(undefined8 *)puVar1 = 0;
    puVar1 = PTR_DAT_047d08a0;
    (**(code **)**(undefined8 **)PTR_DAT_047d08a0)();
    *(undefined8 *)puVar1 = 0;
    FUN_007c3b34(param_1);
    return;
  }
  FUN_007c3b34(param_1);
  return;
}


