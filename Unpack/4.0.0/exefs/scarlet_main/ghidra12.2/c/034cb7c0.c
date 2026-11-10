/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034cb7c0; name: FUN_034cb7c0
 */


void FUN_034cb7c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_FUN_047c5108;
  FUN_034cb8e0(param_1,0);
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
  if (param_1[0x1a] != 0) {
    *(undefined4 *)(param_1 + 0x1b) = 0;
    (**(code **)(puVar2 + 0x30))(9);
    param_1[0x1a] = 0;
    *(undefined4 *)((long)param_1 + 0xdc) = 0;
  }
  if (param_1[8] != 0) {
    *(undefined4 *)(param_1 + 9) = 0;
    (**(code **)(puVar2 + 0x30))(0);
    param_1[8] = 0;
    *(undefined4 *)((long)param_1 + 0x4c) = 0;
  }
  *param_1 = &PTR_LAB_047c5158;
  if (param_1[2] == 0) {
    uVar4 = 0;
  }
  else {
    *(undefined8 *)(param_1[2] + 0x18) = param_1[3];
    uVar4 = param_1[2];
  }
  puVar2 = PTR_DAT_047e6cc8;
  lVar3 = param_1[3];
  puVar1 = (undefined8 *)(PTR_DAT_047e6cc8 + 0x10);
  if (*(undefined8 **)(PTR_DAT_047e6cc8 + 0x10) != param_1) {
    puVar1 = (undefined8 *)(lVar3 + 0x10);
  }
  *puVar1 = uVar4;
  if (*(undefined8 **)(puVar2 + 8) == param_1) {
    *(long *)(puVar2 + 8) = lVar3;
  }
  *(int *)puVar2 = *(int *)puVar2 + -1;
  return;
}


