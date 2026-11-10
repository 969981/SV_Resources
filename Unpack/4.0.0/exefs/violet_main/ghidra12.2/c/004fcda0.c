/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004fcda0; name: FUN_004fcda0
 */


/* WARNING: Removing unreachable block (ram,0x004fcf44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_004fcda0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  ulong local_60;
  undefined8 uStack_58;
  char *local_50;
  
  puVar1 = param_1 + 2;
  param_1[0xc] = *param_1;
  FUN_001fcec0(param_1 + 0xe,puVar1);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_1 + 8);
  param_1[0x16] = param_1[10];
  puVar10 = PTR_LAB_047cba48;
  puVar9 = PTR_FUN_047cba38;
  uVar14 = _UNK_03cab8b8;
  uVar8 = _DAT_03cab8b0;
  cVar3 = *(char *)(param_1 + 0x22);
joined_r0x004fcdec:
  do {
    if (cVar3 != '\0') {
LAB_004fcdf0:
      *param_1 = 1;
      if ((*(byte *)(param_1 + 2) & 1) == 0) {
        *(undefined2 *)puVar1 = 0;
      }
      else {
        **(undefined1 **)(param_1 + 6) = 0;
        *(undefined8 *)(param_1 + 4) = 0;
      }
      param_1[8] = param_1[0x23];
      param_1[9] = param_1[0x24];
      param_1[10] = param_1[0x24];
      return 0;
    }
    while( true ) {
      while ((*(byte *)(param_1 + 0x1c) - 9 < 5 || (*(byte *)(param_1 + 0x1c) == 0x20))) {
        FUN_004fbbcc(param_1);
      }
      iVar11 = FUN_004fccd0(param_1);
      if (iVar11 == 0) goto LAB_004fcf4c;
      if (iVar11 == 1) break;
      if (iVar11 == 2) {
        return 1;
      }
      if (*(char *)(param_1 + 0x22) != '\0') goto LAB_004fcdf0;
      bVar4 = *(byte *)(param_1 + 0x1c);
      if ((bVar4 != 0) && (0x1e < (byte)(bVar4 - 1))) {
        *param_1 = 0;
        if ((*(byte *)(param_1 + 2) & 1) == 0) {
          *(undefined2 *)puVar1 = 0;
        }
        else {
          **(undefined1 **)(param_1 + 6) = 0;
          bVar4 = *(byte *)(param_1 + 0x1c);
          *(undefined8 *)(param_1 + 4) = 0;
        }
        param_1[0x28] = param_1[0x21];
        uVar12 = param_1[0x23];
        uVar2 = param_1[0x24];
        param_1[8] = uVar12;
        param_1[9] = uVar2;
        *(undefined4 **)(param_1 + 0x26) = puVar1;
        if (((bVar4 - 0x61 < 0x1a) || (bVar4 == 0x5f)) ||
           (uVar13 = (uint)bVar4, (uVar13 - 0x41 & 0xff) < 0x1a)) goto LAB_004fd010;
        if (uVar13 == 0x2e) {
          FUN_004fbbcc(param_1);
          if (9 < *(byte *)(param_1 + 0x1c) - 0x30) {
LAB_004fd224:
            uVar12 = 6;
            goto LAB_004fd04c;
          }
          FUN_004fbbcc(param_1);
          if (((param_1[0xc] == 2) && (param_1[8] == param_1[0x14])) &&
             (param_1[9] == param_1[0x16])) {
            plVar16 = *(long **)(param_1 + 0x1a);
            uVar12 = param_1[0x23];
            iVar11 = param_1[0x24];
            local_50 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x40);
            uVar7 = s_Need_space_between_identifier_an_03c69248._32_8_;
            uVar6 = s_Need_space_between_identifier_an_03c69248._24_8_;
            uVar5 = s_Need_space_between_identifier_an_03c69248._16_8_;
            uVar15 = s_Need_space_between_identifier_an_03c69248._8_8_;
            uVar14 = s_Need_space_between_identifier_an_03c69248._0_8_;
            uStack_58 = _UNK_03caae38;
            local_60 = _DAT_03caae30;
            *(undefined8 *)(local_50 + 0x28) = s_Need_space_between_identifier_an_03c69248._40_8_;
            *(undefined8 *)(local_50 + 0x20) = uVar7;
            *(undefined8 *)(local_50 + 8) = uVar15;
            *(undefined8 *)local_50 = uVar14;
            *(undefined8 *)(local_50 + 0x18) = uVar6;
            *(undefined8 *)(local_50 + 0x10) = uVar5;
            local_50[0x30] = '\0';
                    /* try { // try from 004fd130 to 004fd143 has its CatchHandler @ 004fd230 */
            (**(code **)(*plVar16 + 0x10))(plVar16,uVar12,iVar11 + -2,&local_60);
            if ((local_60 & 1) != 0) {
              FUN_0049e790(PTR_LAB_047cba48,local_50);
            }
          }
          uVar14 = 0;
          uVar15 = 1;
        }
        else {
          if (uVar13 == 0x30) {
            FUN_004fbbcc(param_1);
            uVar14 = 1;
          }
          else {
            if (9 < uVar13 - 0x30) {
              if (uVar13 == 0x27) {
                FUN_004fbbcc(param_1);
                uVar14 = 0x27;
              }
              else {
                if (bVar4 != 0x22) {
                  if ((char)bVar4 < '\0') {
                    plVar16 = *(long **)(param_1 + 0x1a);
                    FUN_00532640(&local_60,"Interpreting non ascii codepoint %d.");
                    /* try { // try from 004fd1f0 to 004fd203 has its CatchHandler @ 004fd22c */
                    (**(code **)(*plVar16 + 0x10))(plVar16,uVar12,uVar2,&local_60);
                    if ((local_60 & 1) != 0) {
                      FUN_0049e790(PTR_LAB_047cba48,local_50);
                    }
                  }
                  FUN_004fbbcc(param_1);
                  goto LAB_004fd224;
                }
                FUN_004fbbcc(param_1);
                uVar14 = 0x22;
              }
              FUN_004fbd04(param_1,uVar14);
              uVar12 = 5;
              goto LAB_004fd04c;
            }
            FUN_004fbbcc(param_1);
            uVar14 = 0;
          }
          uVar15 = 0;
        }
        uVar12 = FUN_004fc298(param_1,uVar14,uVar15);
        goto LAB_004fd04c;
      }
      local_50 = (char *)FUN_0049e770(puVar9,0x30);
      uVar6 = s_Invalid_control_characters_encou_03c559a6._16_8_;
      uVar5 = s_Invalid_control_characters_encou_03c559a6._0_8_;
      uStack_58 = uVar14;
      local_60 = uVar8;
      uVar15 = CONCAT17(s_Invalid_control_characters_encou_03c559a6[0x1f],
                        s_Invalid_control_characters_encou_03c559a6._24_7_);
      *(undefined8 *)(local_50 + 8) = s_Invalid_control_characters_encou_03c559a6._8_8_;
      *(undefined8 *)local_50 = uVar5;
      *(undefined8 *)(local_50 + 0x18) = uVar15;
      *(undefined8 *)(local_50 + 0x10) = uVar6;
      uVar15 = CONCAT71(s_Invalid_control_characters_encou_03c559a6._32_7_,
                        s_Invalid_control_characters_encou_03c559a6[0x1f]);
      *(undefined8 *)(local_50 + 0x27) = s_Invalid_control_characters_encou_03c559a6._39_8_;
      *(undefined8 *)(local_50 + 0x1f) = uVar15;
      local_50[0x2f] = '\0';
                    /* try { // try from 004fcefc to 004fcf03 has its CatchHandler @ 004fd234 */
      (**(code **)(**(long **)(param_1 + 0x1a) + 0x10))
                (*(long **)(param_1 + 0x1a),param_1[0x23],param_1[0x24],&local_60);
      if ((local_60 & 1) != 0) {
        FUN_0049e790(puVar10,local_50);
      }
      do {
        do {
          FUN_004fbbcc(param_1);
        } while (*(byte *)(param_1 + 0x1c) - 1 < 0x1f);
        if (*(char *)(param_1 + 0x22) != '\0') goto LAB_004fcdf0;
      } while (*(byte *)(param_1 + 0x1c) == 0);
    }
    FUN_004fc7c0(param_1,0);
    cVar3 = *(char *)(param_1 + 0x22);
  } while( true );
