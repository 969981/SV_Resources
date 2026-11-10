/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007fa77c; name: FUN_007fa77c
 */


void FUN_007fa77c(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  if ((char)param_2[0x16] == '\x01') {
    if (param_2[0x19] != 0) {
      FUN_007f83dc();
    }
    FUN_007ead94(param_2 + 1);
    local_28[0] = 0;
    local_40[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
    FUN_018ff39c(param_2 + 0x17,local_40);
    *(undefined4 *)(param_2 + 7) = 0;
    (**(code **)(*param_2 + 0x10))(param_2);
    if ((char)param_2[0x16] != '\x02') {
      *(undefined1 *)(param_2 + 0x16) = 0x12;
      FUN_007c9f04(param_2 + 0xd);
      if ((char)param_2[0x16] != '\x02') {
        lVar1 = *(long *)PTR_DAT_047d0970;
        do {
          FUN_007ca35c(lVar1 / 10000);
          if ((char)param_2[0x16] == '\x03') break;
        } while ((char)param_2[0x16] != '\x02');
      }
    }
    local_40[0] = 0;
  }
  else {
    local_40[0] = 0x10408;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_40);
  return;
}


