/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004acb08; name: FUN_004acb08
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_004acb08(long param_1,byte *param_2,long param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong *puVar7;
  long *plVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  ulong uVar11;
  void *pvVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 local_110;
  ulong local_108;
  void *local_100;
  ulong local_f8;
  ulong local_f0;
  void *local_e8;
  ulong local_e0;
  ulong uStack_d8;
  void *local_d0;
  ulong local_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  byte *local_80;
  ulong uStack_78;
  ulong local_70;
  
  if (param_3 == 0) {
    param_3 = *(long *)(param_1 + 0x50);
  }
  uVar4 = FUN_004a2bf8(*(undefined8 *)(param_1 + 8),param_2,param_6,param_7);
  if ((uVar4 & 1) != 0) {
    uVar5 = FUN_004a2d2c(*(undefined8 *)(param_1 + 0x58),param_3,param_4,param_6,param_7);
    return uVar5;
  }
  local_80 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    local_80 = param_2 + 1;
  }
  lVar6 = FUN_004c04c0(*(long *)(param_1 + 8) + 0x130,&local_80);
  if ((lVar6 == 0) || (7 < *(int *)(lVar6 + 0x18) - 1U)) {
    puVar10 = (undefined8 *)0x0;
    if (*(long *)(param_1 + 0x50) != 0) goto LAB_004acd38;
  }
  else {
    puVar10 = *(undefined8 **)(lVar6 + 0x20);
    switch(*(int *)(lVar6 + 0x18)) {
    default:
      puVar10 = (undefined8 *)puVar10[2];
      if (puVar10 == *(undefined8 **)(param_1 + 0x50)) goto LAB_004acc18;
      goto LAB_004acd38;
    case 2:
      puVar10 = (undefined8 *)puVar10[5];
      if (puVar10 != *(undefined8 **)(param_1 + 0x50)) goto LAB_004acd38;
      goto LAB_004acc18;
    case 3:
    case 7:
      lVar6 = puVar10[2];
      break;
    case 5:
      lVar6 = puVar10[3];
      break;
    case 8:
      goto switchD_004acbf0_caseD_8;
    }
    puVar10 = *(undefined8 **)(lVar6 + 0x10);
switchD_004acbf0_caseD_8:
    if (puVar10 != *(undefined8 **)(param_1 + 0x50)) {
LAB_004acd38:
      FUN_004a8ec0(&local_e0,&DAT_03c246d6,param_2);
                    /* try { // try from 004acd4c to 004acd5f has its CatchHandler @ 004ad338 */
      puVar7 = (ulong *)FUN_0021d540(&local_e0,"\" is already defined in file \"",0x1e);
      uStack_b8 = puVar7[1];
      local_c0 = *puVar7;
      local_b0 = puVar7[2];
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      pbVar9 = (byte *)*puVar10;
      uVar4 = *(ulong *)(pbVar9 + 8);
      pbVar1 = *(byte **)(pbVar9 + 0x10);
      if ((*pbVar9 & 1) == 0) {
        pbVar1 = pbVar9 + 1;
        uVar4 = (ulong)(*pbVar9 >> 1);
      }
                    /* try { // try from 004acd94 to 004acd9b has its CatchHandler @ 004ad310 */
      puVar7 = (ulong *)FUN_0021d540(&local_c0,pbVar1,uVar4);
      uStack_98 = puVar7[1];
      local_a0 = *puVar7;
      local_90 = (void *)puVar7[2];
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
                    /* try { // try from 004acdb4 to 004acdc7 has its CatchHandler @ 004ad2e8 */
      puVar7 = (ulong *)FUN_0021d540(&local_a0,&DAT_03bfbda2,2);
      uStack_78 = puVar7[1];
      local_80 = (byte *)*puVar7;
      local_70 = puVar7[2];
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      plVar8 = *(long **)(param_1 + 0x10);
      if (plVar8 != (long *)0x0) {
                    /* try { // try from 004acdf4 to 004ace07 has its CatchHandler @ 004ad2a4 */
        (**(code **)(*plVar8 + 0x10))(plVar8,param_1 + 0x38,param_2,param_5,0,&local_80);
      }
      *(undefined1 *)(param_1 + 0x30) = 1;
      if (((ulong)local_80 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_70);
      }
      if ((local_a0 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_90);
      }
      pvVar12 = local_d0;
      if ((local_c0 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_b0);
        pvVar12 = local_d0;
      }
      if ((local_e0 & 1) == 0) {
        return 0;
      }
      local_d0 = pvVar12;
      goto LAB_004ace80;
    }
  }
