/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ba3d10; name: FUN_00ba3d10
 */


void FUN_00ba3d10(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long extraout_x1;
  undefined4 local_60;
  undefined4 uStack_5c;
  char cStack_58;
  undefined7 uStack_57;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  undefined1 local_4b;
  char local_48 [24];
  
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2);
  uStack_4c = 0x6e;
  local_60 = CONCAT31(s_uninterpreted_option_03be1643._0_3_,0x28);
  uStack_5c = s_uninterpreted_option_03be1643._3_4_;
  cStack_58 = s_uninterpreted_option_03be1643[7];
  uStack_57 = s_uninterpreted_option_03be1643._8_7_;
  uStack_50 = CONCAT31(0x6f6974,s_uninterpreted_option_03be1643[0xf]);
  local_4b = 0;
  iVar1 = FUN_00b7cb3c(*(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x98),lVar2,&local_60,2);
  if (((iVar1 == 0) || (*(char *)(extraout_x1 + 0x44) != '\0')) ||
     (lVar2 = extraout_x1, extraout_x1 == 0)) {
    local_60 = 3;
    local_48[0x10] = '\0';
    local_48[0x11] = '\0';
    local_48[0x12] = '\0';
    local_48[0x13] = '\0';
    local_48[0x14] = '\0';
    local_48[0x15] = '\0';
    local_48[0x16] = '\0';
    local_48[0x17] = '\0';
    uStack_50 = 0x16b0;
    cStack_58 = '%';
    uStack_57 = 0x3c353;
    local_48[0] = '\0';
    local_48[1] = '\0';
    local_48[2] = '\0';
    local_48[3] = '\0';
    local_48[4] = '\0';
    local_48[5] = '\0';
    local_48[6] = '\0';
    local_48[7] = '\0';
    local_48[8] = '\0';
    local_48[9] = '\0';
    local_48[10] = '\0';
    local_48[0xb] = '\0';
    local_48[0xc] = '\0';
    local_48[0xd] = '\0';
    local_48[0xe] = '\0';
    local_48[0xf] = '\0';
    std::string::append(local_48);
    FUN_00bb0e90(&local_60);
    FUN_00bb0d74(&local_60);
    lVar2 = 0;
  }
  plVar3 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
  plVar3 = (long *)(**(code **)(*plVar3 + 600))(plVar3,param_2,lVar2,0);
  (**(code **)(*plVar3 + 0x88))(plVar3,param_1);
  return;
}


