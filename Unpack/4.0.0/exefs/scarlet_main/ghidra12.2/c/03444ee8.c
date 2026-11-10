/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03444ee8; name: FUN_03444ee8
 */


void FUN_03444ee8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_FUN_047c0408;
  if (param_1[4] != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4);
    param_1[4] = 0;
  }
  *param_1 = &PTR_LAB_047c0430;
  if (param_1[2] == 0) {
    uVar4 = 0;
  }
  else {
    *(undefined8 *)(param_1[2] + 0x18) = param_1[3];
    uVar4 = param_1[2];
  }
  puVar2 = PTR_DAT_047e6d58;
  lVar3 = param_1[3];
  puVar1 = (undefined8 *)(PTR_DAT_047e6d58 + 0x10);
  if (*(undefined8 **)(PTR_DAT_047e6d58 + 0x10) != param_1) {
    puVar1 = (undefined8 *)(lVar3 + 0x10);
  }
  *puVar1 = uVar4;
  if (*(undefined8 **)(puVar2 + 8) == param_1) {
    *(long *)(puVar2 + 8) = lVar3;
  }
  *(int *)puVar2 = *(int *)puVar2 + -1;
  return;
}


