/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02177694; name: FUN_02177694
 */


void FUN_02177694(undefined8 *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  
  pcVar4 = (code *)param_1[1];
  if (pcVar4 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar4)(param_1 + 4);
  }
  *(undefined1 *)(param_1 + 4) = *param_2;
  param_1[6] = 0;
  param_1[5] = 0;
  FUN_00f34110(param_1 + 5,param_2 + 8);
  puVar3 = PTR_LAB_047dd460;
  puVar2 = PTR_LAB_047dd458;
  puVar1 = PTR_LAB_047dd450;
  *param_1 = PTR_FUN_047dd448;
  param_1[1] = puVar1;
  param_1[2] = puVar2;
  param_1[3] = puVar3;
  return;
}


