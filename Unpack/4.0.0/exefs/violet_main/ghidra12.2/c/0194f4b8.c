/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0194f4b8; name: FUN_0194f4b8
 */


void FUN_0194f4b8(long *param_1,char *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  puVar2 = (undefined8 *)FUN_0194f518(param_3);
  uVar3 = *puVar2;
  if (((*param_2 == '\x01') || (*param_2 == '\0')) && (*(long *)(param_2 + 8) != 0)) {
    puVar1 = (undefined4 *)(*(long *)(param_2 + 8) + lVar4);
    *puVar1 = (int)uVar3;
    *(char *)((long)puVar1 + 6) = (char)((ulong)uVar3 >> 0x30);
    *(short *)(puVar1 + 1) = (short)((ulong)uVar3 >> 0x20);
  }
  return;
}


