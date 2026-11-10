/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021b0f4c; name: FUN_021b0f4c
 */


void FUN_021b0f4c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = uVar2;
  param_1[5] = uVar4;
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  param_1[0xb] = 0;
  param_1[6] = 0;
  param_1[7] = uVar1;
  param_1[9] = uVar2;
  param_1[10] = uVar3;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x60);
  FUN_00ec26b8(param_1,*(undefined8 *)(param_2 + 8));
  for (plVar5 = *(long **)(param_2 + 0x30); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
    FUN_021b0fdc(param_1,plVar5 + 2);
  }
  return;
}


