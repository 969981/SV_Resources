/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00341824; name: FUN_00341824
 */


void FUN_00341824(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined1 *puVar1;
  undefined1 auStack_18 [8];
  
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = param_3;
  param_1[1] = param_4;
  if (param_5 != 0x7fffffffffffffff) {
    puVar1 = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,0x38);
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0;
      *(undefined8 *)(puVar1 + 8) = param_2;
      *(long *)(puVar1 + 0x10) = param_5;
    }
    *(undefined8 *)(puVar1 + 0x30) = 0;
    *(code **)(puVar1 + 0x20) = FUN_00341890;
    *(undefined1 **)(puVar1 + 0x28) = puVar1;
    FUN_0035351c(auStack_18,puVar1 + 0x18,0);
  }
  return;
}