LAB_004fcf4c:
  if (*(char *)(param_1 + 0x1c) == '\0') goto LAB_004fcf64;
  if (*(char *)(param_1 + 0x1c) == '\n') {
    FUN_004fbbcc(param_1);
    goto LAB_004fcf64;
  }
  FUN_004fbbcc(param_1);
  goto LAB_004fcf4c;
LAB_004fcf64:
  cVar3 = *(char *)(param_1 + 0x22);
  goto joined_r0x004fcdec;
LAB_004fd010:
  do {
    do {
      FUN_004fbbcc(param_1);
      bVar4 = *(byte *)(param_1 + 0x1c);
    } while ((byte)((bVar4 & 0xdf) + 0xbf) < 0x1a);
  } while ((bVar4 == 0x5f) || ((byte)(bVar4 - 0x30) < 10));
  uVar12 = 2;
LAB_004fd04c:
  *param_1 = uVar12;
  iVar11 = param_1[0x28];
  if (param_1[0x21] != iVar11) {
    FUN_0021d540(*(undefined8 *)(param_1 + 0x26),*(long *)(param_1 + 0x1e) + (long)iVar11,
                 (long)(param_1[0x21] - iVar11));
  }
  param_1[0x28] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x26) = 0;
  param_1[10] = param_1[0x24];
  return 1;
}


