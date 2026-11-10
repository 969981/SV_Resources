/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034bfebc; name: FUN_034bfebc
 */


void FUN_034bfebc(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = param_1 + -4;
  *plVar2 = (long)&PTR_FUN_047c4638;
  param_1[-3] = (long)&PTR_FUN_047c48b8;
  *param_1 = (long)&PTR_FUN_047c48f8;
  param_1[3] = (long)&PTR_FUN_047c4990;
  FUN_034bfd30(plVar2);
  puVar1 = PTR_DAT_047e7200;
  *plVar2 = (long)(PTR_DAT_047e7200 + 0x10);
  param_1[-3] = (long)(puVar1 + 0x288);
  *param_1 = (long)(puVar1 + 0x2c8);
  param_1[3] = (long)(puVar1 + 0x360);
  if ((long *)param_1[0x1c] != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x1d) = 0;
    if (param_1 + 0x1b != (long *)param_1[0x1c]) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    }
    param_1[0x1c] = 0;
    *(undefined4 *)((long)param_1 + 0xec) = 0;
  }
  FUN_034a68b4(plVar2);
  return;
}


