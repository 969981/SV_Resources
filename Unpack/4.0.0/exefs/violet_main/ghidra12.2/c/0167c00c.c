/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0167c00c; name: FUN_0167c00c
 */


void FUN_0167c00c(long param_1,undefined4 param_2,uint param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 local_14;
  
  if ((param_3 & 0xff) < 5) {
    lVar3 = param_1 + 8;
    local_14 = param_2;
    lVar1 = FUN_0167ea98(lVar3,&local_14);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)FUN_0107a448(lVar3,&local_14);
      *puVar2 = 0;
    }
    lVar3 = FUN_0107a448(lVar3,&local_14);
    *(uint *)(lVar3 + (ulong)*(byte *)(param_1 + 0x70) * 4) =
         *(uint *)(lVar3 + (ulong)*(byte *)(param_1 + 0x70) * 4) | 1 << (ulong)(param_3 & 0x1f);
  }
  return;
}


