/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002a6f08; name: FUN_002a6f08
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_002a6f08(long param_1,long *param_2,byte *param_3,long param_4,long param_5,byte *param_6
                   ,char *param_7,char *param_8,long *param_9,undefined8 param_10,ulong *param_11,
                   byte *param_12,ulong *param_13)

{
  ulong uVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined1 uVar6;
  undefined8 ****ppppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined6 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  bool bVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  size_t sVar18;
  ulong uVar19;
  int *piVar20;
  ulong uVar21;
  undefined8 *****pppppuVar22;
  undefined8 *******pppppppuVar23;
  undefined8 uVar24;
  undefined8 extraout_x1;
  int iVar25;
  ulong *puVar26;
  undefined8 ******ppppppuVar27;
  ulong uVar28;
  uint *puVar29;
  undefined8 ******ppppppuVar30;
  ulong uVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  undefined8 ******ppppppuVar35;
  undefined8 ******ppppppuVar36;
  long lVar37;
  long lVar38;
  ulong uVar39;
  undefined8 ******ppppppuVar40;
  ulong uVar41;
  undefined1 *puVar42;
  byte *pbVar43;
  undefined8 ******ppppppuVar44;
  undefined8 ******ppppppuVar45;
  undefined8 *****pppppuVar46;
  undefined8 *******pppppppuVar47;
  char *pcVar48;
  long *plVar49;
  undefined8 *******pppppppuVar50;
  long *plVar51;
  uint uVar52;
  undefined8 *******pppppppuVar53;
  byte *pbVar54;
  void *pvVar55;
  byte *pbVar56;
  undefined8 *puVar57;
  undefined *puVar58;
  size_t sVar59;
  long *plVar60;
  void *pvVar61;
  undefined8 *puVar62;
  undefined8 *******pppppppuVar63;
  undefined *puVar64;
  undefined4 *puVar65;
  long lVar66;
  ulong uVar67;
  undefined8 ******ppppppuVar68;
  ulong uVar69;
  byte bVar70;
  void *pvVar71;
  undefined8 *puVar72;
  int *piVar73;
  undefined8 *puVar74;
  undefined8 uVar75;
  undefined8 *****pppppuVar76;
  undefined8 uVar77;
  undefined8 *****pppppuVar78;
  long local_338;
  undefined8 *******local_318;
  ulong local_310;
  undefined8 *******local_308 [18];
  ulong local_278;
  undefined8 *******local_270;
  undefined8 *******pppppppuStack_268;
  undefined8 *******local_260;
  uint local_258;
  int local_1d0;
  uint uStack_1cc;
  undefined *local_1c8;
  undefined8 *******local_1c0;
  undefined8 local_1b8;
  long *local_190;
  undefined6 uStack_188;
  undefined1 local_182;
  undefined1 uStack_181;
  undefined6 uStack_180;
  undefined1 uStack_17a;
  undefined1 uStack_179;
  undefined8 *local_178;
  undefined8 ******local_170;
  undefined8 ******local_168;
  undefined8 ******local_160;
  undefined8 *******local_140;
  undefined8 *******local_138;
  undefined8 ******local_130;
  byte local_110;
  undefined6 uStack_10f;
  undefined1 uStack_109;
  undefined7 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 *******pppppppuStack_f0;
  undefined8 *******local_e8 [15];
  undefined7 local_70;
  undefined1 uStack_69;
  undefined7 uStack_68;
  
  lVar15 = FUN_0038bc70(0,0,PTR_PTR_047cc630);
  lVar66 = (long)param_2 + 9;
  if (*param_2 != 0) {
    lVar66 = param_2[2];
  }
  uVar17 = param_2[1] & 0xff;
  if (*param_2 != 0) {
    uVar17 = param_2[1];
  }
                    /* try { // try from 002a6f78 to 002a6faf has its CatchHandler @ 002aac4c */
  lVar16 = FUN_0038ad50(PTR_PTR_047cc6e8,lVar15);
  if ((lVar16 == 0) ||
     (uVar17 = FUN_00385610(lVar66,uVar17,lVar16,PTR_PTR_047cc6e8,lVar15), (uVar17 & 1) == 0)) {
    if ((*param_13 & 1) == 0) {
      pbVar54 = (byte *)((long)param_13 + 1);
      *(byte *)param_13 = 0;
    }
    else {
      param_13[1] = 0;
      pbVar54 = (byte *)param_13[2];
    }
    *pbVar54 = 0;
                    /* try { // try from 002a7150 to 002a717b has its CatchHandler @ 002aac48 */
    FUN_003673f0(&local_270,"Can\'t decode the whole response.");
    param_3 = (byte *)FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                   ,0x6f2,&local_270,0,0);
    goto LAB_002a7180;
  }
                    /* try { // try from 002aa0ac to 002aa0b3 has its CatchHandler @ 002aac4c */
  if ((*(char *)(*(long *)(param_1 + 8) + 0x10) != '\0') && (iVar14 = FUN_0038c970(0), iVar14 != 0))
  {
    local_168 = (undefined8 ******)0x0;
    local_170 = (undefined8 ******)0x0;
    local_160 = (undefined8 ******)0x0;
    if (*(undefined8 ********)(lVar16 + 0x10) != (undefined8 *******)0x0) {
      local_f8 = *(undefined8 ********)(lVar16 + 8);
      local_318 = (undefined8 *******)&DAT_03c751d8;
      local_310 = 3;
      local_270 = (undefined8 *******)0x3c751bc;
      pppppppuStack_268 = (undefined8 *******)0xc;
      local_1c0 = (undefined8 *******)0x1;
      local_1c8 = &DAT_03c246d6;
                    /* try { // try from 002aa10c to 002aa123 has its CatchHandler @ 002aa7cc */
      pppppppuStack_f0 = *(undefined8 ********)(lVar16 + 0x10);
      FUN_00395b50(&local_140,&local_270,&local_318,&local_f8,&local_1c8);
                    /* try { // try from 002aa124 to 002aa12f has its CatchHandler @ 002aa7b8 */
      FUN_002acaf4(&local_170,&local_140);
      if (((ulong)local_140 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_130);
      }
    }
    if (*(long *)(lVar16 + 0x40) == 0) {
      uVar24 = 0;
    }
    else {
      uVar24 = *(undefined8 *)(*(long *)(lVar16 + 0x40) + 8);
    }
    local_270 = (undefined8 *******)0x3c75200;
    pppppppuStack_268 = (undefined8 *******)&DAT_0000000c;
                    /* try { // try from 002aa25c to 002aa263 has its CatchHandler @ 002aa7f8 */
    lVar66 = FUN_00394c40(uVar24,local_308);
    local_310 = lVar66 - (long)local_308;
    local_f8 = (undefined8 *******)0x3bfaa47;
    pppppppuStack_f0 = (undefined8 *******)&DAT_0000000c;
                    /* try { // try from 002aa280 to 002aa293 has its CatchHandler @ 002aa7f4 */
    local_318 = local_308;
    FUN_00395a70(&local_1c8,&local_270,&local_318,&local_f8);
                    /* try { // try from 002aa294 to 002aa29f has its CatchHandler @ 002aa7d4 */
    FUN_002acaf4(&local_170,&local_1c8);
    if (((ulong)local_1c8 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_1b8);
    }
    if (*(undefined8 ********)(lVar16 + 0x20) != (undefined8 *******)0x0) {
      local_f8 = *(undefined8 ********)(lVar16 + 0x18);
      local_318 = (undefined8 *******)&DAT_03c751d8;
      local_310 = 3;
      local_270 = (undefined8 *******)0x3c6e5e8;
      pppppppuStack_268 = (undefined8 *******)&DAT_00000008;
      local_1c0 = (undefined8 *******)0x1;
      local_1c8 = &DAT_03c246d6;
                    /* try { // try from 002aa2f0 to 002aa307 has its CatchHandler @ 002aa7b4 */
      pppppppuStack_f0 = *(undefined8 ********)(lVar16 + 0x20);
      FUN_00395b50(&local_140,&local_270,&local_318,&local_f8,&local_1c8);
                    /* try { // try from 002aa308 to 002aa313 has its CatchHandler @ 002aa7b0 */
      FUN_002acaf4(&local_170,&local_140);
      if (((ulong)local_140 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_130);
      }
    }
    if (*(undefined8 ********)(lVar16 + 0x30) != (undefined8 *******)0x0) {
      local_f8 = *(undefined8 ********)(lVar16 + 0x28);
      local_318 = (undefined8 *******)&DAT_03c751d8;
      local_310 = 3;
      local_270 = (undefined8 *******)0x3bf394c;
      pppppppuStack_268 = (undefined8 *******)&DAT_00000005;
      local_1c0 = (undefined8 *******)0x1;
      local_1c8 = &DAT_03c246d6;
                    /* try { // try from 002aa364 to 002aa37b has its CatchHandler @ 002aa7ac */
      pppppppuStack_f0 = *(undefined8 ********)(lVar16 + 0x30);
      FUN_00395b50(&local_140,&local_270,&local_318,&local_f8,&local_1c8);
                    /* try { // try from 002aa37c to 002aa387 has its CatchHandler @ 002aa7a8 */
      FUN_002acaf4(&local_170,&local_140);
      if (((ulong)local_140 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_130);
      }
    }
    ppppppuVar27 = local_170;
    puVar58 = PTR_LAB_047cba48;
    if (local_170 != (undefined8 ******)0x0) {
      if (local_168 != local_170) {
        ppppppuVar35 = local_168;
        do {
          ppppppuVar36 = ppppppuVar35 + -3;
          if (((ulong)*ppppppuVar36 & 1) != 0) {
            FUN_0049e790(puVar58,ppppppuVar35[-1]);
          }
          ppppppuVar35 = ppppppuVar36;
        } while (ppppppuVar27 != ppppppuVar36);
      }
      local_168 = ppppppuVar27;
      FUN_0049e790(PTR_LAB_047cba48,local_170);
    }
  }
  pppppppuVar47 = *(undefined8 ********)(lVar16 + 0x20);
  if ((undefined8 *******)0xffffffffffffffef < pppppppuVar47) {
                    /* try { // try from 002aa580 to 002aa587 has its CatchHandler @ 002aa6a0 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  pvVar71 = *(void **)(lVar16 + 0x18);
  if (pppppppuVar47 < (undefined8 *******)0x17) {
    local_270 = (undefined8 *******)CONCAT71(local_270._1_7_,(char)((int)pppppppuVar47 << 1));
    pppppppuVar53 = (undefined8 *******)((ulong)&local_270 | 1);
    if (pppppppuVar47 != (undefined8 *******)0x0) goto LAB_002a71d8;
    *(undefined1 *)pppppppuVar53 = 0;
    bVar70 = (byte)*param_13;
  }
  else {
    pppppppuVar53 =
         (undefined8 *******)
         FUN_0049e770(PTR_FUN_047cba38,(ulong)(pppppppuVar47 + 2) & 0xfffffffffffffff0);
    local_270 = (undefined8 *******)((ulong)(pppppppuVar47 + 2) & 0xfffffffffffffff0 | 1);
    pppppppuStack_268 = pppppppuVar47;
    local_260 = pppppppuVar53;
LAB_002a71d8:
    memcpy(pppppppuVar53,pvVar71,(size_t)pppppppuVar47);
    *(undefined1 *)((long)pppppppuVar53 + (long)pppppppuVar47) = 0;
    bVar70 = (byte)*param_13;
  }
  if ((bVar70 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,param_13[2]);
  }
  param_13[2] = (ulong)local_260;
  param_13[1] = (ulong)pppppppuStack_268;
  *param_13 = (ulong)local_270;
  pppppppuVar47 = *(undefined8 ********)(lVar16 + 0x10);
  if ((undefined8 *******)0xffffffffffffffef < pppppppuVar47) {
                    /* try { // try from 002aa588 to 002aa58f has its CatchHandler @ 002aa69c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  pvVar71 = *(void **)(lVar16 + 8);
  if (pppppppuVar47 < (undefined8 *******)0x17) {
    local_270 = (undefined8 *******)CONCAT71(local_270._1_7_,(char)((int)pppppppuVar47 << 1));
    pppppppuVar53 = (undefined8 *******)((ulong)&local_270 | 1);
    if (pppppppuVar47 != (undefined8 *******)0x0) goto LAB_002a7224;
    *(undefined1 *)pppppppuVar53 = 0;
    bVar70 = (byte)*param_11;
  }
  else {
    pppppppuVar53 =
         (undefined8 *******)
         FUN_0049e770(PTR_FUN_047cba38,(ulong)(pppppppuVar47 + 2) & 0xfffffffffffffff0);
    local_270 = (undefined8 *******)((ulong)(pppppppuVar47 + 2) & 0xfffffffffffffff0 | 1);
    pppppppuStack_268 = pppppppuVar47;
    local_260 = pppppppuVar53;
LAB_002a7224:
    memcpy(pppppppuVar53,pvVar71,(size_t)pppppppuVar47);
    *(undefined1 *)((long)pppppppuVar53 + (long)pppppppuVar47) = 0;
    bVar70 = (byte)*param_11;
  }
  if ((bVar70 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,param_11[2]);
  }
  param_11[2] = (ulong)local_260;
  param_11[1] = (ulong)pppppppuStack_268;
  *param_11 = (ulong)local_270;
  pppppppuVar47 = *(undefined8 ********)(lVar16 + 0x30);
  if ((undefined8 *******)0xffffffffffffffef < pppppppuVar47) {
                    /* try { // try from 002aa590 to 002aa597 has its CatchHandler @ 002aa698 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  pvVar71 = *(void **)(lVar16 + 0x28);
  if (pppppppuVar47 < (undefined8 *******)0x17) {
    local_270 = (undefined8 *******)CONCAT71(local_270._1_7_,(char)((int)pppppppuVar47 << 1));
    pppppppuVar53 = (undefined8 *******)((ulong)&local_270 | 1);
    if (pppppppuVar47 != (undefined8 *******)0x0) goto LAB_002a726c;
    *(undefined1 *)pppppppuVar53 = 0;
    bVar70 = *param_12;
  }
  else {
    pppppppuVar53 =
         (undefined8 *******)
         FUN_0049e770(PTR_FUN_047cba38,(ulong)(pppppppuVar47 + 2) & 0xfffffffffffffff0);
    local_270 = (undefined8 *******)((ulong)(pppppppuVar47 + 2) & 0xfffffffffffffff0 | 1);
    pppppppuStack_268 = pppppppuVar47;
    local_260 = pppppppuVar53;
LAB_002a726c:
    memcpy(pppppppuVar53,pvVar71,(size_t)pppppppuVar47);
    *(undefined1 *)((long)pppppppuVar53 + (long)pppppppuVar47) = 0;
    bVar70 = *param_12;
  }
  if ((bVar70 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_12 + 0x10));
  }
  *(undefined8 ********)(param_12 + 0x10) = local_260;
  *(undefined8 ********)(param_12 + 8) = pppppppuStack_268;
  *(undefined8 ********)param_12 = local_270;
  puVar58 = PTR_PTR_047cc6f0;
  pcVar48 = *(char **)PTR_PTR_047cc6f0;
  sVar18 = strlen(pcVar48);
  bVar70 = (byte)*param_13;
  if ((bVar70 & 1) == 0) {
    uVar17 = (ulong)(bVar70 >> 1);
    if (sVar18 == uVar17) {
      if (sVar18 == 0xffffffffffffffff) goto LAB_002aa598;
      pbVar54 = (byte *)((long)param_13 + 1);
      goto joined_r0x002a72a8;
    }
    pcVar48 = *(char **)PTR_PTR_047cc6f8;
    sVar18 = strlen(pcVar48);
    if (sVar18 == uVar17) {
LAB_002a7454:
      pbVar54 = (byte *)((long)param_13 + 1);
      goto joined_r0x002a749c;
    }
LAB_002a72e0:
    pcVar48 = *(char **)PTR_PTR_047cc700;
    sVar18 = strlen(pcVar48);
    param_3 = param_6;
    if (sVar18 == uVar17) {
LAB_002a7300:
      pbVar54 = (byte *)((long)param_13 + 1);
      goto joined_r0x002a76f0;
    }
LAB_002a74d4:
    pcVar48 = *(char **)PTR_PTR_047cc710;
    sVar18 = strlen(pcVar48);
    if (sVar18 != uVar17) goto LAB_002a82bc;
LAB_002a7728:
    pbVar54 = (byte *)((long)param_13 + 1);
LAB_002a82a8:
    if ((uVar17 != 0) && (iVar14 = memcmp(pbVar54,pcVar48,uVar17), iVar14 != 0)) {
LAB_002a82bc:
                    /* try { // try from 002a82bc to 002a82e7 has its CatchHandler @ 002aab84 */
      FUN_003673f0(&local_270,"Unsupported ADS resource type.");
      param_3 = (byte *)FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                     ,0x70f,&local_270,0,0);
      goto LAB_002a7180;
    }
    uVar4 = _UNK_03cab348;
    uVar24 = _DAT_03cab340;
    lVar34 = _UNK_03caaf98;
    lVar66 = _DAT_03caaf90;
    puVar26 = *(ulong **)(lVar16 + 0x40);
    if (puVar26 == (ulong *)0x0) {
LAB_002a9d24:
      param_3 = (byte *)0x0;
      goto LAB_002a7180;
    }
    uVar17 = puVar26[1];
    if (uVar17 != 0) {
      param_6 = param_6 + 8;
      lVar16 = *(long *)(param_1 + 8);
      uVar67 = *puVar26;
      pppppppuVar47 = (undefined8 *******)((ulong)&local_f8 | 1);
      ppppppuVar35 = (undefined8 ******)((ulong)&local_140 | 1);
      ppppppuVar36 = (undefined8 ******)((ulong)&local_170 | 1);
      puVar58 = PTR_DAT_047cc728 + 0x10;
      uVar19 = 0;
      ppppppuVar27 = (undefined8 ******)(PTR_DAT_047cc6a0 + 0x10);
      puVar64 = PTR_LAB_047cba48;
      do {
        local_1c8 = (undefined *)0x0;
        local_190 = (long *)0x0;
        puVar57 = *(undefined8 **)((uVar67 & 0xfffffffffffffff8) + uVar19 * 8);
        sVar59 = puVar57[1];
        pcVar48 = *(char **)PTR_PTR_047cc710;
        sVar18 = strlen(pcVar48);
        if ((sVar59 == sVar18) && (iVar14 = memcmp((void *)*puVar57,pcVar48,sVar59), iVar14 == 0)) {
          uVar75 = puVar57[2];
          uVar77 = puVar57[3];
                    /* try { // try from 002a84cc to 002a84ff has its CatchHandler @ 002aaac8 */
          puVar57 = (undefined8 *)FUN_0038ad50(PTR_PTR_047cc730,lVar15);
          if ((puVar57 == (undefined8 *)0x0) ||
             (uVar21 = FUN_00385610(uVar75,uVar77,puVar57,PTR_PTR_047cc730,lVar15),
             (uVar21 & 1) == 0)) {
                    /* try { // try from 002a8580 to 002a85ab has its CatchHandler @ 002aaac4 */
            FUN_003673f0(&local_270,"Can\'t parse cluster_load_assignment.");
            param_3 = (byte *)FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                           ,0x6a5,&local_270,0,0);
            goto LAB_002a842c;
          }
          if (*(char *)(lVar16 + 0x10) != '\0') {
                    /* try { // try from 002a9094 to 002a909b has its CatchHandler @ 002aaac8 */
            iVar14 = FUN_0038c970(0);
            if (iVar14 != 0) {
              uStack_180 = 0;
              uStack_17a = 0;
              uStack_179 = 0;
              uStack_188 = 0;
              local_182 = 0;
              uStack_181 = 0;
              local_178 = (undefined8 *)0x0;
              if ((undefined8 *******)puVar57[1] != (undefined8 *******)0x0) {
                local_140 = (undefined8 *******)*puVar57;
                local_270 = (undefined8 *******)0x3c32721;
                pppppppuStack_268 = (undefined8 *******)&DAT_0000000c;
                local_f8 = (undefined8 *******)&DAT_03c751d8;
                local_170 = (undefined8 ******)&DAT_03c246d6;
                pppppppuStack_f0 = (undefined8 *******)0x3;
                local_168 = (undefined8 ******)0x1;
                    /* try { // try from 002a9108 to 002a911f has its CatchHandler @ 002aa6ac */
                local_138 = (undefined8 *******)puVar57[1];
                FUN_00395b50(&local_110,&local_270,&local_f8,&local_140,&local_170);
                    /* try { // try from 002a9120 to 002a912b has its CatchHandler @ 002aa6a8 */
                FUN_002acaf4(&uStack_188,&local_110);
                if ((local_110 & 1) != 0) {
                  FUN_0049e790(PTR_LAB_047cba48,local_100);
                }
              }
              puVar26 = (ulong *)puVar57[3];
              if ((puVar26 != (ulong *)0x0) && (uVar21 = puVar26[1], uVar21 != 0)) {
                uVar28 = *puVar26;
                uVar39 = 0;
                do {
                  piVar20 = *(int **)((uVar28 & 0xfffffffffffffff8) + uVar39 * 8);
                    /* try { // try from 002a9170 to 002a917f has its CatchHandler @ 002aa79c */
                  FUN_002ad0e8(&uStack_188,"endpoints {");
                  lVar37 = *(long *)(piVar20 + 2);
                  if (lVar37 != 0) {
                    /* try { // try from 002a9188 to 002a91af has its CatchHandler @ 002aa7d0 */
                    FUN_002ace24(&uStack_188,"  locality {");
                    FUN_002ad6e0(2,lVar37,&uStack_188);
                    FUN_002ad548(&uStack_188);
                  }
                  puVar26 = *(ulong **)(piVar20 + 8);
                  if ((puVar26 != (ulong *)0x0) && (uVar31 = puVar26[1], uVar31 != 0)) {
                    uVar32 = *puVar26;
                    uVar69 = 0;
                    do {
                      puVar72 = (undefined8 *)CONCAT17(uStack_179,CONCAT16(uStack_17a,uStack_180));
                      piVar73 = *(int **)((uVar32 & 0xfffffffffffffff8) + uVar69 * 8);
                      if (puVar72 < local_178) {
                        *(undefined1 *)puVar72 = 0x20;
                        uVar77 = s_lb_endpoints___03c9cf80._8_8_;
                        uVar75 = s_lb_endpoints___03c9cf80._0_8_;
                        *(undefined1 *)((long)puVar72 + 0x11) = 0;
                        *(undefined8 *)((long)puVar72 + 9) = uVar77;
                        *(undefined8 *)((long)puVar72 + 1) = uVar75;
                        puVar72 = puVar72 + 3;
                        uStack_180 = SUB86(puVar72,0);
                        uStack_17a = (undefined1)((ulong)puVar72 >> 0x30);
                        uStack_179 = (undefined1)((ulong)puVar72 >> 0x38);
                      }
                      else {
                        lVar37 = CONCAT17(uStack_181,CONCAT16(local_182,uStack_188));
                        lVar33 = (long)puVar72 - lVar37 >> 3;
                        uVar1 = lVar33 * -0x5555555555555555 + 1;
                        if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* try { // try from 002aa5d8 to 002aa5df has its CatchHandler @ 002aa674 */
                    /* WARNING: Subroutine does not return */
                          std::__vector_base_common<true>::__throw_length_error();
                        }
                        lVar37 = (long)local_178 - lVar37 >> 3;
                        uVar41 = lVar37 * 0x5555555555555556;
                        if (uVar1 <= uVar41) {
                          uVar1 = uVar41;
                        }
                        if (0x555555555555554 < (ulong)(lVar37 * -0x5555555555555555)) {
                          uVar1 = 0xaaaaaaaaaaaaaaa;
                        }
                        if (uVar1 == 0) {
                          lVar37 = 0;
                        }
                        else {
                          lVar37 = FUN_0049e770(PTR_FUN_047cba38,uVar1 * 0x18);
                        }
                        uVar77 = s_lb_endpoints___03c9cf80._8_8_;
                        uVar75 = s_lb_endpoints___03c9cf80._0_8_;
                        puVar42 = (undefined1 *)(lVar37 + lVar33 * 8);
                        local_178 = (undefined8 *)(lVar37 + uVar1 * 0x18);
                        *puVar42 = 0x20;
                        puVar42[0x11] = 0;
                        *(undefined8 *)(puVar42 + 9) = uVar77;
                        *(undefined8 *)(puVar42 + 1) = uVar75;
                        pbVar54 = (byte *)CONCAT17(uStack_181,CONCAT16(local_182,uStack_188));
                        pbVar43 = (byte *)CONCAT17(uStack_179,CONCAT16(uStack_17a,uStack_180));
                        puVar2 = puVar42 + 0x18;
                        if (pbVar43 == pbVar54) {
                          pbVar43 = pbVar54;
                        }
                        else {
                          do {
                            uVar77 = *(undefined8 *)(pbVar43 + -0x10);
                            uVar75 = *(undefined8 *)(pbVar43 + -0x18);
                            *(undefined8 *)(puVar42 + -8) = *(undefined8 *)(pbVar43 + -8);
                            *(undefined8 *)(puVar42 + -0x10) = uVar77;
                            *(undefined8 *)(puVar42 + -0x18) = uVar75;
                            pbVar43[-0x18] = 0;
                            pbVar43[-0x17] = 0;
                            pbVar43[-0x16] = 0;
                            pbVar43[-0x15] = 0;
                            pbVar43[-0x14] = 0;
                            pbVar43[-0x13] = 0;
                            pbVar43[-0x12] = 0;
                            pbVar43[-0x11] = 0;
                            pbVar43[-0x10] = 0;
                            pbVar43[-0xf] = 0;
                            pbVar43[-0xe] = 0;
                            pbVar43[-0xd] = 0;
                            pbVar43[-0xc] = 0;
                            pbVar43[-0xb] = 0;
                            pbVar43[-10] = 0;
                            pbVar43[-9] = 0;
                            pbVar43[-8] = 0;
                            pbVar43[-7] = 0;
                            pbVar43[-6] = 0;
                            pbVar43[-5] = 0;
                            pbVar43[-4] = 0;
                            pbVar43[-3] = 0;
                            pbVar43[-2] = 0;
                            pbVar43[-1] = 0;
                            pbVar43 = pbVar43 + -0x18;
                            puVar42 = puVar42 + -0x18;
                          } while (pbVar54 != pbVar43);
                          pbVar54 = (byte *)CONCAT17(uStack_179,CONCAT16(uStack_17a,uStack_180));
                          pbVar43 = (byte *)CONCAT17(uStack_181,CONCAT16(local_182,uStack_188));
                        }
                        uStack_188 = SUB86(puVar42,0);
                        local_182 = (undefined1)((ulong)puVar42 >> 0x30);
                        uStack_181 = (undefined1)((ulong)puVar42 >> 0x38);
                        uStack_180 = SUB86(puVar2,0);
                        uStack_17a = (undefined1)((ulong)puVar2 >> 0x30);
                        uStack_179 = (undefined1)((ulong)puVar2 >> 0x38);
                        if (pbVar54 != pbVar43) {
                          do {
                            pbVar56 = pbVar54 + -0x18;
                            if ((*pbVar56 & 1) != 0) {
                              FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar54 + -8));
                            }
                            pbVar54 = pbVar56;
                          } while (pbVar43 != pbVar56);
                        }
                        if (pbVar43 != (byte *)0x0) {
                          FUN_0049e790(PTR_LAB_047cba48,pbVar43);
                        }
                      }
                      if (*piVar73 != 0) {
                        local_270 = (undefined8 *******)0x3c61648;
                        pppppppuStack_268 = (undefined8 *******)0x13;
                    /* try { // try from 002a9368 to 002a938b has its CatchHandler @ 002aa8b4 */
                        lVar37 = FUN_00394a70(*piVar73,local_e8);
                        pppppppuStack_f0 = (undefined8 *******)(lVar37 - (long)local_e8);
                        local_f8 = local_e8;
                        FUN_003959c0(&local_140,&local_270,&local_f8);
                    /* try { // try from 002a938c to 002a9397 has its CatchHandler @ 002aa888 */
                        FUN_002acaf4(&uStack_188,&local_140);
                        if (((ulong)local_140 & 1) != 0) {
                          FUN_0049e790(PTR_LAB_047cba48,local_130);
                        }
                      }
                      if ((piVar73[10] == 1) && (lVar37 = *(long *)(piVar73 + 6), lVar37 != 0)) {
                    /* try { // try from 002a93c4 to 002a93d3 has its CatchHandler @ 002aa8b8 */
                        FUN_002ac830(&uStack_188,"    endpoint {");
                        plVar51 = *(long **)(lVar37 + 0x10);
                        if (plVar51 != (long *)0x0) {
                    /* try { // try from 002a93dc to 002a93eb has its CatchHandler @ 002aa850 */
                          FUN_002b268c(&uStack_188,"      address {");
                          if (((int)plVar51[1] == 1) && (lVar37 = *plVar51, lVar37 != 0)) {
                    /* try { // try from 002a9400 to 002a940f has its CatchHandler @ 002aa84c */
                            FUN_002b2950(&uStack_188,"        socket_address {");
                            if (*(undefined8 ********)(lVar37 + 0x18) != (undefined8 *******)0x0) {
                              local_140 = *(undefined8 ********)(lVar37 + 0x10);
                              local_270 = (undefined8 *******)0x3bd1fcd;
                              pppppppuStack_268 = (undefined8 *******)&DAT_00000011;
                              local_f8 = (undefined8 *******)&DAT_03c751d8;
                              local_170 = (undefined8 ******)&DAT_03c246d6;
                              pppppppuStack_f0 = (undefined8 *******)0x3;
                              local_168 = (undefined8 ******)0x1;
                    /* try { // try from 002a945c to 002a9473 has its CatchHandler @ 002aa730 */
                              local_138 = *(undefined8 ********)(lVar37 + 0x18);
                              FUN_00395b50(&local_110,&local_270,&local_f8,&local_140,&local_170);
                    /* try { // try from 002a9474 to 002a947f has its CatchHandler @ 002aa71c */
                              FUN_002acaf4(&uStack_188,&local_110);
                              if ((local_110 & 1) != 0) {
                                FUN_0049e790(PTR_LAB_047cba48,local_100);
                              }
                            }
                            if (*(int *)(lVar37 + 0x40) == 3) {
                              local_270 = (undefined8 *******)0x3c2ba32;
                              pppppppuStack_268 = (undefined8 *******)0x16;
                    /* try { // try from 002a94b8 to 002a94df has its CatchHandler @ 002aa790 */
                              lVar37 = FUN_00394a70(*(undefined4 *)(lVar37 + 0x30),local_e8);
                              pppppppuStack_f0 = (undefined8 *******)(lVar37 - (long)local_e8);
                              local_f8 = local_e8;
                              FUN_003959c0(&local_140,&local_270,&local_f8);
                    /* try { // try from 002a94e0 to 002a94eb has its CatchHandler @ 002aa718 */
                              FUN_002acaf4(&uStack_188,&local_140);
                              if (((ulong)local_140 & 1) != 0) {
                                ppppppuVar68 = local_130;
LAB_002a96d4:
                                FUN_0049e790(PTR_LAB_047cba48,ppppppuVar68);
                              }
                            }
                            else {
                              puVar72 = (undefined8 *)
                                        CONCAT17(uStack_179,CONCAT16(uStack_17a,uStack_180));
                              if (puVar72 < local_178) {
                                pcVar48 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x20);
                                puVar72[1] = uVar4;
                                *puVar72 = uVar24;
                                uVar9 = s_<non_numeric_port>_03bd1fdf._18_8_;
                                uVar8 = s_<non_numeric_port>_03bd1fdf._0_8_;
                                uVar75 = CONCAT62(s_<non_numeric_port>_03bd1fdf._10_6_,
                                                  s_<non_numeric_port>_03bd1fdf._8_2_);
                                uVar77 = CONCAT26(s_<non_numeric_port>_03bd1fdf._16_2_,
                                                  s_<non_numeric_port>_03bd1fdf._10_6_);
                                puVar62 = puVar72 + 3;
                                puVar72[2] = pcVar48;
                                *(undefined8 *)(pcVar48 + 0x12) = uVar9;
                                *(undefined8 *)(pcVar48 + 10) = uVar77;
                                *(undefined8 *)(pcVar48 + 8) = uVar75;
                                *(undefined8 *)pcVar48 = uVar8;
                                pcVar48[0x1a] = '\0';
                                uStack_180 = SUB86(puVar62,0);
                                uStack_17a = (undefined1)((ulong)puVar62 >> 0x30);
                                uStack_179 = (undefined1)((ulong)puVar62 >> 0x38);
                              }
                              else {
                                lVar37 = CONCAT17(uStack_181,CONCAT16(local_182,uStack_188));
                                lVar33 = (long)puVar72 - lVar37 >> 3;
                                uVar1 = lVar33 * -0x5555555555555555 + 1;
                                if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* try { // try from 002aa5e0 to 002aa5e7 has its CatchHandler @ 002aa670 */
                    /* WARNING: Subroutine does not return */
                                  std::__vector_base_common<true>::__throw_length_error();
                                }
                                lVar37 = (long)local_178 - lVar37 >> 3;
                                uVar41 = lVar37 * 0x5555555555555556;
                                if (uVar1 <= uVar41) {
                                  uVar1 = uVar41;
                                }
                                if (0x555555555555554 < (ulong)(lVar37 * -0x5555555555555555)) {
                                  uVar1 = 0xaaaaaaaaaaaaaaa;
                                }
                                if (uVar1 == 0) {
                                  lVar37 = 0;
                                }
                                else {
                                  lVar37 = FUN_0049e770(PTR_FUN_047cba38,uVar1 * 0x18);
                                }
                                puVar62 = (undefined8 *)(lVar37 + lVar33 * 8);
                                puVar74 = (undefined8 *)(lVar37 + uVar1 * 0x18);
                                pcVar48 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x20);
                                puVar62[1] = uVar4;
                                *puVar62 = uVar24;
                                uVar9 = s_<non_numeric_port>_03bd1fdf._18_8_;
                                uVar8 = s_<non_numeric_port>_03bd1fdf._0_8_;
                                uVar75 = CONCAT62(s_<non_numeric_port>_03bd1fdf._10_6_,
                                                  s_<non_numeric_port>_03bd1fdf._8_2_);
                                uVar77 = CONCAT26(s_<non_numeric_port>_03bd1fdf._16_2_,
                                                  s_<non_numeric_port>_03bd1fdf._10_6_);
                                puVar62[2] = pcVar48;
                                *(undefined8 *)(pcVar48 + 0x12) = uVar9;
                                *(undefined8 *)(pcVar48 + 10) = uVar77;
                                pcVar48[0x1a] = '\0';
                                *(undefined8 *)(pcVar48 + 8) = uVar75;
                                *(undefined8 *)pcVar48 = uVar8;
                                ppppppuVar40 = (undefined8 ******)
                                               CONCAT17(uStack_181,CONCAT16(local_182,uStack_188));
                                ppppppuVar68 = (undefined8 ******)
                                               CONCAT17(uStack_179,CONCAT16(uStack_17a,uStack_180));
                                puVar72 = puVar62 + 3;
                                if (ppppppuVar68 == ppppppuVar40) {
                                  ppppppuVar68 = ppppppuVar40;
                                }
                                else {
                                  do {
                                    pppppuVar78 = ppppppuVar68[-2];
                                    pppppuVar46 = ppppppuVar68[-3];
                                    puVar62[-1] = ppppppuVar68[-1];
                                    puVar62[-2] = pppppuVar78;
                                    puVar62[-3] = pppppuVar46;
                                    ppppppuVar68[-3] = (undefined8 *****)0x0;
                                    ppppppuVar68[-2] = (undefined8 *****)0x0;
                                    ppppppuVar68[-1] = (undefined8 *****)0x0;
                                    ppppppuVar68 = ppppppuVar68 + -3;
                                    puVar62 = puVar62 + -3;
                                  } while (ppppppuVar40 != ppppppuVar68);
                                  ppppppuVar40 = (undefined8 ******)
                                                 CONCAT17(uStack_179,CONCAT16(uStack_17a,uStack_180)
                                                         );
                                  ppppppuVar68 = (undefined8 ******)
                                                 CONCAT17(uStack_181,CONCAT16(local_182,uStack_188))
                                  ;
                                }
                                uStack_188 = SUB86(puVar62,0);
                                local_182 = (undefined1)((ulong)puVar62 >> 0x30);
                                uStack_181 = (undefined1)((ulong)puVar62 >> 0x38);
                                uStack_180 = SUB86(puVar72,0);
                                uStack_17a = (undefined1)((ulong)puVar72 >> 0x30);
                                uStack_179 = (undefined1)((ulong)puVar72 >> 0x38);
                                local_178 = puVar74;
                                if (ppppppuVar40 != ppppppuVar68) {
                                  do {
                                    ppppppuVar30 = ppppppuVar40 + -3;
                                    if (((ulong)*ppppppuVar30 & 1) != 0) {
                                      FUN_0049e790(PTR_LAB_047cba48,ppppppuVar40[-1]);
                                    }
                                    ppppppuVar40 = ppppppuVar30;
                                  } while (ppppppuVar68 != ppppppuVar30);
                                }
                                if (ppppppuVar68 != (undefined8 ******)0x0) goto LAB_002a96d4;
                              }
                            }
                            FUN_002b1314(&uStack_188);
                          }
                          else {
                    /* try { // try from 002a9504 to 002a96eb has its CatchHandler @ 002aa84c */
                            FUN_002b22b0(&uStack_188,"        <non-socket address>");
                          }
                          FUN_002b14b0(&uStack_188);
                        }
                    /* try { // try from 002a96ec to 002a96f3 has its CatchHandler @ 002aa850 */
                        FUN_002ad3ac(&uStack_188);
                      }
                    /* try { // try from 002a96f4 to 002a96fb has its CatchHandler @ 002aa8b8 */
                      FUN_002ad548(&uStack_188);
                      uVar69 = uVar69 + 1;
                    } while (uVar69 != uVar31);
                  }
                    /* try { // try from 002a970c to 002a971b has its CatchHandler @ 002aa798 */
                  FUN_002b1240("  load_balancing_weight",*(undefined8 *)(piVar20 + 4),&uStack_188);
                  if (*piVar20 != 0) {
                    local_270 = (undefined8 *******)0x3c470f8;
                    pppppppuStack_268 = (undefined8 *******)&DAT_0000000c;
                    /* try { // try from 002a9734 to 002a975b has its CatchHandler @ 002aa7a4 */
                    lVar37 = FUN_00394a70(*piVar20,local_e8);
                    pppppppuStack_f0 = (undefined8 *******)(lVar37 - (long)local_e8);
                    local_f8 = local_e8;
                    FUN_003959c0(&local_140,&local_270,&local_f8);
                    /* try { // try from 002a975c to 002a9767 has its CatchHandler @ 002aa738 */
                    FUN_002acaf4(&uStack_188,&local_140);
                    if (((ulong)local_140 & 1) != 0) {
                      FUN_0049e790(PTR_LAB_047cba48,local_130);
                    }
                  }
                    /* try { // try from 002a9780 to 002a9787 has its CatchHandler @ 002aa794 */
                  FUN_002acca0(&uStack_188);
                  uVar39 = uVar39 + 1;
                } while (uVar39 != uVar21);
              }
              lVar37 = puVar57[2];
              if (lVar37 != 0) {
                puVar72 = (undefined8 *)CONCAT17(uStack_179,CONCAT16(uStack_17a,uStack_180));
                if (puVar72 < local_178) {
                  *(undefined1 *)puVar72 = 0x10;
                  *(undefined8 *)((long)puVar72 + 1) = 0x7b207963696c6f70;
                  puVar62 = puVar72 + 3;
                  *(undefined1 *)((long)puVar72 + 9) = 0;
                  uStack_180 = SUB86(puVar62,0);
                  uStack_17a = (undefined1)((ulong)puVar62 >> 0x30);
                  uStack_179 = (undefined1)((ulong)puVar62 >> 0x38);
                }
                else {
                  lVar33 = CONCAT17(uStack_181,CONCAT16(local_182,uStack_188));
                  lVar38 = (long)puVar72 - lVar33 >> 3;
                  uVar21 = lVar38 * -0x5555555555555555 + 1;
                  if (0xaaaaaaaaaaaaaaa < uVar21) {
                    /* try { // try from 002aa5e8 to 002aa5ef has its CatchHandler @ 002aa66c */
                    /* WARNING: Subroutine does not return */
                    std::__vector_base_common<true>::__throw_length_error();
                  }
                  lVar33 = (long)local_178 - lVar33 >> 3;
                  uVar39 = lVar33 * 0x5555555555555556;
                  if (uVar21 <= uVar39) {
                    uVar21 = uVar39;
                  }
                  if (0x555555555555554 < (ulong)(lVar33 * -0x5555555555555555)) {
                    uVar21 = 0xaaaaaaaaaaaaaaa;
                  }
                  if (uVar21 == 0) {
                    lVar33 = 0;
                  }
                  else {
                    lVar33 = FUN_0049e770(PTR_FUN_047cba38,uVar21 * 0x18);
                  }
                  puVar42 = (undefined1 *)(lVar33 + lVar38 * 8);
                  local_178 = (undefined8 *)(lVar33 + uVar21 * 0x18);
                  *puVar42 = 0x10;
                  *(undefined8 *)(puVar42 + 1) = 0x7b207963696c6f70;
                  puVar42[9] = 0;
                  pbVar54 = (byte *)CONCAT17(uStack_181,CONCAT16(local_182,uStack_188));
                  pbVar43 = (byte *)CONCAT17(uStack_179,CONCAT16(uStack_17a,uStack_180));
                  puVar2 = puVar42 + 0x18;
                  if (pbVar43 == pbVar54) {
                    pbVar43 = pbVar54;
                  }
                  else {
                    do {
                      uVar77 = *(undefined8 *)(pbVar43 + -0x10);
                      uVar75 = *(undefined8 *)(pbVar43 + -0x18);
                      *(undefined8 *)(puVar42 + -8) = *(undefined8 *)(pbVar43 + -8);
                      *(undefined8 *)(puVar42 + -0x10) = uVar77;
                      *(undefined8 *)(puVar42 + -0x18) = uVar75;
                      pbVar43[-0x18] = 0;
                      pbVar43[-0x17] = 0;
                      pbVar43[-0x16] = 0;
                      pbVar43[-0x15] = 0;
                      pbVar43[-0x14] = 0;
                      pbVar43[-0x13] = 0;
                      pbVar43[-0x12] = 0;
                      pbVar43[-0x11] = 0;
                      pbVar43[-0x10] = 0;
                      pbVar43[-0xf] = 0;
                      pbVar43[-0xe] = 0;
                      pbVar43[-0xd] = 0;
                      pbVar43[-0xc] = 0;
                      pbVar43[-0xb] = 0;
                      pbVar43[-10] = 0;
                      pbVar43[-9] = 0;
                      pbVar43[-8] = 0;
                      pbVar43[-7] = 0;
                      pbVar43[-6] = 0;
                      pbVar43[-5] = 0;
                      pbVar43[-4] = 0;
                      pbVar43[-3] = 0;
                      pbVar43[-2] = 0;
                      pbVar43[-1] = 0;
                      pbVar43 = pbVar43 + -0x18;
                      puVar42 = puVar42 + -0x18;
                    } while (pbVar54 != pbVar43);
                    pbVar54 = (byte *)CONCAT17(uStack_179,CONCAT16(uStack_17a,uStack_180));
                    pbVar43 = (byte *)CONCAT17(uStack_181,CONCAT16(local_182,uStack_188));
                  }
                  uStack_188 = SUB86(puVar42,0);
                  local_182 = (undefined1)((ulong)puVar42 >> 0x30);
                  uStack_181 = (undefined1)((ulong)puVar42 >> 0x38);
                  uStack_180 = SUB86(puVar2,0);
                  uStack_17a = (undefined1)((ulong)puVar2 >> 0x30);
                  uStack_179 = (undefined1)((ulong)puVar2 >> 0x38);
                  if (pbVar54 != pbVar43) {
                    do {
                      pbVar56 = pbVar54 + -0x18;
                      if ((*pbVar56 & 1) != 0) {
                        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar54 + -8));
                      }
                      pbVar54 = pbVar56;
                    } while (pbVar43 != pbVar56);
                  }
                  if (pbVar43 != (byte *)0x0) {
                    FUN_0049e790(PTR_LAB_047cba48,pbVar43);
                  }
                }
                puVar26 = *(ulong **)(lVar37 + 0x18);
                if ((puVar26 != (ulong *)0x0) && (uVar21 = puVar26[1], uVar21 != 0)) {
                  uVar28 = *puVar26;
                  uVar39 = 0;
                  do {
                    puVar72 = *(undefined8 **)((uVar28 & 0xfffffffffffffff8) + uVar39 * 8);
                    /* try { // try from 002a9950 to 002a995f has its CatchHandler @ 002aa734 */
                    FUN_002b0f78(&uStack_188,"  drop_overloads {");
                    if ((undefined8 *******)puVar72[1] != (undefined8 *******)0x0) {
                      local_140 = (undefined8 *******)*puVar72;
                      local_270 = (undefined8 *******)0x3bd1ffa;
                      pppppppuStack_268 = (undefined8 *******)&DAT_0000000c;
                      local_f8 = (undefined8 *******)&DAT_03c751d8;
                      local_170 = (undefined8 ******)&DAT_03c246d6;
                      pppppppuStack_f0 = (undefined8 *******)0x3;
                      local_168 = (undefined8 ******)0x1;
                    /* try { // try from 002a99ac to 002a99c3 has its CatchHandler @ 002aa714 */
                      local_138 = (undefined8 *******)puVar72[1];
                      FUN_00395b50(&local_110,&local_270,&local_f8,&local_140,&local_170);
                    /* try { // try from 002a99c4 to 002a99cf has its CatchHandler @ 002aa710 */
                      FUN_002acaf4(&uStack_188,&local_110);
                      if ((local_110 & 1) != 0) {
                        FUN_0049e790(PTR_LAB_047cba48,local_100);
                      }
                    }
                    puVar65 = (undefined4 *)puVar72[2];
                    if (puVar65 != (undefined4 *)0x0) {
                      puVar72 = (undefined8 *)CONCAT17(uStack_179,CONCAT16(uStack_17a,uStack_180));
                      if (puVar72 < local_178) {
                        *(undefined1 *)puVar72 = 0x2a;
                        uVar77 = s_drop_percentage___03c08410._0_8_;
                        uVar75 = CONCAT35(s_drop_percentage___03c08410._13_3_,
                                          s_drop_percentage___03c08410._8_5_);
                        *(ulong *)((long)puVar72 + 0xe) =
                             CONCAT53(s_drop_percentage___03c08410._16_5_,
                                      s_drop_percentage___03c08410._13_3_);
                        *(undefined1 *)((long)puVar72 + 0x16) = 0;
                        *(undefined8 *)((long)puVar72 + 9) = uVar75;
                        *(undefined8 *)((long)puVar72 + 1) = uVar77;
                        puVar72 = puVar72 + 3;
                        uStack_180 = SUB86(puVar72,0);
                        uStack_17a = (undefined1)((ulong)puVar72 >> 0x30);
                        uStack_179 = (undefined1)((ulong)puVar72 >> 0x38);
                      }
                      else {
                        lVar37 = CONCAT17(uStack_181,CONCAT16(local_182,uStack_188));
                        lVar33 = (long)puVar72 - lVar37 >> 3;
                        uVar31 = lVar33 * -0x5555555555555555 + 1;
                        if (0xaaaaaaaaaaaaaaa < uVar31) {
                    /* try { // try from 002aa5f0 to 002aa5f7 has its CatchHandler @ 002aa668 */
                    /* WARNING: Subroutine does not return */
                          std::__vector_base_common<true>::__throw_length_error();
                        }
                        lVar37 = (long)local_178 - lVar37 >> 3;
                        uVar69 = lVar37 * 0x5555555555555556;
                        if (uVar31 <= uVar69) {
                          uVar31 = uVar69;
                        }
                        if (0x555555555555554 < (ulong)(lVar37 * -0x5555555555555555)) {
                          uVar31 = 0xaaaaaaaaaaaaaaa;
                        }
                        if (uVar31 == 0) {
                          lVar37 = 0;
                        }
                        else {
                          lVar37 = FUN_0049e770(PTR_FUN_047cba38,uVar31 * 0x18);
                        }
                        uVar77 = s_drop_percentage___03c08410._0_8_;
                        puVar42 = (undefined1 *)(lVar37 + lVar33 * 8);
                        local_178 = (undefined8 *)(lVar37 + uVar31 * 0x18);
                        uVar75 = CONCAT35(s_drop_percentage___03c08410._13_3_,
                                          s_drop_percentage___03c08410._8_5_);
                        *(ulong *)(puVar42 + 0xe) =
                             CONCAT53(s_drop_percentage___03c08410._16_5_,
                                      s_drop_percentage___03c08410._13_3_);
                        *(undefined8 *)(puVar42 + 9) = uVar75;
                        *(undefined8 *)(puVar42 + 1) = uVar77;
                        *puVar42 = 0x2a;
                        puVar42[0x16] = 0;
                        pbVar54 = (byte *)CONCAT17(uStack_181,CONCAT16(local_182,uStack_188));
                        pbVar43 = (byte *)CONCAT17(uStack_179,CONCAT16(uStack_17a,uStack_180));
                        puVar2 = puVar42 + 0x18;
                        if (pbVar43 == pbVar54) {
                          pbVar43 = pbVar54;
                        }
                        else {
                          do {
                            uVar77 = *(undefined8 *)(pbVar43 + -0x10);
                            uVar75 = *(undefined8 *)(pbVar43 + -0x18);
                            *(undefined8 *)(puVar42 + -8) = *(undefined8 *)(pbVar43 + -8);
                            *(undefined8 *)(puVar42 + -0x10) = uVar77;
                            *(undefined8 *)(puVar42 + -0x18) = uVar75;
                            pbVar43[-0x18] = 0;
                            pbVar43[-0x17] = 0;
                            pbVar43[-0x16] = 0;
                            pbVar43[-0x15] = 0;
                            pbVar43[-0x14] = 0;
                            pbVar43[-0x13] = 0;
                            pbVar43[-0x12] = 0;
                            pbVar43[-0x11] = 0;
                            pbVar43[-0x10] = 0;
                            pbVar43[-0xf] = 0;
                            pbVar43[-0xe] = 0;
                            pbVar43[-0xd] = 0;
                            pbVar43[-0xc] = 0;
                            pbVar43[-0xb] = 0;
                            pbVar43[-10] = 0;
                            pbVar43[-9] = 0;
                            pbVar43[-8] = 0;
                            pbVar43[-7] = 0;
                            pbVar43[-6] = 0;
                            pbVar43[-5] = 0;
                            pbVar43[-4] = 0;
                            pbVar43[-3] = 0;
                            pbVar43[-2] = 0;
                            pbVar43[-1] = 0;
                            pbVar43 = pbVar43 + -0x18;
                            puVar42 = puVar42 + -0x18;
                          } while (pbVar54 != pbVar43);
                          pbVar54 = (byte *)CONCAT17(uStack_179,CONCAT16(uStack_17a,uStack_180));
                          pbVar43 = (byte *)CONCAT17(uStack_181,CONCAT16(local_182,uStack_188));
                        }
                        uStack_188 = SUB86(puVar42,0);
                        local_182 = (undefined1)((ulong)puVar42 >> 0x30);
                        uStack_181 = (undefined1)((ulong)puVar42 >> 0x38);
                        uStack_180 = SUB86(puVar2,0);
                        uStack_17a = (undefined1)((ulong)puVar2 >> 0x30);
                        uStack_179 = (undefined1)((ulong)puVar2 >> 0x38);
                        if (pbVar54 != pbVar43) {
                          do {
                            pbVar56 = pbVar54 + -0x18;
                            if ((*pbVar56 & 1) != 0) {
                              FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar54 + -8));
                            }
                            pbVar54 = pbVar56;
                          } while (pbVar43 != pbVar56);
                        }
                        if (pbVar43 != (byte *)0x0) {
                          FUN_0049e790(PTR_LAB_047cba48,pbVar43);
                        }
                      }
                      local_270 = (undefined8 *******)0x3c752b1;
                      pppppppuStack_268 = (undefined8 *******)0x11;
                    /* try { // try from 002a9ba0 to 002a9bc7 has its CatchHandler @ 002aa78c */
                      lVar37 = FUN_00394a70(puVar65[2],local_e8);
                      pppppppuStack_f0 = (undefined8 *******)(lVar37 - (long)local_e8);
                      local_f8 = local_e8;
                      FUN_003959c0(&local_140,&local_270,&local_f8);
                    /* try { // try from 002a9bc8 to 002a9bd3 has its CatchHandler @ 002aa70c */
                      FUN_002acaf4(&uStack_188,&local_140);
                      if (((ulong)local_140 & 1) != 0) {
                        FUN_0049e790(PTR_LAB_047cba48,local_130);
                      }
                      local_270 = (undefined8 *******)0x3c0f3e6;
                      pppppppuStack_268 = (undefined8 *******)0x13;
                    /* try { // try from 002a9c00 to 002a9c27 has its CatchHandler @ 002aa788 */
                      lVar37 = FUN_00394c20(*puVar65,local_e8);
                      pppppppuStack_f0 = (undefined8 *******)(lVar37 - (long)local_e8);
                      local_f8 = local_e8;
                      FUN_003959c0(&local_140,&local_270,&local_f8);
                    /* try { // try from 002a9c28 to 002a9c33 has its CatchHandler @ 002aa708 */
                      FUN_002acaf4(&uStack_188,&local_140);
                      if (((ulong)local_140 & 1) != 0) {
                        FUN_0049e790(PTR_LAB_047cba48,local_130);
                      }
                    /* try { // try from 002a9c4c to 002a9c5b has its CatchHandler @ 002aa7a0 */
                      FUN_002ad3ac(&uStack_188);
                    }
                    FUN_002ad548(&uStack_188);
                    uVar39 = uVar39 + 1;
                  } while (uVar39 != uVar21);
                }
                    /* try { // try from 002a9c68 to 002a9c6f has its CatchHandler @ 002aa6a4 */
                FUN_002acca0(&uStack_188);
              }
              uVar11 = uStack_181;
              uVar6 = local_182;
              uVar10 = uStack_188;
              pbVar54 = (byte *)CONCAT17(uStack_181,CONCAT16(local_182,uStack_188));
              if (pbVar54 != (byte *)0x0) {
                pbVar43 = (byte *)CONCAT17(uStack_179,CONCAT16(uStack_17a,uStack_180));
                if (pbVar43 != pbVar54) {
                  do {
                    pbVar56 = pbVar43 + -0x18;
                    if ((*pbVar56 & 1) != 0) {
                      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar43 + -8));
                    }
                    pbVar43 = pbVar56;
                  } while (pbVar54 != pbVar56);
                  pbVar54 = (byte *)CONCAT17(uStack_181,CONCAT16(local_182,uStack_188));
                }
                uStack_180 = uVar10;
                uStack_17a = uVar6;
                uStack_179 = uVar11;
                FUN_0049e790(PTR_LAB_047cba48,pbVar54);
              }
              puVar64 = PTR_LAB_047cba48;
            }
          }
          pbVar54 = *(byte **)param_6;
          if (pbVar54 == (byte *)0x0) {
            uVar52 = 4;
          }
          else {
            pvVar71 = (void *)*puVar57;
            pppppppuVar53 = (undefined8 *******)puVar57[1];
            pbVar43 = param_6;
            do {
              pppppppuVar63 = *(undefined8 ********)(pbVar54 + 0x28);
              pppppppuVar50 = pppppppuVar63;
              if (pppppppuVar53 <= pppppppuVar63) {
                pppppppuVar50 = pppppppuVar53;
              }
              if ((pppppppuVar50 == (undefined8 *******)0x0) ||
                 (iVar14 = memcmp(*(void **)(pbVar54 + 0x20),pvVar71,(size_t)pppppppuVar50),
                 iVar14 == 0)) {
                iVar25 = (uint)(pppppppuVar53 < pppppppuVar63) -
                         (uint)(pppppppuVar63 < pppppppuVar53);
              }
              else {
                iVar25 = -1;
                if (-1 < iVar14) {
                  iVar25 = 1;
                }
              }
              puVar64 = PTR_LAB_047cba48;
              if (iVar25 >= 0) {
                pbVar43 = pbVar54;
              }
              pbVar54 = *(byte **)(pbVar54 + (ulong)(iVar25 < 0) * 8);
            } while (pbVar54 != (byte *)0x0);
            if (pbVar43 == param_6) {
              uVar52 = 4;
            }
            else {
              pppppppuVar63 = *(undefined8 ********)(pbVar43 + 0x28);
              pppppppuVar50 = pppppppuVar53;
              if (pppppppuVar63 <= pppppppuVar53) {
                pppppppuVar50 = pppppppuVar63;
              }
              if ((pppppppuVar50 == (undefined8 *******)0x0) ||
                 (iVar14 = memcmp(pvVar71,*(void **)(pbVar43 + 0x20),(size_t)pppppppuVar50),
                 iVar14 == 0)) {
                if (pppppppuVar53 < pppppppuVar63) goto LAB_002a8c8c;
LAB_002a85e8:
                puVar26 = (ulong *)puVar57[3];
                pbVar54 = param_3;
                if ((puVar26 != (ulong *)0x0) && (uVar21 = puVar26[1], uVar21 != 0)) {
                  uVar28 = *puVar26;
                  uVar39 = 0;
                  do {
                    pppppppuVar50 = local_f8;
                    local_270 = (undefined8 *******)0x0;
                    pppppppuStack_268 = (undefined8 *******)0x0;
                    puVar29 = *(uint **)((uVar28 & 0xfffffffffffffff8) + uVar39 * 8);
                    if (*(int **)(puVar29 + 4) == (int *)0x0) {
                      local_1d0 = 0;
LAB_002a86ac:
                      uVar52 = 7;
                      param_3 = pbVar54;
                    }
                    else {
                      local_1d0 = **(int **)(puVar29 + 4);
                      if (local_1d0 == 0) goto LAB_002a86ac;
                      puVar72 = *(undefined8 **)(puVar29 + 2);
                      pppppppuVar63 = (undefined8 *******)puVar72[1];
                      if ((undefined8 *******)0xffffffffffffffef < pppppppuVar63) {
                    /* try { // try from 002aa5f8 to 002aa5ff has its CatchHandler @ 002aa664 */
                    /* WARNING: Subroutine does not return */
                        std::__basic_string_common<true>::__throw_length_error();
                      }
                      pvVar55 = (void *)*puVar72;
                      pvVar61 = (void *)puVar72[4];
                      ppppppuVar40 = (undefined8 ******)puVar72[5];
                      if (pppppppuVar63 < (undefined8 *******)0x17) {
                        uVar6 = (undefined1)((int)pppppppuVar63 << 1);
                        local_f8 = (undefined8 *******)CONCAT71(local_f8._1_7_,uVar6);
                        if (pppppppuVar63 != (undefined8 *******)0x0) {
                          memcpy(pppppppuVar47,pvVar55,(size_t)pppppppuVar63);
                          *(undefined1 *)((long)&local_f8 + 1 + (long)pppppppuVar63) = 0;
                          local_140 = (undefined8 *******)CONCAT71(local_140._1_7_,uVar6);
                          ppppppuVar68 = ppppppuVar35;
                          goto LAB_002a8718;
                        }
                        local_f8 = (undefined8 *******)((ulong)pppppppuVar50 & 0xffffffffffff0000);
                        local_140 = (undefined8 *******)((ulong)local_140 & 0xffffffffffffff00);
                        *(byte *)ppppppuVar35 = 0;
                        puVar64 = PTR_LAB_047cba48;
                      }
                      else {
                        uVar31 = (ulong)(pppppppuVar63 + 2) & 0xfffffffffffffff0;
                        pppppppuVar50 = (undefined8 *******)FUN_0049e770(PTR_FUN_047cba38,uVar31);
                        local_f8 = (undefined8 *******)(uVar31 | 1);
                        pppppppuStack_f0 = pppppppuVar63;
                        local_e8[0] = pppppppuVar50;
                        memcpy(pppppppuVar50,pvVar55,(size_t)pppppppuVar63);
                        *(undefined1 *)((long)pppppppuVar50 + (long)pppppppuVar63) = 0;
                        ppppppuVar68 = (undefined8 ******)FUN_0049e770(PTR_FUN_047cba38,uVar31);
                        local_140 = (undefined8 *******)(uVar31 | 1);
                        local_138 = pppppppuVar63;
                        local_130 = ppppppuVar68;
LAB_002a8718:
                        memcpy(ppppppuVar68,pvVar55,(size_t)pppppppuVar63);
                        *(byte *)((long)ppppppuVar68 + (long)pppppppuVar63) = 0;
                        puVar64 = PTR_LAB_047cba48;
                      }
                      PTR_LAB_047cba48 = puVar64;
                      if ((undefined8 ******)0xffffffffffffffef < ppppppuVar40) {
                    /* try { // try from 002aa600 to 002aa607 has its CatchHandler @ 002aa630 */
                    /* WARNING: Subroutine does not return */
                        std::__basic_string_common<true>::__throw_length_error();
                      }
                      if (ppppppuVar40 < (undefined8 ******)0x17) {
                        uVar31 = (ulong)local_170 >> 8;
                        local_170 = (undefined8 ******)
                                    CONCAT71((int7)uVar31,(char)((int)ppppppuVar40 << 1));
                        ppppppuVar68 = ppppppuVar36;
                        if (ppppppuVar40 != (undefined8 ******)0x0) goto LAB_002a878c;
                      }
                      else {
                        ppppppuVar68 = (undefined8 ******)
                                       FUN_0049e770(PTR_FUN_047cba38,
                                                    (ulong)(ppppppuVar40 + 2) & 0xfffffffffffffff0);
                        local_170 = (undefined8 ******)
                                    ((ulong)(ppppppuVar40 + 2) & 0xfffffffffffffff0 | 1);
                        local_168 = ppppppuVar40;
                        local_160 = ppppppuVar68;
LAB_002a878c:
                        puVar64 = PTR_LAB_047cba48;
                        memcpy(ppppppuVar68,pvVar61,(size_t)ppppppuVar40);
                      }
                      *(byte *)((long)ppppppuVar68 + (long)ppppppuVar40) = 0;
                      pppppppuVar23 = (undefined8 *******)FUN_0049e770(PTR_FUN_047cba38,0x70);
                      pppppppuVar63 = local_e8[0];
                      ppppppuVar68 = local_130;
                      ppppppuVar40 = local_160;
                      pppppppuVar50 = local_270;
                      if (pppppppuVar23 != (undefined8 *******)0x0) {
                        ppppppuVar44 = *(undefined8 *******)((long)ppppppuVar35 + 7);
                        pppppuVar46 = *ppppppuVar35;
                        local_138 = (undefined8 *******)0x0;
                        uStack_181 = SUB81(ppppppuVar44,0);
                        ppppppuVar30 = *pppppppuVar47;
                        uVar12 = (undefined1)local_f8;
                        local_f8 = (undefined8 *******)0x0;
                        local_70 = SUB87(*ppppppuVar36,0);
                        ppppppuVar45 = *(undefined8 *******)((long)ppppppuVar36 + 7);
                        local_e8[0] = (undefined8 *******)0x0;
                        pppppppuStack_f0 = (undefined8 *******)0x0;
                        uVar11 = local_140._0_1_;
                        local_140 = (undefined8 *******)0x0;
                        uStack_108 = (undefined7)
                                     ((ulong)*(undefined8 *)((long)pppppppuVar47 + 7) >> 8);
                        local_130 = (undefined8 ******)0x0;
                        uStack_109 = (undefined1)((ulong)ppppppuVar30 >> 0x38);
                        uVar6 = local_170._0_1_;
                        local_170 = (undefined8 ******)0x0;
                        uStack_69 = SUB81(ppppppuVar45,0);
                        local_168 = (undefined8 ******)0x0;
                        local_160 = (undefined8 ******)0x0;
                        *pppppppuVar23 = ppppppuVar27;
                        pppppppuVar23[1] = (undefined8 ******)0x1;
                        *(undefined1 *)(pppppppuVar23 + 2) = uVar12;
                        pppppppuVar23[3] = (undefined8 ******)CONCAT71(uStack_108,uStack_109);
                        pppppppuVar23[4] = pppppppuVar63;
                        *(undefined8 *******)((long)pppppppuVar23 + 0x11) = ppppppuVar30;
                        uStack_108 = 0;
                        local_110 = 0;
                        uStack_10f = 0;
                        uStack_109 = 0;
                        *(undefined1 *)(pppppppuVar23 + 5) = uVar11;
                        pppppppuVar23[6] = ppppppuVar44;
                        pppppppuVar23[7] = ppppppuVar68;
                        *(ulong *)((long)pppppppuVar23 + 0x29) =
                             CONCAT17(uStack_181,(int7)pppppuVar46);
                        uStack_180 = 0;
                        uStack_17a = 0;
                        uStack_188 = 0;
                        local_182 = 0;
                        uStack_181 = 0;
                        *(undefined1 *)(pppppppuVar23 + 8) = uVar6;
                        pppppppuVar23[9] = ppppppuVar45;
                        pppppppuVar23[10] = ppppppuVar40;
                        *(ulong *)((long)pppppppuVar23 + 0x41) = CONCAT17(uStack_69,local_70);
                        uStack_68 = 0;
                        local_70 = 0;
                        uStack_69 = 0;
                        pppppppuVar23[0xd] = (undefined8 ******)0x0;
                        pppppppuVar23[0xb] = (undefined8 ******)0x0;
                        pppppppuVar23[0xc] = (undefined8 ******)0x0;
                      }
                      if (local_270 == (undefined8 *******)0x0) {
LAB_002a88bc:
                        local_270 = pppppppuVar23;
                        if (((ulong)local_170 & 1) == 0) goto LAB_002a88c8;
LAB_002a892c:
                        local_270 = pppppppuVar23;
                        FUN_0049e790(puVar64,local_160);
                        if (((ulong)local_140 & 1) != 0) goto LAB_002a8940;
LAB_002a88d0:
                        if (((ulong)local_f8 & 1) == 0) goto LAB_002a88d8;
LAB_002a8954:
                        FUN_0049e790(puVar64,local_e8[0]);
                        puVar26 = *(ulong **)(puVar29 + 8);
                      }
                      else {
                        pppppppuVar63 = local_270 + 1;
                        do {
                          ppppppuVar40 = *pppppppuVar63;
                          cVar5 = '\x01';
                          bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar63,0x10);
                          if (bVar13) {
                            *pppppppuVar63 = (undefined8 ******)((long)ppppppuVar40 + -1);
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                        if ((undefined8 ******)((long)ppppppuVar40 + -1) != (undefined8 ******)0x0)
                        goto LAB_002a88bc;
                        (*(code *)**local_270)(local_270);
                        FUN_0049e790(puVar64,pppppppuVar50);
                        local_270 = pppppppuVar23;
                        if (((ulong)local_170 & 1) != 0) goto LAB_002a892c;
LAB_002a88c8:
                        local_270 = pppppppuVar23;
                        if (((ulong)local_140 & 1) == 0) goto LAB_002a88d0;
LAB_002a8940:
                        FUN_0049e790(puVar64,local_130);
                        if (((ulong)local_f8 & 1) != 0) goto LAB_002a8954;
LAB_002a88d8:
                        puVar26 = *(ulong **)(puVar29 + 8);
                      }
                      if ((puVar26 != (ulong *)0x0) && (uVar31 = puVar26[1], uVar31 != 0)) {
                        puVar72 = (undefined8 *)(*puVar26 & 0xfffffffffffffff8);
                        do {
                          if (*(uint *)*puVar72 < 2) {
                            lVar37 = **(long **)(*(long *)((uint *)*puVar72 + 6) + 0x10);
                            pvVar61 = *(void **)(lVar37 + 0x10);
                            sVar18 = *(size_t *)(lVar37 + 0x18);
                            if (*(int *)(lVar37 + 0x40) == 3) {
                              uVar52 = *(uint *)(lVar37 + 0x30);
                              if (uVar52 >> 0x10 != 0) {
                    /* try { // try from 002a89cc to 002a8a13 has its CatchHandler @ 002aaad8 */
                                FUN_003673f0(&local_f8,"Invalid port.");
                                param_3 = (byte *)FUN_00351340(
                                                  "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                                  ,0x633,&local_f8,0,0);
                                puVar64 = PTR_LAB_047cba48;
                                if (param_3 == (byte *)0x0) goto LAB_002a8988;
                                uVar52 = 1;
                                goto LAB_002a8b90;
                              }
                            }
                            else {
                              uVar52 = 0;
                            }
                            pvVar55 = (void *)FUN_0038c780(sVar18 + 1);
                            memcpy(pvVar55,pvVar61,sVar18);
                            *(undefined1 *)((long)pvVar55 + sVar18) = 0;
                    /* try { // try from 002a8a28 to 002a8a53 has its CatchHandler @ 002aaad8 */
                            FUN_0035a6b0(&local_f8,pvVar55,uVar52);
                            free(pvVar55);
                            local_140 = (undefined8 *******)0x0;
                            FUN_00284a64(&pppppppuStack_268,&local_f8,&local_140);
                            puVar64 = PTR_LAB_047cba48;
                          }
LAB_002a8988:
                          uVar31 = uVar31 - 1;
                          puVar72 = puVar72 + 1;
                        } while (uVar31 != 0);
                      }
                      uStack_1cc = *puVar29;
                      if (local_1d0 == 0) {
                        uVar52 = 7;
                        param_3 = pbVar54;
                      }
                      else {
                        if (local_270 != (undefined8 *******)0x0) {
                          pppppppuVar50 = local_270 + 1;
                          do {
                            cVar5 = '\x01';
                            bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar50,0x10);
                            if (bVar13) {
                              *pppppppuVar50 = (undefined8 ******)((long)*pppppppuVar50 + 1);
                              cVar5 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar5 != '\0');
                        }
                        local_318 = local_270;
                    /* try { // try from 002a8a98 to 002a8aa7 has its CatchHandler @ 002aa9c4 */
                        FUN_00297298(&local_310,&pppppppuStack_268,&pppppppuStack_268);
                        local_278 = CONCAT44(uStack_1cc,local_1d0);
                        uVar31 = (ulong)uStack_1cc;
                        if ((ulong)local_1c8 >> 1 <= uVar31) {
                    /* try { // try from 002a8ac4 to 002a8af7 has its CatchHandler @ 002aa9e8 */
                          FUN_002b3160(&local_1c8,extraout_x1,uStack_1cc + 1);
                          uVar31 = local_278 >> 0x20;
                        }
                        pppppppuVar50 = &local_1c0;
                        if (((ulong)local_1c8 & 1) != 0) {
                          pppppppuVar50 = local_1c0;
                        }
                        FUN_002b335c(pppppppuVar50 + uVar31 * 3,&local_318,&local_318,&local_318);
                        pppppppuVar50 = local_308;
                        if (((local_310 & 1) == 0) ||
                           (pppppppuVar50 = local_308[0], local_308[0] != (undefined8 *******)0x0))
                        {
                          pppppppuVar50 = pppppppuVar50 + (local_310 >> 1) * 0x12 + -1;
                          lVar37 = (local_310 >> 1) + 1;
                          while (lVar37 = lVar37 + -1, lVar37 != 0) {
                            ppppppuVar40 = *pppppppuVar50;
                            pppppppuVar50 = pppppppuVar50 + -0x12;
                    /* try { // try from 002a8b30 to 002a8b33 has its CatchHandler @ 002aaacc */
                            FUN_00343d90(ppppppuVar40);
                          }
                          if ((local_310 & 1) != 0) {
                            pppppppuVar50 = local_308[0];
                            goto LAB_002a8b60;
                          }
                        }
                        else {
                          pppppppuVar50 = (undefined8 *******)0x0;
LAB_002a8b60:
                          FUN_0049e790(puVar64,pppppppuVar50);
                        }
                        pppppppuVar50 = local_318;
                        if (local_318 != (undefined8 *******)0x0) {
                          pppppppuVar63 = local_318 + 1;
                          do {
                            ppppppuVar40 = *pppppppuVar63;
                            cVar5 = '\x01';
                            bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar63,0x10);
                            if (bVar13) {
                              *pppppppuVar63 = (undefined8 ******)((long)ppppppuVar40 + -1);
                              cVar5 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar5 != '\0');
                          if (ppppppuVar40 == (undefined8 ******)0x1) {
                            (*(code *)**local_318)(local_318);
                            FUN_0049e790(puVar64,pppppppuVar50);
                          }
                        }
                        uVar52 = 0;
                        param_3 = pbVar54;
                      }
                    }
LAB_002a8b90:
                    pppppppuVar50 = &local_260;
                    if ((((ulong)pppppppuStack_268 & 1) == 0) ||
                       (pppppppuVar50 = local_260, local_260 != (undefined8 *******)0x0)) {
                      pppppppuVar50 = pppppppuVar50 + ((ulong)pppppppuStack_268 >> 1) * 0x12 + -1;
                      lVar37 = ((ulong)pppppppuStack_268 >> 1) + 1;
                      while (lVar37 = lVar37 + -1, lVar37 != 0) {
                        ppppppuVar40 = *pppppppuVar50;
                        pppppppuVar50 = pppppppuVar50 + -0x12;
                    /* try { // try from 002a8bc8 to 002a8bcb has its CatchHandler @ 002aac40 */
                        FUN_00343d90(ppppppuVar40);
                      }
                      puVar64 = PTR_LAB_047cba48;
                      if (((ulong)pppppppuStack_268 & 1) != 0) {
                        pppppppuVar50 = local_260;
                        goto LAB_002a8bf0;
                      }
                    }
                    else {
                      pppppppuVar50 = (undefined8 *******)0x0;
LAB_002a8bf0:
                      FUN_0049e790(puVar64,pppppppuVar50);
                    }
                    pppppppuVar50 = local_270;
                    if (local_270 != (undefined8 *******)0x0) {
                      pppppppuVar63 = local_270 + 1;
                      do {
                        ppppppuVar40 = *pppppppuVar63;
                        cVar5 = '\x01';
                        bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar63,0x10);
                        if (bVar13) {
                          *pppppppuVar63 = (undefined8 ******)((long)ppppppuVar40 + -1);
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      if ((undefined8 ******)((long)ppppppuVar40 + -1) == (undefined8 ******)0x0) {
                        (*(code *)**local_270)(local_270);
                        FUN_0049e790(puVar64,pppppppuVar50);
                      }
                    }
                    if ((uVar52 != 7) && (uVar52 != 0)) goto LAB_002a905c;
                    uVar39 = uVar39 + 1;
                    pbVar54 = param_3;
                  } while (uVar39 != uVar21);
                }
                if ((undefined *)0x1 < local_1c8) {
                  pppppppuVar50 = &local_1c0;
                  if (((ulong)local_1c8 & 1) != 0) {
                    pppppppuVar50 = local_1c0;
                  }
                  if (pppppppuVar50 == (undefined8 *******)0x0) {
LAB_002a8fb0:
                    /* try { // try from 002a8fb0 to 002a8fdb has its CatchHandler @ 002aa960 */
                    FUN_003673f0(&local_270,"EDS update includes sparse priority list");
                    param_3 = (byte *)FUN_00351340(
                                                  "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                                  ,0x6c4,&local_270,0,0);
                    uVar52 = 1;
                    goto LAB_002a905c;
                  }
                  uVar21 = 1;
                  uVar39 = 0;
                  do {
                    uVar28 = uVar21;
                    if (pppppppuVar50[uVar39 * 3 + 2] == (undefined8 ******)0x0) goto LAB_002a8fb0;
                    uVar21 = (ulong)((int)uVar28 + 1);
                    uVar39 = uVar28;
                  } while (uVar28 < (ulong)local_1c8 >> 1);
                }
                plVar60 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x60);
                plVar51 = local_190;
                if (plVar60 != (long *)0x0) {
                  plVar60[10] = 0;
                  plVar60[9] = 0;
                  plVar60[8] = 0;
                  plVar60[7] = 0;
                  plVar60[0xb] = 0;
                  *(undefined1 *)(plVar60 + 0xb) = 0;
                  *plVar60 = (long)puVar58;
                  plVar60[6] = 0;
                  plVar60[5] = 0;
                  plVar60[4] = 0;
                  plVar60[3] = 0;
                  plVar60[2] = lVar34;
                  plVar60[1] = lVar66;
                }
                if (local_190 == (long *)0x0) {
LAB_002a8d60:
                  lVar37 = puVar57[2];
                }
                else {
                  plVar49 = local_190 + 1;
                  do {
                    lVar37 = *plVar49;
                    cVar5 = '\x01';
                    bVar13 = (bool)ExclusiveMonitorPass(plVar49,0x10);
                    if (bVar13) {
                      *plVar49 = lVar37 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (lVar37 + -1 != 0) goto LAB_002a8d60;
                  (**(code **)*local_190)(local_190);
                  FUN_0049e790(puVar64,plVar51);
                  lVar37 = puVar57[2];
                }
                local_190 = plVar60;
                if (((lVar37 != 0) &&
                    (puVar26 = *(ulong **)(lVar37 + 0x18), puVar26 != (ulong *)0x0)) &&
                   (puVar26[1] != 0)) {
                  puVar72 = (undefined8 *)(*puVar26 & 0xfffffffffffffff8);
                  local_338 = puVar26[1] - 1;
                  puVar57 = (undefined8 *)*puVar72;
                  pppppppuVar50 = (undefined8 *******)puVar57[1];
                  if (pppppppuVar50 != (undefined8 *******)0x0) goto LAB_002a8db8;
LAB_002a8f50:
                  FUN_003673f0(&local_270,"Empty drop category name");
                  param_3 = (byte *)FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                                 ,0x66f,&local_270,0,0);
LAB_002a8f7c:
                  if (param_3 == (byte *)0x0) {
LAB_002a8f84:
                    if (local_338 == 0) goto LAB_002a8f88;
                    local_338 = local_338 + -1;
                    puVar72 = puVar72 + 1;
                    puVar57 = (undefined8 *)*puVar72;
                    pppppppuVar50 = (undefined8 *******)puVar57[1];
                    if (pppppppuVar50 == (undefined8 *******)0x0) goto LAB_002a8f50;
LAB_002a8db8:
                    plVar51 = local_190;
                    pvVar61 = (void *)*puVar57;
                    uVar52 = ((int *)puVar57[2])[2];
                    iVar14 = *(int *)puVar57[2];
                    if (iVar14 != 2) {
                      if (iVar14 == 1) {
                        iVar14 = 100;
                      }
                      else {
                        if (iVar14 != 0) goto LAB_002a8f18;
                        iVar14 = 10000;
                      }
                      uVar52 = uVar52 * iVar14;
                    }
                    uVar3 = uVar52;
                    if (999999 < uVar52) {
                      uVar3 = 1000000;
                    }
                    if ((undefined8 *******)0xffffffffffffffef < pppppppuVar50) {
                    /* try { // try from 002aa608 to 002aa613 has its CatchHandler @ 002aa62c */
                    /* WARNING: Subroutine does not return */
                      std::__basic_string_common<true>::__throw_length_error();
                    }
                    if (pppppppuVar50 < (undefined8 *******)0x17) {
                      local_f8 = (undefined8 *******)
                                 CONCAT71(local_f8._1_7_,(char)((int)pppppppuVar50 << 1));
                      pppppppuVar63 = pppppppuVar47;
                    }
                    else {
                      pppppppuVar63 =
                           (undefined8 *******)
                           FUN_0049e770(PTR_FUN_047cba38,
                                        (ulong)(pppppppuVar50 + 2) & 0xfffffffffffffff0);
                      local_f8 = (undefined8 *******)
                                 ((ulong)(pppppppuVar50 + 2) & 0xfffffffffffffff0 | 1);
                      pppppppuStack_f0 = pppppppuVar50;
                      local_e8[0] = pppppppuVar63;
                    }
                    memcpy(pppppppuVar63,pvVar61,(size_t)pppppppuVar50);
                    local_260 = local_e8[0];
                    local_270 = local_f8;
                    *(undefined1 *)((long)pppppppuVar63 + (long)pppppppuVar50) = 0;
                    local_e8[0] = (undefined8 *******)0x0;
                    local_f8 = (undefined8 *******)0x0;
                    pppppppuStack_268 = pppppppuStack_f0;
                    pppppppuStack_f0 = (undefined8 *******)0x0;
                    /* try { // try from 002a8e98 to 002a8e9f has its CatchHandler @ 002aa988 */
                    local_258 = uVar3;
                    FUN_002b2d84(plVar51 + 2,&local_270);
                    if (((ulong)local_270 & 1) != 0) {
                      FUN_0049e790(PTR_LAB_047cba48,local_260);
                    }
                    puVar64 = PTR_LAB_047cba48;
                    if (999999 < uVar52) {
                      *(undefined1 *)(plVar51 + 0xb) = 1;
                      puVar64 = PTR_LAB_047cba48;
                    }
                    PTR_LAB_047cba48 = puVar64;
                    if (((ulong)local_f8 & 1) != 0) {
                      FUN_0049e790(puVar64,local_e8[0]);
                    }
                    goto LAB_002a8f84;
                  }
                  uVar52 = 1;
                  goto LAB_002a905c;
                }
LAB_002a8f88:
                if ((undefined8 *******)0xffffffffffffffef < pppppppuVar53) {
                    /* try { // try from 002aa614 to 002aa61f has its CatchHandler @ 002aa628 */
                    /* WARNING: Subroutine does not return */
                  std::__basic_string_common<true>::__throw_length_error();
                }
                if (pppppppuVar53 < (undefined8 *******)0x17) {
                  local_270 = (undefined8 *******)
                              CONCAT71(local_270._1_7_,(char)((int)pppppppuVar53 << 1));
                  pppppppuVar50 = (undefined8 *******)((ulong)&local_270 | 1);
                  if (pppppppuVar53 != (undefined8 *******)0x0) goto LAB_002a9010;
                }
                else {
                  pppppppuVar50 =
                       (undefined8 *******)
                       FUN_0049e770(PTR_FUN_047cba38,(ulong)(pppppppuVar53 + 2) & 0xfffffffffffffff0
                                   );
                  local_270 = (undefined8 *******)
                              ((ulong)(pppppppuVar53 + 2) & 0xfffffffffffffff0 | 1);
                  pppppppuStack_268 = pppppppuVar53;
                  local_260 = pppppppuVar50;
LAB_002a9010:
                  memcpy(pppppppuVar50,pvVar71,(size_t)pppppppuVar53);
                }
                *(undefined1 *)((long)pppppppuVar50 + (long)pppppppuVar53) = 0;
                    /* try { // try from 002a9024 to 002a9037 has its CatchHandler @ 002aa948 */
                FUN_002b2ee0(param_10,&local_270,&local_270,&local_1c8);
                if (((ulong)local_270 & 1) != 0) {
                  FUN_0049e790(puVar64,local_260);
                }
                uVar52 = 0;
                param_3 = pbVar54;
              }
              else {
                if (-1 < iVar14) goto LAB_002a85e8;
LAB_002a8c8c:
                uVar52 = 4;
LAB_002a905c:
              }
            }
          }
        }
        else {
                    /* try { // try from 002a8400 to 002a842b has its CatchHandler @ 002aab94 */
          FUN_003673f0(&local_270,"Resource is not EDS.");
          param_3 = (byte *)FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                         ,0x69a,&local_270,0,0);
LAB_002a842c:
          uVar52 = 1;
        }
        plVar51 = local_190;
        if (local_190 != (long *)0x0) {
          plVar60 = local_190 + 1;
          do {
            lVar37 = *plVar60;
            cVar5 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar60,0x10);
            if (bVar13) {
              *plVar60 = lVar37 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar37 + -1 == 0) {
            (**(code **)*local_190)(local_190);
            FUN_0049e790(puVar64,plVar51);
          }
        }
        uVar21 = (ulong)local_1c8 & 1;
        pppppppuVar53 = &local_1c0;
        if (uVar21 != 0) {
          pppppppuVar53 = local_1c0;
        }
        uVar39 = (ulong)local_1c8 >> 1;
        if ((uVar39 != 0) && (pppppppuVar53 != (undefined8 *******)0x0)) {
          pppppppuVar53 = pppppppuVar53 + uVar39 * 3;
          do {
            uVar39 = uVar39 - 1;
            FUN_0028bf34(pppppppuVar53 + -3,pppppppuVar53[-2]);
            pppppppuVar53 = pppppppuVar53 + -3;
          } while (uVar39 != 0);
          uVar21 = (ulong)local_1c8 & 1;
        }
        if (uVar21 != 0) {
          FUN_0049e790(puVar64,local_1c0);
        }
        if ((uVar52 | 4) != 4) goto LAB_002a7180;
        uVar19 = uVar19 + 1;
      } while (uVar19 != uVar17);
    }
  }
  else {
    uVar17 = param_13[1];
    if (sVar18 != uVar17) {
      pcVar48 = *(char **)PTR_PTR_047cc6f8;
      sVar18 = strlen(pcVar48);
      if (sVar18 == uVar17) {
LAB_002a7488:
        if (uVar17 == 0xffffffffffffffff) {
                    /* try { // try from 002aa5a0 to 002aa5a7 has its CatchHandler @ 002aa690 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_out_of_range();
        }
        pbVar54 = (byte *)param_13[2];
joined_r0x002a749c:
        if ((uVar17 != 0) && (iVar14 = memcmp(pbVar54,pcVar48,uVar17), iVar14 != 0)) {
          pcVar48 = *(char **)PTR_PTR_047cc700;
          sVar18 = strlen(pcVar48);
          if ((bVar70 & 1) == 0) {
            uVar17 = (ulong)(bVar70 >> 1);
            if (sVar18 != uVar17) goto LAB_002a74d4;
            goto LAB_002a7300;
          }
          uVar17 = param_13[1];
          if (sVar18 == uVar17) goto LAB_002a76e4;
          goto LAB_002a8270;
        }
        puVar26 = *(ulong **)(lVar16 + 0x40);
        if ((puVar26 != (ulong *)0x0) && (uVar17 = puVar26[1], uVar17 != 0)) {
          uVar19 = *puVar26;
          puVar57 = *(undefined8 **)(uVar19 & 0xfffffffffffffff8);
          lVar66 = *(long *)(param_1 + 8);
          sVar59 = puVar57[1];
          sVar18 = strlen(pcVar48);
          if (sVar59 == sVar18) {
            plVar51 = (long *)(param_4 + 8);
            uVar67 = 0;
            puVar58 = PTR_PTR_047cc718;
            do {
              iVar14 = memcmp((void *)*puVar57,pcVar48,sVar59);
              if (iVar14 != 0) break;
              uVar24 = puVar57[2];
              uVar4 = puVar57[3];
                    /* try { // try from 002a755c to 002a7587 has its CatchHandler @ 002aab8c */
              lVar16 = FUN_0038ad50(puVar58,lVar15);
              if ((lVar16 == 0) ||
                 (uVar21 = FUN_00385610(uVar24,uVar4,lVar16,puVar58,lVar15), (uVar21 & 1) == 0)) {
                FUN_003673f0(&local_270,"Can\'t decode route_config.");
                param_3 = (byte *)FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                               ,0x5bb,&local_270,0,0);
                goto LAB_002a7180;
              }
              plVar60 = (long *)*plVar51;
              if (plVar60 != (long *)0x0) {
                pvVar71 = *(void **)(lVar16 + 8);
                uVar21 = *(ulong *)(lVar16 + 0x10);
                plVar49 = plVar51;
                do {
                  uVar39 = plVar60[5];
                  sVar18 = uVar39;
                  if (uVar21 <= uVar39) {
                    sVar18 = uVar21;
                  }
                  if ((sVar18 == 0) ||
                     (iVar14 = memcmp((void *)plVar60[4],pvVar71,sVar18), iVar14 == 0)) {
                    iVar25 = (uint)(uVar21 < uVar39) - (uint)(uVar39 < uVar21);
                  }
                  else {
                    iVar25 = -1;
                    if (-1 < iVar14) {
                      iVar25 = 1;
                    }
                  }
                  puVar58 = PTR_PTR_047cc718;
                  if (iVar25 >= 0) {
                    plVar49 = plVar60;
                  }
                  plVar60 = (long *)plVar60[iVar25 < 0];
                } while (plVar60 != (long *)0x0);
                if (plVar49 != plVar51) {
                  uVar39 = plVar49[5];
                  sVar18 = uVar21;
                  if (uVar39 <= uVar21) {
                    sVar18 = uVar39;
                  }
                  if ((sVar18 == 0) ||
                     (iVar14 = memcmp(pvVar71,(void *)plVar49[4],sVar18), iVar14 == 0)) {
                    if (uVar21 < uVar39) goto LAB_002a7650;
                  }
                  else if (iVar14 < 0) goto LAB_002a7650;
                  local_270 = (undefined8 *******)0x0;
                  pppppppuStack_268 = (undefined8 *******)0x0;
                  local_260 = (undefined8 *******)0x0;
                    /* try { // try from 002a9e58 to 002a9e67 has its CatchHandler @ 002aa90c */
                  param_3 = (byte *)FUN_002add50(*(undefined1 *)(lVar66 + 0x10),lVar16,param_3,
                                                 &local_270);
                  pppppppuVar47 = local_270;
                  if (param_3 == (byte *)0x0) {
                    if (*param_8 != '\0') {
                      lVar66 = *(long *)(param_8 + 8);
                      if (lVar66 != 0) {
                        lVar16 = *(long *)(param_8 + 0x10);
                        if (lVar16 == lVar66) {
                          lVar16 = lVar66;
                        }
                        else {
                          do {
                            lVar16 = lVar16 + -0x78;
                            FUN_002b0bc8(lVar16);
                          } while (lVar66 != lVar16);
                          lVar16 = *(long *)(param_8 + 8);
                        }
                        *(long *)(param_8 + 0x10) = lVar66;
                        FUN_0049e790(PTR_LAB_047cba48,lVar16);
                      }
                      *param_8 = '\0';
                    }
                    param_3 = (byte *)0x0;
                    *(undefined8 ********)(param_8 + 0x10) = pppppppuStack_268;
                    *(undefined8 ********)(param_8 + 8) = local_270;
                    *(undefined8 ********)(param_8 + 0x18) = local_260;
                    local_260 = (undefined8 *******)0x0;
                    local_270 = (undefined8 *******)0x0;
                    pppppppuStack_268 = (undefined8 *******)0x0;
                    *param_8 = '\x01';
                    goto LAB_002a7180;
                  }
                  pppppppuVar53 = pppppppuStack_268;
                  if (local_270 != (undefined8 *******)0x0) goto joined_r0x002a9e84;
                  goto LAB_002a7180;
                }
              }
LAB_002a7650:
              uVar67 = uVar67 + 1;
              if (uVar67 == uVar17) goto LAB_002a9d24;
              pcVar48 = *(char **)PTR_PTR_047cc6f8;
              puVar57 = (undefined8 *)((undefined8 *)(uVar19 & 0xfffffffffffffff8))[uVar67];
              sVar59 = puVar57[1];
              sVar18 = strlen(pcVar48);
            } while (sVar59 == sVar18);
          }
                    /* try { // try from 002a7680 to 002a76af has its CatchHandler @ 002aaad4 */
          FUN_003673f0(&local_270,"Resource is not RDS.");
          param_3 = (byte *)FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                         ,0x5b2,&local_270,0,0);
          goto LAB_002a7180;
        }
        goto LAB_002a9d24;
      }
