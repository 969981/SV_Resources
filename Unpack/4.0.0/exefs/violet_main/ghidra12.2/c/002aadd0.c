/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002aadd0; name: FUN_002aadd0
 */


void FUN_002aadd0(char param_1,long *param_2)

{
  undefined *puVar1;
  byte *pbVar2;
  int iVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  byte *pbVar10;
  byte *pbVar9;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  byte *local_150;
  byte *local_148;
  undefined8 local_140;
  undefined *local_138;
  undefined8 uStack_130;
  ulong local_108;
  long lStack_100;
  undefined8 local_f8;
  undefined *local_d8;
  long lStack_d0;
  undefined auStack_c8 [32];
  char *local_a8;
  undefined8 uStack_a0;
  byte local_78 [16];
  undefined8 local_68;
  
  if ((param_1 != '\0') && (iVar3 = FUN_0038c970(0), iVar3 != 0)) {
    local_150 = (byte *)0x0;
    local_148 = (byte *)0x0;
    local_140 = 0;
    if (*param_2 != 0) {
                    /* try { // try from 002aae34 to 002aae3b has its CatchHandler @ 002ab3dc */
      FUN_002abff0(*param_2,&local_150);
    }
    puVar1 = PTR_LAB_047cba48;
    puVar4 = (ulong *)param_2[1];
    if ((puVar4 != (ulong *)0x0) && (uVar6 = puVar4[1], uVar6 != 0)) {
      uVar5 = *puVar4;
      uVar14 = 0;
      do {
        puVar7 = *(undefined8 **)((uVar5 & 0xfffffffffffffff8) + uVar14 * 8);
                    /* try { // try from 002aae88 to 002aae97 has its CatchHandler @ 002ab3fc */
        FUN_002b268c(&local_150,"cluster_stats {");
        if (puVar7[2] != 0) {
          local_108 = puVar7[1];
          local_a8 = "  cluster_name";
          uStack_a0 = 0xe;
          local_d8 = &DAT_03c751d8;
          lStack_d0 = 3;
          local_138 = &DAT_03c246d6;
          uStack_130 = 1;
                    /* try { // try from 002aaed8 to 002aaeef has its CatchHandler @ 002ab3f4 */
          lStack_100 = puVar7[2];
          FUN_00395b50(local_78,&local_a8,&local_d8,&local_108,&local_138);
                    /* try { // try from 002aaef0 to 002aaefb has its CatchHandler @ 002ab3f0 */
          FUN_002acaf4(&local_150,local_78);
          if ((local_78[0] & 1) != 0) {
            FUN_0049e790(puVar1,local_68);
          }
        }
        if (puVar7[4] != 0) {
          local_108 = puVar7[3];
          local_a8 = "  cluster_service_name";
          uStack_a0 = 0x16;
          local_d8 = &DAT_03c751d8;
          lStack_d0 = 3;
          local_138 = &DAT_03c246d6;
          uStack_130 = 1;
                    /* try { // try from 002aaf50 to 002aaf67 has its CatchHandler @ 002ab3ec */
          lStack_100 = puVar7[4];
          FUN_00395b50(local_78,&local_a8,&local_d8,&local_108,&local_138);
                    /* try { // try from 002aaf68 to 002aaf73 has its CatchHandler @ 002ab3e8 */
          FUN_002acaf4(&local_150,local_78);
          if ((local_78[0] & 1) != 0) {
            FUN_0049e790(puVar1,local_68);
          }
        }
        puVar4 = (ulong *)puVar7[6];
        if ((puVar4 != (ulong *)0x0) && (uVar11 = puVar4[1], uVar11 != 0)) {
          puVar12 = (undefined8 *)(*puVar4 & 0xfffffffffffffff8);
          do {
            puVar8 = (undefined8 *)*puVar12;
                    /* try { // try from 002aafa4 to 002aafb3 has its CatchHandler @ 002ab458 */
            FUN_002b165c(&local_150,"  upstream_locality_stats {");
            lVar13 = puVar8[5];
            if (lVar13 != 0) {
                    /* try { // try from 002aafbc to 002aafe3 has its CatchHandler @ 002ab474 */
              FUN_002ac830(&local_150,"    locality {");
              FUN_002ad6e0(3,lVar13,&local_150);
              FUN_002ad3ac(&local_150);
            }
            local_a8 = "    total_successful_requests: ";
            uStack_a0 = 0x1f;
                    /* try { // try from 002aaff8 to 002ab017 has its CatchHandler @ 002ab470 */
            lStack_d0 = FUN_00394c40(*puVar8,auStack_c8);
            lStack_d0 = lStack_d0 - (long)auStack_c8;
            local_d8 = auStack_c8;
            FUN_003959c0(&local_108,&local_a8,&local_d8);
                    /* try { // try from 002ab018 to 002ab023 has its CatchHandler @ 002ab438 */
            FUN_002acaf4(&local_150,&local_108);
            if ((local_108 & 1) != 0) {
              FUN_0049e790(puVar1,local_f8);
            }
            local_a8 = "    total_requests_in_progress: ";
            uStack_a0 = 0x20;
                    /* try { // try from 002ab04c to 002ab06b has its CatchHandler @ 002ab46c */
            lStack_d0 = FUN_00394c40(puVar8[1],auStack_c8);
            lStack_d0 = lStack_d0 - (long)auStack_c8;
            local_d8 = auStack_c8;
            FUN_003959c0(&local_108,&local_a8,&local_d8);
                    /* try { // try from 002ab06c to 002ab077 has its CatchHandler @ 002ab434 */
            FUN_002acaf4(&local_150,&local_108);
            if ((local_108 & 1) != 0) {
              FUN_0049e790(puVar1,local_f8);
            }
            local_a8 = "    total_error_requests: ";
            uStack_a0 = 0x1a;
                    /* try { // try from 002ab09c to 002ab0bb has its CatchHandler @ 002ab468 */
            lStack_d0 = FUN_00394c40(puVar8[2],auStack_c8);
            lStack_d0 = lStack_d0 - (long)auStack_c8;
            local_d8 = auStack_c8;
            FUN_003959c0(&local_108,&local_a8,&local_d8);
                    /* try { // try from 002ab0bc to 002ab0c7 has its CatchHandler @ 002ab430 */
            FUN_002acaf4(&local_150,&local_108);
            if ((local_108 & 1) != 0) {
              FUN_0049e790(puVar1,local_f8);
            }
            local_a8 = "    total_issued_requests: ";
            uStack_a0 = 0x1b;
                    /* try { // try from 002ab0e4 to 002ab103 has its CatchHandler @ 002ab464 */
            lStack_d0 = FUN_00394c40(puVar8[3],auStack_c8);
            lStack_d0 = lStack_d0 - (long)auStack_c8;
            local_d8 = auStack_c8;
            FUN_003959c0(&local_108,&local_a8,&local_d8);
                    /* try { // try from 002ab104 to 002ab10f has its CatchHandler @ 002ab42c */
            FUN_002acaf4(&local_150,&local_108);
            if ((local_108 & 1) != 0) {
              FUN_0049e790(puVar1,local_f8);
            }
                    /* try { // try from 002ab124 to 002ab12b has its CatchHandler @ 002ab474 */
            FUN_002ad548(&local_150);
            uVar11 = uVar11 - 1;
            puVar12 = puVar12 + 1;
          } while (uVar11 != 0);
        }
        local_a8 = "  total_dropped_requests: ";
        uStack_a0 = 0x1a;
                    /* try { // try from 002ab148 to 002ab167 has its CatchHandler @ 002ab408 */
        lStack_d0 = FUN_00394c40(*puVar7,auStack_c8);
        lStack_d0 = lStack_d0 - (long)auStack_c8;
        local_d8 = auStack_c8;
        FUN_003959c0(&local_108,&local_a8,&local_d8);
                    /* try { // try from 002ab168 to 002ab173 has its CatchHandler @ 002ab3f8 */
        FUN_002acaf4(&local_150,&local_108);
        if ((local_108 & 1) != 0) {
          FUN_0049e790(puVar1,local_f8);
        }
        puVar4 = (ulong *)puVar7[7];
        if ((puVar4 != (ulong *)0x0) && (uVar11 = puVar4[1], uVar11 != 0)) {
          puVar12 = (undefined8 *)(*puVar4 & 0xfffffffffffffff8);
          do {
            puVar8 = (undefined8 *)*puVar12;
                    /* try { // try from 002ab1a4 to 002ab1b3 has its CatchHandler @ 002ab45c */
            FUN_002b1fec(&local_150,"  dropped_requests {");
            if (puVar8[2] != 0) {
              local_108 = puVar8[1];
              local_a8 = "    category";
              uStack_a0 = 0xc;
              local_d8 = &DAT_03c751d8;
              lStack_d0 = 3;
              local_138 = &DAT_03c246d6;
              uStack_130 = 1;
                    /* try { // try from 002ab1f4 to 002ab20b has its CatchHandler @ 002ab424 */
              lStack_100 = puVar8[2];
              FUN_00395b50(local_78,&local_a8,&local_d8,&local_108,&local_138);
                    /* try { // try from 002ab20c to 002ab217 has its CatchHandler @ 002ab410 */
              FUN_002acaf4(&local_150,local_78);
              if ((local_78[0] & 1) != 0) {
                FUN_0049e790(puVar1,local_68);
              }
            }
            local_a8 = "    dropped_count: ";
            uStack_a0 = 0x13;
                    /* try { // try from 002ab240 to 002ab25f has its CatchHandler @ 002ab460 */
            lStack_d0 = FUN_00394c40(*puVar8,auStack_c8);
            lStack_d0 = lStack_d0 - (long)auStack_c8;
            local_d8 = auStack_c8;
            FUN_003959c0(&local_108,&local_a8,&local_d8);
                    /* try { // try from 002ab260 to 002ab26b has its CatchHandler @ 002ab428 */
            FUN_002acaf4(&local_150,&local_108);
            if ((local_108 & 1) != 0) {
              FUN_0049e790(puVar1,local_f8);
            }
                    /* try { // try from 002ab280 to 002ab287 has its CatchHandler @ 002ab45c */
            FUN_002ad548(&local_150);
            uVar11 = uVar11 - 1;
            puVar12 = puVar12 + 1;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)puVar7[5];
        if (puVar7 != (undefined8 *)0x0) {
                    /* try { // try from 002ab29c to 002ab2ab has its CatchHandler @ 002ab40c */
          FUN_002b2950(&local_150,"  load_report_interval {");
          local_a8 = "    seconds: ";
          uStack_a0 = 0xd;
                    /* try { // try from 002ab2c0 to 002ab2df has its CatchHandler @ 002ab404 */
          lStack_d0 = FUN_00394d80(*puVar7,auStack_c8);
          lStack_d0 = lStack_d0 - (long)auStack_c8;
          local_d8 = auStack_c8;
          FUN_003959c0(&local_108,&local_a8,&local_d8);
                    /* try { // try from 002ab2e0 to 002ab2eb has its CatchHandler @ 002ab3e4 */
          FUN_002acaf4(&local_150,&local_108);
          if ((local_108 & 1) != 0) {
            FUN_0049e790(puVar1,local_f8);
          }
          local_a8 = "    nanos: ";
          uStack_a0 = 0xb;
                    /* try { // try from 002ab314 to 002ab333 has its CatchHandler @ 002ab400 */
          lStack_d0 = FUN_00394c20(*(undefined4 *)(puVar7 + 1),auStack_c8);
          lStack_d0 = lStack_d0 - (long)auStack_c8;
          local_d8 = auStack_c8;
          FUN_003959c0(&local_108,&local_a8,&local_d8);
                    /* try { // try from 002ab334 to 002ab33f has its CatchHandler @ 002ab3e0 */
          FUN_002acaf4(&local_150,&local_108);
          if ((local_108 & 1) != 0) {
            FUN_0049e790(puVar1,local_f8);
          }
                    /* try { // try from 002ab354 to 002ab363 has its CatchHandler @ 002ab40c */
          FUN_002ad548(&local_150);
        }
        FUN_002acca0(&local_150);
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar6);
    }
    pbVar2 = local_150;
    puVar1 = PTR_LAB_047cba48;
    if (local_150 != (byte *)0x0) {
      if (local_148 != local_150) {
        pbVar10 = local_148;
        do {
          pbVar9 = pbVar10 + -0x18;
          if ((*pbVar9 & 1) != 0) {
            FUN_0049e790(puVar1,*(undefined8 *)(pbVar10 + -8));
          }
          pbVar10 = pbVar9;
        } while (pbVar2 != pbVar9);
      }
      local_148 = pbVar2;
      FUN_0049e790(PTR_LAB_047cba48,local_150);
    }
  }
  return;
}


