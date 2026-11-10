/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0282e7f0; name: FUN_0282e7f0
 */


void FUN_0282e7f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  pcVar4 = (code *)param_1[1];
  if (pcVar4 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar4)(param_1 + 4);
  }
  param_1[4] = *param_2;
  param_1[5] = param_2[1];
  param_1[6] = param_2[2];
  uVar5 = param_2[3];
  param_2[3] = 0;
  param_1[7] = uVar5;
  FUN_027e8570(param_1 + 8,param_2 + 4);
  puVar3 = PTR_LAB_047e2258;
  puVar2 = PTR_FUN_047e2250;
  puVar1 = PTR_FUN_047e2248;
  *param_1 = PTR_FUN_047e2240;
  param_1[1] = puVar1;
  param_1[2] = puVar2;
  param_1[3] = puVar3;
  return;
}