LAB_002a76c4:
      pcVar48 = *(char **)PTR_PTR_047cc700;
      sVar18 = strlen(pcVar48);
      param_3 = param_6;
      if (sVar18 == uVar17) {
LAB_002a76e4:
        if (uVar17 == 0xffffffffffffffff) {
                    /* try { // try from 002aa5a8 to 002aa5af has its CatchHandler @ 002aa68c */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_out_of_range();
        }
        pbVar54 = (byte *)param_13[2];
joined_r0x002a76f0:
        if ((uVar17 == 0) || (iVar14 = memcmp(pbVar54,pcVar48,uVar17), iVar14 == 0)) {
          puVar26 = *(ulong **)(lVar16 + 0x40);
          if (puVar26 == (ulong *)0x0) goto LAB_002a9d24;
          uVar17 = puVar26[1];
          if (uVar17 != 0) {
            lVar66 = *(long *)(param_1 + 8);
            uVar19 = *puVar26;
            uStack_180 = 0;
            uStack_188 = 0;
            local_182 = 0;
            uStack_181 = 0;
            local_110 = 0;
            uStack_10f = 0;
            uStack_109 = 0;
            uStack_108 = 0;
            puVar57 = *(undefined8 **)(uVar19 & 0xfffffffffffffff8);
            sVar59 = puVar57[1];
            sVar18 = strlen(pcVar48);
            pppppuVar78 = _UNK_03cab718;
            pppppuVar46 = _DAT_03cab710;
            if (sVar59 == sVar18) {
              pppppppuVar47 = (undefined8 *******)((ulong)&local_270 | 1);
              uVar67 = 0;
              plVar51 = (long *)(param_5 + 8);
              puVar58 = PTR_PTR_047cc720;
              do {
                iVar14 = memcmp((void *)*puVar57,pcVar48,sVar59);
                if (iVar14 != 0) break;
                uVar24 = puVar57[2];
                uVar4 = puVar57[3];
                    /* try { // try from 002a77dc to 002a7807 has its CatchHandler @ 002aaad0 */
                piVar20 = (int *)FUN_0038ad50(puVar58,lVar15);
                if ((piVar20 == (int *)0x0) ||
                   (uVar21 = FUN_00385610(uVar24,uVar4,piVar20,puVar58,lVar15), (uVar21 & 1) == 0))
                {
                    /* try { // try from 002a9dc4 to 002a9def has its CatchHandler @ 002aaa9c */
                  FUN_003673f0(&local_270,"Can\'t decode cluster.");
                  param_3 = (byte *)FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                                 ,0x5e7,&local_270,0,0);
                  goto LAB_002a7180;
                }
                    /* try { // try from 002a7c18 to 002a7c1f has its CatchHandler @ 002aaad0 */
                if ((*(char *)(lVar66 + 0x10) != '\0') && (iVar14 = FUN_0038c970(0), iVar14 != 0)) {
                  local_168 = (undefined8 ******)0x0;
                  local_170 = (undefined8 ******)0x0;
                  local_160 = (undefined8 ******)0x0;
                  if (*(undefined8 ********)(piVar20 + 10) != (undefined8 *******)0x0) {
                    local_f8 = *(undefined8 ********)(piVar20 + 8);
                    local_270 = (undefined8 *******)&DAT_03c1dc5b;
                    pppppppuStack_268 = (undefined8 *******)0x4;
                    local_1c8 = &DAT_03c246d6;
                    local_318 = (undefined8 *******)&DAT_03c751d8;
                    local_310 = 3;
                    local_1c0 = (undefined8 *******)0x1;
                    /* try { // try from 002a7c7c to 002a7c93 has its CatchHandler @ 002aa6d8 */
                    pppppppuStack_f0 = *(undefined8 ********)(piVar20 + 10);
                    FUN_00395b50(&local_140,&local_270,&local_318,&local_f8,&local_1c8);
                    /* try { // try from 002a7c94 to 002a7c9f has its CatchHandler @ 002aa6c4 */
                    FUN_002acaf4(&local_170,&local_140);
                    if (((ulong)local_140 & 1) != 0) {
                      FUN_0049e790(PTR_LAB_047cba48,local_130);
                    }
                  }
                  if (piVar20[0x4e] == 0x26) {
                    /* try { // try from 002a7d2c to 002a7d4f has its CatchHandler @ 002aa700 */
                    FUN_002b165c(&local_170,"cluster_type: <not printed>");
                  }
                  else if (piVar20[0x4e] == 2) {
                    local_270 = (undefined8 *******)0x3c24be9;
                    pppppppuStack_268 = (undefined8 *******)0x6;
                    /* try { // try from 002a7ce0 to 002a7d03 has its CatchHandler @ 002aa704 */
                    lVar16 = FUN_00394c20(piVar20[0x4c],local_308);
                    local_310 = lVar16 - (long)local_308;
                    local_318 = local_308;
                    FUN_003959c0(&local_f8,&local_270,&local_318);
                    /* try { // try from 002a7d04 to 002a7d0f has its CatchHandler @ 002aa6c0 */
                    FUN_002acaf4(&local_170,&local_f8);
                    if (((ulong)local_f8 & 1) != 0) {
                      FUN_0049e790(PTR_LAB_047cba48,local_e8[0]);
                    }
                  }
                  else {
                    FUN_002ac830(&local_170,"<unknown type>");
                  }
                  puVar57 = *(undefined8 **)(piVar20 + 0x10);
                  if (puVar57 != (undefined8 *)0x0) {
                    /* try { // try from 002a7d58 to 002a7d67 has its CatchHandler @ 002aa6bc */
                    FUN_002b1fec(&local_170,"eds_cluster_config {");
                    ppppppuVar27 = local_168;
                    if (puVar57[2] != 0) {
                      if (*(int *)(puVar57[2] + 0x20) == 3) {
                        if (local_168 < local_160) {
                          pppppuVar22 = (undefined8 *****)FUN_0049e770(PTR_FUN_047cba38,0x20);
                          uVar4 = s_eds_config___ads______03be6603._0_8_;
                          ppppuVar7 = (undefined8 ****)
                                      CONCAT17(s_eds_config___ads______03be6603[0xf],
                                               s_eds_config___ads______03be6603._8_7_);
                          ppppppuVar27[2] = pppppuVar22;
                          uVar24 = CONCAT71(s_eds_config___ads______03be6603._16_7_,
                                            s_eds_config___ads______03be6603[0xf]);
                          ppppppuVar27[1] = pppppuVar78;
                          *ppppppuVar27 = pppppuVar46;
                          *(undefined8 *)((long)pppppuVar22 + 0xf) = uVar24;
                          local_168 = ppppppuVar27 + 3;
                          *(char *)((long)pppppuVar22 + 0x17) = '\0';
                          pppppuVar22[1] = ppppuVar7;
                          *pppppuVar22 = (undefined8 ****)uVar4;
                        }
                        else {
                          lVar16 = (long)local_168 - (long)local_170 >> 3;
                          uVar21 = lVar16 * -0x5555555555555555 + 1;
                          if (0xaaaaaaaaaaaaaaa < uVar21) {
                    /* try { // try from 002aa5b8 to 002aa5bf has its CatchHandler @ 002aa684 */
                    /* WARNING: Subroutine does not return */
                            std::__vector_base_common<true>::__throw_length_error();
                          }
                          lVar34 = (long)local_160 - (long)local_170 >> 3;
                          uVar39 = lVar34 * 0x5555555555555556;
                          if (uVar21 <= uVar39) {
                            uVar21 = uVar39;
                          }
                          if (0x555555555555554 < (ulong)(lVar34 * -0x5555555555555555)) {
                            uVar21 = 0xaaaaaaaaaaaaaaa;
                          }
                          if (uVar21 == 0) {
                            lVar34 = 0;
                          }
                          else {
                            lVar34 = FUN_0049e770(PTR_FUN_047cba38,uVar21 * 0x18);
                          }
                          ppppppuVar68 = (undefined8 ******)(lVar34 + lVar16 * 8);
                          ppppppuVar40 = (undefined8 ******)(lVar34 + uVar21 * 0x18);
                          pppppuVar22 = (undefined8 *****)FUN_0049e770(PTR_FUN_047cba38,0x20);
                          ppppppuVar35 = local_170;
                          ppppppuVar68[1] = pppppuVar78;
                          *ppppppuVar68 = pppppuVar46;
                          uVar4 = s_eds_config___ads______03be6603._0_8_;
                          ppppuVar7 = (undefined8 ****)
                                      CONCAT17(s_eds_config___ads______03be6603[0xf],
                                               s_eds_config___ads______03be6603._8_7_);
                          uVar24 = CONCAT71(s_eds_config___ads______03be6603._16_7_,
                                            s_eds_config___ads______03be6603[0xf]);
                          ppppppuVar68[2] = pppppuVar22;
                          *(undefined8 *)((long)pppppuVar22 + 0xf) = uVar24;
                          *(char *)((long)pppppuVar22 + 0x17) = '\0';
                          ppppppuVar27 = ppppppuVar68 + 3;
                          pppppuVar22[1] = ppppuVar7;
                          *pppppuVar22 = (undefined8 ****)uVar4;
                          ppppppuVar36 = local_168;
                          if (local_168 == local_170) {
                            local_168 = local_170;
                          }
                          else {
                            do {
                              pppppuVar76 = ppppppuVar36[-2];
                              pppppuVar22 = ppppppuVar36[-3];
                              ppppppuVar68[-1] = ppppppuVar36[-1];
                              ppppppuVar68[-2] = pppppuVar76;
                              ppppppuVar68[-3] = pppppuVar22;
                              ppppppuVar36[-3] = (undefined8 *****)0x0;
                              ppppppuVar36[-2] = (undefined8 *****)0x0;
                              ppppppuVar36[-1] = (undefined8 *****)0x0;
                              ppppppuVar36 = ppppppuVar36 + -3;
                              ppppppuVar68 = ppppppuVar68 + -3;
                            } while (local_170 != ppppppuVar36);
                          }
                          bVar13 = local_168 != local_170;
                          local_170 = ppppppuVar68;
                          local_160 = ppppppuVar40;
                          if (bVar13) {
                            ppppppuVar36 = local_168;
                            local_168 = ppppppuVar27;
                            do {
                              ppppppuVar40 = ppppppuVar36 + -3;
                              if (((ulong)*ppppppuVar40 & 1) != 0) {
                                FUN_0049e790(PTR_LAB_047cba48,ppppppuVar36[-1]);
                              }
                              ppppppuVar36 = ppppppuVar40;
                              ppppppuVar27 = local_168;
                            } while (ppppppuVar35 != ppppppuVar40);
                          }
                          local_168 = ppppppuVar27;
                          if (ppppppuVar35 != (undefined8 ******)0x0) {
                            FUN_0049e790(PTR_LAB_047cba48,ppppppuVar35);
                          }
                        }
                      }
                      else {
                    /* try { // try from 002a7dd0 to 002a7ddf has its CatchHandler @ 002aa6fc */
                        FUN_002b22b0(&local_170,"  eds_config: <non-ADS type>");
                      }
                    }
                    if ((undefined8 *******)puVar57[1] != (undefined8 *******)0x0) {
                      local_f8 = (undefined8 *******)*puVar57;
                      local_270 = (undefined8 *******)0x3c32712;
                      pppppppuStack_268 = (undefined8 *******)0xe;
                      local_1c8 = &DAT_03c246d6;
                      local_318 = (undefined8 *******)&DAT_03c751d8;
                      local_310 = 3;
                      local_1c0 = (undefined8 *******)0x1;
                    /* try { // try from 002a7f98 to 002a7faf has its CatchHandler @ 002aa6b8 */
                      pppppppuStack_f0 = (undefined8 *******)puVar57[1];
                      FUN_00395b50(&local_140,&local_270,&local_318,&local_f8,&local_1c8);
                    /* try { // try from 002a7fb0 to 002a7fbb has its CatchHandler @ 002aa6b4 */
                      FUN_002acaf4(&local_170,&local_140);
                      if (((ulong)local_140 & 1) != 0) {
                        FUN_0049e790(PTR_LAB_047cba48,local_130);
                      }
                    }
                    /* try { // try from 002a7fd4 to 002a7fdb has its CatchHandler @ 002aa6fc */
                    FUN_002acca0(&local_170);
                  }
                  local_270 = (undefined8 *******)0x3bf3b47;
                  pppppppuStack_268 = (undefined8 *******)0xb;
                    /* try { // try from 002a7ff0 to 002a8013 has its CatchHandler @ 002aa73c */
                  lVar16 = FUN_00394c20(*piVar20,local_308);
                  local_310 = lVar16 - (long)local_308;
                  local_318 = local_308;
                  FUN_003959c0(&local_f8,&local_270,&local_318);
                    /* try { // try from 002a8014 to 002a801f has its CatchHandler @ 002aa6dc */
                  FUN_002acaf4(&local_170,&local_f8);
                  if (((ulong)local_f8 & 1) != 0) {
                    FUN_0049e790(PTR_LAB_047cba48,local_e8[0]);
                  }
                  if (*(long *)(piVar20 + 0x38) != 0) {
                    if (*(int *)(*(long *)(piVar20 + 0x38) + 0x20) == 5) {
                      if (local_168 < local_160) {
                        *(byte *)local_168 = 0x2c;
                        uVar4 = s_lrs_server___self______03be6638._0_8_;
                        uVar24 = CONCAT26(s_lrs_server___self______03be6638._14_2_,
                                          s_lrs_server___self______03be6638._8_6_);
                        *(ulong *)((long)local_168 + 0xf) =
                             CONCAT62(s_lrs_server___self______03be6638._16_6_,
                                      s_lrs_server___self______03be6638._14_2_);
                        *(byte *)((long)local_168 + 0x17) = 0;
                        *(undefined8 *)((long)local_168 + 9) = uVar24;
                        *(undefined8 *)((long)local_168 + 1) = uVar4;
                        local_168 = local_168 + 3;
                      }
                      else {
                        lVar16 = (long)local_168 - (long)local_170 >> 3;
                        uVar21 = lVar16 * -0x5555555555555555 + 1;
                        if (0xaaaaaaaaaaaaaaa < uVar21) {
                    /* try { // try from 002aa5c0 to 002aa5c7 has its CatchHandler @ 002aa680 */
                    /* WARNING: Subroutine does not return */
                          std::__vector_base_common<true>::__throw_length_error();
                        }
                        lVar34 = (long)local_160 - (long)local_170 >> 3;
                        uVar39 = lVar34 * 0x5555555555555556;
                        if (uVar21 <= uVar39) {
                          uVar21 = uVar39;
                        }
                        if (0x555555555555554 < (ulong)(lVar34 * -0x5555555555555555)) {
                          uVar21 = 0xaaaaaaaaaaaaaaa;
                        }
                        if (uVar21 == 0) {
                          lVar34 = 0;
                        }
                        else {
                          lVar34 = FUN_0049e770(PTR_FUN_047cba38,uVar21 * 0x18);
                        }
                        ppppppuVar35 = local_170;
                        uVar4 = s_lrs_server___self______03be6638._0_8_;
                        ppppppuVar40 = (undefined8 ******)(lVar34 + lVar16 * 8);
                        local_160 = (undefined8 ******)(lVar34 + uVar21 * 0x18);
                        uVar24 = CONCAT26(s_lrs_server___self______03be6638._14_2_,
                                          s_lrs_server___self______03be6638._8_6_);
                        *(ulong *)((long)ppppppuVar40 + 0xf) =
                             CONCAT62(s_lrs_server___self______03be6638._16_6_,
                                      s_lrs_server___self______03be6638._14_2_);
                        *(undefined8 *)((long)ppppppuVar40 + 9) = uVar24;
                        *(undefined8 *)((long)ppppppuVar40 + 1) = uVar4;
                        *(byte *)ppppppuVar40 = 0x2c;
                        *(byte *)((long)ppppppuVar40 + 0x17) = 0;
                        ppppppuVar27 = ppppppuVar40 + 3;
                        ppppppuVar36 = local_168;
                        if (local_168 == local_170) {
                          local_168 = local_170;
                        }
                        else {
                          do {
                            pppppuVar76 = ppppppuVar36[-2];
                            pppppuVar22 = ppppppuVar36[-3];
                            ppppppuVar40[-1] = ppppppuVar36[-1];
                            ppppppuVar40[-2] = pppppuVar76;
                            ppppppuVar40[-3] = pppppuVar22;
                            ppppppuVar36[-3] = (undefined8 *****)0x0;
                            ppppppuVar36[-2] = (undefined8 *****)0x0;
                            ppppppuVar36[-1] = (undefined8 *****)0x0;
                            ppppppuVar36 = ppppppuVar36 + -3;
                            ppppppuVar40 = ppppppuVar40 + -3;
                          } while (local_170 != ppppppuVar36);
                        }
                        bVar13 = local_168 != local_170;
                        local_170 = ppppppuVar40;
                        if (bVar13) {
                          ppppppuVar36 = local_168;
                          local_168 = ppppppuVar27;
                          do {
                            ppppppuVar40 = ppppppuVar36 + -3;
                            if (((ulong)*ppppppuVar40 & 1) != 0) {
                              FUN_0049e790(PTR_LAB_047cba48,ppppppuVar36[-1]);
                            }
                            ppppppuVar36 = ppppppuVar40;
                            ppppppuVar27 = local_168;
                          } while (ppppppuVar35 != ppppppuVar40);
                        }
                        local_168 = ppppppuVar27;
                        if (ppppppuVar35 != (undefined8 ******)0x0) {
                          FUN_0049e790(PTR_LAB_047cba48,ppppppuVar35);
                        }
                      }
                    }
                    else {
                    /* try { // try from 002a8090 to 002a809f has its CatchHandler @ 002aa6b0 */
                      FUN_002b165c(&local_170,"lrs_server: <non-self type>");
                    }
                  }
                  ppppppuVar27 = local_170;
                  if (local_170 != (undefined8 ******)0x0) {
                    if (local_168 != local_170) {
                      ppppppuVar35 = local_168;
                      do {
                        ppppppuVar36 = ppppppuVar35 + -3;
                        if (((ulong)*ppppppuVar36 & 1) != 0) {
                          FUN_0049e790(PTR_LAB_047cba48,ppppppuVar35[-1]);
                        }
                        ppppppuVar35 = ppppppuVar36;
                      } while (ppppppuVar27 != ppppppuVar36);
                    }
                    local_168 = ppppppuVar27;
                    FUN_0049e790(PTR_LAB_047cba48,local_170);
                  }
                }
                plVar60 = (long *)*plVar51;
                if (plVar60 == (long *)0x0) {
LAB_002a791c:
                  puVar58 = PTR_PTR_047cc720;
                }
                else {
                  pvVar71 = *(void **)(piVar20 + 8);
                  pppppppuVar53 = *(undefined8 ********)(piVar20 + 10);
                  plVar49 = plVar51;
                  do {
                    pppppppuVar63 = (undefined8 *******)plVar60[5];
                    pppppppuVar50 = pppppppuVar63;
                    if (pppppppuVar53 <= pppppppuVar63) {
                      pppppppuVar50 = pppppppuVar53;
                    }
                    if ((pppppppuVar50 == (undefined8 *******)0x0) ||
                       (iVar14 = memcmp((void *)plVar60[4],pvVar71,(size_t)pppppppuVar50),
                       iVar14 == 0)) {
                      iVar25 = (uint)(pppppppuVar53 < pppppppuVar63) -
                               (uint)(pppppppuVar63 < pppppppuVar53);
                    }
                    else {
                      iVar25 = -1;
                      if (-1 < iVar14) {
                        iVar25 = 1;
                      }
                    }
                    if (iVar25 >= 0) {
                      plVar49 = plVar60;
                    }
                    plVar60 = (long *)plVar60[iVar25 < 0];
                  } while (plVar60 != (long *)0x0);
                  if (plVar49 == plVar51) goto LAB_002a791c;
                  pppppppuVar63 = (undefined8 *******)plVar49[5];
                  pppppppuVar50 = pppppppuVar53;
                  if (pppppppuVar63 <= pppppppuVar53) {
                    pppppppuVar50 = pppppppuVar63;
                  }
                  if ((pppppppuVar50 == (undefined8 *******)0x0) ||
                     (iVar14 = memcmp(pvVar71,(void *)plVar49[4],(size_t)pppppppuVar50), iVar14 == 0
                     )) {
                    if (pppppppuVar53 < pppppppuVar63) goto LAB_002a791c;
                  }
                  else if (iVar14 < 0) goto LAB_002a791c;
                  if (piVar20[0x4e] != 2) {
                    /* try { // try from 002aa000 to 002aa02f has its CatchHandler @ 002aa8b0 */
                    FUN_003673f0(&local_270,"DiscoveryType not found.");
                    param_3 = (byte *)FUN_00351340(
                                                  "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                                  ,0x5f4,&local_270,0,0);
                    goto LAB_002a7180;
                  }
                  if (piVar20[0x4c] != 3) {
                    /* try { // try from 002aa034 to 002aa05f has its CatchHandler @ 002aa8ac */
                    FUN_003673f0(&local_270,"DiscoveryType is not EDS.");
                    param_3 = (byte *)FUN_00351340(
                                                  "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                                  ,0x5f7,&local_270,0,0);
                    goto LAB_002a7180;
                  }
                  puVar57 = *(undefined8 **)(piVar20 + 0x10);
                  if (*(int *)(puVar57[2] + 0x20) != 3) {
                    /* try { // try from 002aa064 to 002aa08f has its CatchHandler @ 002aa8a8 */
                    FUN_003673f0(&local_270,"EDS ConfigSource is not ADS.");
                    param_3 = (byte *)FUN_00351340(
                                                  "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                                  ,0x600,&local_270,0,0);
                    goto LAB_002a7180;
                  }
                  pppppppuVar50 = (undefined8 *******)puVar57[1];
                  if (pppppppuVar50 == (undefined8 *******)0x0) {
                    pppppppuVar50 = (undefined8 *******)0x0;
                    bVar70 = 0;
                  }
                  else {
                    if ((undefined8 *******)0xffffffffffffffef < pppppppuVar50) {
                    /* try { // try from 002aa5c8 to 002aa5cf has its CatchHandler @ 002aa67c */
                    /* WARNING: Subroutine does not return */
                      std::__basic_string_common<true>::__throw_length_error();
                    }
                    pvVar61 = (void *)*puVar57;
                    if (pppppppuVar50 < (undefined8 *******)0x17) {
                      local_270 = (undefined8 *******)
                                  CONCAT71(local_270._1_7_,(char)((int)pppppppuVar50 << 1));
                      pppppppuVar63 = pppppppuVar47;
                    }
                    else {
                      pppppppuVar63 =
                           (undefined8 *******)
                           FUN_0049e770(PTR_FUN_047cba38,
                                        (ulong)(pppppppuVar50 + 2) & 0xfffffffffffffff0);
                      local_270 = (undefined8 *******)
                                  ((ulong)(pppppppuVar50 + 2) & 0xfffffffffffffff0 | 1);
                      pppppppuStack_268 = pppppppuVar50;
                      local_260 = pppppppuVar63;
                    }
                    memcpy(pppppppuVar63,pvVar61,(size_t)pppppppuVar50);
                    *(undefined1 *)((long)pppppppuVar63 + (long)pppppppuVar50) = 0;
                    ppppppuVar27 = *pppppppuVar47;
                    uStack_108 = (undefined7)((ulong)*(undefined8 *)((long)pppppppuVar47 + 7) >> 8);
                    local_110 = (byte)ppppppuVar27;
                    uStack_10f = (undefined6)((ulong)ppppppuVar27 >> 8);
                    uStack_109 = (undefined1)((ulong)ppppppuVar27 >> 0x38);
                    pppppppuVar50 = local_260;
                    bVar70 = (byte)local_270;
                  }
                  if (*piVar20 == 0) {
                    if (*(long *)(piVar20 + 0x38) == 0) {
                      bVar13 = true;
                    }
                    else {
                      if (*(int *)(*(long *)(piVar20 + 0x38) + 0x20) != 5) {
                    /* try { // try from 002a7be8 to 002a7c13 has its CatchHandler @ 002aa964 */
                        FUN_003673f0(&local_270,"LRS ConfigSource is not self.");
                        param_3 = (byte *)FUN_00351340(
                                                  "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                                  ,0x614,&local_270,0,0);
                        goto LAB_002a7a1c;
                      }
                      bVar13 = false;
                    }
                    if ((undefined8 *******)0xffffffffffffffef < pppppppuVar53) {
                    /* try { // try from 002aa5d0 to 002aa5d7 has its CatchHandler @ 002aa678 */
                    /* WARNING: Subroutine does not return */
                      std::__basic_string_common<true>::__throw_length_error();
                    }
                    if (pppppppuVar53 < (undefined8 *******)0x17) {
                      local_270 = (undefined8 *******)
                                  CONCAT71(local_270._1_7_,(char)((int)pppppppuVar53 << 1));
                      pppppppuVar63 = pppppppuVar47;
                      if (pppppppuVar53 != (undefined8 *******)0x0) goto LAB_002a7aa4;
                    }
                    else {
                      pppppppuVar63 =
                           (undefined8 *******)
                           FUN_0049e770(PTR_FUN_047cba38,
                                        (ulong)(pppppppuVar53 + 2) & 0xfffffffffffffff0);
                      local_270 = (undefined8 *******)
                                  ((ulong)(pppppppuVar53 + 2) & 0xfffffffffffffff0 | 1);
                      pppppppuStack_268 = pppppppuVar53;
                      local_260 = pppppppuVar63;
LAB_002a7aa4:
                      memcpy(pppppppuVar63,pvVar71,(size_t)pppppppuVar53);
                    }
                    *(undefined1 *)((long)pppppppuVar63 + (long)pppppppuVar53) = 0;
                    /* try { // try from 002a7ab8 to 002a7ac7 has its CatchHandler @ 002aa968 */
                    plVar60 = (long *)FUN_002b2574(param_9,&local_318,&local_270);
                    puVar58 = PTR_PTR_047cc720;
                    if (*plVar60 == 0) {
                      puVar57 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x70);
                      puVar57[6] = local_260;
                      puVar57[5] = pppppppuStack_268;
                      puVar57[4] = local_270;
                      pppppppuStack_268 = (undefined8 *******)0x0;
                      local_260 = (undefined8 *******)0x0;
                      local_270 = (undefined8 *******)0x0;
                      *(byte *)(puVar57 + 7) = bVar70;
                      puVar57[8] = CONCAT71(uStack_108,uStack_109);
                      puVar57[9] = pppppppuVar50;
                      *(ulong *)((long)puVar57 + 0x39) =
                           CONCAT17(uStack_109,CONCAT61(uStack_10f,local_110));
                      local_110 = 0;
                      uStack_10f = 0;
                      uStack_109 = 0;
                      uStack_108 = 0;
                      puVar57[0xb] = 0;
                      puVar57[10] = 0;
                      puVar57[0xd] = 0;
                      puVar57[0xc] = 0;
                      if (!bVar13) {
                        *(undefined2 *)(puVar57 + 0xb) = 0;
                        puVar57[0xc] = CONCAT62(uStack_180,CONCAT11(uStack_181,local_182));
                        puVar57[0xd] = 0;
                        *(ulong *)((long)puVar57 + 0x5a) =
                             CONCAT17(uStack_181,CONCAT16(local_182,uStack_188));
                        uStack_180 = 0;
                        uStack_188 = 0;
                        local_182 = 0;
                        uStack_181 = 0;
                        *(undefined1 *)(puVar57 + 10) = 1;
                      }
                      *puVar57 = 0;
                      puVar57[1] = 0;
                      puVar57[2] = local_318;
                      *plVar60 = (long)puVar57;
                      if (*(long *)*param_9 != 0) {
                        *param_9 = *(long *)*param_9;
                        puVar57 = (undefined8 *)*plVar60;
                      }
                      FUN_010108e0(param_9[1],puVar57);
                      pppppppuVar50 = (undefined8 *******)0x0;
                      bVar70 = 0;
                      param_9[2] = param_9[2] + 1;
                    }
                    if (((ulong)local_270 & 1) != 0) {
                      FUN_0049e790(PTR_LAB_047cba48,local_260);
                    }
                    bVar13 = true;
                  }
                  else {
                    /* try { // try from 002a79f0 to 002a7a1b has its CatchHandler @ 002aaaa4 */
                    FUN_003673f0(&local_270,"LB policy is not ROUND_ROBIN.");
                    param_3 = (byte *)FUN_00351340(
                                                  "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                                  ,0x60c,&local_270,0,0);
LAB_002a7a1c:
                    bVar13 = false;
                    puVar58 = PTR_PTR_047cc720;
                  }
                  if ((bVar70 & 1) != 0) {
                    FUN_0049e790(PTR_LAB_047cba48,pppppppuVar50);
                  }
                  if (!bVar13) goto LAB_002a7180;
                }
                uVar67 = uVar67 + 1;
                if (uVar67 == uVar17) goto LAB_002a9d1c;
                pcVar48 = *(char **)PTR_PTR_047cc700;
                uStack_180 = 0;
                local_110 = 0;
                uStack_10f = 0;
                uStack_109 = 0;
                uStack_108 = 0;
                uStack_188 = 0;
                local_182 = 0;
                uStack_181 = 0;
                puVar57 = (undefined8 *)((undefined8 *)(uVar19 & 0xfffffffffffffff8))[uVar67];
                sVar59 = puVar57[1];
                sVar18 = strlen(pcVar48);
              } while (sVar59 == sVar18);
            }
                    /* try { // try from 002a9d30 to 002a9d5b has its CatchHandler @ 002aaac0 */
            FUN_003673f0(&local_270,"Resource is not CDS.");
            param_3 = (byte *)FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                           ,0x5e0,&local_270,0,0);
            goto LAB_002a7180;
          }
          goto LAB_002a9d1c;
        }
        pcVar48 = *(char **)PTR_PTR_047cc710;
        sVar18 = strlen(pcVar48);
        if ((bVar70 & 1) == 0) {
          uVar17 = (ulong)(bVar70 >> 1);
          if (sVar18 == uVar17) goto LAB_002a7728;
        }
        else {
          uVar17 = param_13[1];
          if (sVar18 == uVar17) goto LAB_002a829c;
        }
      }
      else {
LAB_002a8270:
        pcVar48 = *(char **)PTR_PTR_047cc710;
        sVar18 = strlen(pcVar48);
        if (sVar18 == uVar17) {
LAB_002a829c:
          if (uVar17 == 0xffffffffffffffff) {
                    /* try { // try from 002aa5b0 to 002aa5b7 has its CatchHandler @ 002aa688 */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_out_of_range();
          }
          pbVar54 = (byte *)param_13[2];
          goto LAB_002a82a8;
        }
      }
      goto LAB_002a82bc;
    }
    if (sVar18 == 0xffffffffffffffff) {
LAB_002aa598:
                    /* try { // try from 002aa598 to 002aa59f has its CatchHandler @ 002aa694 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_out_of_range();
    }
    pbVar54 = (byte *)param_13[2];
joined_r0x002a72a8:
    if ((sVar18 != 0) && (iVar14 = memcmp(pbVar54,pcVar48,sVar18), iVar14 != 0)) {
      pcVar48 = *(char **)PTR_PTR_047cc6f8;
      sVar18 = strlen(pcVar48);
      if ((bVar70 & 1) == 0) {
        uVar17 = (ulong)(bVar70 >> 1);
        if (sVar18 != uVar17) goto LAB_002a72e0;
        goto LAB_002a7454;
      }
      uVar17 = param_13[1];
      if (sVar18 == uVar17) goto LAB_002a7488;
      goto LAB_002a76c4;
    }
    puVar26 = *(ulong **)(lVar16 + 0x40);
    if ((puVar26 != (ulong *)0x0) && (uVar17 = puVar26[1], uVar17 != 0)) {
      puVar57 = (undefined8 *)(*puVar26 & 0xfffffffffffffff8);
      puVar72 = (undefined8 *)*puVar57;
      lVar66 = *(long *)(param_1 + 8);
      sVar59 = puVar72[1];
      sVar18 = strlen(pcVar48);
      puVar64 = PTR_PTR_047cc708;
      if (sVar59 != sVar18) {
LAB_002a7400:
                    /* try { // try from 002a7400 to 002a742f has its CatchHandler @ 002aaad4 */
        FUN_003673f0(&local_270,"Resource is not LDS.");
        param_3 = (byte *)FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                       ,0x55b,&local_270,0,0);
        goto LAB_002a7180;
      }
      while( true ) {
        uVar17 = uVar17 - 1;
        puVar57 = puVar57 + 1;
        iVar14 = memcmp((void *)*puVar72,pcVar48,sVar59);
        if (iVar14 != 0) goto LAB_002a7400;
        uVar24 = puVar72[2];
        uVar4 = puVar72[3];
                    /* try { // try from 002a7370 to 002a739f has its CatchHandler @ 002aab90 */
        lVar16 = FUN_0038ad50(puVar64,lVar15);
        if ((lVar16 == 0) ||
           (uVar19 = FUN_00385610(uVar24,uVar4,lVar16,puVar64,lVar15), (uVar19 & 1) == 0)) {
                    /* try { // try from 002a9d60 to 002a9dbf has its CatchHandler @ 002aaad4 */
          FUN_003673f0(&local_270,"Can\'t decode listener.");
          param_3 = (byte *)FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                         ,0x563,&local_270,0,0);
          goto LAB_002a7180;
        }
        sVar18 = *(size_t *)(lVar16 + 0x20);
        pbVar54 = param_3 + 1;
        if ((*param_3 & 1) != 0) {
          pbVar54 = *(byte **)(param_3 + 0x10);
        }
        sVar59 = strlen((char *)pbVar54);
        if ((sVar18 == sVar59) &&
           (iVar14 = memcmp(*(void **)(lVar16 + 0x18),pbVar54,sVar18), iVar14 == 0)) break;
        if (uVar17 == 0) goto LAB_002a9d1c;
        pcVar48 = *(char **)puVar58;
        puVar72 = (undefined8 *)*puVar57;
        sVar59 = puVar72[1];
        sVar18 = strlen(pcVar48);
        if (sVar59 != sVar18) goto LAB_002a7400;
      }
      if (*(long **)(lVar16 + 0x78) == (long *)0x0) {
                    /* try { // try from 002a9ea0 to 002a9ecb has its CatchHandler @ 002aaad4 */
        FUN_003673f0(&local_270,"Listener has no ApiListener.");
        param_3 = (byte *)FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                       ,0x56f,&local_270,0,0);
        goto LAB_002a7180;
      }
      lVar16 = **(long **)(lVar16 + 0x78);
      uVar24 = *(undefined8 *)(lVar16 + 0x10);
      uVar4 = *(undefined8 *)(lVar16 + 0x18);
                    /* try { // try from 002a9e04 to 002a9e3b has its CatchHandler @ 002aaad4 */
      lVar16 = FUN_0038ad50(PTR_PTR_047cc738,lVar15);
      if (lVar16 == 0) {
        lVar16 = 0;
      }
      else {
        uVar17 = FUN_00385610(uVar24,uVar4,lVar16,PTR_PTR_047cc738,lVar15);
        if ((uVar17 & 1) == 0) {
          lVar16 = 0;
        }
      }
      if (*(int *)(lVar16 + 0x100) == 3) {
        puVar57 = *(undefined8 **)(lVar16 + 0xf8);
        if (puVar57[2] == 0) {
                    /* try { // try from 002aa158 to 002aa1f7 has its CatchHandler @ 002aaad4 */
          FUN_003673f0(&local_270,"HttpConnectionManager missing config_source for RDS.");
          param_3 = (byte *)FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                         ,0x594,&local_270,0,0);
        }
        else if (*(int *)(puVar57[2] + 0x20) == 3) {
          if (*param_7 != '\0') {
            if (param_7[0x20] != '\0') {
              lVar66 = *(long *)(param_7 + 0x28);
              if (lVar66 != 0) {
                lVar16 = *(long *)(param_7 + 0x30);
                if (lVar16 == lVar66) {
                  lVar16 = lVar66;
                }
                else {
                  do {
                    lVar16 = lVar16 + -0x78;
                    FUN_002b0bc8(lVar16);
                  } while (lVar66 != lVar16);
                  lVar16 = *(long *)(param_7 + 0x28);
                }
                *(long *)(param_7 + 0x30) = lVar66;
                FUN_0049e790(PTR_LAB_047cba48,lVar16);
              }
              param_7[0x20] = '\0';
            }
            if ((param_7[8] & 1U) != 0) {
              FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_7 + 0x18));
            }
            *param_7 = '\0';
          }
          param_7[0x38] = '\0';
          param_7[0x39] = '\0';
          param_7[0x3a] = '\0';
          param_7[0x3b] = '\0';
          param_7[0x3c] = '\0';
          param_7[0x3d] = '\0';
          param_7[0x3e] = '\0';
          param_7[0x3f] = '\0';
          param_7[0x30] = '\0';
          param_7[0x31] = '\0';
          param_7[0x32] = '\0';
          param_7[0x33] = '\0';
          param_7[0x34] = '\0';
          param_7[0x35] = '\0';
          param_7[0x36] = '\0';
          param_7[0x37] = '\0';
          param_7[0x28] = '\0';
          param_7[0x29] = '\0';
          param_7[0x2a] = '\0';
          param_7[0x2b] = '\0';
          param_7[0x2c] = '\0';
          param_7[0x2d] = '\0';
          param_7[0x2e] = '\0';
          param_7[0x2f] = '\0';
          *param_7 = '\x01';
          param_7[0x20] = '\0';
          param_7[0x21] = '\0';
          param_7[0x22] = '\0';
          param_7[0x23] = '\0';
          param_7[0x24] = '\0';
          param_7[0x25] = '\0';
          param_7[0x26] = '\0';
          param_7[0x27] = '\0';
          param_7[0x18] = '\0';
          param_7[0x19] = '\0';
          param_7[0x1a] = '\0';
          param_7[0x1b] = '\0';
          param_7[0x1c] = '\0';
          param_7[0x1d] = '\0';
          param_7[0x1e] = '\0';
          param_7[0x1f] = '\0';
          param_7[0x10] = '\0';
          param_7[0x11] = '\0';
          param_7[0x12] = '\0';
          param_7[0x13] = '\0';
          param_7[0x14] = '\0';
          param_7[0x15] = '\0';
          param_7[0x16] = '\0';
          param_7[0x17] = '\0';
          param_7[8] = '\0';
          param_7[9] = '\0';
          param_7[10] = '\0';
          param_7[0xb] = '\0';
          param_7[0xc] = '\0';
          param_7[0xd] = '\0';
          param_7[0xe] = '\0';
          param_7[0xf] = '\0';
          pppppppuVar47 = (undefined8 *******)puVar57[1];
          if ((undefined8 *******)0xffffffffffffffef < pppppppuVar47) {
                    /* try { // try from 002aa620 to 002aa627 has its CatchHandler @ 002aaad4 */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          pvVar71 = (void *)*puVar57;
          if (pppppppuVar47 < (undefined8 *******)0x17) {
            local_270 = (undefined8 *******)
                        CONCAT71(local_270._1_7_,(char)((int)pppppppuVar47 << 1));
            pppppppuVar53 = (undefined8 *******)((ulong)&local_270 | 1);
            if (pppppppuVar47 != (undefined8 *******)0x0) goto LAB_002aa52c;
          }
          else {
            pppppppuVar53 =
                 (undefined8 *******)
                 FUN_0049e770(PTR_FUN_047cba38,(ulong)(pppppppuVar47 + 2) & 0xfffffffffffffff0);
            local_270 = (undefined8 *******)((ulong)(pppppppuVar47 + 2) & 0xfffffffffffffff0 | 1);
            pppppppuStack_268 = pppppppuVar47;
            local_260 = pppppppuVar53;
LAB_002aa52c:
            memcpy(pppppppuVar53,pvVar71,(size_t)pppppppuVar47);
          }
          *(undefined1 *)((long)pppppppuVar53 + (long)pppppppuVar47) = 0;
          if ((param_7[8] & 1U) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_7 + 0x18));
          }
          param_3 = (byte *)0x0;
          *(undefined8 ********)(param_7 + 0x18) = local_260;
          *(undefined8 ********)(param_7 + 0x10) = pppppppuStack_268;
          *(undefined8 ********)(param_7 + 8) = local_270;
        }
        else {
          FUN_003673f0(&local_270,"HttpConnectionManager ConfigSource for RDS does not specify ADS."
                      );
          param_3 = (byte *)FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                         ,0x598,&local_270,0,0);
        }
        goto LAB_002a7180;
      }
      if (*(int *)(lVar16 + 0x100) != 4) {
                    /* try { // try from 002a9f98 to 002a9fc3 has its CatchHandler @ 002aaad4 */
        FUN_003673f0(&local_270,"HttpConnectionManager neither has inlined route_config nor RDS.");
        param_3 = (byte *)FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                       ,0x589,&local_270,0,0);
        goto LAB_002a7180;
      }
      local_270 = (undefined8 *******)0x0;
      pppppppuStack_268 = (undefined8 *******)0x0;
      local_260 = (undefined8 *******)0x0;
                    /* try { // try from 002a9ef8 to 002a9f03 has its CatchHandler @ 002aa854 */
      param_3 = (byte *)FUN_002add50(*(undefined1 *)(lVar66 + 0x10),*(undefined8 *)(lVar16 + 0xf8),
                                     param_3,&local_270);
      pppppppuVar47 = local_270;
      if (param_3 == (byte *)0x0) {
        if (*param_7 != '\0') {
          if (param_7[0x20] != '\0') {
            lVar66 = *(long *)(param_7 + 0x28);
            if (lVar66 != 0) {
              lVar16 = *(long *)(param_7 + 0x30);
              if (lVar16 == lVar66) {
                lVar16 = lVar66;
              }
              else {
                do {
                  lVar16 = lVar16 + -0x78;
                  FUN_002b0bc8(lVar16);
                } while (lVar66 != lVar16);
                lVar16 = *(long *)(param_7 + 0x28);
              }
              *(long *)(param_7 + 0x30) = lVar66;
              FUN_0049e790(PTR_LAB_047cba48,lVar16);
            }
            param_7[0x20] = '\0';
          }
          if ((param_7[8] & 1U) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_7 + 0x18));
          }
          *param_7 = '\0';
        }
        *param_7 = '\x01';
        param_7[0x20] = '\0';
        param_7[0x21] = '\0';
        param_7[0x22] = '\0';
        param_7[0x23] = '\0';
        param_7[0x24] = '\0';
        param_7[0x25] = '\0';
        param_7[0x26] = '\0';
        param_7[0x27] = '\0';
        param_7[0x18] = '\0';
        param_7[0x19] = '\0';
        param_7[0x1a] = '\0';
        param_7[0x1b] = '\0';
        param_7[0x1c] = '\0';
        param_7[0x1d] = '\0';
        param_7[0x1e] = '\0';
        param_7[0x1f] = '\0';
        param_7[0x10] = '\0';
        param_7[0x11] = '\0';
        param_7[0x12] = '\0';
        param_7[0x13] = '\0';
        param_7[0x14] = '\0';
        param_7[0x15] = '\0';
        param_7[0x16] = '\0';
        param_7[0x17] = '\0';
        param_7[8] = '\0';
        param_7[9] = '\0';
        param_7[10] = '\0';
        param_7[0xb] = '\0';
        param_7[0xc] = '\0';
        param_7[0xd] = '\0';
        param_7[0xe] = '\0';
        param_7[0xf] = '\0';
        param_3 = (byte *)0x0;
        *(undefined8 ********)(param_7 + 0x30) = pppppppuStack_268;
        *(undefined8 ********)(param_7 + 0x28) = local_270;
        *(undefined8 ********)(param_7 + 0x38) = local_260;
        local_260 = (undefined8 *******)0x0;
        local_270 = (undefined8 *******)0x0;
        pppppppuStack_268 = (undefined8 *******)0x0;
        param_7[0x20] = '\x01';
        goto LAB_002a7180;
      }
      pppppppuVar53 = pppppppuStack_268;
      if (local_270 == (undefined8 *******)0x0) goto LAB_002a7180;
      for (; pppppppuVar53 != pppppppuVar47; pppppppuVar53 = pppppppuVar53 + -0xf) {
        FUN_002b0bc8(pppppppuVar53 + -0xf);
      }
      goto LAB_002aa098;
    }
  }
LAB_002a9d1c:
  param_3 = (byte *)0x0;
LAB_002a7180:
  if (lVar15 != 0) {
                    /* try { // try from 002a7184 to 002a718b has its CatchHandler @ 002aac44 */
    FUN_0038bd40(lVar15);
  }
  return param_3;
joined_r0x002a9e84:
  for (; pppppppuVar53 != pppppppuVar47; pppppppuVar53 = pppppppuVar53 + -0xf) {
    FUN_002b0bc8(pppppppuVar53 + -0xf);
  }
LAB_002aa098:
  pppppppuStack_268 = pppppppuVar47;
  FUN_0049e790(PTR_LAB_047cba48,local_270);
  goto LAB_002a7180;
LAB_002a8f18:
                    /* try { // try from 002a8f18 to 002a8f7b has its CatchHandler @ 002aaaa0 */
  FUN_003673f0(&local_270,"Unknown denominator type");
  puVar64 = PTR_LAB_047cba48;
  param_3 = (byte *)FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                                 ,0x684,&local_270,0,0);
  goto LAB_002a8f7c;
}


