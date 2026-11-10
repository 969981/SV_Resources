/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f568f0; name: FUN_01f568f0
 */


void FUN_01f568f0(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  if ((ulong)param_1[0x15] <= param_2) {
    return;
  }
  puVar1 = (undefined8 *)(*param_1 + param_2 * 0x80);
  pcVar2 = (code *)puVar1[1];
  if (pcVar2 != (code *)0x0) {
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    (*pcVar2)(puVar1 + 4);
  }
  *puVar1 = FUN_00b58f5c;
  puVar1[1] = &LAB_00b58fd8;
  puVar1[2] = &LAB_00b58fdc;
  puVar1[3] = &LAB_00b58fe0;
  FUN_01f56b34(param_1,param_2);
  return;
}


