/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017b65bc; name: FUN_017b65bc
 */


uint FUN_017b65bc(undefined8 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar3 = &local_a0;
  if (param_2 == 1) {
    local_40 = 0xdb3511ae502a979c;
    pcStack_38 = "0000_defaultwait01_loop";
    local_30 = 0x17;
    uStack_28 = 0;
    uVar2 = FUN_00c738f0(param_1,&local_40,param_3);
    if ((uVar2 & 1) == 0) {
      local_60 = 0xe23f6f48435cb3f;
      pcStack_58 = "0010_defaultidle01";
      local_50 = 0x12;
      uStack_48 = 0;
      uVar2 = FUN_00c738f0(param_1,&local_60,param_3);
      if ((uVar2 & 1) == 0) {
        local_80 = 0x5bafee136af50de9;
        pcStack_78 = "0011_defaultidle02";
        local_70 = 0x12;
        uStack_68 = 0;
        uVar2 = FUN_00c738f0(param_1,&local_80,param_3);
        if ((uVar2 & 1) == 0) {
          local_a0 = 0xfba97af86589ea71;
          pcStack_98 = "0330_lookaround01";
          local_90 = 0x11;
          uStack_88 = 0;
          goto LAB_017b665c;
        }
      }
    }
    uVar1 = 1;
  }
  else {
    if (param_2 != 2) {
      uVar1 = 0;
      goto LAB_017b6618;
    }
    local_40 = 0x67e87bd2e08c565f;
    pcStack_38 = "0340_wildshot02";
    puVar3 = &local_40;
    local_30 = 0xf;
    uStack_28 = 0;
LAB_017b665c:
    uVar1 = FUN_00c738f0(param_1,puVar3,param_3);
  }
LAB_017b6618:
  return uVar1 & 1;
}


