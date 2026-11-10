/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02275b70; name: FUN_02275b70
 */


void FUN_02275b70(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  
  if ((ulong)param_1[0x15] <= param_2) {
    return;
  }
  puVar1 = (undefined8 *)(*param_1 + param_2 * 0x80);
  pcVar4 = (code *)puVar1[1];
  if (pcVar4 != (code *)0x0) {
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    (*pcVar4)(puVar1 + 4);
  }
  puVar3 = PTR_LAB_047dddc8;
  puVar2 = PTR_LAB_047dddc0;
  *puVar1 = PTR_LAB_047dddb8;
  puVar1[1] = puVar2;
  puVar2 = PTR_LAB_047dddd0;
  puVar1[2] = puVar3;
  puVar1[3] = puVar2;
  FUN_02275e48(param_1,param_2);
  return;
}


