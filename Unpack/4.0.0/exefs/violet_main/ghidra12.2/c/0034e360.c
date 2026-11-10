/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0034e360; name: FUN_0034e360
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0034e360(undefined8 *param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  size_t sVar5;
  void *pvVar6;
  char *pcVar7;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  byte local_80;
  undefined2 uStack_7f;
  char cStack_7d;
  char cStack_7c;
  undefined2 uStack_7b;
  char cStack_79;
  int iStack_78;
  uint uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  
  pcVar7 = (char *)param_1[3];
  sVar5 = strlen(pcVar7);
  if (0xffffffffffffffef < sVar5) goto LAB_0034e81c;
  if (sVar5 < 0x17) {
    local_80 = (byte)((int)sVar5 << 1);
    pvVar8 = (void *)((ulong)&local_80 | 1);
    if (sVar5 != 0) goto LAB_0034e3e8;
  }
  else {
    uVar10 = sVar5 + 0x10 & 0xfffffffffffffff0;
    pvVar8 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar10);
    local_80 = (byte)uVar10 | 1;
    uStack_7f = (undefined2)(uVar10 >> 8);
    cStack_7d = (char)(uVar10 >> 0x18);
    cStack_7c = (char)(uVar10 >> 0x20);
    uStack_7b = (undefined2)(uVar10 >> 0x28);
    cStack_79 = (char)(uVar10 >> 0x38);
    uStack_74 = (uint)(sVar5 >> 0x20);
    uStack_70 = SUB84(pvVar8,0);
    uStack_6c = (uint)((ulong)pvVar8 >> 0x20);
    iStack_78 = (int)sVar5;
LAB_0034e3e8:
    memcpy(pvVar8,pcVar7,sVar5);
  }
  *(undefined1 *)((long)pvVar8 + sVar5) = 0;
                    /* try { // try from 0034e3fc to 0034e407 has its CatchHandler @ 0034e83c */
  FUN_0034e1b4(param_3,&local_80);
  if ((local_80 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,CONCAT44(uStack_6c,uStack_70));
  }
  local_80 = 0x16;
  uStack_7f = s_HTTP_1_0_03c548ea._0_2_;
  cStack_7d = s_HTTP_1_0_03c548ea[2];
  cStack_7c = s_HTTP_1_0_03c548ea[3];
  uStack_7b = s_HTTP_1_0_03c548ea._4_2_;
  cStack_79 = s_HTTP_1_0_03c548ea[6];
  iStack_78._0_1_ = s_HTTP_1_0_03c548ea[7];
  iStack_78 = CONCAT31(0xa0d30,(char)iStack_78);
  uStack_74 = uStack_74 & 0xffffff00;
                    /* try { // try from 0034e448 to 0034e453 has its CatchHandler @ 0034e838 */
  FUN_0034e1b4(param_3,&local_80);
  if ((local_80 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,CONCAT44(uStack_6c,uStack_70));
  }
  local_80 = 0xc;
  uStack_7f = 0x6f48;
  cStack_7d = 0x73;
  cStack_7c = 't';
  uStack_7b = 0x203a;
  cStack_79 = '\0';
                    /* try { // try from 0034e48c to 0034e497 has its CatchHandler @ 0034e834 */
  FUN_0034e1b4(param_3,&local_80);
  if ((local_80 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,CONCAT44(uStack_6c,uStack_70));
  }
  pcVar7 = (char *)*param_1;
  sVar5 = strlen(pcVar7);
  if (0xffffffffffffffef < sVar5) {
LAB_0034e81c:
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar5 < 0x17) {
    local_80 = (byte)((int)sVar5 << 1);
    pvVar8 = (void *)((ulong)&local_80 | 1);
    if (sVar5 == 0) goto LAB_0034e520;
  }
  else {
    uVar10 = sVar5 + 0x10 & 0xfffffffffffffff0;
    pvVar8 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar10);
    local_80 = (byte)uVar10 | 1;
    uStack_7f = (undefined2)(uVar10 >> 8);
    cStack_7d = (char)(uVar10 >> 0x18);
    cStack_7c = (char)(uVar10 >> 0x20);
    uStack_7b = (undefined2)(uVar10 >> 0x28);
    cStack_79 = (char)(uVar10 >> 0x38);
    uStack_74 = (uint)(sVar5 >> 0x20);
    uStack_70 = SUB84(pvVar8,0);
    uStack_6c = (uint)((ulong)pvVar8 >> 0x20);
    iStack_78 = (int)sVar5;
  }
  memcpy(pvVar8,pcVar7,sVar5);
