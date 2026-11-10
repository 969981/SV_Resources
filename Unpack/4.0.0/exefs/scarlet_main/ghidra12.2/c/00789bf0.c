/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00789bf0; name: FUN_00789bf0
 */


void FUN_00789bf0(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined4 local_68 [4];
  int local_58;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined1 local_50;
  undefined1 local_4f;
  undefined8 local_4e;
  undefined4 local_40 [4];
  
  lVar1 = FUN_007ec4a8();
  lVar2 = FUN_007ec50c(param_2);
  if (lVar1 == lVar2) {
    *(undefined1 *)(param_2 + 0x5a) = 3;
    local_58 = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x68);
    if (lVar1 != -1) {
      local_58 = (uint)CONCAT12((char)((ulong)lVar1 >> 0x30),
                                CONCAT11((char)((ulong)lVar1 >> 0x38),
                                         *(undefined1 *)(param_2 + 0x5c))) << 8;
      local_4f = (undefined1)lVar1;
      local_4e = 0;
      local_40[0] = 0;
      local_68[0] = 0;
      local_53 = (undefined1)((ulong)lVar1 >> 0x20);
      local_52 = (undefined1)((ulong)lVar1 >> 0x18);
      local_51 = (undefined1)((ulong)lVar1 >> 0x10);
      local_54 = (undefined1)((ulong)lVar1 >> 0x28);
      local_50 = (undefined1)((ulong)lVar1 >> 8);
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_68);
      FUN_00cbd7c0(local_68,local_40);
      FUN_00789d0c(param_1,param_2,param_3,&local_58,0x12);
      return;
    }
    local_58 = 0x10408;
  }
  local_40[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_58 | 4),(Result *)local_40);
  FUN_00cbd7c0(param_1,&local_58);
  return;
}


