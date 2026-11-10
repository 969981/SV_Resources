/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02904694; name: FUN_02904694
 */


uint FUN_02904694(long param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  undefined4 local_14;
  
  uVar1 = 0;
  if ((((param_3 & 0xff) < 2) && ((param_4 & 0xff) < 5)) &&
     (local_14 = param_2, lVar2 = FUN_0297af98(param_1 + 8,&local_14), uVar1 = 0, lVar2 != 0)) {
    uVar1 = *(uint *)(lVar2 + ((ulong)((uint)*(byte *)(param_1 + 0x70) - (param_3 & 0xff)) & 1) * 4
                     + 0x14) >> (ulong)(param_4 & 0x1f) & 1;
  }
  return uVar1;
}


