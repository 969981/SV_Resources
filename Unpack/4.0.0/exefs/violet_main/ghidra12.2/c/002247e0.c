/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002247e0; name: FUN_002247e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002247e0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  char *pcVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = (long)(PTR_DAT_047cbeb0 + 0x10);
  param_1[1] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[2] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  if ((*param_2 == 0) ||
     (iVar4 = (**(code **)(**(long **)PTR_DAT_047cbb08 + 0xd0))
                        (*(long **)PTR_DAT_047cbb08,param_1 + 3), iVar4 == 0)) {
    puVar3 = PTR_FUN_047cba38;
    pcVar5 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x30);
    pcVar5[0x26] = '\0';
    uVar11 = s_Couldn_t_initialize_byte_buffer_r_03c88dbb._16_8_;
    uVar10 = s_Couldn_t_initialize_byte_buffer_r_03c88dbb._0_8_;
    uVar8 = CONCAT26(s_Couldn_t_initialize_byte_buffer_r_03c88dbb._30_2_,
                     s_Couldn_t_initialize_byte_buffer_r_03c88dbb._24_6_);
    uVar9 = CONCAT62(s_Couldn_t_initialize_byte_buffer_r_03c88dbb._32_6_,
                     s_Couldn_t_initialize_byte_buffer_r_03c88dbb._30_2_);
    *(undefined8 *)(pcVar5 + 8) = s_Couldn_t_initialize_byte_buffer_r_03c88dbb._8_8_;
    *(undefined8 *)pcVar5 = uVar10;
    *(undefined8 *)(pcVar5 + 0x18) = uVar8;
    *(undefined8 *)(pcVar5 + 0x10) = uVar11;
    *(undefined8 *)(pcVar5 + 0x1e) = uVar9;
    puVar6 = (undefined8 *)FUN_0049e770(puVar3,0x30);
    lVar2 = _UNK_03caaf38;
    lVar1 = _DAT_03caaf30;
    uVar9 = *(undefined8 *)(pcVar5 + 8);
    uVar8 = *(undefined8 *)pcVar5;
    uVar11 = *(undefined8 *)(pcVar5 + 0x18);
    uVar10 = *(undefined8 *)(pcVar5 + 0x10);
    *(undefined8 *)((long)puVar6 + 0x1f) = *(undefined8 *)(pcVar5 + 0x1f);
    puVar6[1] = uVar9;
    *puVar6 = uVar8;
    puVar6[3] = uVar11;
    puVar6[2] = uVar10;
    *(undefined4 *)(param_1 + 7) = 0xd;
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,param_1[10]);
    }
    param_1[10] = (long)puVar6;
    param_1[9] = lVar2;
    param_1[8] = lVar1;
    pbVar7 = (byte *)(param_1 + 0xb);
    if ((*pbVar7 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,param_1[0xd]);
    }
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    pbVar7[0] = 0;
    pbVar7[1] = 0;
    pbVar7[2] = 0;
    pbVar7[3] = 0;
    pbVar7[4] = 0;
    pbVar7[5] = 0;
    pbVar7[6] = 0;
    pbVar7[7] = 0;
    FUN_0049e790(PTR_LAB_047cba48,pcVar5);
  }
  return;
}


