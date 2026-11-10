/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004b70f8; name: FUN_004b70f8
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b70f8(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  void *__src;
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong *puVar4;
  undefined1 *__dest;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  byte *pbVar9;
  char *pcVar10;
  byte *pbVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong *puVar14;
  long lVar15;
  undefined8 uVar16;
  byte local_138 [16];
  undefined8 local_128;
  ulong local_120;
  ulong uStack_118;
  ulong local_110;
  ulong local_100;
  ulong uStack_f8;
  ulong local_f0;
  ulong local_e0;
  ulong uStack_d8;
  ulong local_d0;
  byte local_c0;
  undefined5 uStack_bf;
  undefined2 uStack_ba;
  undefined6 uStack_b8;
  undefined2 uStack_b2;
  undefined8 local_b0;
  undefined8 *local_a0;
  ulong uStack_98;
  ulong local_90;
  byte local_80;
  byte bStack_7f;
  undefined6 uStack_7e;
  undefined2 uStack_78;
  undefined2 uStack_76;
  undefined4 uStack_74;
  char *local_70;
  
  lVar15 = *(long *)(param_1 + 8);
  puVar14 = *(ulong **)(param_2 + 0x18);
  puVar4 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,0x18);
  if (puVar4 != (ulong *)0x0) {
    if ((*puVar14 & 1) == 0) {
      uVar6 = puVar14[1];
      uVar8 = *puVar14;
      puVar4[2] = puVar14[2];
      puVar4[1] = uVar6;
      *puVar4 = uVar8;
    }
    else {
      uVar8 = puVar14[1];
      __src = (void *)puVar14[2];
      if (uVar8 < 0x17) {
        __dest = (undefined1 *)((long)puVar4 + 1);
        *(char *)puVar4 = (char)((int)uVar8 << 1);
      }
      else {
        if (0xffffffffffffffef < uVar8) {
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        uVar6 = uVar8 + 0x10 & 0xfffffffffffffff0;
        __dest = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar6);
        puVar4[1] = uVar8;
        puVar4[2] = (ulong)__dest;
        *puVar4 = uVar6 | 1;
      }
      memcpy(__dest,__src,uVar8 + 1);
    }
  }
  local_80 = (byte)puVar4;
  bStack_7f = (byte)((ulong)puVar4 >> 8);
  uStack_7e = (undefined6)((ulong)puVar4 >> 0x10);
  FUN_004a3dc0(lVar15 + 0xd0,&local_80);
  *param_4 = puVar4;
  *(undefined4 *)(param_4 + 2) = *(undefined4 *)(param_2 + 0x28);
  param_4[3] = param_3;
  lVar15 = *(long *)(param_1 + 8);
  puVar5 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x18);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
  }
  local_80 = (byte)puVar5;
  bStack_7f = (byte)((ulong)puVar5 >> 8);
  uStack_7e = (undefined6)((ulong)puVar5 >> 0x10);
  FUN_004a3dc0(lVar15 + 0xd0,&local_80);
  bVar1 = *(byte *)param_3[1];
  if ((bVar1 & 1) == 0) {
    uVar8 = (ulong)(bVar1 >> 1);
    pbVar11 = (byte *)*param_3;
    bVar1 = *pbVar11;
    if ((bVar1 & 1) == 0) goto LAB_004b7250;
LAB_004b7224:
    lVar15 = uVar8 - *(long *)(pbVar11 + 8);
    pbVar11 = (byte *)*param_4;
    bVar1 = *pbVar11;
    if ((bVar1 & 1) == 0) goto LAB_004b7264;
LAB_004b7238:
    uVar8 = *(ulong *)(pbVar11 + 8);
  }
  else {
    uVar8 = *(ulong *)((byte *)param_3[1] + 8);
    pbVar11 = (byte *)*param_3;
    bVar1 = *pbVar11;
    if ((bVar1 & 1) != 0) goto LAB_004b7224;
LAB_004b7250:
    lVar15 = uVar8 - (bVar1 >> 1);
    pbVar11 = (byte *)*param_4;
    bVar1 = *pbVar11;
    if ((bVar1 & 1) != 0) goto LAB_004b7238;
LAB_004b7264:
    uVar8 = (ulong)(bVar1 >> 1);
  }
  FUN_002cdbb0(puVar5,uVar8 + lVar15);
  pbVar11 = (byte *)param_3[1];
  if ((*pbVar11 & 1) == 0) {
    pbVar11 = pbVar11 + 1;
  }
  else {
    pbVar11 = *(byte **)(pbVar11 + 0x10);
  }
  FUN_0021d540(puVar5,pbVar11,lVar15);
  pbVar9 = (byte *)*param_4;
  uVar8 = *(ulong *)(pbVar9 + 8);
  pbVar11 = *(byte **)(pbVar9 + 0x10);
  if ((*pbVar9 & 1) == 0) {
    pbVar11 = pbVar9 + 1;
    uVar8 = (ulong)(*pbVar9 >> 1);
  }
  FUN_0021d540(puVar5,pbVar11,uVar8);
  param_4[1] = puVar5;
  FUN_004ad8f4(param_1,*(undefined8 *)(param_2 + 0x18),puVar5,param_2);
  param_4[4] = 0;
  if ((*(byte *)(param_2 + 0x10) >> 1 & 1) != 0) {
    uVar13 = *(undefined8 *)(param_2 + 0x20);
    local_70 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x30);
    uVar3 = s_google_protobuf_EnumValueOptions_03be790d._24_8_;
    uVar16 = s_google_protobuf_EnumValueOptions_03be790d._16_8_;
    uVar12 = s_google_protobuf_EnumValueOptions_03be790d._0_8_;
    uStack_78 = (undefined2)_UNK_03cab268;
    uStack_76 = (undefined2)((ulong)_UNK_03cab268 >> 0x10);
    uStack_74 = (undefined4)((ulong)_UNK_03cab268 >> 0x20);
    local_80 = (byte)_DAT_03cab260;
    bStack_7f = (byte)((ulong)_DAT_03cab260 >> 8);
    uStack_7e = (undefined6)((ulong)_DAT_03cab260 >> 0x10);
    *(undefined8 *)(local_70 + 8) = s_google_protobuf_EnumValueOptions_03be790d._8_8_;
    *(undefined8 *)local_70 = uVar12;
    *(undefined8 *)(local_70 + 0x18) = uVar3;
    *(undefined8 *)(local_70 + 0x10) = uVar16;
    local_70[0x20] = '\0';
                    /* try { // try from 004b731c to 004b7333 has its CatchHandler @ 004b7844 */
    FUN_004b79d4(param_1,uVar13,param_4,3,&local_80);
    if ((local_80 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_70);
    }
  }
  uVar8 = FUN_004acb08(param_1,param_4[1],param_3[3],*param_4,param_2,5,param_4);
  uVar6 = FUN_004a2d2c(*(undefined8 *)(param_1 + 0x58),param_3,*param_4,5,param_4);
  if (((uVar8 & 1) != 0) || ((uVar6 & 1) == 0)) goto LAB_004b762c;
  local_80 = 0;
  bStack_7f = 0;
  uStack_7e = 0;
  uStack_78 = 0;
  uStack_76 = 0;
  uStack_74 = 0;
  local_70 = (char *)0x0;
  if (param_3[3] == 0) {
    FUN_001fcec0(&local_80,*(undefined8 *)(*(long *)(param_1 + 0x50) + 8));
  }
  else {
                    /* try { // try from 004b73a4 to 004b73bf has its CatchHandler @ 004b7840 */
    FUN_001fcec0(&local_80,*(undefined8 *)(param_3[3] + 8));
  }
  uVar12 = s_the_global_scope_03c76593._0_8_;
  if ((local_80 & 1) == 0) {
    if (1 < local_80) goto LAB_004b73ec;
    local_80 = 0x20;
    pcVar10 = (char *)((ulong)&local_80 | 1);
LAB_004b748c:
    *(undefined8 *)(pcVar10 + 8) = s_the_global_scope_03c76593._8_8_;
    *(undefined8 *)pcVar10 = uVar12;
    pcVar10[0x10] = '\0';
  }
  else {
    if (CONCAT44(uStack_74,CONCAT22(uStack_76,uStack_78)) == 0) {
      uStack_78 = 0x10;
      uStack_76 = 0;
      uStack_74 = 0;
      pcVar10 = local_70;
      goto LAB_004b748c;
    }
LAB_004b73ec:
                    /* try { // try from 004b73ec to 004b73ff has its CatchHandler @ 004b7724 */
    FUN_004a8ec0(&local_a0,&DAT_03c246d6,&local_80);
                    /* try { // try from 004b7400 to 004b7413 has its CatchHandler @ 004b7710 */
    pbVar11 = (byte *)FUN_0021d540(&local_a0,&DAT_03c246d6,1);
    uVar12 = *(undefined8 *)(pbVar11 + 2);
    pcVar10 = *(char **)(pbVar11 + 0x10);
    bVar1 = *pbVar11;
    bVar2 = pbVar11[1];
    uStack_b8 = (undefined6)((ulong)*(undefined8 *)(pbVar11 + 8) >> 0x10);
    local_c0 = (byte)uVar12;
    uStack_bf = (undefined5)((ulong)uVar12 >> 8);
    uStack_ba = (undefined2)((ulong)uVar12 >> 0x30);
    pbVar11[0] = 0;
    pbVar11[1] = 0;
    pbVar11[2] = 0;
    pbVar11[3] = 0;
    pbVar11[4] = 0;
    pbVar11[5] = 0;
    pbVar11[6] = 0;
    pbVar11[7] = 0;
    pbVar11[8] = 0;
    pbVar11[9] = 0;
    pbVar11[10] = 0;
    pbVar11[0xb] = 0;
    pbVar11[0xc] = 0;
    pbVar11[0xd] = 0;
    pbVar11[0xe] = 0;
    pbVar11[0xf] = 0;
    pbVar11[0x10] = 0;
    pbVar11[0x11] = 0;
    pbVar11[0x12] = 0;
    pbVar11[0x13] = 0;
    pbVar11[0x14] = 0;
    pbVar11[0x15] = 0;
    pbVar11[0x16] = 0;
    pbVar11[0x17] = 0;
    if ((local_80 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_70);
    }
    uStack_7e = CONCAT51(uStack_bf,local_c0);
    uStack_78 = uStack_ba;
    uStack_76 = (undefined2)uStack_b8;
    uStack_74 = (undefined4)((uint6)uStack_b8 >> 0x10);
    local_80 = bVar1;
    bStack_7f = bVar2;
    local_70 = pcVar10;
    if (((byte)local_a0 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_90);
    }
  }
  uVar12 = param_4[1];
                    /* try { // try from 004b74a4 to 004b74b3 has its CatchHandler @ 004b783c */
  FUN_004a8ec0(local_138,
               "Note that enum values use C++ scoping rules, meaning that enum values are siblings of their type, not children of it.  Therefore, \""
               ,*param_4);
                    /* try { // try from 004b74b4 to 004b74c7 has its CatchHandler @ 004b781c */
  puVar4 = (ulong *)FUN_0021d540(local_138,"\" must be unique within ",0x18);
  uStack_118 = puVar4[1];
  local_120 = *puVar4;
  local_110 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  uVar8 = (ulong)(local_80 >> 1);
  pcVar10 = (char *)((ulong)&local_80 | 1);
  if ((local_80 & 1) != 0) {
    uVar8 = CONCAT44(uStack_74,CONCAT22(uStack_76,uStack_78));
    pcVar10 = local_70;
  }
                    /* try { // try from 004b7500 to 004b7507 has its CatchHandler @ 004b780c */
  puVar4 = (ulong *)FUN_0021d540(&local_120,pcVar10,uVar8);
  uStack_f8 = puVar4[1];
  local_100 = *puVar4;
  local_f0 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
                    /* try { // try from 004b7520 to 004b7533 has its CatchHandler @ 004b77fc */
  puVar4 = (ulong *)FUN_0021d540(&local_100,", not just within \"",0x13);
  uStack_d8 = puVar4[1];
  local_e0 = *puVar4;
  local_d0 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  pbVar9 = (byte *)*param_3;
  uVar8 = *(ulong *)(pbVar9 + 8);
  pbVar11 = *(byte **)(pbVar9 + 0x10);
  if ((*pbVar9 & 1) == 0) {
    pbVar11 = pbVar9 + 1;
    uVar8 = (ulong)(*pbVar9 >> 1);
  }
                    /* try { // try from 004b7568 to 004b756f has its CatchHandler @ 004b77a4 */
  puVar5 = (undefined8 *)FUN_0021d540(&local_e0,pbVar11,uVar8);
  uVar16 = *puVar5;
  local_b0 = puVar5[2];
  uStack_b8 = (undefined6)puVar5[1];
  uStack_b2 = (undefined2)((ulong)puVar5[1] >> 0x30);
  local_c0 = (byte)uVar16;
  uStack_bf = (undefined5)((ulong)uVar16 >> 8);
  uStack_ba = (undefined2)((ulong)uVar16 >> 0x30);
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
                    /* try { // try from 004b7588 to 004b759b has its CatchHandler @ 004b777c */
  puVar4 = (ulong *)FUN_0021d540(&local_c0,&DAT_03bfbda2,2);
  uStack_98 = puVar4[1];
  local_a0 = (undefined8 *)*puVar4;
  local_90 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  plVar7 = *(long **)(param_1 + 0x10);
  if (plVar7 != (long *)0x0) {
                    /* try { // try from 004b75c8 to 004b75db has its CatchHandler @ 004b7728 */
    (**(code **)(*plVar7 + 0x10))(plVar7,param_1 + 0x38,uVar12,param_2,0,&local_a0);
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  if (((ulong)local_a0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_90);
  }
  if ((local_c0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_b0);
  }
  if ((local_e0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_d0);
  }
  if ((local_100 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_f0);
  }
  if ((local_120 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_110);
  }
  if ((local_138[0] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_128);
  }
  if ((local_80 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_70);
  }
LAB_004b762c:
  uVar12 = param_4[3];
  local_80 = (byte)uVar12;
  bStack_7f = (byte)((ulong)uVar12 >> 8);
  uStack_7e = (undefined6)((ulong)uVar12 >> 0x10);
  uStack_78 = (undefined2)*(undefined4 *)(param_4 + 2);
  uStack_76 = (undefined2)((uint)*(undefined4 *)(param_4 + 2) >> 0x10);
  local_a0 = param_4;
  FUN_004a3890(*(long *)(param_1 + 0x58) + 0xc0,&local_80,&local_a0);
  return;
}


