/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00367820; name: FUN_00367820
 */


void FUN_00367820(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  void *__src;
  
  __src = (void *)*param_2;
  if (param_3 < 0x18) {
    *param_1 = 0;
    *(char *)(param_1 + 1) = (char)param_3;
    memcpy((void *)((long)param_1 + 9),__src,param_3);
    return;
  }
  puVar2 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x38);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[5] = 1;
    *puVar2 = puVar2 + 5;
    *(undefined4 *)(puVar2 + 1) = 3;
    puVar1 = PTR_LAB_047ccee8;
    puVar2[4] = puVar2;
    puVar2[2] = puVar2;
    puVar2[3] = puVar1;
    uVar3 = *param_2;
    *param_2 = 0;
    puVar2[6] = uVar3;
  }
  param_1[1] = param_3;
  param_1[2] = __src;
  *param_1 = puVar2;
  return;
}


