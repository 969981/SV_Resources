/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028fed78; name: FUN_028fed78
 */


void FUN_028fed78(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (code *)param_1[1];
  if (pcVar1 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar1)(param_1 + 4);
  }
  param_1[5] = 0;
  param_1[4] = 0;
  FUN_01365a38(param_1 + 4,param_2);
  param_1[6] = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  param_1[7] = uVar2;
  param_1[8] = *(undefined8 *)(param_2 + 0x20);
  param_1[9] = *(undefined8 *)(param_2 + 0x28);
  param_1[10] = *(undefined8 *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  param_1[0xb] = uVar2;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x48) = 0;
  *param_1 = FUN_028fee38;
  param_1[1] = FUN_028fee5c;
  param_1[0xd] = uVar2;
  param_1[2] = FUN_028feffc;
  param_1[3] = &LAB_028ff12c;
  return;
}