LAB_004acc18:
  bVar2 = *param_2;
  pbVar1 = param_2 + 1;
  uVar11 = *(ulong *)(param_2 + 8);
  pbVar9 = *(byte **)(param_2 + 0x10);
  uVar4 = (ulong)(bVar2 >> 1);
  pbVar3 = pbVar1;
  if ((bVar2 & 1) != 0) {
    uVar4 = uVar11;
    pbVar3 = pbVar9;
  }
  if (uVar4 != 0) {
    do {
      uVar14 = uVar4;
      if (uVar14 == 0) goto LAB_004acc70;
      uVar4 = uVar14 - 1;
    } while (pbVar3[uVar14 - 1] != 0x2e);
    if (uVar14 != 0) {
      if ((bVar2 & 1) == 0) {
        uVar11 = (ulong)(bVar2 >> 1);
        pbVar9 = pbVar1;
      }
      if (uVar11 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_out_of_range();
      }
      uVar11 = uVar11 - uVar14;
      if (0xffffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (uVar11 < 0x17) {
        local_f8 = CONCAT71(local_f8._1_7_,(char)((int)uVar11 << 1));
        pvVar12 = (void *)((ulong)&local_f8 | 1);
        if (uVar11 != 0) goto LAB_004acf18;
      }
      else {
        uVar13 = uVar11 + 0x10 & 0xfffffffffffffff0;
        pvVar12 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar13);
        local_f8 = uVar13 | 1;
        local_f0 = uVar11;
        local_e8 = pvVar12;
LAB_004acf18:
        memcpy(pvVar12,pbVar9 + uVar14,uVar11);
      }
      *(undefined1 *)((long)pvVar12 + uVar11) = 0;
                    /* try { // try from 004acf2c to 004acf43 has its CatchHandler @ 004ad25c */
      puVar7 = (ulong *)FUN_00273ff4(&local_f8,0,&DAT_03c246d6,1);
      uStack_d8 = puVar7[1];
      local_e0 = *puVar7;
      local_d0 = (void *)puVar7[2];
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
                    /* try { // try from 004acf5c to 004acf6f has its CatchHandler @ 004ad24c */
      puVar7 = (ulong *)FUN_0021d540(&local_e0,"\" is already defined in \"",0x19);
      uStack_b8 = puVar7[1];
      local_c0 = *puVar7;
      local_b0 = puVar7[2];
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      uVar11 = (ulong)(*param_2 >> 1);
      if ((*param_2 & 1) != 0) {
        pbVar1 = *(byte **)(param_2 + 0x10);
        uVar11 = *(ulong *)(param_2 + 8);
      }
      if (uVar4 <= uVar11) {
        uVar11 = uVar4;
      }
      if (0xffffffffffffffef < uVar11) {
                    /* try { // try from 004ad160 to 004ad167 has its CatchHandler @ 004ad168 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (uVar11 < 0x17) {
        local_110 = CONCAT71(local_110._1_7_,(char)((int)uVar11 << 1));
        pvVar12 = (void *)((ulong)&local_110 | 1);
        if (uVar11 != 0) goto LAB_004acffc;
      }
      else {
        uVar4 = uVar11 + 0x10 & 0xfffffffffffffff0;
        pvVar12 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar4);
        local_110 = uVar4 | 1;
        local_108 = uVar11;
        local_100 = pvVar12;
LAB_004acffc:
        memcpy(pvVar12,pbVar1,uVar11);
      }
      *(undefined1 *)((long)pvVar12 + uVar11) = 0;
      if ((local_110 & 1) == 0) {
        uVar4 = local_110 >> 1 & 0x7f;
        pvVar12 = (void *)((long)&local_110 + 1);
      }
      else {
        uVar4 = local_108;
        pvVar12 = local_100;
      }
                    /* try { // try from 004ad028 to 004ad02f has its CatchHandler @ 004ad1f4 */
      puVar7 = (ulong *)FUN_0021d540(&local_c0,pvVar12,uVar4);
      uStack_98 = puVar7[1];
      local_a0 = *puVar7;
      local_90 = (void *)puVar7[2];
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
                    /* try { // try from 004ad048 to 004ad05b has its CatchHandler @ 004ad1cc */
      puVar7 = (ulong *)FUN_0021d540(&local_a0,&DAT_03bfbda2,2);
      uStack_78 = puVar7[1];
      local_80 = (byte *)*puVar7;
      local_70 = puVar7[2];
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      plVar8 = *(long **)(param_1 + 0x10);
      if (plVar8 != (long *)0x0) {
                    /* try { // try from 004ad088 to 004ad09b has its CatchHandler @ 004ad178 */
        (**(code **)(*plVar8 + 0x10))(plVar8,param_1 + 0x38,param_2,param_5,0,&local_80);
      }
      *(undefined1 *)(param_1 + 0x30) = 1;
      if (((ulong)local_80 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_70);
      }
      if ((local_a0 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_90);
      }
      if ((local_110 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_100);
      }
      if ((local_c0 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_b0);
      }
      if ((local_e0 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_d0);
      }
      if ((local_f8 & 1) == 0) {
        return 0;
      }
      pvVar12 = local_e8;
      goto LAB_004ace80;
    }
  }
LAB_004acc70:
  FUN_004a8ec0(&local_a0,&DAT_03c246d6,param_2);
                    /* try { // try from 004acc84 to 004acc97 has its CatchHandler @ 004ad290 */
  puVar7 = (ulong *)FUN_0021d540(&local_a0,"\" is already defined.",0x15);
  uStack_78 = puVar7[1];
  local_80 = (byte *)*puVar7;
  local_70 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  plVar8 = *(long **)(param_1 + 0x10);
  if (plVar8 != (long *)0x0) {
                    /* try { // try from 004accc4 to 004accd7 has its CatchHandler @ 004ad270 */
    (**(code **)(*plVar8 + 0x10))(plVar8,param_1 + 0x38,param_2,param_5,0,&local_80);
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  if (((ulong)local_80 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_70);
  }
  if ((local_a0 & 1) == 0) {
    return 0;
  }
  pvVar12 = local_90;
LAB_004ace80:
  FUN_0049e790(PTR_LAB_047cba48,pvVar12);
  return 0;
}


