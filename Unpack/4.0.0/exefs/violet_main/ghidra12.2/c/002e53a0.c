/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002e53a0; name: FUN_002e53a0
 */


void FUN_002e53a0(undefined8 param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)FUN_0049e770(PTR_FUN_047cba38,0x28);
  if (puVar1 != (undefined2 *)0x0) {
    puVar1[1] = param_2;
    *puVar1 = 10;
    puVar1[2] = 1;
    puVar1[0x13] = 0;
    *(undefined8 *)(puVar1 + 7) = 0;
    *(undefined8 *)(puVar1 + 3) = 0;
    *(undefined8 *)(puVar1 + 0xf) = 0;
    *(undefined8 *)(puVar1 + 0xb) = 0;
  }
  *(undefined8 *)(puVar1 + 4) = param_1;
  puVar1[3] = 1;
  *(undefined4 *)(puVar1 + 0xc) = param_4;
  *(undefined4 *)(puVar1 + 0xe) = param_3;
  return;
}


