/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004bdb9c; name: FUN_004bdb9c
 */


/* WARNING: Removing unreachable block (ram,0x004bdc1c) */

void FUN_004bdb9c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long extraout_x1;
  undefined8 extraout_x1_00;
  byte local_38;
  char local_37 [8];
  undefined7 uStack_2f;
  char cStack_28;
  undefined4 uStack_27;
  undefined1 uStack_23;
  undefined2 uStack_22;
  
  lVar2 = (**(code **)(*param_3 + 0x98))(param_3);
  local_38 = 0x28;
  uStack_27 = 0x6e6f6974;
  uStack_23 = 0;
  uStack_2f = s_uninterpreted_option_03be1643._8_7_;
  cStack_28 = s_uninterpreted_option_03be1643[0xf];
  local_37[0] = s_uninterpreted_option_03be1643[0];
  local_37[1] = s_uninterpreted_option_03be1643[1];
  local_37[2] = s_uninterpreted_option_03be1643[2];
  local_37[3] = s_uninterpreted_option_03be1643[3];
  local_37[4] = s_uninterpreted_option_03be1643[4];
  local_37[5] = s_uninterpreted_option_03be1643[5];
  local_37[6] = s_uninterpreted_option_03be1643[6];
  local_37[7] = s_uninterpreted_option_03be1643[7];
                    /* try { // try from 004bdbf4 to 004bdbfb has its CatchHandler @ 004bdc88 */
  iVar1 = FUN_004c0784(*(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x90),lVar2,&local_38);
  if (iVar1 == 2) {
    lVar2 = extraout_x1;
    if (*(char *)(extraout_x1 + 0x43) != '\0') {
      lVar2 = 0;
    }
  }
  else {
    lVar2 = 0;
  }
  if ((local_38 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,
                 CONCAT26(uStack_22,CONCAT15(uStack_23,CONCAT41(uStack_27,cStack_28))));
  }
  (**(code **)(*param_3 + 0x98))(param_3);
  plVar3 = (long *)FUN_004f7ed4(extraout_x1_00,param_3,lVar2,0);
  (**(code **)(*plVar3 + 0x70))(plVar3,param_2);
  return;
}


