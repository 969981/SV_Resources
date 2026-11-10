/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00129fd0; name: FUN_00129fd0
 */


void FUN_00129fd0(long param_1,byte param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  puVar2 = (undefined8 *)FUN_0012d7b0(param_1,param_3,param_2 & 0xf);
  bVar1 = *(byte *)(lVar3 + 100);
  *(byte *)(puVar2 + 1) = param_2;
  *(byte *)((long)puVar2 + 9) = bVar1 & 0x18;
  *puVar2 = *(undefined8 *)(lVar3 + 0x70);
  *(undefined8 **)(lVar3 + 0x70) = puVar2;
  return;
}


