/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01951f5c; name: FUN_01951f5c
 */


uint FUN_01951f5c(undefined8 param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  undefined1 *local_18;
  
  local_18 = &DAT_cbf29ce484222645;
  bVar1 = *param_2;
  while (bVar1 != 0) {
    param_2 = param_2 + 1;
    local_18 = (undefined1 *)(((ulong)local_18 ^ (ulong)bVar1) * 0x100000001b3);
    bVar1 = *param_2;
  }
  uVar2 = FUN_01951fc0(param_1,&local_18,param_3 & 1);
  return uVar2 & 1;
}


