/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e323ac; name: FUN_01e323ac
 */


void FUN_01e323ac(undefined8 *param_1,undefined8 param_2)

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
  param_1[5] = 0;
  param_1[4] = 0;
  FUN_00d0a34c(param_1 + 4,param_2);
  puVar3 = PTR_LAB_047d9750;
  puVar2 = PTR_LAB_047d9748;
  puVar1 = PTR_LAB_047d9740;
  *param_1 = PTR_LAB_047d9738;
  param_1[1] = puVar1;
  param_1[2] = puVar2;
  param_1[3] = puVar3;
  return;
}


