/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0244ffb4; name: FUN_0244ffb4
 */


void FUN_0244ffb4(long *param_1,ulong param_2)

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
  puVar3 = PTR_LAB_047dea58;
  puVar2 = PTR_LAB_047dea50;
  *puVar1 = PTR_LAB_047dea48;
  puVar1[1] = puVar2;
  puVar2 = PTR_LAB_047dea60;
  puVar1[2] = puVar3;
  puVar1[3] = puVar2;
  FUN_0244fd88(param_1,param_2);
  return;
}


