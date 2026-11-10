/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034cc6f8; name: FUN_034cc6f8
 */


void FUN_034cc6f8(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = (long)&PTR_FUN_047c5130;
  if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[4] = 0;
  }
  param_1[4] = 0;
  *param_1 = (long)(PTR_DAT_047e72f0 + 0x10);
  if (param_1[2] == 0) {
    lVar4 = 0;
  }
  else {
    *(long *)(param_1[2] + 0x18) = param_1[3];
    lVar4 = param_1[2];
  }
  puVar2 = PTR_DAT_047e6d00;
  lVar3 = param_1[3];
  plVar1 = (long *)(PTR_DAT_047e6d00 + 0x10);
  if (*(long **)(PTR_DAT_047e6d00 + 0x10) != param_1) {
    plVar1 = (long *)(lVar3 + 0x10);
  }
  *plVar1 = lVar4;
  if (*(long **)(puVar2 + 8) == param_1) {
    *(long *)(puVar2 + 8) = lVar3;
  }
  *(int *)puVar2 = *(int *)puVar2 + -1;
  return;
}


