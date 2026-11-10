/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007b9a6c; name: FUN_007b9a6c
 */


void FUN_007b9a6c(undefined8 param_1,long param_2,void *param_3,int param_4,void *param_5,
                 int param_6)

{
  undefined4 *puVar1;
  undefined4 local_180 [4];
  undefined1 auStack_170 [32];
  undefined *local_150;
  undefined1 auStack_148 [64];
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_d8 [34];
  undefined1 auStack_50 [32];
  undefined4 local_28 [2];
  
  puVar1 = local_180;
  if ((((param_6 == 0x10) && (param_3 != (void *)0x0)) && (param_4 == 0x20)) &&
     (param_5 != (void *)0x0)) {
    if (*(char *)(param_2 + 0x230) == '\0') {
      local_d8[0] = 0x10408;
    }
    else {
      if (*(int *)(param_2 + 0x234) != 0) {
        memcpy(auStack_50,param_3,0x20);
        FUN_007976d8(local_d8);
        local_108 = 0;
        local_100 = 0;
        local_150 = PTR_DAT_047d0a58 + 0x10;
        memset(auStack_148,0,0x40);
        local_150 = PTR_DAT_047d0a60 + 0x10;
        FUN_007976e0(local_d8,&local_150,param_2 + 0x238,0x10);
        FUN_0079790c(local_d8,auStack_170,auStack_50,0x20);
        memcpy(param_5,auStack_170,0x10);
        local_180[0] = 0;
        local_28[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_180 | 4),(Result *)local_28);
        goto LAB_007b9b8c;
      }
      local_d8[0] = 0;
    }
  }
  else {
    local_d8[0] = 0x10407;
  }
  local_150 = (undefined *)((ulong)local_150 & 0xffffffff00000000);
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_d8 | 4),(Result *)&local_150);
  puVar1 = local_d8;
LAB_007b9b8c:
  FUN_00cbd7c0(param_1,puVar1);
  return;
}


