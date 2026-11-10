/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0012d700; name: FUN_0012d700
 */


long FUN_0012d700(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  lVar1 = (*(code *)*puVar3)(puVar3[1]);
  if ((param_4 != 0) && (lVar1 == 0)) {
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if (((*(byte *)(puVar2 + 0xb) & 0xf) != 0) || (*(char *)((long)puVar2 + 0x67) != '\0')) {
      return 0;
    }
    FUN_0012b690(param_1,1);
    lVar1 = (*(code *)*puVar2)(puVar2[1],param_2,param_3,param_4);
    if (lVar1 == 0) {
      return 0;
    }
  }
  puVar3[3] = (param_4 - param_3) + puVar3[3];
  return lVar1;
}


