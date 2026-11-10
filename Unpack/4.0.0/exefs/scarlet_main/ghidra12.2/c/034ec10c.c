/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034ec10c; name: FUN_034ec10c
 */


void FUN_034ec10c(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = (long)&PTR_FUN_047c5ac8;
  puVar2 = PTR_DAT_047e2fd0;
  if (param_1[4] != 0) {
    *(undefined4 *)(param_1 + 5) = 0;
    (**(code **)(puVar2 + 0x30))(0);
    param_1[4] = 0;
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
  }
  if (param_1[6] != 0) {
    *(undefined4 *)(param_1 + 7) = 0;
    (**(code **)(puVar2 + 0x30))(0);
    param_1[6] = 0;
    *(undefined4 *)((long)param_1 + 0x3c) = 0;
  }
  *param_1 = (long)(PTR_DAT_047e6e88 + 0x10);
  if (param_1[2] == 0) {
    lVar4 = 0;
  }
  else {
    *(long *)(param_1[2] + 0x18) = param_1[3];
    lVar4 = param_1[2];
  }
  puVar2 = PTR_DAT_047e6e58;
  lVar3 = param_1[3];
  plVar1 = (long *)(PTR_DAT_047e6e58 + 0x10);
  if (*(long **)(PTR_DAT_047e6e58 + 0x10) != param_1) {
    plVar1 = (long *)(lVar3 + 0x10);
  }
  *plVar1 = lVar4;
  if (*(long **)(puVar2 + 8) == param_1) {
    *(long *)(puVar2 + 8) = lVar3;
  }
  *(int *)puVar2 = *(int *)puVar2 + -1;
  return;
}


