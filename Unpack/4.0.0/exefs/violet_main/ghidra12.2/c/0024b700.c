/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0024b700; name: FUN_0024b700
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_0024b700(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  UserHandle *pUVar5;
  long *plVar6;
  char *pcVar7;
  ulong uVar8;
  char cVar9;
  bool bVar10;
  uint uVar11;
  long *******ppppppplVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  ulong uVar23;
  long *plVar24;
  ulong uVar25;
  long *plVar26;
  ulong uVar27;
  long *plVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  long *plVar34;
  uint uVar35;
  int iVar36;
  undefined8 *puVar37;
  ulong *puVar38;
  long *plVar39;
  long *plVar40;
  long *plVar41;
  long lVar42;
  long *plVar43;
  undefined8 uVar44;
  long lVar45;
  ulong uVar46;
  long *******ppppppplVar47;
  char *pcVar48;
  int iVar49;
  ulong uVar50;
  long *plVar51;
  long lVar52;
  long *plVar53;
  long *plVar54;
  undefined4 local_278 [2];
  long *local_270;
  ulong uStack_268;
  long *******local_260;
  long *plStack_258;
  char local_250;
  long *local_248;
  long local_240;
  undefined8 uStack_238;
  long local_230;
  undefined8 local_228;
  ulong uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  long *plStack_208;
  long **local_200;
  long *plStack_1f8;
  ulong local_1f0;
  long *******ppppppplStack_1e8;
  long *plStack_1e0;
  char local_1d8;
  long *local_1d0;
  long local_1c8;
  undefined8 uStack_1c0;
  long local_1b8;
  undefined1 auStack_1b0 [8];
  undefined8 local_1a8;
  long *******local_190;
  long *local_188;
  byte local_180;
  undefined7 uStack_17f;
  ulong local_178;
  ulong local_170;
  long *local_168;
  ulong local_160;
  ulong uStack_158;
  char *local_150;
  long *local_148;
  ulong local_140;
  long *plStack_138;
  char *local_130;
  long *local_128;
  undefined8 local_120;
  long *******ppppppplStack_118;
  long *******local_110;
  long *local_108;
  AsyncContext aAStack_100 [32];
  long *local_e0;
  long *plStack_d8;
  long *******local_d0;
  long *******local_c8;
  long *local_c0;
  char local_b8 [64];
  long **local_78;
  undefined8 uStack_70;
  
  plVar34 = _UNK_03cabe08;
  uVar33 = _DAT_03cabe00;
  uVar32 = _UNK_03cabcb8;
  uVar31 = _DAT_03cabcb0;
  uVar30 = _UNK_03cabca8;
  uVar29 = _DAT_03cabca0;
  plVar28 = _UNK_03cab948;
  uVar27 = _DAT_03cab940;
  plVar26 = _UNK_03caaf88;
  uVar25 = _DAT_03caaf80;
  plVar24 = _UNK_03caae18;
  uVar23 = _DAT_03caae10;
  lVar52 = *(long *)(param_1 + 0x100);
  pcVar48 = (char *)((ulong)&local_160 | 1);
  uVar46 = (ulong)&local_200 | 1;
  puVar1 = PTR_DAT_047cc158 + 0x10;
  puVar2 = PTR_DAT_047cc168 + 0x10;
  puVar3 = PTR_DAT_047cc160 + 0x10;
  plVar4 = (long *)(PTR_DAT_047cbb30 + 0x10);
  pUVar5 = (UserHandle *)(param_1 + 0xd8);
  plVar6 = (long *)(PTR_DAT_047cbb38 + 0x10);
  do {
    nn::account::AsyncContext::AsyncContext(aAStack_100);
    uVar35 = nn::account::EnsureNetworkServiceAccountIdTokenCacheAsync(aAStack_100,pUVar5);
    uVar50 = uVar46;
    if (uVar35 == 0) {
      local_b8[0] = '\0';
      iVar36 = nn::account::AsyncContext::GetSystemEvent((SystemEvent *)aAStack_100);
      local_200 = (long **)CONCAT44(local_200._4_4_,iVar36);
      if (iVar36 != 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0,(Result *)&local_200,"");
      }
      FUN_006c4f60(&local_e0);
      if (local_b8[0] != '\0') {
        nn::os::DestroySystemEvent((SystemEventType *)&local_e0);
      }
      uVar35 = nn::account::AsyncContext::GetResult();
      if (uVar35 != 0) {
        if (((uVar35 & 0x1ff) != 0x7c) || (0x45 < (uVar35 >> 9 & 0x1fff) - 200)) {
          local_c0 = (long *)0x0;
          plStack_d8 = (long *)0x0;
          local_e0 = (long *)0x0;
          local_c8 = (long *******)0x0;
          local_d0 = (long *******)0x0;
          local_c0 = (long *)FUN_01cf7e20();
          plStack_d8 = (long *)0x0;
          local_d0 = (long *******)0x0;
          local_c8 = (long *******)0x0;
          local_128 = (long *)FUN_01cf7e20();
          local_130 = (char *)(**(code **)(*local_128 + 0x10))(local_128,0x70,1);
          uVar16 = s_Failed_to_get_NsaIdToken_cache__E_03c9cd46._80_8_;
          uVar15 = s_Failed_to_get_NsaIdToken_cache__E_03c9cd46._64_8_;
          uVar44 = CONCAT17(s_Failed_to_get_NsaIdToken_cache__E_03c9cd46[0x5f],
                            s_Failed_to_get_NsaIdToken_cache__E_03c9cd46._88_7_);
          uVar14 = CONCAT71(s_Failed_to_get_NsaIdToken_cache__E_03c9cd46._96_7_,
                            s_Failed_to_get_NsaIdToken_cache__E_03c9cd46[0x5f]);
          plStack_138 = plVar26;
          local_140 = uVar25;
          *(undefined8 *)(local_130 + 0x48) = s_Failed_to_get_NsaIdToken_cache__E_03c9cd46._72_8_;
          *(undefined8 *)(local_130 + 0x40) = uVar15;
          *(undefined8 *)(local_130 + 0x58) = uVar44;
          *(undefined8 *)(local_130 + 0x50) = uVar16;
          *(undefined8 *)(local_130 + 0x5f) = uVar14;
          uVar16 = s_Failed_to_get_NsaIdToken_cache__E_03c9cd46._24_8_;
          uVar15 = s_Failed_to_get_NsaIdToken_cache__E_03c9cd46._16_8_;
          uVar14 = s_Failed_to_get_NsaIdToken_cache__E_03c9cd46._8_8_;
          uVar44 = s_Failed_to_get_NsaIdToken_cache__E_03c9cd46._0_8_;
          local_130[0x67] = '\0';
          *(undefined8 *)(local_130 + 8) = uVar14;
          *(undefined8 *)local_130 = uVar44;
          *(undefined8 *)(local_130 + 0x18) = uVar16;
          *(undefined8 *)(local_130 + 0x10) = uVar15;
          uVar15 = s_Failed_to_get_NsaIdToken_cache__E_03c9cd46._56_8_;
          uVar14 = s_Failed_to_get_NsaIdToken_cache__E_03c9cd46._48_8_;
          uVar44 = s_Failed_to_get_NsaIdToken_cache__E_03c9cd46._32_8_;
          *(undefined8 *)(local_130 + 0x28) = s_Failed_to_get_NsaIdToken_cache__E_03c9cd46._40_8_;
          *(undefined8 *)(local_130 + 0x20) = uVar44;
          *(undefined8 *)(local_130 + 0x38) = uVar15;
          *(undefined8 *)(local_130 + 0x30) = uVar14;
                    /* try { // try from 0024bba8 to 0024bbb3 has its CatchHandler @ 0024cba0 */
          FUN_0024d8c0(&local_160,uVar35);
          pcVar7 = pcVar48;
          uVar8 = local_160 >> 1 & 0x7f;
          if ((local_160 & 1) != 0) {
            pcVar7 = local_150;
            uVar8 = uStack_158;
          }
                    /* try { // try from 0024bbd4 to 0024bbdb has its CatchHandler @ 0024cb90 */
          puVar37 = (undefined8 *)FUN_0020f8d0(&local_140,pcVar7,uVar8);
          ppppppplStack_118 = (long *******)puVar37[1];
          local_120 = (long *)*puVar37;
          local_108 = (long *)puVar37[3];
          local_110 = (long *******)puVar37[2];
          *puVar37 = 0;
          puVar37[1] = 0;
          puVar37[2] = 0;
                    /* try { // try from 0024bbec to 0024bbff has its CatchHandler @ 0024cb8c */
          puVar37 = (undefined8 *)FUN_0020f8d0(&local_120,&DAT_03bdface,1);
          goto LAB_0024bc00;
        }
        local_c0 = (long *)0x0;
        plStack_d8 = (long *)0x0;
        local_e0 = (long *)0x0;
        local_c8 = (long *******)0x0;
        local_d0 = (long *******)0x0;
        local_c0 = (long *)FUN_01cf7e20();
        plStack_d8 = (long *)0x0;
        local_d0 = (long *******)0x0;
        local_c8 = (long *******)0x0;
        local_128 = (long *)FUN_01cf7e20();
        local_130 = (char *)(**(code **)(*local_128 + 0x10))(local_128,0xa0,1);
        uVar44 = s_Failed_to_get_NsaIdToken_cache__N_03c249b3._128_8_;
        uVar21 = s_Failed_to_get_NsaIdToken_cache__N_03c249b3._120_8_;
        uVar16 = s_Failed_to_get_NsaIdToken_cache__N_03c249b3._112_8_;
        uVar15 = s_Failed_to_get_NsaIdToken_cache__N_03c249b3._104_8_;
        uVar14 = s_Failed_to_get_NsaIdToken_cache__N_03c249b3._96_8_;
        uVar20 = s_Failed_to_get_NsaIdToken_cache__N_03c249b3._56_8_;
        uVar19 = s_Failed_to_get_NsaIdToken_cache__N_03c249b3._48_8_;
        uVar18 = s_Failed_to_get_NsaIdToken_cache__N_03c249b3._40_8_;
        uVar17 = s_Failed_to_get_NsaIdToken_cache__N_03c249b3._32_8_;
        plStack_138 = plVar28;
        local_140 = uVar27;
        *(ulong *)(local_130 + 0x88) =
             CONCAT26(s_Failed_to_get_NsaIdToken_cache__N_03c249b3._142_2_,
                      s_Failed_to_get_NsaIdToken_cache__N_03c249b3._136_6_);
        *(undefined8 *)(local_130 + 0x80) = uVar44;
        uVar22 = s_Failed_to_get_NsaIdToken_cache__N_03c249b3._150_8_;
        uVar44 = CONCAT62(s_Failed_to_get_NsaIdToken_cache__N_03c249b3._144_6_,
                          s_Failed_to_get_NsaIdToken_cache__N_03c249b3._142_2_);
        local_130[0x9e] = '\0';
        *(undefined8 *)(local_130 + 0x68) = uVar15;
        *(undefined8 *)(local_130 + 0x60) = uVar14;
        *(undefined8 *)(local_130 + 0x78) = uVar21;
        *(undefined8 *)(local_130 + 0x70) = uVar16;
        uVar21 = s_Failed_to_get_NsaIdToken_cache__N_03c249b3._88_8_;
        uVar16 = s_Failed_to_get_NsaIdToken_cache__N_03c249b3._80_8_;
        uVar15 = s_Failed_to_get_NsaIdToken_cache__N_03c249b3._72_8_;
        uVar14 = s_Failed_to_get_NsaIdToken_cache__N_03c249b3._64_8_;
        *(undefined8 *)(local_130 + 0x96) = uVar22;
        *(undefined8 *)(local_130 + 0x8e) = uVar44;
        *(undefined8 *)(local_130 + 0x48) = uVar15;
        *(undefined8 *)(local_130 + 0x40) = uVar14;
        *(undefined8 *)(local_130 + 0x58) = uVar21;
        *(undefined8 *)(local_130 + 0x50) = uVar16;
        uVar16 = s_Failed_to_get_NsaIdToken_cache__N_03c249b3._24_8_;
        uVar15 = s_Failed_to_get_NsaIdToken_cache__N_03c249b3._16_8_;
        uVar14 = s_Failed_to_get_NsaIdToken_cache__N_03c249b3._8_8_;
        uVar44 = s_Failed_to_get_NsaIdToken_cache__N_03c249b3._0_8_;
        *(undefined8 *)(local_130 + 0x28) = uVar18;
        *(undefined8 *)(local_130 + 0x20) = uVar17;
        *(undefined8 *)(local_130 + 0x38) = uVar20;
        *(undefined8 *)(local_130 + 0x30) = uVar19;
        *(undefined8 *)(local_130 + 8) = uVar14;
        *(undefined8 *)local_130 = uVar44;
        *(undefined8 *)(local_130 + 0x18) = uVar16;
        *(undefined8 *)(local_130 + 0x10) = uVar15;
                    /* try { // try from 0024bad8 to 0024bae3 has its CatchHandler @ 0024cb14 */
        FUN_0024d8c0(&local_160,uVar35);
        pcVar7 = pcVar48;
        uVar8 = local_160 >> 1 & 0x7f;
        if ((local_160 & 1) != 0) {
          pcVar7 = local_150;
          uVar8 = uStack_158;
        }
                    /* try { // try from 0024bb04 to 0024bb0b has its CatchHandler @ 0024cb04 */
        puVar37 = (undefined8 *)FUN_0020f8d0(&local_140,pcVar7,uVar8);
        ppppppplStack_118 = (long *******)puVar37[1];
        local_120 = (long *)*puVar37;
        local_108 = (long *)puVar37[3];
        local_110 = (long *******)puVar37[2];
        *puVar37 = 0;
        puVar37[1] = 0;
        puVar37[2] = 0;
                    /* try { // try from 0024bb1c to 0024bb2f has its CatchHandler @ 0024cb00 */
        puVar37 = (undefined8 *)
                  FUN_0020f8d0(&local_120,"(ResultNetworkServiceAccountUnavailable).",0x29);
LAB_0024bd30:
        plStack_1f8 = (long *)puVar37[1];
        local_200 = (long **)*puVar37;
        ppppppplStack_1e8 = (long *******)puVar37[3];
        local_1f0 = puVar37[2];
        puVar37[1] = 0;
        puVar37[2] = 0;
        *puVar37 = 0;
        if (((ulong)local_200 & 1) != 0) {
          uVar50 = local_1f0;
        }
        FUN_00210170(&local_180,uVar35);
        uVar44 = 0x10;
        goto LAB_0024bd74;
      }
      uVar35 = nn::account::GetNetworkServiceAccountId((NetworkServiceAccountId *)&local_188,pUVar5)
      ;
      if (uVar35 != 0) {
        local_c0 = (long *)0x0;
        plStack_d8 = (long *)0x0;
        local_e0 = (long *)0x0;
        local_c8 = (long *******)0x0;
        local_d0 = (long *******)0x0;
        local_c0 = (long *)FUN_01cf7e20();
        plStack_d8 = (long *)0x0;
        local_d0 = (long *******)0x0;
        local_c8 = (long *******)0x0;
        local_128 = (long *)FUN_01cf7e20();
        local_130 = (char *)(**(code **)(*local_128 + 0x10))(local_128,0x80,1);
        uVar44 = s_Failed_to_get_NsaIdToken_cache__N_03c9cdae._96_8_;
        uVar17 = s_Failed_to_get_NsaIdToken_cache__N_03c9cdae._88_8_;
        uVar16 = s_Failed_to_get_NsaIdToken_cache__N_03c9cdae._80_8_;
        uVar15 = s_Failed_to_get_NsaIdToken_cache__N_03c9cdae._72_8_;
        uVar14 = s_Failed_to_get_NsaIdToken_cache__N_03c9cdae._64_8_;
        plStack_138 = plVar34;
        local_140 = uVar33;
        *(ulong *)(local_130 + 0x68) =
             CONCAT35(s_Failed_to_get_NsaIdToken_cache__N_03c9cdae._109_3_,
                      s_Failed_to_get_NsaIdToken_cache__N_03c9cdae._104_5_);
        *(undefined8 *)(local_130 + 0x60) = uVar44;
        uVar44 = CONCAT53(s_Failed_to_get_NsaIdToken_cache__N_03c9cdae._112_5_,
                          s_Failed_to_get_NsaIdToken_cache__N_03c9cdae._109_3_);
        *(undefined8 *)(local_130 + 0x75) = s_Failed_to_get_NsaIdToken_cache__N_03c9cdae._117_8_;
        *(undefined8 *)(local_130 + 0x6d) = uVar44;
        *(undefined8 *)(local_130 + 0x48) = uVar15;
        *(undefined8 *)(local_130 + 0x40) = uVar14;
        *(undefined8 *)(local_130 + 0x58) = uVar17;
        *(undefined8 *)(local_130 + 0x50) = uVar16;
        local_130[0x7d] = '\0';
        uVar15 = s_Failed_to_get_NsaIdToken_cache__N_03c9cdae._24_8_;
        uVar14 = s_Failed_to_get_NsaIdToken_cache__N_03c9cdae._16_8_;
        uVar44 = s_Failed_to_get_NsaIdToken_cache__N_03c9cdae._0_8_;
        *(undefined8 *)(local_130 + 8) = s_Failed_to_get_NsaIdToken_cache__N_03c9cdae._8_8_;
        *(undefined8 *)local_130 = uVar44;
        *(undefined8 *)(local_130 + 0x18) = uVar15;
        *(undefined8 *)(local_130 + 0x10) = uVar14;
        uVar15 = s_Failed_to_get_NsaIdToken_cache__N_03c9cdae._56_8_;
        uVar14 = s_Failed_to_get_NsaIdToken_cache__N_03c9cdae._48_8_;
        uVar44 = s_Failed_to_get_NsaIdToken_cache__N_03c9cdae._32_8_;
        *(undefined8 *)(local_130 + 0x28) = s_Failed_to_get_NsaIdToken_cache__N_03c9cdae._40_8_;
        *(undefined8 *)(local_130 + 0x20) = uVar44;
        *(undefined8 *)(local_130 + 0x38) = uVar15;
        *(undefined8 *)(local_130 + 0x30) = uVar14;
                    /* try { // try from 0024bcd8 to 0024bce3 has its CatchHandler @ 0024cb58 */
        FUN_0024d8c0(&local_160,uVar35);
        pcVar7 = pcVar48;
        uVar8 = local_160 >> 1 & 0x7f;
        if ((local_160 & 1) != 0) {
          pcVar7 = local_150;
          uVar8 = uStack_158;
        }
                    /* try { // try from 0024bd04 to 0024bd0b has its CatchHandler @ 0024cb48 */
        puVar37 = (undefined8 *)FUN_0020f8d0(&local_140,pcVar7,uVar8);
        ppppppplStack_118 = (long *******)puVar37[1];
        local_120 = (long *)*puVar37;
        local_108 = (long *)puVar37[3];
        local_110 = (long *******)puVar37[2];
        *puVar37 = 0;
        puVar37[1] = 0;
        puVar37[2] = 0;
                    /* try { // try from 0024bd1c to 0024bd2f has its CatchHandler @ 0024cb44 */
        puVar37 = (undefined8 *)FUN_0020f8d0(&local_120,&DAT_03bdface,1);
        goto LAB_0024bd30;
      }
      local_108 = (long *)FUN_01cf7e20();
      local_110 = (long *******)0x0;
      local_120 = (long *)0x0;
      ppppppplStack_118 = (long *******)0x0;
                    /* try { // try from 0024be9c to 0024beab has its CatchHandler @ 0024cb24 */
      FUN_00211e24(&local_120,0xc01,0);
      ppppppplVar47 = (long *******)((ulong)&local_120 | 1);
      ppppppplVar12 = (long *******)((ulong)local_120 >> 1 & 0x7f);
      if (((ulong)local_120 & 1) != 0) {
        ppppppplVar47 = local_110;
        ppppppplVar12 = ppppppplStack_118;
      }
      uVar35 = nn::account::LoadNetworkServiceAccountIdTokenCache
                         ((ulong *)&local_190,(char *)ppppppplVar47,(ulong)ppppppplVar12,pUVar5);
      if ((uVar35 & 0x1ff) == 0x7c) {
        uVar11 = uVar35 >> 9 & 0x1fff;
        if (0x45 < uVar11 - 0x1ae) {
          if (uVar35 == 0) goto LAB_0024c188;
          if (0x45 < uVar11 - 200) goto LAB_0024bf0c;
          local_c0 = (long *)0x0;
          plStack_d8 = (long *)0x0;
          local_e0 = (long *)0x0;
          local_c8 = (long *******)0x0;
          local_d0 = (long *******)0x0;
          local_c0 = (long *)FUN_01cf7e20();
          plStack_d8 = (long *)0x0;
          local_d0 = (long *******)0x0;
          local_c8 = (long *******)0x0;
          local_148 = (long *)FUN_01cf7e20();
          local_150 = (char *)(**(code **)(*local_148 + 0x10))(local_148,0x90,1);
          uVar16 = s_Failed_to_get_NsaIdToken_cache__N_03c8f8f8._128_8_;
          uVar15 = s_Failed_to_get_NsaIdToken_cache__N_03c8f8f8._120_8_;
          uVar14 = s_Failed_to_get_NsaIdToken_cache__N_03c8f8f8._112_8_;
          uVar44 = s_Failed_to_get_NsaIdToken_cache__N_03c8f8f8._96_8_;
          uStack_158 = uVar32;
          local_160 = uVar31;
          *(undefined8 *)(local_150 + 0x68) = s_Failed_to_get_NsaIdToken_cache__N_03c8f8f8._104_8_;
          *(undefined8 *)(local_150 + 0x60) = uVar44;
          *(undefined8 *)(local_150 + 0x78) = uVar15;
          *(undefined8 *)(local_150 + 0x70) = uVar14;
          *(undefined8 *)(local_150 + 0x80) = uVar16;
          uVar19 = s_Failed_to_get_NsaIdToken_cache__N_03c8f8f8._56_8_;
          uVar18 = s_Failed_to_get_NsaIdToken_cache__N_03c8f8f8._48_8_;
          uVar17 = s_Failed_to_get_NsaIdToken_cache__N_03c8f8f8._40_8_;
          uVar16 = s_Failed_to_get_NsaIdToken_cache__N_03c8f8f8._32_8_;
          uVar15 = s_Failed_to_get_NsaIdToken_cache__N_03c8f8f8._24_8_;
          uVar14 = s_Failed_to_get_NsaIdToken_cache__N_03c8f8f8._16_8_;
          uVar44 = s_Failed_to_get_NsaIdToken_cache__N_03c8f8f8._0_8_;
          *(undefined8 *)(local_150 + 8) = s_Failed_to_get_NsaIdToken_cache__N_03c8f8f8._8_8_;
          *(undefined8 *)local_150 = uVar44;
          *(undefined8 *)(local_150 + 0x18) = uVar15;
          *(undefined8 *)(local_150 + 0x10) = uVar14;
          local_150[0x88] = '\0';
          *(undefined8 *)(local_150 + 0x28) = uVar17;
          *(undefined8 *)(local_150 + 0x20) = uVar16;
          *(undefined8 *)(local_150 + 0x38) = uVar19;
          *(undefined8 *)(local_150 + 0x30) = uVar18;
          uVar15 = s_Failed_to_get_NsaIdToken_cache__N_03c8f8f8._88_8_;
          uVar14 = s_Failed_to_get_NsaIdToken_cache__N_03c8f8f8._80_8_;
          uVar44 = s_Failed_to_get_NsaIdToken_cache__N_03c8f8f8._64_8_;
          *(undefined8 *)(local_150 + 0x48) = s_Failed_to_get_NsaIdToken_cache__N_03c8f8f8._72_8_;
          *(undefined8 *)(local_150 + 0x40) = uVar44;
          *(undefined8 *)(local_150 + 0x58) = uVar15;
          *(undefined8 *)(local_150 + 0x50) = uVar14;
                    /* try { // try from 0024c0e8 to 0024c0f3 has its CatchHandler @ 0024c9fc */
          FUN_0024d8c0(&local_180,uVar35);
          uVar8 = (ulong)&local_180 | 1;
          uVar13 = (ulong)(local_180 >> 1);
          if ((local_180 & 1) != 0) {
            uVar8 = local_170;
            uVar13 = local_178;
          }
                    /* try { // try from 0024c114 to 0024c11b has its CatchHandler @ 0024c9ec */
          puVar38 = (ulong *)FUN_0020f8d0(&local_160,uVar8,uVar13);
          plStack_138 = (long *)puVar38[1];
          local_140 = *puVar38;
          local_128 = (long *)puVar38[3];
          local_130 = (char *)puVar38[2];
          *puVar38 = 0;
          puVar38[1] = 0;
          puVar38[2] = 0;
                    /* try { // try from 0024c12c to 0024c13f has its CatchHandler @ 0024c9e8 */
          puVar37 = (undefined8 *)
                    FUN_0020f8d0(&local_140,"(ResultNetworkServiceAccountUnavailable).",0x29);
          plStack_1f8 = (long *)puVar37[1];
          local_200 = (long **)*puVar37;
          ppppppplStack_1e8 = (long *******)puVar37[3];
          local_1f0 = puVar37[2];
          puVar37[1] = 0;
          puVar37[2] = 0;
          *puVar37 = 0;
          if (((ulong)local_200 & 1) != 0) {
            uVar50 = local_1f0;
          }
          FUN_00210170(auStack_1b0,uVar35);
          uVar44 = 0x10;
LAB_0024c01c:
          FUN_0024cd48(local_278,&local_e0,uVar44,uVar50,auStack_1b0);
          FUN_01cfa44c(auStack_1b0,local_1a8);
          if (((ulong)local_200 & 1) == 0) {
            if ((local_140 & 1) == 0) goto LAB_0024c040;
LAB_0024c1ec:
            (**(code **)(*local_128 + 0x18))(local_128,local_130,local_140 & 0xfffffffffffffffe,1);
            if ((local_180 & 1) != 0) goto LAB_0024c214;
LAB_0024c048:
          }
          else {
            (*(code *)(*ppppppplStack_1e8)[3])
                      (ppppppplStack_1e8,local_1f0,(ulong)local_200 & 0xfffffffffffffffe,1);
            if ((local_140 & 1) != 0) goto LAB_0024c1ec;
LAB_0024c040:
            if ((local_180 & 1) == 0) goto LAB_0024c048;
LAB_0024c214:
            (**(code **)(*local_168 + 0x18))
                      (local_168,local_170,CONCAT71(uStack_17f,local_180) & 0xfffffffffffffffe,1);
          }
          if ((local_160 & 1) == 0) {
          }
          else {
            (**(code **)(*local_148 + 0x18))(local_148,local_150,local_160 & 0xfffffffffffffffe,1);
          }
          if (((ulong)plStack_d8 & 1) != 0) {
LAB_0024c7dc:
            plVar43 = local_c0;
            ppppppplVar47 = local_c8;
            plVar39 = plStack_d8;
            goto LAB_0024c7ec;
          }
          goto LAB_0024c7fc;
        }
        iVar49 = 2;
        iVar36 = 2;
      }
      else {
        if (uVar35 != 0) {
LAB_0024bf0c:
          local_c0 = (long *)0x0;
          plStack_d8 = (long *)0x0;
          local_e0 = (long *)0x0;
          local_c8 = (long *******)0x0;
          local_d0 = (long *******)0x0;
          local_c0 = (long *)FUN_01cf7e20();
          plStack_d8 = (long *)0x0;
          local_d0 = (long *******)0x0;
          local_c8 = (long *******)0x0;
          local_148 = (long *)FUN_01cf7e20();
          local_150 = (char *)(**(code **)(*local_148 + 0x10))(local_148,0x60,1);
          uVar17 = s_Failed_to_get_NsaIdToken_cache__L_03c5accd._72_8_;
          uVar16 = s_Failed_to_get_NsaIdToken_cache__L_03c5accd._64_8_;
          uVar15 = s_Failed_to_get_NsaIdToken_cache__L_03c5accd._48_8_;
          uVar14 = s_Failed_to_get_NsaIdToken_cache__L_03c5accd._40_8_;
          uVar44 = s_Failed_to_get_NsaIdToken_cache__L_03c5accd._32_8_;
          uStack_158 = uVar30;
          local_160 = uVar29;
          *(undefined8 *)(local_150 + 0x38) = s_Failed_to_get_NsaIdToken_cache__L_03c5accd._56_8_;
          *(undefined8 *)(local_150 + 0x30) = uVar15;
          *(undefined8 *)(local_150 + 0x48) = uVar17;
          *(undefined8 *)(local_150 + 0x40) = uVar16;
          local_150[0x51] = '\0';
          *(undefined8 *)(local_150 + 0x28) = uVar14;
          *(undefined8 *)(local_150 + 0x20) = uVar44;
          uVar16 = s_Failed_to_get_NsaIdToken_cache__L_03c5accd._24_8_;
          uVar15 = s_Failed_to_get_NsaIdToken_cache__L_03c5accd._16_8_;
          uVar14 = s_Failed_to_get_NsaIdToken_cache__L_03c5accd._8_8_;
          uVar44 = s_Failed_to_get_NsaIdToken_cache__L_03c5accd._0_8_;
          local_150[0x50] = ' ';
          *(undefined8 *)(local_150 + 8) = uVar14;
          *(undefined8 *)local_150 = uVar44;
          *(undefined8 *)(local_150 + 0x18) = uVar16;
          *(undefined8 *)(local_150 + 0x10) = uVar15;
                    /* try { // try from 0024bf80 to 0024bf8b has its CatchHandler @ 0024caf0 */
          FUN_0024d8c0(&local_180,uVar35);
          uVar8 = (ulong)&local_180 | 1;
          uVar13 = (ulong)(local_180 >> 1);
          if ((local_180 & 1) != 0) {
            uVar8 = local_170;
            uVar13 = local_178;
          }
                    /* try { // try from 0024bfac to 0024bfb3 has its CatchHandler @ 0024ca68 */
          puVar38 = (ulong *)FUN_0020f8d0(&local_160,uVar8,uVar13);
          plStack_138 = (long *)puVar38[1];
          local_140 = *puVar38;
          local_128 = (long *)puVar38[3];
          local_130 = (char *)puVar38[2];
          *puVar38 = 0;
          puVar38[1] = 0;
          puVar38[2] = 0;
                    /* try { // try from 0024bfc4 to 0024bfd7 has its CatchHandler @ 0024ca0c */
          puVar37 = (undefined8 *)FUN_0020f8d0(&local_140,&DAT_03bdface,1);
          plStack_1f8 = (long *)puVar37[1];
          local_200 = (long **)*puVar37;
          ppppppplStack_1e8 = (long *******)puVar37[3];
          local_1f0 = puVar37[2];
          puVar37[1] = 0;
          puVar37[2] = 0;
          *puVar37 = 0;
          if (((ulong)local_200 & 1) != 0) {
            uVar50 = local_1f0;
          }
          FUN_00210170(auStack_1b0,uVar35);
          uVar44 = 0xe;
          goto LAB_0024c01c;
        }
LAB_0024c188:
        if (((ulong)local_120 & 1) == 0) {
          ppppppplVar47 = (long *******)((ulong)local_120 >> 1 & 0x7f);
          if (ppppppplVar47 < local_190) {
LAB_0024c274:
                    /* try { // try from 0024c278 to 0024c283 has its CatchHandler @ 0024cb24 */
            FUN_00211e24(&local_120,(long)local_190 - (long)ppppppplVar47,0);
            lVar45 = *(long *)(param_1 + 200);
            plVar43 = *(long **)(param_1 + 0xd0);
          }
          else {
            *(char *)((long)&local_120 + 1 + (long)local_190) = '\0';
            local_120 = (long *)CONCAT71(local_120._1_7_,(char)((int)local_190 << 1));
            lVar45 = *(long *)(param_1 + 200);
            plVar43 = *(long **)(param_1 + 0xd0);
          }
        }
        else {
          ppppppplVar47 = ppppppplStack_118;
          if (ppppppplStack_118 < local_190) goto LAB_0024c274;
          *(char *)((long)local_110 + (long)local_190) = '\0';
          lVar45 = *(long *)(param_1 + 200);
          plVar43 = *(long **)(param_1 + 0xd0);
          ppppppplStack_118 = local_190;
        }
        if (plVar43 != (long *)0x0) {
          plVar39 = plVar43 + 1;
          do {
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar39,0x10);
            if (bVar10) {
              *plVar39 = *plVar39 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
        }
        puVar37 = *(undefined8 **)(lVar45 + 0x4b8);
        plVar54 = *(long **)(lVar45 + 0x240);
        plVar39 = (long *)(**(code **)(*plVar54 + 0x10))(plVar54,0xd0,8);
        plVar39[2] = 0;
        plVar51 = plVar39 + 1;
        *plVar51 = 0;
        plVar40 = plVar39 + 4;
        *plVar39 = (long)puVar1;
        plVar39[3] = (long)plVar54;
        FUN_006c4254();
        plVar39[4] = (long)puVar2;
        nn::os::InitializeEvent(plVar39 + 6,0,0);
        plVar39[4] = (long)puVar3;
        nn::os::InitializeMutex((MutexType *)(plVar39 + 0xb),false,0);
        *(undefined1 *)(plVar39 + 0x19) = 0;
        if (plVar39 != (long *)0x0) {
          do {
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar51,0x10);
            if (bVar10) {
              *plVar51 = *plVar51 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
        }
        plVar41 = (long *)(**(code **)(*plVar54 + 0x10))(plVar54,0x150,8);
        plVar41[2] = 0;
        plVar41[3] = (long)plVar54;
        plVar53 = plVar41 + 1;
        *plVar53 = 0;
        *plVar41 = (long)&PTR_LAB_0448b170;
        FUN_006c5398(plVar41 + 4);
        plVar41[4] = (long)&PTR_LAB_0448b1c0;
        lVar42 = (**(code **)(*plVar54 + 0x10))(plVar54,0x10000,0x10);
        if (lVar42 == 0) {
          local_e0 = (long *)CONCAT44(local_e0._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0,(Result *)&local_e0,"");
        }
        FUN_006c4058(plVar41 + 10,plVar40,0,lVar42,0x10000,1);
        plVar41[10] = (long)&PTR_LAB_0448b208;
        plVar41[0x25] = (long)plVar54;
        plVar41[0x26] = 0x10000;
        *(undefined1 *)((long)plVar41 + 0x149) = 1;
        plVar41[0x27] = (long)plVar40;
        plVar41[0x28] = (long)plVar39;
        if (plVar43 == (long *)0x0) {
          plVar41[0x23] = lVar45;
          plVar41[0x24] = 0;
        }
        else {
          plVar54 = plVar43 + 1;
          do {
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar54,0x10);
            if (bVar10) {
              *plVar54 = *plVar54 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          do {
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar54,0x10);
            if (bVar10) {
              *plVar54 = *plVar54 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          do {
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar54,0x10);
            if (bVar10) {
              *plVar54 = *plVar54 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          plVar41[0x23] = lVar45;
          plVar41[0x24] = (long)plVar43;
          do {
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar54,0x10);
            if (bVar10) {
              *plVar54 = *plVar54 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          do {
            lVar45 = *plVar54;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar54,0x10);
            if (bVar10) {
              *plVar54 = lVar45 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar45 == 0) {
            (**(code **)(*plVar43 + 0x10))(plVar43);
            std::__shared_weak_count::__release_weak();
          }
          do {
            lVar45 = *plVar54;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar54,0x10);
            if (bVar10) {
              *plVar54 = lVar45 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar45 == 0) {
            (**(code **)(*plVar43 + 0x10))(plVar43);
            std::__shared_weak_count::__release_weak();
          }
          do {
            lVar45 = *plVar54;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar54,0x10);
            if (bVar10) {
              *plVar54 = lVar45 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar45 == 0) {
            (**(code **)(*plVar43 + 0x10))(plVar43);
            std::__shared_weak_count::__release_weak();
          }
        }
        plStack_138 = (long *)0x0;
        local_140 = 0;
        do {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar53,0x10);
          if (bVar10) {
            *plVar53 = *plVar53 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        local_e0 = plVar41 + 4;
        plStack_d8 = plVar41;
        (**(code **)*puVar37)(puVar37,&local_e0,&local_140);
        if (plStack_d8 != (long *)0x0) {
          plVar54 = plStack_d8 + 1;
          do {
            lVar45 = *plVar54;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar54,0x10);
            if (bVar10) {
              *plVar54 = lVar45 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar45 == 0) {
            (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (plStack_138 != (long *)0x0) {
          plVar54 = plStack_138 + 1;
          do {
            lVar45 = *plVar54;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar54,0x10);
            if (bVar10) {
              *plVar54 = lVar45 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar45 == 0) {
            (**(code **)(*plStack_138 + 0x10))(plStack_138);
            std::__shared_weak_count::__release_weak();
          }
        }
        do {
          lVar45 = *plVar53;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar53,0x10);
          if (bVar10) {
            *plVar53 = lVar45 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (lVar45 == 0) {
          (**(code **)(*plVar41 + 0x10))(plVar41);
          std::__shared_weak_count::__release_weak();
        }
        if (plVar43 != (long *)0x0) {
          plVar54 = plVar43 + 1;
          do {
            lVar45 = *plVar54;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar54,0x10);
            if (bVar10) {
              *plVar54 = lVar45 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar45 == 0) {
            (**(code **)(*plVar43 + 0x10))(plVar43);
            std::__shared_weak_count::__release_weak();
          }
        }
        local_78 = (long **)0x0;
        uStack_70 = 0;
        local_e0 = plVar4;
        plStack_d8 = plVar6;
        local_d0 = (long *******)&local_d0;
        local_c8 = (long *******)&local_d0;
        (**(code **)(plVar39[4] + 0x10))(plVar40,local_b8);
        local_78 = &plStack_d8;
        thunk_FUN_006c4e40(&local_e0);
        local_e0 = plVar4;
        FUN_006c4274(&plStack_d8);
        (**(code **)(plVar39[4] + 0x30))(&local_200,plVar40);
        if (plVar39 == (long *)0x0) {
LAB_0024c678:
          if ((int)local_200 != 0) goto LAB_0024c680;
LAB_0024c73c:
          if (local_1d8 != '\0') {
            FUN_01cfa44c(&local_1d0,local_1c8);
          }
          if (((ulong)plStack_1f8 & 1) != 0) {
            (**(code **)(*plStack_1e0 + 0x18))
                      (plStack_1e0,ppppppplStack_1e8,(ulong)plStack_1f8 & 0xfffffffffffffffe,1);
          }
          local_c8 = local_110;
          local_d0 = ppppppplStack_118;
          plStack_d8 = local_120;
          local_110 = (long *******)0x0;
          ppppppplStack_118 = (long *******)0x0;
          local_120 = (long *)0x0;
          plStack_1f8 = (long *)0x0;
          local_e0 = local_188;
          local_c0 = local_108;
          local_1f0 = FUN_01cf7e20();
          ppppppplStack_1e8 = (long *******)0x0;
          local_200 = &plStack_1f8;
          FUN_0024cd48(local_278,&local_e0,0,&DAT_03c886bc,&local_200);
          FUN_01cfa44c(&local_200,plStack_1f8);
          if (((ulong)plStack_d8 & 1) == 0) goto LAB_0024c7fc;
          goto LAB_0024c7dc;
        }
        do {
          lVar45 = *plVar51;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar51,0x10);
          if (bVar10) {
            *plVar51 = lVar45 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (lVar45 != 0) goto LAB_0024c678;
        (**(code **)(*plVar39 + 0x10))(plVar39);
        std::__shared_weak_count::__release_weak();
        if ((int)local_200 == 0) goto LAB_0024c73c;
LAB_0024c680:
        plStack_208 = (long *)FUN_01cf7e20();
        local_260 = ppppppplStack_1e8;
        uStack_268 = local_1f0;
        local_270 = plStack_1f8;
        local_278[0] = (int)local_200;
        local_1f0 = 0;
        ppppppplStack_1e8 = (long *******)0x0;
        plStack_1f8 = (long *)0x0;
        plStack_258 = plStack_1e0;
        local_250 = '\0';
        if (local_1d8 == '\0') {
          uStack_220 = 0;
          local_228 = 0;
          local_210 = 0;
          uStack_218 = 0;
          goto LAB_0024c7fc;
        }
        local_248 = local_1d0;
        uStack_238 = uStack_1c0;
        local_240 = local_1c8;
        local_230 = local_1b8;
        if (local_1b8 != 0) {
          *(long **)(local_1c8 + 0x10) = &local_240;
          local_1c8 = 0;
          local_250 = '\x01';
          uStack_220 = 0;
          local_228 = 0;
          local_210 = 0;
          uStack_218 = 0;
          local_1b8 = 0;
          local_1d0 = &local_1c8;
          if ((local_1d8 != '\0') && (FUN_01cfa44c(&local_1d0,0), ((ulong)plStack_1f8 & 1) != 0))
          goto LAB_0024c870;
          goto LAB_0024c7fc;
        }
        local_250 = '\x01';
        uStack_220 = 0;
        local_228 = 0;
        local_210 = 0;
        uStack_218 = 0;
        local_248 = &local_240;
        FUN_01cfa44c(&local_1d0,local_1c8);
        if (((ulong)plStack_1f8 & 1) == 0) goto LAB_0024c7fc;
LAB_0024c870:
        plVar43 = plStack_1e0;
        ppppppplVar47 = ppppppplStack_1e8;
        plVar39 = plStack_1f8;
LAB_0024c7ec:
        (**(code **)(*plVar43 + 0x18))(plVar43,ppppppplVar47,(ulong)plVar39 & 0xfffffffffffffffe,1);
LAB_0024c7fc:
        iVar49 = 1;
        iVar36 = 1;
      }
      if (((ulong)local_120 & 1) != 0) {
        (**(code **)(*local_108 + 0x18))
                  (local_108,local_110,(ulong)local_120 & 0xfffffffffffffffe,1);
        iVar36 = iVar49;
      }
    }
    else {
      if (((uVar35 & 0x1ff) == 0x7c) && ((uVar35 >> 9 & 0x1fff) - 200 < 0x46)) {
        local_c0 = (long *)0x0;
        plStack_d8 = (long *)0x0;
        local_e0 = (long *)0x0;
        local_c8 = (long *******)0x0;
        local_d0 = (long *******)0x0;
        local_c0 = (long *)FUN_01cf7e20();
        plStack_d8 = (long *)0x0;
        local_d0 = (long *******)0x0;
        local_c8 = (long *******)0x0;
        local_128 = (long *)FUN_01cf7e20();
        local_130 = (char *)(**(code **)(*local_128 + 0x10))(local_128,0x60,1);
        uVar18 = s_Failed_to_get_NsaIdToken_cache__E_03c32557._72_8_;
        uVar17 = s_Failed_to_get_NsaIdToken_cache__E_03c32557._64_8_;
        uVar16 = s_Failed_to_get_NsaIdToken_cache__E_03c32557._56_8_;
        uVar15 = s_Failed_to_get_NsaIdToken_cache__E_03c32557._48_8_;
        uVar14 = s_Failed_to_get_NsaIdToken_cache__E_03c32557._40_8_;
        uVar44 = s_Failed_to_get_NsaIdToken_cache__E_03c32557._32_8_;
        plStack_138 = plVar24;
        local_140 = uVar23;
        *(undefined8 *)(local_130 + 0x50) = s_Failed_to_get_NsaIdToken_cache__E_03c32557._80_8_;
        *(undefined8 *)(local_130 + 0x48) = uVar18;
        *(undefined8 *)(local_130 + 0x40) = uVar17;
        *(undefined8 *)(local_130 + 0x28) = uVar14;
        *(undefined8 *)(local_130 + 0x20) = uVar44;
        *(undefined8 *)(local_130 + 0x38) = uVar16;
        *(undefined8 *)(local_130 + 0x30) = uVar15;
        local_130[0x58] = '\0';
        uVar15 = s_Failed_to_get_NsaIdToken_cache__E_03c32557._24_8_;
        uVar14 = s_Failed_to_get_NsaIdToken_cache__E_03c32557._16_8_;
        uVar44 = s_Failed_to_get_NsaIdToken_cache__E_03c32557._0_8_;
        *(undefined8 *)(local_130 + 8) = s_Failed_to_get_NsaIdToken_cache__E_03c32557._8_8_;
        *(undefined8 *)local_130 = uVar44;
        *(undefined8 *)(local_130 + 0x18) = uVar15;
        *(undefined8 *)(local_130 + 0x10) = uVar14;
                    /* try { // try from 0024b8d4 to 0024b8df has its CatchHandler @ 0024cb7c */
        FUN_0024d8c0(&local_160,uVar35);
        pcVar7 = pcVar48;
        uVar8 = local_160 >> 1 & 0x7f;
        if ((local_160 & 1) != 0) {
          pcVar7 = local_150;
          uVar8 = uStack_158;
        }
                    /* try { // try from 0024b900 to 0024b907 has its CatchHandler @ 0024cb6c */
        puVar37 = (undefined8 *)FUN_0020f8d0(&local_140,pcVar7,uVar8);
        ppppppplStack_118 = (long *******)puVar37[1];
        local_120 = (long *)*puVar37;
        local_108 = (long *)puVar37[3];
        local_110 = (long *******)puVar37[2];
        *puVar37 = 0;
        puVar37[1] = 0;
        puVar37[2] = 0;
                    /* try { // try from 0024b918 to 0024b92b has its CatchHandler @ 0024cb68 */
        puVar37 = (undefined8 *)
                  FUN_0020f8d0(&local_120,"(ResultNetworkServiceAccountUnavailable).",0x29);
        goto LAB_0024bd30;
      }
      local_c0 = (long *)0x0;
      plStack_d8 = (long *)0x0;
      local_e0 = (long *)0x0;
      local_c8 = (long *******)0x0;
      local_d0 = (long *******)0x0;
      local_c0 = (long *)FUN_01cf7e20();
      plStack_d8 = (long *)0x0;
      local_d0 = (long *******)0x0;
      local_c8 = (long *******)0x0;
      local_128 = (long *)FUN_01cf7e20();
      local_130 = (char *)(**(code **)(*local_128 + 0x10))(local_128,0x60,1);
      uVar18 = s_Failed_to_get_NsaIdToken_cache__E_03c32557._72_8_;
      uVar17 = s_Failed_to_get_NsaIdToken_cache__E_03c32557._64_8_;
      uVar16 = s_Failed_to_get_NsaIdToken_cache__E_03c32557._56_8_;
      uVar15 = s_Failed_to_get_NsaIdToken_cache__E_03c32557._48_8_;
      uVar14 = s_Failed_to_get_NsaIdToken_cache__E_03c32557._40_8_;
      uVar44 = s_Failed_to_get_NsaIdToken_cache__E_03c32557._32_8_;
      plStack_138 = plVar24;
      local_140 = uVar23;
      *(undefined8 *)(local_130 + 0x50) = s_Failed_to_get_NsaIdToken_cache__E_03c32557._80_8_;
      *(undefined8 *)(local_130 + 0x48) = uVar18;
      *(undefined8 *)(local_130 + 0x40) = uVar17;
      *(undefined8 *)(local_130 + 0x28) = uVar14;
      *(undefined8 *)(local_130 + 0x20) = uVar44;
      *(undefined8 *)(local_130 + 0x38) = uVar16;
      *(undefined8 *)(local_130 + 0x30) = uVar15;
      local_130[0x58] = '\0';
      uVar15 = s_Failed_to_get_NsaIdToken_cache__E_03c32557._24_8_;
      uVar14 = s_Failed_to_get_NsaIdToken_cache__E_03c32557._16_8_;
      uVar44 = s_Failed_to_get_NsaIdToken_cache__E_03c32557._0_8_;
      *(undefined8 *)(local_130 + 8) = s_Failed_to_get_NsaIdToken_cache__E_03c32557._8_8_;
      *(undefined8 *)local_130 = uVar44;
      *(undefined8 *)(local_130 + 0x18) = uVar15;
      *(undefined8 *)(local_130 + 0x10) = uVar14;
                    /* try { // try from 0024b99c to 0024b9a7 has its CatchHandler @ 0024cc80 */
      FUN_0024d8c0(&local_160,uVar35);
      pcVar7 = pcVar48;
      uVar8 = local_160 >> 1 & 0x7f;
      if ((local_160 & 1) != 0) {
        pcVar7 = local_150;
        uVar8 = uStack_158;
      }
                    /* try { // try from 0024b9c8 to 0024b9cf has its CatchHandler @ 0024cc90 */
      puVar37 = (undefined8 *)FUN_0020f8d0(&local_140,pcVar7,uVar8);
      ppppppplStack_118 = (long *******)puVar37[1];
      local_120 = (long *)*puVar37;
      local_108 = (long *)puVar37[3];
      local_110 = (long *******)puVar37[2];
      *puVar37 = 0;
      puVar37[1] = 0;
      puVar37[2] = 0;
                    /* try { // try from 0024b9e0 to 0024b9f3 has its CatchHandler @ 0024cbb0 */
      puVar37 = (undefined8 *)FUN_0020f8d0(&local_120,&DAT_03bdface,1);
LAB_0024bc00:
      plStack_1f8 = (long *)puVar37[1];
      local_200 = (long **)*puVar37;
      ppppppplStack_1e8 = (long *******)puVar37[3];
      local_1f0 = puVar37[2];
      puVar37[1] = 0;
      puVar37[2] = 0;
      *puVar37 = 0;
      if (((ulong)local_200 & 1) != 0) {
        uVar50 = local_1f0;
      }
      FUN_00210170(&local_180,uVar35);
      uVar44 = 0xe;
LAB_0024bd74:
      FUN_0024cd48(local_278,&local_e0,uVar44,uVar50,&local_180);
      FUN_01cfa44c(&local_180,local_178);
      if (((ulong)local_200 & 1) != 0) {
        (*(code *)(*ppppppplStack_1e8)[3])
                  (ppppppplStack_1e8,local_1f0,(ulong)local_200 & 0xfffffffffffffffe,1);
      }
      if (((ulong)local_120 & 1) != 0) {
        (**(code **)(*local_108 + 0x18))
                  (local_108,local_110,(ulong)local_120 & 0xfffffffffffffffe,1);
      }
      if ((local_160 & 1) != 0) {
        (**(code **)(*local_148 + 0x18))(local_148,local_150,local_160 & 0xfffffffffffffffe,1);
      }
      if ((local_140 & 1) != 0) {
        (**(code **)(*local_128 + 0x18))(local_128,local_130,local_140 & 0xfffffffffffffffe,1);
      }
      if (((ulong)plStack_d8 & 1) != 0) {
        (**(code **)(*local_c0 + 0x18))(local_c0,local_c8,(ulong)plStack_d8 & 0xfffffffffffffffe,1);
      }
      iVar36 = 1;
    }
    nn::account::AsyncContext::~AsyncContext(aAStack_100);
    if (iVar36 == 1) {
      nn::os::LockMutex((MutexType *)(lVar52 + 0x38));
      *(undefined4 *)(lVar52 + 0x58) = local_278[0];
      *(ulong *)(lVar52 + 0x68) = uStack_268;
      *(long **)(lVar52 + 0x60) = local_270;
      *(long **)(lVar52 + 0x78) = plStack_258;
      *(long ********)(lVar52 + 0x70) = local_260;
      local_270 = (long *)0x0;
      uStack_268 = 0;
      local_260 = (long *******)0x0;
      *(undefined1 *)(lVar52 + 0x80) = 0;
      if (local_250 != '\0') {
        *(long **)(lVar52 + 0x88) = local_248;
        *(undefined8 *)(lVar52 + 0x98) = uStack_238;
        *(long *)(lVar52 + 0x90) = local_240;
        plVar4 = (long *)(lVar52 + 0x90);
        *(long *)(lVar52 + 0xa0) = local_230;
        if (local_230 == 0) {
          *(long **)(lVar52 + 0x88) = plVar4;
        }
        else {
          *(long **)(*plVar4 + 0x10) = plVar4;
          local_230 = 0;
          local_240 = 0;
          local_248 = &local_240;
        }
        *(undefined1 *)(lVar52 + 0x80) = 1;
      }
      *(undefined8 *)(lVar52 + 0xa8) = local_228;
      *(undefined8 *)(lVar52 + 0xb8) = uStack_218;
      *(ulong *)(lVar52 + 0xb0) = uStack_220;
      *(long **)(lVar52 + 200) = plStack_208;
      *(undefined8 *)(lVar52 + 0xc0) = local_210;
      uStack_220 = 0;
      uStack_218 = 0;
      local_210 = 0;
      *(undefined1 *)(lVar52 + 0xd0) = 1;
      nn::os::UnlockMutex((MutexType *)(lVar52 + 0x38));
      if ((uStack_220 & 1) != 0) {
        (**(code **)(*plStack_208 + 0x18))(plStack_208,local_210,uStack_220 & 0xfffffffffffffffe,1);
      }
      if (local_250 != '\0') {
        FUN_01cfa44c(&local_248,local_240);
      }
      if (((ulong)local_270 & 1) != 0) {
        (**(code **)(*plStack_258 + 0x18))
                  (plStack_258,local_260,(ulong)local_270 & 0xfffffffffffffffe,1);
      }
      return 1;
    }
  } while( true );
}


