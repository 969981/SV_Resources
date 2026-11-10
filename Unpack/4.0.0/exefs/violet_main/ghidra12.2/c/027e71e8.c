/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027e71e8; name: FUN_027e71e8
 */


void FUN_027e71e8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  
  pcVar2 = (code *)param_1[1];
  if (pcVar2 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar2)(param_1 + 4);
  }
  FUN_027e7158(param_1 + 4,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  param_1[5] = *(undefined8 *)(param_2 + 8);
  param_1[6] = uVar1;
  *param_1 = &LAB_027ead84;
  param_1[1] = &LAB_027eb378;
  param_1[2] = &LAB_027ff538;
  param_1[3] = &LAB_027ff56c;
  return;
}


