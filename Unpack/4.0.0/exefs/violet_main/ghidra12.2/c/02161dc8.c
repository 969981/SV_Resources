/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02161dc8; name: FUN_02161dc8
 */


void FUN_02161dc8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  
  *param_1 = (long)&PTR_FUN_04599720;
  param_1[4] = (long)&PTR_LAB_04599870;
  param_1[5] = (long)&DAT_045998c0;
  if ((long *)param_1[0x6f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x6f] + 0x20))();
  }
  pcVar3 = (code *)param_1[0x5d];
  if (pcVar3 != (code *)0x0) {
    param_1[0x5f] = 0;
    param_1[0x5e] = 0;
    param_1[0x5d] = 0;
    param_1[0x5c] = 0;
    (*pcVar3)(param_1 + 0x60);
  }
  pcVar3 = (code *)param_1[0x4d];
  if (pcVar3 != (code *)0x0) {
    param_1[0x4f] = 0;
    param_1[0x4e] = 0;
    param_1[0x4d] = 0;
    param_1[0x4c] = 0;
    (*pcVar3)(param_1 + 0x50);
  }
  pcVar3 = (code *)param_1[0x3d];
  if (pcVar3 != (code *)0x0) {
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    (*pcVar3)(param_1 + 0x40);
  }
  pcVar3 = (code *)param_1[0x2d];
  if (pcVar3 != (code *)0x0) {
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    (*pcVar3)(param_1 + 0x30);
  }
  if ((long *)param_1[0x2a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2a] + 0x20))();
  }
  puVar1 = PTR_DAT_047dd098 + 0x160;
  puVar2 = PTR_DAT_047dd098 + 0x1b0;
  *param_1 = (long)(PTR_DAT_047dd098 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  if ((long *)param_1[0x24] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x24] + 0x20))();
  }
  FUN_0116e6b0(param_1);
  return;
}


