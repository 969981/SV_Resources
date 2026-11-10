/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00789a94; name: FUN_00789a94
 */


void FUN_00789a94(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5)

{
  long lVar1;
  long lVar2;
  undefined4 local_78 [4];
  undefined4 local_68;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58;
  undefined1 local_57;
  undefined4 local_50 [4];
  
  lVar1 = FUN_007ec4a8();
  lVar2 = FUN_007ec50c(param_2);
  if (lVar1 == lVar2) {
    lVar1 = *(long *)(param_2 + 0x68);
    if (lVar1 != -1) {
      local_64 = (undefined1)((ulong)param_4 >> 0x28);
      local_63 = (undefined1)((ulong)param_4 >> 0x20);
      local_62 = (undefined1)((ulong)param_4 >> 0x18);
      local_61 = (undefined1)((ulong)param_4 >> 0x10);
      local_60 = (undefined1)((ulong)param_4 >> 8);
      local_5e = (undefined1)((ulong)lVar1 >> 0x38);
      local_5d = (undefined1)((ulong)lVar1 >> 0x30);
      local_5c = (undefined1)((ulong)lVar1 >> 0x28);
      local_5b = (undefined1)((ulong)lVar1 >> 0x20);
      local_5a = (undefined1)((ulong)lVar1 >> 0x18);
      local_59 = (undefined1)((ulong)lVar1 >> 0x10);
      local_57 = (undefined1)lVar1;
      local_68 = CONCAT13((char)((ulong)param_4 >> 0x30),
                          CONCAT12((char)((ulong)param_4 >> 0x38),CONCAT11(param_5,1)));
      local_5f = (undefined1)param_4;
      local_58 = (undefined1)((ulong)lVar1 >> 8);
      local_50[0] = 0;
      local_78[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_78);
      FUN_00cbd7c0(local_78,local_50);
      FUN_00789d0c(param_1,param_2,param_3,&local_68,0x12);
      return;
    }
    local_68 = 0x10408;
  }
  else {
    local_68 = 0;
  }
  local_50[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_68 | 4),(Result *)local_50);
  FUN_00cbd7c0(param_1,&local_68);
  return;
}


