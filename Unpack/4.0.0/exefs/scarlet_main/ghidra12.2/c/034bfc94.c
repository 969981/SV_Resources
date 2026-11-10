/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034bfc94; name: FUN_034bfc94
 */


void FUN_034bfc94(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  *param_1 = (long)&PTR_FUN_047c4638;
  param_1[1] = (long)&PTR_FUN_047c48b8;
  param_1[4] = (long)&PTR_FUN_047c48f8;
  param_1[7] = (long)&PTR_FUN_047c4990;
  FUN_034bfd30();
  puVar1 = PTR_DAT_047e7200 + 0x288;
  puVar2 = PTR_DAT_047e7200 + 0x2c8;
  puVar3 = PTR_DAT_047e7200 + 0x360;
  *param_1 = (long)(PTR_DAT_047e7200 + 0x10);
  param_1[1] = (long)puVar1;
  param_1[4] = (long)puVar2;
  param_1[7] = (long)puVar3;
  if ((long *)param_1[0x20] != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x21) = 0;
    if (param_1 + 0x1f != (long *)param_1[0x20]) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    }
    param_1[0x20] = 0;
    *(undefined4 *)((long)param_1 + 0x10c) = 0;
  }
  FUN_034a68b4(param_1);
  return;
}


