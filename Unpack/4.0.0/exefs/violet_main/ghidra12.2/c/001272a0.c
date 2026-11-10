/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001272a0; name: FUN_001272a0
 */


void FUN_001272a0(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)FUN_0013df20(param_1,param_2,0x17);
  if ((*(byte *)(puVar2 + 1) & 0xf) == 0) {
    FUN_00125ee0(param_1,param_2);
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0,0x127328);
    (*pcVar1)();
  }
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if (param_2 < puVar3) {
    do {
      puVar4 = puVar3 + -2;
      *puVar3 = *puVar4;
      *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar3 + -1);
      puVar3 = puVar4;
    } while (param_2 < puVar4);
    puVar3 = *(undefined8 **)(param_1 + 0x10);
  }
  *(undefined8 **)(param_1 + 0x10) = puVar3 + 2;
  *param_2 = *puVar2;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(puVar2 + 1);
  return;
}


