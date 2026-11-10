/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002abff0; name: FUN_002abff0
 */


void FUN_002abff0(undefined8 *param_1,long *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  uint *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  byte *pbVar14;
  long lVar15;
  long *plVar16;
  char *pcVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  uint *local_140;
  ulong uStack_138;
  char *local_130;
  uint *local_110;
  ulong uStack_108;
  char *local_100;
  char *local_e0;
  ulong uStack_d8;
  char acStack_d0 [40];
  char *local_a8;
  long local_a0;
  byte local_78;
  undefined7 uStack_77;
  ulong uStack_70;
  char *local_68;
  
  puVar1 = (undefined1 *)param_2[1];
  if (puVar1 < (undefined1 *)param_2[2]) {
    *puVar1 = 0xc;
    *(undefined2 *)(puVar1 + 5) = 0x7b20;
    *(undefined4 *)(puVar1 + 1) = 0x65646f6e;
    puVar1[7] = 0;
    param_2[1] = (long)(puVar1 + 0x18);
  }
  else {
    lVar5 = (long)puVar1 - *param_2 >> 3;
    uVar4 = lVar5 * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar4) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar18 = param_2[2] - *param_2 >> 3;
    uVar10 = lVar18 * 0x5555555555555556;
    if (uVar4 <= uVar10) {
      uVar4 = uVar10;
    }
    if (0x555555555555554 < (ulong)(lVar18 * -0x5555555555555555)) {
      uVar4 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar4 == 0) {
      lVar18 = 0;
    }
    else {
      lVar18 = FUN_0049e770(PTR_FUN_047cba38,uVar4 * 0x18);
    }
    puVar9 = (undefined1 *)(lVar18 + lVar5 * 8);
    lVar18 = lVar18 + uVar4 * 0x18;
    *puVar9 = 0xc;
    *(undefined4 *)(puVar9 + 1) = 0x65646f6e;
    *(undefined2 *)(puVar9 + 5) = 0x7b20;
    puVar9[7] = 0;
    puVar1 = puVar9 + 0x18;
    pbVar12 = (byte *)*param_2;
    pbVar11 = (byte *)param_2[1];
    if (pbVar11 == pbVar12) {
      *param_2 = (long)puVar9;
      param_2[1] = (long)puVar1;
      param_2[2] = lVar18;
    }
    else {
      do {
        uVar20 = *(undefined8 *)(pbVar11 + -0x10);
        uVar19 = *(undefined8 *)(pbVar11 + -0x18);
        *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(pbVar11 + -8);
        *(undefined8 *)(puVar9 + -0x10) = uVar20;
        *(undefined8 *)(puVar9 + -0x18) = uVar19;
        pbVar11[-0x18] = 0;
        pbVar11[-0x17] = 0;
        pbVar11[-0x16] = 0;
        pbVar11[-0x15] = 0;
        pbVar11[-0x14] = 0;
        pbVar11[-0x13] = 0;
        pbVar11[-0x12] = 0;
        pbVar11[-0x11] = 0;
        pbVar11[-0x10] = 0;
        pbVar11[-0xf] = 0;
        pbVar11[-0xe] = 0;
        pbVar11[-0xd] = 0;
        pbVar11[-0xc] = 0;
        pbVar11[-0xb] = 0;
        pbVar11[-10] = 0;
        pbVar11[-9] = 0;
        pbVar11[-8] = 0;
        pbVar11[-7] = 0;
        pbVar11[-6] = 0;
        pbVar11[-5] = 0;
        pbVar11[-4] = 0;
        pbVar11[-3] = 0;
        pbVar11[-2] = 0;
        pbVar11[-1] = 0;
        pbVar11 = pbVar11 + -0x18;
        puVar9 = puVar9 + -0x18;
      } while (pbVar12 != pbVar11);
      pbVar12 = (byte *)*param_2;
      pbVar11 = (byte *)param_2[1];
      *param_2 = (long)puVar9;
      param_2[1] = (long)puVar1;
      param_2[2] = lVar18;
      puVar3 = PTR_LAB_047cba48;
      if (pbVar11 != pbVar12) {
        do {
          pbVar14 = pbVar11 + -0x18;
          if ((*pbVar14 & 1) != 0) {
            FUN_0049e790(puVar3,*(undefined8 *)(pbVar11 + -8));
          }
          pbVar11 = pbVar14;
        } while (pbVar12 != pbVar14);
      }
    }
    if (pbVar12 != (byte *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48,pbVar12);
    }
  }
  if (param_1[1] != 0) {
    local_110 = (uint *)*param_1;
    local_e0 = ": \"";
    uStack_d8 = 3;
    local_a8 = "  id";
    local_a0 = 4;
    local_140 = (uint *)&DAT_03c246d6;
    uStack_138 = 1;
    uStack_108 = param_1[1];
    FUN_00395b50(&local_78,&local_a8,&local_e0,&local_110,&local_140);
                    /* try { // try from 002ac1f0 to 002ac1fb has its CatchHandler @ 002ac7c4 */
    FUN_002acaf4(param_2,&local_78);
    if ((local_78 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_68);
    }
  }
  plVar16 = (long *)param_1[8];
  if (plVar16 != (long *)0x0) {
    FUN_002ace24(param_2,"  metadata {");
    lVar5 = *plVar16;
    if (lVar5 != 0) {
      pcVar17 = (char *)((ulong)&local_140 | 1);
      lVar18 = -1;
      do {
        local_a8 = (char *)(lVar5 + 8);
        local_a0 = lVar18;
        FUN_0038b6b0(&local_a8);
        lVar18 = local_a0;
        uVar4 = FUN_0038b470(&local_a8);
        lVar5 = local_a0;
        if (((uVar4 & 1) != 0) || (lVar13 = *(long *)(local_a8 + 0x18), lVar13 == 0)) break;
        lVar15 = local_a0 * 0x18;
        FUN_002ad0e8(param_2,"    field {");
        puVar8 = *(uint **)(lVar13 + lVar15);
        uVar2 = *puVar8;
        if (uVar2 != 0) {
          local_110 = puVar8 + 1;
          local_a8 = "      key";
          local_a0 = 9;
          local_140 = (uint *)&DAT_03c246d6;
          uStack_138 = 1;
          local_e0 = ": \"";
          uStack_d8 = 3;
          uStack_108 = (ulong)uVar2;
          FUN_00395b50(&local_78,&local_a8,&local_e0,&local_110,&local_140);
                    /* try { // try from 002ac2f4 to 002ac2ff has its CatchHandler @ 002ac808 */
          FUN_002acaf4(param_2,&local_78);
          if ((local_78 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_68);
          }
        }
        uVar19 = s_null_value__NULL_VALUE_03bfaa30._0_8_;
        puVar6 = *(undefined8 **)(lVar13 + lVar5 * 0x18 + 8);
        if (puVar6 == (undefined8 *)0x0) goto LAB_002ac254;
        local_140 = (uint *)0x0;
        uStack_138 = 0;
        local_130 = (char *)0x0;
        switch(*(undefined4 *)(puVar6 + 2)) {
        case 1:
          local_140 = (uint *)&DAT_0000002c;
          uVar20 = CONCAT26(s_null_value__NULL_VALUE_03bfaa30._14_2_,
                            s_null_value__NULL_VALUE_03bfaa30._8_6_);
          *(ulong *)(pcVar17 + 0xe) =
               CONCAT62(s_null_value__NULL_VALUE_03bfaa30._16_6_,
                        s_null_value__NULL_VALUE_03bfaa30._14_2_);
          *(undefined8 *)(pcVar17 + 8) = uVar20;
          *(undefined8 *)pcVar17 = uVar19;
          local_130 = (char *)0x0;
          break;
        case 2:
          local_a8 = "double_value: ";
          local_a0 = 0xe;
                    /* try { // try from 002ac448 to 002ac463 has its CatchHandler @ 002ac7cc */
          uStack_d8 = FUN_00394da0(*puVar6,acStack_d0);
          local_e0 = acStack_d0;
          FUN_003959c0(&local_110,&local_a8,&local_e0);
          goto LAB_002ac464;
        case 3:
          local_a8 = "string_value: \"";
          local_a0 = 0xf;
          uStack_d8 = puVar6[1];
          local_e0 = (char *)*puVar6;
          local_110 = (uint *)&DAT_03c246d6;
          uStack_108 = 1;
                    /* try { // try from 002ac3bc to 002ac3cf has its CatchHandler @ 002ac7b8 */
          FUN_00395a70(&local_78,&local_a8,&local_e0,&local_110);
          if (((ulong)local_140 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_130);
          }
          local_140 = (uint *)CONCAT71(uStack_77,local_78);
          local_130 = local_68;
          uStack_138 = uStack_70;
          break;
        case 4:
          local_a8 = "bool_value: ";
          local_a0 = 0xc;
                    /* try { // try from 002ac410 to 002ac42f has its CatchHandler @ 002ac7d0 */
          lVar5 = FUN_00394c20(*(undefined1 *)puVar6,acStack_d0);
          uStack_d8 = lVar5 - (long)acStack_d0;
          local_e0 = acStack_d0;
          FUN_003959c0(&local_110,&local_a8,&local_e0);
LAB_002ac464:
          if (((ulong)local_140 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_130);
          }
          local_130 = local_100;
          uStack_138 = uStack_108;
          local_140 = local_110;
          break;
        case 5:
                    /* try { // try from 002ac384 to 002ac397 has its CatchHandler @ 002ac7c8 */
          FUN_0026c6b8(&local_140,"struct_value: <not printed>",0x1b);
          break;
        case 6:
                    /* try { // try from 002ac490 to 002ac4a3 has its CatchHandler @ 002ac7c8 */
          FUN_0026c6b8(&local_140,"list_value: <not printed>",0x19);
          break;
        default:
          local_140 = (uint *)0x12;
          *(undefined8 *)pcVar17 = s_<unknown>_03bd1fa8._0_8_;
          pcVar17[8] = '>';
          uStack_138 = 0;
        }
        local_a8 = "      value { ";
        local_a0 = 0xe;
        uStack_d8 = (ulong)local_140 >> 1 & 0x7f;
        local_e0 = pcVar17;
        if (((ulong)local_140 & 1) != 0) {
          uStack_d8 = uStack_138;
          local_e0 = local_130;
        }
        local_110 = (uint *)&DAT_03c470f5;
        uStack_108 = 2;
                    /* try { // try from 002ac508 to 002ac51b has its CatchHandler @ 002ac7f4 */
        FUN_00395a70(&local_78,&local_a8,&local_e0,&local_110);
                    /* try { // try from 002ac51c to 002ac527 has its CatchHandler @ 002ac7d4 */
        FUN_002acaf4(param_2,&local_78);
        if ((local_78 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_68);
        }
        if (((ulong)local_140 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_130);
        }
LAB_002ac254:
        FUN_002ad3ac(param_2);
        lVar5 = *plVar16;
      } while (lVar5 != 0);
    }
    FUN_002ad548(param_2);
  }
  lVar5 = param_1[9];
  if (lVar5 != 0) {
    FUN_002ace24(param_2,"  locality {");
    FUN_002ad6e0(2,lVar5,param_2);
    FUN_002ad548(param_2);
  }
  if (param_1[5] != 0) {
    local_110 = (uint *)param_1[4];
    local_e0 = ": \"";
    uStack_d8 = 3;
    local_a8 = "  build_version";
    local_a0 = 0xf;
    local_140 = (uint *)&DAT_03c246d6;
    uStack_138 = 1;
    uStack_108 = param_1[5];
    FUN_00395b50(&local_78,&local_a8,&local_e0,&local_110,&local_140);
                    /* try { // try from 002ac5dc to 002ac5e7 has its CatchHandler @ 002ac7c0 */
    FUN_002acaf4(param_2,&local_78);
    if ((local_78 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_68);
    }
  }
  if (param_1[7] != 0) {
    local_110 = (uint *)param_1[6];
    local_e0 = ": \"";
    uStack_d8 = 3;
    local_a8 = "  user_agent_name";
    local_a0 = 0x11;
    local_140 = (uint *)&DAT_03c246d6;
    uStack_138 = 1;
    uStack_108 = param_1[7];
    FUN_00395b50(&local_78,&local_a8,&local_e0,&local_110,&local_140);
                    /* try { // try from 002ac648 to 002ac653 has its CatchHandler @ 002ac7bc */
    FUN_002acaf4(param_2,&local_78);
    if ((local_78 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_68);
    }
  }
  if ((*(int *)(param_1 + 0xf) == 7) && (param_1[0xe] != 0)) {
    local_110 = (uint *)param_1[0xd];
    local_e0 = ": \"";
    uStack_d8 = 3;
    local_a8 = "  user_agent_version";
    local_a0 = 0x14;
    local_140 = (uint *)&DAT_03c246d6;
    uStack_138 = 1;
    uStack_108 = param_1[0xe];
    FUN_00395b50(&local_78,&local_a8,&local_e0,&local_110,&local_140);
                    /* try { // try from 002ac6c0 to 002ac6cb has its CatchHandler @ 002ac7b4 */
    FUN_002acaf4(param_2,&local_78);
    if ((local_78 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_68);
    }
  }
  puVar3 = PTR_LAB_047cba48;
  puVar7 = (ulong *)param_1[0xb];
  if ((puVar7 != (ulong *)0x0) && (uVar4 = puVar7[1], uVar4 != 0)) {
    puVar7 = (ulong *)((*puVar7 & 0xfffffffffffffff8) + 8);
    do {
      if (*puVar7 != 0) {
        local_a8 = "  client_features";
        local_a0 = 0x11;
        local_e0 = ": \"";
        uStack_d8 = 3;
        local_110 = (uint *)puVar7[-1];
        local_140 = (uint *)&DAT_03c246d6;
        uStack_138 = 1;
        uStack_108 = *puVar7;
        FUN_00395b50(&local_78,&local_a8,&local_e0,&local_110,&local_140);
                    /* try { // try from 002ac760 to 002ac76b has its CatchHandler @ 002ac80c */
        FUN_002acaf4(param_2,&local_78);
        if ((local_78 & 1) != 0) {
          FUN_0049e790(puVar3,local_68);
        }
      }
      uVar4 = uVar4 - 1;
      puVar7 = puVar7 + 2;
    } while (uVar4 != 0);
  }
  FUN_002acca0(param_2);
  return;
}


