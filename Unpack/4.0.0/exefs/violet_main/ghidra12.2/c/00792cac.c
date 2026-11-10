/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00792cac; name: FUN_00792cac
 */


undefined8 FUN_00792cac(int *param_1)

{
  int iVar1;
  int local_30 [4];
  undefined4 local_18 [2];
  
  local_30[0] = 0xc47f;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  if (*param_1 != local_30[0]) {
    local_30[0] = 0xc47e;
    local_18[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
    if ((*param_1 != local_30[0]) ||
       (((iVar1 = FUN_0079651c(param_1), iVar1 != 0x65 &&
         (iVar1 = FUN_0079651c(param_1), iVar1 != 0x71)) &&
        (iVar1 = FUN_0079651c(param_1), iVar1 != 0x70)))) {
      return 0;
    }
  }
  return 1;
}


