/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007fab18; name: FUN_007fab18
 */


bool FUN_007fab18(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *local_60 [3];
  undefined2 local_48;
  undefined1 auStack_40 [16];
  int local_30 [4];
  int local_14;
  
  if (*(char *)(param_1 + 0x6f8) != '\0') {
    FUN_007fa9e8(local_30,param_1,&local_14,param_2,param_3);
    if (local_30[0] != 0) {
      local_60[0] = PTR_DAT_047d08c0 + 0x10;
      FUN_0284e360(local_60,0xffffffff);
      local_48 = 0;
      FUN_007fa9e8(auStack_40,param_1,&local_14,local_60,param_3);
      FUN_018ff39c(local_30,auStack_40);
      FUN_0284e3d4(local_60);
    }
    if (local_14 != 0) {
      uVar1 = FUN_007c7184(param_1 + 0x6e8);
      return (int)((uVar1 & 0xffffffff) * 100 >> 0x20) < local_14;
    }
  }
  return false;
}


