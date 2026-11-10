/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00399510; name: FUN_00399510
 */


void FUN_00399510(byte *param_1)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  size_t sVar7;
  ulong uVar8;
  
  FUN_003992d0();
  bVar1 = *param_1;
  if ((bVar1 & 1) == 0) {
    if ((bVar1 & 0xfe) != 0x24) {
      return;
    }
    uVar3 = (ulong)(bVar1 >> 1);
    pbVar6 = param_1 + 1;
    uVar2 = uVar3;
    if (8 < uVar3) {
      uVar2 = 9;
    }
    sVar7 = uVar3 - uVar2;
    if (sVar7 != 0) goto LAB_00399574;
  }
  else {
    if (*(long *)(param_1 + 8) != 0x12) {
      return;
    }
    pbVar6 = *(byte **)(param_1 + 0x10);
    uVar2 = 9;
    sVar7 = 9;
LAB_00399574:
    memmove(pbVar6,pbVar6 + uVar2,sVar7);
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    *param_1 = (byte)((int)sVar7 << 1);
    pbVar6[sVar7] = 0;
    uVar2 = (ulong)*param_1;
    if ((*param_1 & 1) == 0) goto LAB_003995d4;
LAB_003995a0:
    uVar3 = *(ulong *)(param_1 + 8);
    if (uVar3 < 6) goto LAB_00399800;
    pbVar6 = *(byte **)(param_1 + 0x10);
    uVar8 = (ulong)(uVar3 - 6 != 0);
    sVar7 = (uVar3 - 6) - uVar8;
  }
  else {
    *(size_t *)(param_1 + 8) = sVar7;
    pbVar6[sVar7] = 0;
    uVar2 = (ulong)*param_1;
    if ((*param_1 & 1) != 0) goto LAB_003995a0;
LAB_003995d4:
    if ((uint)uVar2 < 0xc) {
LAB_00399800:
                    /* try { // try from 00399800 to 0039981f has its CatchHandler @ 00399820 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_out_of_range();
    }
    uVar3 = uVar2 >> 1;
    pbVar6 = param_1 + 1;
    uVar8 = (ulong)(uVar3 - 6 != 0);
    sVar7 = (uVar3 - 6) - uVar8;
  }
  if (sVar7 != 0) {
    memmove(pbVar6 + 6,pbVar6 + 6 + uVar8,sVar7);
    uVar2 = (ulong)*param_1;
  }
  lVar4 = uVar3 - uVar8;
  if ((uVar2 & 1) == 0) {
    *param_1 = (byte)((int)lVar4 << 1);
    pbVar6[lVar4] = 0;
    uVar2 = (ulong)*param_1;
    if ((*param_1 & 1) == 0) goto LAB_00399654;
LAB_00399620:
    uVar3 = *(ulong *)(param_1 + 8);
    if (uVar3 < 3) goto LAB_00399808;
    pbVar6 = *(byte **)(param_1 + 0x10);
    uVar8 = (ulong)(uVar3 - 3 != 0);
    sVar7 = (uVar3 - 3) - uVar8;
  }
  else {
    *(long *)(param_1 + 8) = lVar4;
    pbVar6[lVar4] = 0;
    uVar2 = (ulong)*param_1;
    if ((*param_1 & 1) != 0) goto LAB_00399620;
LAB_00399654:
    if ((uint)uVar2 < 6) {
LAB_00399808:
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_out_of_range();
    }
    uVar3 = uVar2 >> 1;
    pbVar6 = param_1 + 1;
    uVar8 = (ulong)(uVar3 - 3 != 0);
    sVar7 = (uVar3 - 3) - uVar8;
  }
  if (sVar7 != 0) {
    memmove(pbVar6 + 3,pbVar6 + 3 + uVar8,sVar7);
    uVar2 = (ulong)*param_1;
  }
  lVar4 = uVar3 - uVar8;
  if ((uVar2 & 1) == 0) {
    *param_1 = (byte)((int)lVar4 << 1);
    pbVar6[lVar4] = 0;
    uVar2 = (ulong)*param_1;
    if ((*param_1 & 1) == 0) goto LAB_003996dc;
LAB_003996a0:
    pbVar6 = *(byte **)(param_1 + 0x10);
    if (pbVar6[5] != 0x30) {
      return;
    }
    if (pbVar6[6] != 0x30) {
      return;
    }
    uVar3 = *(ulong *)(param_1 + 8);
    if (uVar3 < 5) goto LAB_00399810;
  }
  else {
    *(long *)(param_1 + 8) = lVar4;
    pbVar6[lVar4] = 0;
    uVar2 = (ulong)*param_1;
    if ((*param_1 & 1) != 0) goto LAB_003996a0;
LAB_003996dc:
    if (param_1[6] != 0x30) {
      return;
    }
    if (param_1[7] != 0x30) {
      return;
    }
    if ((uint)uVar2 < 10) {
LAB_00399810:
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_out_of_range();
    }
    uVar3 = uVar2 >> 1;
    pbVar6 = param_1 + 1;
  }
  uVar5 = uVar3 - 5;
  uVar8 = uVar5;
  if (1 < uVar5) {
    uVar8 = 2;
  }
  if (uVar5 - uVar8 != 0) {
    memmove(pbVar6 + 5,pbVar6 + 5 + uVar8,uVar5 - uVar8);
    uVar2 = (ulong)*param_1;
  }
  lVar4 = uVar3 - uVar8;
  if ((uVar2 & 1) == 0) {
    *param_1 = (byte)((int)lVar4 << 1);
    pbVar6[lVar4] = 0;
    bVar1 = *param_1;
  }
  else {
    *(long *)(param_1 + 8) = lVar4;
    pbVar6[lVar4] = 0;
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    if (param_1[4] != 0x30) {
      return;
    }
    if (param_1[5] != 0x30) {
      return;
    }
    if (bVar1 < 6) goto LAB_00399818;
    uVar2 = (ulong)(bVar1 >> 1);
    pbVar6 = param_1 + 1;
  }
  else {
    pbVar6 = *(byte **)(param_1 + 0x10);
    if (pbVar6[3] != 0x30) {
      return;
    }
    if (pbVar6[4] != 0x30) {
      return;
    }
    uVar2 = *(ulong *)(param_1 + 8);
    if (uVar2 < 3) {
LAB_00399818:
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_out_of_range();
    }
  }
  uVar8 = uVar2 - 3;
  uVar3 = uVar8;
  if (1 < uVar8) {
    uVar3 = 2;
  }
  if (uVar8 - uVar3 != 0) {
    memmove(pbVar6 + 3,pbVar6 + 3 + uVar3,uVar8 - uVar3);
    bVar1 = *param_1;
  }
  lVar4 = uVar2 - uVar3;
  if ((bVar1 & 1) == 0) {
    *param_1 = (byte)((int)lVar4 << 1);
  }
  else {
    *(long *)(param_1 + 8) = lVar4;
  }
  pbVar6[lVar4] = 0;
  return;
}


