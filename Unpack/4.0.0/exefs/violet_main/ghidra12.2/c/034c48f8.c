/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034c48f8; name: FUN_034c48f8
 */


void FUN_034c48f8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_047c4b88;
  puVar2 = PTR_DAT_047e2fd0;
  if (param_1[8] != 0) {
    *(undefined4 *)(param_1 + 9) = 0;
    (**(code **)(puVar2 + 0x30))(0);
    param_1[8] = 0;
    *(undefined4 *)((long)param_1 + 0x4c) = 0;
  }
  if (param_1[4] != 0) {
    *(undefined2 *)(param_1 + 7) = 0;
    (**(code **)(puVar2 + 0x30))(5);
    param_1[4] = 0;
  }
  lVar3 = param_1[5];
  uVar4 = *(uint *)(param_1 + 6);
  if (uVar4 != 0) {
    lVar6 = lVar3;
    do {
      if (*(long *)(lVar6 + 8) != 0) {
        *(undefined4 *)(lVar6 + 0x10) = 0;
        (**(code **)(puVar2 + 0x30))(0,*(long *)(lVar6 + 8));
        *(undefined8 *)(lVar6 + 8) = 0;
        *(undefined4 *)(lVar6 + 0x14) = 0;
        lVar3 = param_1[5];
        uVar4 = *(uint *)(param_1 + 6);
      }
      lVar6 = lVar6 + 0x18;
    } while (lVar6 != lVar3 + (ulong)uVar4 * 0x18);
  }
  if (lVar3 != 0) {
    *(undefined4 *)(param_1 + 6) = 0;
    (**(code **)(puVar2 + 0x30))(0);
    param_1[5] = 0;
    *(undefined4 *)((long)param_1 + 0x34) = 0;
  }
  *param_1 = &PTR_LAB_047c4bd8;
  if (param_1[2] == 0) {
    uVar5 = 0;
  }
  else {
    *(undefined8 *)(param_1[2] + 0x18) = param_1[3];
    uVar5 = param_1[2];
  }
  puVar2 = PTR_DAT_047e6f98;
  lVar3 = param_1[3];
  puVar1 = (undefined8 *)(PTR_DAT_047e6f98 + 0x10);
  if (*(undefined8 **)(PTR_DAT_047e6f98 + 0x10) != param_1) {
    puVar1 = (undefined8 *)(lVar3 + 0x10);
  }
  *puVar1 = uVar5;
  if (*(undefined8 **)(puVar2 + 8) == param_1) {
    *(long *)(puVar2 + 8) = lVar3;
  }
  *(int *)puVar2 = *(int *)puVar2 + -1;
  return;
}