LAB_0034e520:
  *(undefined1 *)((long)pvVar8 + sVar5) = 0;
                    /* try { // try from 0034e524 to 0034e52f has its CatchHandler @ 0034e830 */
  FUN_0034e1b4(param_3,&local_80);
  if ((local_80 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,CONCAT44(uStack_6c,uStack_70));
  }
  local_80 = 4;
  uStack_7f = 0xa0d;
  cStack_7d = '\0';
                    /* try { // try from 0034e55c to 0034e567 has its CatchHandler @ 0034e82c */
  FUN_0034e1b4(param_3,&local_80);
  if ((local_80 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,CONCAT44(uStack_6c,uStack_70));
  }
  if ((param_2 & 1) != 0) {
    local_80 = 0x26;
    uStack_6c = uStack_6c & 0xffffff00;
    iStack_78._1_3_ = s_Connection__close_03c6eaef._8_3_;
    uStack_74 = s_Connection__close_03c6eaef._11_4_;
    uStack_70 = CONCAT31(0xa0d65,s_Connection__close_03c6eaef[0xf]);
    uStack_7f = s_Connection__close_03c6eaef._0_2_;
    cStack_7d = s_Connection__close_03c6eaef[2];
    cStack_7c = s_Connection__close_03c6eaef[3];
    uStack_7b = s_Connection__close_03c6eaef._4_2_;
    cStack_79 = s_Connection__close_03c6eaef[6];
    iStack_78._0_1_ = s_Connection__close_03c6eaef[7];
                    /* try { // try from 0034e5ac to 0034e5b7 has its CatchHandler @ 0034e824 */
    FUN_0034e1b4(param_3,&local_80);
    if ((local_80 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,CONCAT44(uStack_6c,uStack_70));
    }
  }
  pcVar7 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x20);
  uVar3 = s_User_Agent__grpc_httpcli_0_0_03c32b61._0_8_;
  uVar1 = CONCAT26(s_User_Agent__grpc_httpcli_0_0_03c32b61._14_2_,
                   s_User_Agent__grpc_httpcli_0_0_03c32b61._8_6_);
  uStack_70 = SUB84(pcVar7,0);
  uStack_6c = (uint)((ulong)pcVar7 >> 0x20);
  iStack_78 = (int)_UNK_03cab618;
  uStack_74 = (uint)((ulong)_UNK_03cab618 >> 0x20);
  local_80 = (byte)_DAT_03cab610;
  uStack_7f = (undefined2)((ulong)_DAT_03cab610 >> 8);
  cStack_7d = (char)((ulong)_DAT_03cab610 >> 0x18);
  cStack_7c = (char)((ulong)_DAT_03cab610 >> 0x20);
  uStack_7b = (undefined2)((ulong)_DAT_03cab610 >> 0x28);
  cStack_79 = (char)((ulong)_DAT_03cab610 >> 0x38);
  uVar2 = CONCAT62(s_User_Agent__grpc_httpcli_0_0_03c32b61._16_6_,
                   s_User_Agent__grpc_httpcli_0_0_03c32b61._14_2_);
  *(undefined8 *)(pcVar7 + 0x16) = s_User_Agent__grpc_httpcli_0_0_03c32b61._22_8_;
  *(undefined8 *)(pcVar7 + 0xe) = uVar2;
  *(undefined8 *)(pcVar7 + 8) = uVar1;
  *(undefined8 *)pcVar7 = uVar3;
  pcVar7[0x1e] = '\0';
                    /* try { // try from 0034e60c to 0034e617 has its CatchHandler @ 0034e828 */
  FUN_0034e1b4(param_3,&local_80);
  if ((local_80 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,CONCAT44(uStack_6c,uStack_70));
  }
  puVar4 = PTR_LAB_047cba48;
  if (param_1[5] != 0) {
    lVar11 = 0;
    uVar10 = 0;
    pvVar8 = (void *)((ulong)&local_80 | 1);
    do {
      pcVar7 = *(char **)(param_1[6] + lVar11);
      sVar5 = strlen(pcVar7);
      if (0xffffffffffffffef < sVar5) goto LAB_0034e81c;
      if (sVar5 < 0x17) {
        local_80 = (byte)((int)sVar5 << 1);
        pvVar6 = pvVar8;
        if (sVar5 != 0) goto LAB_0034e6cc;
      }
      else {
        uVar9 = sVar5 + 0x10 & 0xfffffffffffffff0;
        pvVar6 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar9);
        local_80 = (byte)uVar9 | 1;
        uStack_7f = (undefined2)(uVar9 >> 8);
        cStack_7d = (char)(uVar9 >> 0x18);
        cStack_7c = (char)(uVar9 >> 0x20);
        uStack_7b = (undefined2)(uVar9 >> 0x28);
        cStack_79 = (char)(uVar9 >> 0x38);
        uStack_74 = (uint)(sVar5 >> 0x20);
        uStack_70 = SUB84(pvVar6,0);
        uStack_6c = (uint)((ulong)pvVar6 >> 0x20);
        iStack_78 = (int)sVar5;
LAB_0034e6cc:
        memcpy(pvVar6,pcVar7,sVar5);
      }
      *(undefined1 *)((long)pvVar6 + sVar5) = 0;
                    /* try { // try from 0034e6e0 to 0034e6eb has its CatchHandler @ 0034e84c */
      FUN_0034e1b4(param_3,&local_80);
      if ((local_80 & 1) != 0) {
        FUN_0049e790(puVar4,CONCAT44(uStack_6c,uStack_70));
      }
      local_80 = 4;
      cStack_7d = 0;
      uStack_7f = 0x203a;
                    /* try { // try from 0034e710 to 0034e71b has its CatchHandler @ 0034e848 */
      FUN_0034e1b4(param_3,&local_80);
      if ((local_80 & 1) != 0) {
        FUN_0049e790(puVar4,CONCAT44(uStack_6c,uStack_70));
      }
      pcVar7 = *(char **)(param_1[6] + lVar11 + 8);
      sVar5 = strlen(pcVar7);
      if (0xffffffffffffffef < sVar5) goto LAB_0034e81c;
      if (sVar5 < 0x17) {
        local_80 = (byte)((int)sVar5 << 1);
        pvVar6 = pvVar8;
        if (sVar5 != 0) goto LAB_0034e794;
      }
      else {
        uVar9 = sVar5 + 0x10 & 0xfffffffffffffff0;
        pvVar6 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar9);
        local_80 = (byte)uVar9 | 1;
        uStack_7f = (undefined2)(uVar9 >> 8);
        cStack_7d = (char)(uVar9 >> 0x18);
        cStack_7c = (char)(uVar9 >> 0x20);
        uStack_7b = (undefined2)(uVar9 >> 0x28);
        cStack_79 = (char)(uVar9 >> 0x38);
        uStack_74 = (uint)(sVar5 >> 0x20);
        uStack_70 = SUB84(pvVar6,0);
        uStack_6c = (uint)((ulong)pvVar6 >> 0x20);
        iStack_78 = (int)sVar5;
LAB_0034e794:
        memcpy(pvVar6,pcVar7,sVar5);
      }
      *(undefined1 *)((long)pvVar6 + sVar5) = 0;
                    /* try { // try from 0034e7a8 to 0034e7b3 has its CatchHandler @ 0034e844 */
      FUN_0034e1b4(param_3,&local_80);
      if ((local_80 & 1) != 0) {
        FUN_0049e790(puVar4,CONCAT44(uStack_6c,uStack_70));
      }
      local_80 = 4;
      cStack_7d = 0;
      uStack_7f = 0xa0d;
                    /* try { // try from 0034e7d8 to 0034e7e3 has its CatchHandler @ 0034e840 */
      FUN_0034e1b4(param_3,&local_80);
      if ((local_80 & 1) != 0) {
        FUN_0049e790(puVar4,CONCAT44(uStack_6c,uStack_70));
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0x10;
    } while (uVar10 < (ulong)param_1[5]);
  }
  return;
}


