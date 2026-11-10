/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02adc838; name: FUN_02adc838
 */


void FUN_02adc838(undefined4 param_1,long param_2,undefined2 param_3,undefined4 param_4,
                 undefined4 param_5,byte param_6,byte param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined1 auStack_1a0 [80];
  undefined1 auStack_150 [80];
  undefined1 auStack_100 [80];
  undefined4 *local_b0;
  undefined2 *puStack_a8;
  undefined4 *local_a0;
  byte *pbStack_98;
  byte *local_90;
  undefined4 *puStack_88;
  undefined8 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined4 *puStack_68;
  undefined4 local_5c;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  byte local_50 [4];
  byte local_4c [4];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined2 local_3c [2];
  undefined8 local_38;
  
  local_4c[0] = param_6 & 1;
  local_50[0] = param_7 & 1;
  if ((((param_6 & 1) != 0) || ((param_7 & 1) != 0)) || (*(char *)(param_2 + 0x40) != '\0')) {
    local_b0 = &local_5c;
    local_58[0] = 0;
    local_5c = 0xffffffff;
    puStack_a8 = local_3c;
    local_a0 = &local_44;
    pbStack_98 = local_50;
    local_90 = local_4c;
    puStack_88 = &local_48;
    local_80 = &local_38;
    puStack_78 = local_58;
    local_54[0] = 0;
    local_70 = local_54;
    puStack_68 = &uStack_40;
    local_48 = param_1;
    local_44 = param_5;
    uStack_40 = param_4;
    local_3c[0] = param_3;
    local_38 = param_8;
    memcpy(auStack_100,&local_b0,0x50);
    FUN_02adc9f4(auStack_100,param_2 + 600);
    FUN_02adc9f4(auStack_100,param_2 + 0x278);
    FUN_02adc9f4(auStack_100,param_2 + 0x298);
    FUN_02adc9f4(&local_b0,param_2 + 0x2b8);
    memcpy(auStack_150,&local_b0,0x50);
    FUN_02adc9f4(auStack_150,param_2 + 0x980);
    FUN_02adc9f4(auStack_150,param_2 + 0x9a0);
    FUN_02adc9f4(auStack_150,param_2 + 0x9c0);
    FUN_02adc9f4(auStack_150,param_2 + 0x9e0);
    FUN_02adc9f4(auStack_150,param_2 + 0xa00);
    FUN_02adc9f4(auStack_150,param_2 + 0xa20);
    FUN_02adc9f4(auStack_150,param_2 + 0xa40);
    FUN_02adc9f4(auStack_150,param_2 + 0xa60);
    FUN_02adc9f4(auStack_150,param_2 + 0xa80);
    memcpy(auStack_1a0,&local_b0,0x50);
    FUN_02adc9f4(auStack_1a0,param_2 + 0xaa0);
    FUN_02adc9f4(auStack_1a0,param_2 + 0xac0);
    FUN_02adc9f4(auStack_1a0,param_2 + 0xae0);
    uVar1 = FUN_00b0d038();
    if ((uVar1 & 1) != 0) {
      FUN_02adc9f4(&local_b0,param_2 + 0xb00);
    }
  }
  return;
}


