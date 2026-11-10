/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00349d80; name: FUN_00349d80
 */


void FUN_00349d80(long *param_1,char *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  size_t sVar4;
  char *pcVar5;
  undefined8 *puVar6;
  void *pvVar7;
  char *pcVar8;
  ulong uVar9;
  byte local_1a0;
  char acStack_19f [5];
  undefined2 uStack_19a;
  char cStack_198;
  char acStack_197 [7];
  undefined8 local_190;
  byte local_188;
  undefined4 uStack_187;
  undefined1 uStack_183;
  undefined2 uStack_182;
  undefined1 uStack_180;
  undefined1 uStack_17f;
  undefined6 uStack_17e;
  void *local_178;
  undefined4 local_170 [2];
  byte local_168 [16];
  undefined8 local_158;
  undefined8 *local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  byte local_120;
  char local_11f [8];
  undefined2 local_117;
  undefined1 local_115;
  undefined8 local_110;
  undefined1 auStack_108 [8];
  byte local_100;
  undefined8 local_f0;
  undefined1 auStack_e8 [8];
  undefined8 local_e0;
  undefined1 auStack_d0 [24];
  long *local_b8;
  long local_b0;
  long local_a8;
  byte local_a0;
  char acStack_9f [5];
  undefined2 uStack_9a;
  undefined4 uStack_98;
  char cStack_94;
  char cStack_93;
  undefined1 uStack_92;
  undefined1 uStack_91;
  char *local_90;
  ulong *local_88;
  ulong local_80;
  void *local_78;
  long *local_70;
  long local_68;
  long local_60;
  undefined8 local_58;
  
  if (param_3 == 0) {
    return;
  }
  local_68 = 0;
  local_60 = 0;
  local_70 = &local_68;
                    /* try { // try from 00349db8 to 00349dc3 has its CatchHandler @ 0034a704 */
  puVar2 = (undefined8 *)FUN_0037b960(param_3,1);
  if (puVar2 == (undefined8 *)0x0) {
LAB_00349e10:
    local_188 = 8;
    uStack_187 = 0x656d616e;
    uStack_183 = 0;
                    /* try { // try from 00349e30 to 00349e3b has its CatchHandler @ 0034a6d0 */
    FUN_002f0544(local_170,param_3,0);
                    /* try { // try from 00349e3c to 00349e4b has its CatchHandler @ 0034a698 */
    FUN_00347670(&local_88,&local_188,1);
    local_a0 = 0x1a;
    acStack_9f[0] = s_other_address_03c8fe00[0];
    acStack_9f[1] = s_other_address_03c8fe00[1];
    acStack_9f[2] = s_other_address_03c8fe00[2];
    acStack_9f[3] = s_other_address_03c8fe00[3];
    acStack_9f[4] = s_other_address_03c8fe00[4];
    uStack_9a = s_other_address_03c8fe00._5_2_;
    uStack_98 = (undefined4)
                (CONCAT53(s_other_address_03c8fe00._8_5_,s_other_address_03c8fe00._5_3_) >> 0x10);
    cStack_94 = s_other_address_03c8fe00[0xb];
    cStack_93 = s_other_address_03c8fe00[0xc];
    uStack_92 = 0;
                    /* try { // try from 00349e70 to 00349e7f has its CatchHandler @ 0034a66c */
    puVar3 = (undefined8 *)FUN_002885a4(&local_70,&local_b8,&local_a0);
LAB_00349e80:
    puVar6 = (undefined8 *)*puVar3;
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x88);
      puVar6[6] = local_90;
      puVar6[5] = CONCAT17(uStack_91,
                           CONCAT16(uStack_92,CONCAT15(cStack_93,CONCAT14(cStack_94,uStack_98))));
      puVar6[4] = CONCAT26(uStack_9a,CONCAT51(acStack_9f,local_a0));
      uStack_98 = 0;
      cStack_94 = '\0';
      cStack_93 = '\0';
      uStack_92 = 0;
      uStack_91 = 0;
      local_90 = (char *)0x0;
      local_a0 = 0;
      acStack_9f[0] = '\0';
      acStack_9f[1] = '\0';
      acStack_9f[2] = '\0';
      acStack_9f[3] = '\0';
      acStack_9f[4] = '\0';
      uStack_9a = 0;
      puVar6[0xc] = 0;
      puVar6[0xb] = 0;
      puVar6[0xd] = 0;
      puVar6[0xe] = 0;
      puVar6[0xb] = puVar6 + 0xc;
      puVar6[10] = 0;
      puVar6[9] = 0;
      puVar6[8] = 0;
      puVar6[7] = 0;
      puVar6[0xf] = 0;
      puVar6[0x10] = 0;
      puVar6[2] = local_b8;
      *puVar6 = 0;
      puVar6[1] = 0;
      *puVar3 = puVar6;
      if ((long *)*local_70 == (long *)0x0) {
        puVar3 = puVar6;
      }
      else {
        puVar3 = (undefined8 *)*puVar3;
        local_70 = (long *)*local_70;
      }
      FUN_010108e0(local_68,puVar3);
      local_60 = local_60 + 1;
    }
    puVar3 = puVar6 + 0xc;
    *(undefined4 *)(puVar6 + 7) = 5;
    FUN_0025cef0(puVar6 + 0xb,*puVar3);
    puVar6[0xb] = local_88;
    puVar6[0xc] = local_80;
    puVar6[0xd] = local_78;
    if (local_78 == (void *)0x0) {
      puVar6[0xb] = puVar3;
    }
    else {
      *(undefined8 **)(local_80 + 0x10) = puVar3;
      local_88 = &local_80;
      local_80 = 0;
    }
    local_78 = (void *)0x0;
    if ((local_a0 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_90);
    }
    FUN_0025cef0(&local_88,local_80);
    FUN_003481a8(&uStack_138);
    FUN_0025cef0(&local_150,local_148);
    if ((local_168[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_158);
    }
    if ((local_188 & 1) != 0) {
      pvVar7 = local_178;
LAB_0034a370:
      FUN_0049e790(PTR_LAB_047cba48,pvVar7);
    }
  }
  else {
    pcVar8 = (char *)*puVar2;
    iVar1 = strcmp(pcVar8,"ipv4");
    if ((iVar1 != 0) && (iVar1 = strcmp(pcVar8,"ipv6"), iVar1 != 0)) {
      iVar1 = strcmp(pcVar8,"unix");
      if (iVar1 != 0) goto LAB_00349e10;
      local_188 = 0x10;
      uStack_187 = 0x656c6966;
      uStack_183 = 0x6e;
      uStack_182 = 0x6d61;
      uStack_180 = 0x65;
      uStack_17f = 0;
                    /* try { // try from 0034a110 to 0034a117 has its CatchHandler @ 0034a550 */
      FUN_002f0838(local_170,puVar2[2],0);
                    /* try { // try from 0034a118 to 0034a127 has its CatchHandler @ 0034a54c */
      FUN_00347670(&local_88,&local_188,1);
      local_a0 = 0x16;
      acStack_9f = s_uds_address_03c474d7._0_5_;
      uStack_9a = s_uds_address_03c474d7._5_2_;
      uStack_98 = CONCAT31(0x737365,s_uds_address_03c474d7[7]);
      cStack_94 = '\0';
                    /* try { // try from 0034a150 to 0034a15f has its CatchHandler @ 0034a548 */
      puVar3 = (undefined8 *)FUN_002885a4(&local_70,&local_b8,&local_a0);
      goto LAB_00349e80;
    }
    pcVar5 = (char *)puVar2[2];
    local_78 = (void *)0x0;
    local_88 = (ulong *)0x0;
    local_80 = 0;
    local_90 = (char *)0x0;
    local_a0 = 0;
    acStack_9f[0] = '\0';
    acStack_9f[1] = '\0';
    acStack_9f[2] = '\0';
    acStack_9f[3] = '\0';
    acStack_9f[4] = '\0';
    uStack_9a = 0;
    uStack_98 = 0;
    cStack_94 = '\0';
    cStack_93 = '\0';
    uStack_92 = 0;
    uStack_91 = 0;
    pcVar8 = pcVar5 + 1;
    if (*pcVar5 != '/') {
      pcVar8 = pcVar5;
    }
    sVar4 = strlen(pcVar8);
                    /* try { // try from 00349f30 to 00349f3f has its CatchHandler @ 0034a668 */
    uVar9 = FUN_0038f050(pcVar8,sVar4,&local_88,&local_a0);
    if ((uVar9 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0034a540 to 0034a543 has its CatchHandler @ 0034a668 */
      abort();
    }
    if ((local_a0 & 1) == 0) {
      if (1 < local_a0) {
        pcVar8 = (char *)((ulong)&local_a0 | 1);
        goto LAB_00349f6c;
      }
LAB_00349f78:
      iVar1 = -1;
    }
    else {
      if (CONCAT17(uStack_91,CONCAT16(uStack_92,CONCAT15(cStack_93,CONCAT14(cStack_94,uStack_98))))
          == 0) goto LAB_00349f78;
      pcVar8 = local_90;
LAB_00349f6c:
      iVar1 = atoi(pcVar8);
    }
    uVar9 = (ulong)local_88 >> 1 & 0x7f;
    pvVar7 = (void *)((ulong)&local_88 | 1);
    if (((ulong)local_88 & 1) != 0) {
      uVar9 = local_80;
      pvVar7 = local_78;
    }
                    /* try { // try from 00349f9c to 00349fa7 has its CatchHandler @ 0034a6d4 */
    pvVar7 = (void *)FUN_00366290(pvVar7,uVar9,0,0);
    uStack_183 = 0;
    local_188 = 8;
    uStack_187 = 0x74726f70;
    local_170[0] = 3;
                    /* try { // try from 00349fd4 to 00349fdb has its CatchHandler @ 0034a658 */
    FUN_0034a950(local_168,iVar1);
    local_150 = &local_148;
    local_148 = 0;
    local_120 = 0x14;
    local_140 = 0;
    uStack_138 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_117 = 0x7373;
    local_11f[0] = s_ip_address_03bf4076[0];
    local_11f[1] = s_ip_address_03bf4076[1];
    local_11f[2] = s_ip_address_03bf4076[2];
    local_11f[3] = s_ip_address_03bf4076[3];
    local_11f[4] = s_ip_address_03bf4076[4];
    local_11f[5] = s_ip_address_03bf4076[5];
    local_11f[6] = s_ip_address_03bf4076[6];
    local_11f[7] = s_ip_address_03bf4076[7];
    local_115 = 0;
                    /* try { // try from 0034a014 to 0034a01f has its CatchHandler @ 0034a5b8 */
    FUN_002f0838(auStack_108,pvVar7,0);
                    /* try { // try from 0034a020 to 0034a02f has its CatchHandler @ 0034a580 */
    FUN_00347670(&local_b8,&local_188,2);
    local_1a0 = 0x1a;
    acStack_19f[0] = s_tcpip_address_03c4de53[0];
    acStack_19f[1] = s_tcpip_address_03c4de53[1];
    acStack_19f[2] = s_tcpip_address_03c4de53[2];
    acStack_19f[3] = s_tcpip_address_03c4de53[3];
    acStack_19f[4] = s_tcpip_address_03c4de53[4];
    uStack_19a = s_tcpip_address_03c4de53._5_2_;
    cStack_198 = s_tcpip_address_03c4de53[7];
    acStack_197[0] = s_tcpip_address_03c4de53[8];
    acStack_197[1] = s_tcpip_address_03c4de53[9];
    acStack_197[2] = s_tcpip_address_03c4de53[10];
    acStack_197[3] = s_tcpip_address_03c4de53[0xb];
    acStack_197[4] = s_tcpip_address_03c4de53[0xc];
    acStack_197[5] = 0;
                    /* try { // try from 0034a054 to 0034a063 has its CatchHandler @ 0034a554 */
    puVar3 = (undefined8 *)FUN_002885a4(&local_70,&local_58,&local_1a0);
    puVar6 = (undefined8 *)*puVar3;
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x88);
      puVar6[6] = local_190;
      puVar6[5] = CONCAT17(acStack_197[6],
                           CONCAT16(acStack_197[5],CONCAT51(acStack_197._0_5_,cStack_198)));
      puVar6[4] = CONCAT26(uStack_19a,CONCAT51(acStack_19f,local_1a0));
      cStack_198 = '\0';
      acStack_197[0] = '\0';
      acStack_197[1] = '\0';
      acStack_197[2] = '\0';
      acStack_197[3] = '\0';
      acStack_197[4] = '\0';
      acStack_197[5] = 0;
      acStack_197[6] = 0;
      local_190 = 0;
      local_1a0 = 0;
      acStack_19f[0] = '\0';
      acStack_19f[1] = '\0';
      acStack_19f[2] = '\0';
      acStack_19f[3] = '\0';
      acStack_19f[4] = '\0';
      uStack_19a = 0;
      puVar6[0xc] = 0;
      puVar6[0xb] = 0;
      puVar6[0xd] = 0;
      puVar6[0xe] = 0;
      puVar6[0xb] = puVar6 + 0xc;
      puVar6[10] = 0;
      puVar6[9] = 0;
      puVar6[8] = 0;
      puVar6[7] = 0;
      puVar6[0xf] = 0;
      puVar6[0x10] = 0;
      puVar6[2] = local_58;
      *puVar6 = 0;
      puVar6[1] = 0;
      *puVar3 = puVar6;
      if ((long *)*local_70 == (long *)0x0) {
        puVar3 = puVar6;
      }
      else {
        puVar3 = (undefined8 *)*puVar3;
        local_70 = (long *)*local_70;
      }
      FUN_010108e0(local_68,puVar3);
      local_60 = local_60 + 1;
    }
    puVar3 = puVar6 + 0xc;
    *(undefined4 *)(puVar6 + 7) = 5;
    FUN_0025cef0(puVar6 + 0xb,*puVar3);
    puVar6[0xb] = local_b8;
    puVar6[0xc] = local_b0;
    puVar6[0xd] = local_a8;
    if (local_a8 == 0) {
      puVar6[0xb] = puVar3;
    }
    else {
      *(undefined8 **)(local_b0 + 0x10) = puVar3;
      local_b8 = &local_b0;
      local_b0 = 0;
    }
    local_a8 = 0;
    if ((local_1a0 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_190);
    }
    FUN_0025cef0(&local_b8,local_b0);
    FUN_003481a8(auStack_d0);
    FUN_0025cef0(auStack_e8,local_e0);
    if ((local_100 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_f0);
    }
    if ((local_120 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_110);
    }
    FUN_003481a8(&uStack_138);
    FUN_0025cef0(&local_150,local_148);
    if ((local_168[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_158);
    }
    if ((local_188 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_178);
    }
                    /* try { // try from 0034a344 to 0034a34b has its CatchHandler @ 0034a6d4 */
    free(pvVar7);
    if ((local_a0 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_90);
    }
    if (((ulong)local_88 & 1) != 0) {
      pvVar7 = local_78;
      goto LAB_0034a370;
    }
  }
                    /* try { // try from 0034a37c to 0034a383 has its CatchHandler @ 0034a704 */
  FUN_0037bfa0(puVar2);
  sVar4 = strlen(param_2);
  if (0xffffffffffffffef < sVar4) {
                    /* try { // try from 0034a538 to 0034a53f has its CatchHandler @ 0034a544 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_188 = (byte)((int)sVar4 << 1);
    pvVar7 = (void *)((ulong)&local_188 | 1);
    if (sVar4 == 0) goto LAB_0034a3f0;
  }
  else {
    uVar9 = sVar4 + 0x10 & 0xfffffffffffffff0;
    pvVar7 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar9);
    local_188 = (byte)uVar9 | 1;
    uStack_187 = (undefined4)(uVar9 >> 8);
    uStack_183 = (undefined1)(uVar9 >> 0x28);
    uStack_182 = (undefined2)(uVar9 >> 0x30);
    uStack_180 = (undefined1)sVar4;
    uStack_17f = (undefined1)(sVar4 >> 8);
    uStack_17e = (undefined6)(sVar4 >> 0x10);
    local_178 = pvVar7;
  }
  memcpy(pvVar7,param_2,sVar4);
LAB_0034a3f0:
  *(undefined1 *)((long)pvVar7 + sVar4) = 0;
                    /* try { // try from 0034a3f4 to 0034a403 has its CatchHandler @ 0034a6e4 */
  puVar2 = (undefined8 *)FUN_002885a4(param_1,&local_88,&local_188);
  puVar3 = (undefined8 *)*puVar2;
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x88);
    puVar3[6] = local_178;
    puVar3[5] = CONCAT62(uStack_17e,CONCAT11(uStack_17f,uStack_180));
    puVar3[4] = CONCAT26(uStack_182,CONCAT15(uStack_183,CONCAT41(uStack_187,local_188)));
    uStack_180 = 0;
    uStack_17f = 0;
    uStack_17e = 0;
    local_178 = (void *)0x0;
    local_188 = 0;
    uStack_187 = 0;
    uStack_183 = 0;
    uStack_182 = 0;
    puVar3[0xc] = 0;
    puVar3[0xb] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xb] = puVar3 + 0xc;
    puVar3[10] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[7] = 0;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    puVar3[2] = local_88;
    *puVar3 = 0;
    puVar3[1] = 0;
    *puVar2 = puVar3;
    if (*(long *)*param_1 == 0) {
      puVar2 = puVar3;
    }
    else {
      *param_1 = *(long *)*param_1;
      puVar2 = (undefined8 *)*puVar2;
    }
    FUN_010108e0(param_1[1],puVar2);
    param_1[2] = param_1[2] + 1;
  }
  puVar2 = puVar3 + 0xc;
  *(undefined4 *)(puVar3 + 7) = 5;
  FUN_0025cef0(puVar3 + 0xb,*puVar2);
  puVar3[0xb] = local_70;
  puVar3[0xc] = local_68;
  puVar3[0xd] = local_60;
  if (local_60 == 0) {
    puVar3[0xb] = puVar2;
  }
  else {
    *(undefined8 **)(local_68 + 0x10) = puVar2;
    local_68 = 0;
    local_70 = &local_68;
  }
  local_60 = 0;
  if ((local_188 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_178);
  }
  FUN_0025cef0(&local_70,local_68);
  return;
}


