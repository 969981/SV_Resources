/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078940c; name: FUN_0078940c
 */


void FUN_0078940c(undefined8 param_1,undefined8 param_2,long param_3,uint param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  lVar2 = FUN_007ec544();
  puVar1 = PTR_DAT_047d0860;
  if (lVar2 != 0) {
    if ((param_3 == 0) ||
       ((*(int *)(lVar2 + 0x34) + (uint)*(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50) * -2) - 0x38 <
        param_4)) {
      local_40[0] = 0x10407;
      goto LAB_00789498;
    }
    lVar2 = FUN_007ec4a8(param_2);
    if (lVar2 == 0) {
      local_40[0] = 0x2c27;
      goto LAB_00789498;
    }
    if (*(char *)(*(long *)puVar1 + 0xc0) != '\0') {
      local_40[0] = 0;
      goto LAB_00789498;
    }
  }
  local_40[0] = 0x10408;
LAB_00789498:
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_40);
  return;
}


