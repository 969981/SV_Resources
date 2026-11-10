/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00262630; name: FUN_00262630
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00262630(undefined8 param_1,byte *param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined6 uVar5;
  undefined1 auVar6 [8];
  size_t sVar7;
  long *plVar8;
  undefined1 *__dest;
  code *pcVar9;
  long lVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  void *pvVar16;
  ulong local_228;
  size_t local_220;
  void *local_218;
  undefined1 auStack_210 [48];
  undefined8 local_1e0;
  long *local_1d8;
  undefined8 local_1b0;
  long *local_1a8;
  ulong local_1a0;
  size_t local_198;
  void *local_190;
  undefined8 local_188;
  ulong local_180;
  void *local_178;
  undefined1 local_170 [8];
  long *local_168;
  undefined1 *local_160;
  undefined8 local_150;
  long *plStack_148;
  byte local_140;
  undefined7 uStack_13f;
  undefined8 local_130;
  long *plStack_128;
  byte local_120;
  undefined7 uStack_11f;
  undefined8 local_110;
  long *plStack_108;
  long alStack_f0 [4];
  long *local_d0;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined1 auStack_a8 [64];
  undefined8 *local_68;
  undefined8 *puStack_60;
  undefined8 local_58;
  
  if (*(long *)(param_2 + 0xd0) != 0) {
                    /* try { // try from 00262660 to 00262673 has its CatchHandler @ 00262e5c */
    FUN_00262e68(&local_1a0,param_2,param_3,param_4);
                    /* try { // try from 00262680 to 0026268f has its CatchHandler @ 00262e58 */
    (**(code **)(**(long **)(param_2 + 0xd0) + 0x40))(param_1,*(long **)(param_2 + 0xd0),&local_1a0)
    ;
    FUN_00273abc(auStack_a8);
    puVar14 = local_c0;
    puVar4 = PTR_LAB_047cba48;
    if (local_c0 != (undefined8 *)0x0) {
      if (local_b8 != local_c0) {
        do {
          puVar13 = local_b8 + -1;
          puVar12 = (undefined8 *)*puVar13;
          *puVar13 = 0;
          if (puVar12 != (undefined8 *)0x0) {
            (**(code **)*puVar12)(puVar12);
            FUN_0049e790(puVar4,puVar12);
          }
          local_b8 = puVar13;
        } while (puVar14 != puVar13);
      }
      local_b8 = puVar14;
      FUN_0049e790(PTR_LAB_047cba48,local_c0);
    }
    if (local_d0 != (long *)0x0) {
      if (local_d0 == alStack_f0) {
        pcVar9 = *(code **)(*local_d0 + 0x10);
      }
      else {
        pcVar9 = *(code **)(*local_d0 + 0x18);
      }
      (*pcVar9)();
    }
    if ((local_120 & 1) != 0) {
      (**(code **)(*plStack_108 + 0x18))
                (plStack_108,local_110,CONCAT71(uStack_11f,local_120) & 0xfffffffffffffffe,1);
    }
    if ((local_140 & 1) != 0) {
      (**(code **)(*plStack_128 + 0x18))
                (plStack_128,local_130,CONCAT71(uStack_13f,local_140) & 0xfffffffffffffffe,1);
    }
    if (((ulong)local_160 & 1) != 0) {
      (**(code **)(*plStack_148 + 0x18))
                (plStack_148,local_150,(ulong)local_160 & 0xfffffffffffffffe,1);
    }
    if ((local_180 & 1) != 0) {
      (**(code **)(*local_168 + 0x18))(local_168,local_170,local_180 & 0xfffffffffffffffe,1);
    }
    if ((local_1a0 & 1) == 0) {
      return;
    }
    (**(code **)(*local_188 + 0x18))(local_188,local_190,local_1a0 & 0xfffffffffffffffe,1);
    return;
  }
  pbVar11 = param_2 + 0x61;
  if ((param_2[0x60] & 1) != 0) {
    pbVar11 = *(byte **)(param_2 + 0x70);
  }
  sVar7 = strlen((char *)pbVar11);
  if (0xffffffffffffffef < sVar7) {
                    /* try { // try from 00262cd0 to 00262cd7 has its CatchHandler @ 00262d18 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar7 < 0x17) {
    local_1a0 = CONCAT71(local_1a0._1_7_,(char)((int)sVar7 << 1));
    pvVar16 = (void *)((ulong)&local_1a0 | 1);
    if (sVar7 != 0) goto LAB_00262764;
  }
  else {
    uVar15 = sVar7 + 0x10 & 0xfffffffffffffff0;
    pvVar16 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar15);
    local_1a0 = uVar15 | 1;
    local_198 = sVar7;
    local_190 = pvVar16;
LAB_00262764:
    memcpy(pvVar16,pbVar11,sVar7);
  }
  *(undefined1 *)((long)pvVar16 + sVar7) = 0;
  pbVar11 = param_2 + 0x41;
  if ((param_2[0x40] & 1) != 0) {
    pbVar11 = *(byte **)(param_2 + 0x50);
  }
  sVar7 = strlen((char *)pbVar11);
  if (0xffffffffffffffef < sVar7) {
                    /* try { // try from 00262cd8 to 00262cdf has its CatchHandler @ 00262d08 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar7 < 0x17) {
    pvVar16 = (void *)((long)&local_188 + 1);
    local_188 = (long *)CONCAT71(local_188._1_7_,(char)((int)sVar7 << 1));
    if (sVar7 != 0) goto LAB_002627ec;
  }
  else {
    uVar15 = sVar7 + 0x10 & 0xfffffffffffffff0;
    pvVar16 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar15);
    local_188 = (long *)(uVar15 | 1);
    local_180 = sVar7;
    local_178 = pvVar16;
LAB_002627ec:
    memcpy(pvVar16,pbVar11,sVar7);
  }
  *(undefined1 *)((long)pvVar16 + sVar7) = 0;
  pbVar11 = param_2 + 0x21;
  if ((param_2[0x20] & 1) != 0) {
    pbVar11 = *(byte **)(param_2 + 0x30);
  }
  plVar8 = (long *)strlen((char *)pbVar11);
  plVar1 = local_168;
  auVar6 = local_170;
  if ((long *)0xffffffffffffffef < plVar8) {
                    /* try { // try from 00262ce0 to 00262ce7 has its CatchHandler @ 00262cf8 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (plVar8 < (long *)0x17) {
    __dest = local_170 + 1;
    local_170[0] = (char)((int)plVar8 << 1);
    if (plVar8 != (long *)0x0) goto LAB_002628f0;
    uVar5 = local_170._0_6_;
    local_170._2_6_ = auVar6._2_6_;
    unique0x100008e5 = local_170._2_6_;
    local_170[6] = 0;
    local_170._0_7_ = CONCAT16(local_170[6],uVar5);
    local_168 = plVar1;
    if (param_2[0xa0] != 0) goto LAB_00262858;
LAB_00262910:
                    /* try { // try from 00262910 to 00262917 has its CatchHandler @ 00262d1c */
    local_1a8 = (long *)0x0;
    local_1b0 = 0;
    FUN_00270000(&local_1e0);
    plVar1 = local_1a8;
    local_1a8 = local_1d8;
    local_1b0 = local_1e0;
    local_1e0 = 0;
    local_1d8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      plVar8 = plVar1 + 1;
      do {
        lVar10 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_1d8 != (long *)0x0) {
      plVar1 = local_1d8 + 1;
      do {
        lVar10 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_00262978:
      if (lVar10 == 0) {
        (**(code **)(*local_1d8 + 0x10))(local_1d8);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  else {
    __dest = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,(ulong)(plVar8 + 2) & 0xfffffffffffffff0);
    local_170 = (undefined1  [8])((ulong)(plVar8 + 2) & 0xfffffffffffffff0 | 1);
    local_168 = plVar8;
    local_160 = __dest;
LAB_002628f0:
    memcpy(__dest,pbVar11,(size_t)plVar8);
    __dest[(long)plVar8] = 0;
    if (param_2[0xa0] == 0) goto LAB_00262910;
LAB_00262858:
                    /* try { // try from 00262858 to 00262863 has its CatchHandler @ 00262d20 */
    local_1a8 = (long *)0x0;
    local_1b0 = 0;
    FUN_002706d0(&local_1e0,&local_1a0);
    plVar1 = local_1a8;
    local_1a8 = local_1d8;
    local_1b0 = local_1e0;
    local_1e0 = 0;
    local_1d8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      plVar8 = plVar1 + 1;
      do {
        lVar10 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_1d8 != (long *)0x0) {
      plVar1 = local_1d8 + 1;
      do {
        lVar10 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_00262978;
    }
  }
                    /* try { // try from 00262994 to 0026299f has its CatchHandler @ 00262db8 */
  FUN_002736c0(&local_1e0,param_4);
  FUN_00262460(auStack_210,&local_1e0,param_2);
  pbVar11 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar11 = param_2 + 1;
  }
  sVar7 = strlen((char *)pbVar11);
  if (0xffffffffffffffef < sVar7) {
                    /* try { // try from 00262ce8 to 00262cef has its CatchHandler @ 00262cf0 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar7 < 0x17) {
    local_228 = CONCAT71(local_228._1_7_,(char)((int)sVar7 << 1));
    pvVar16 = (void *)((ulong)&local_228 | 1);
    if (sVar7 == 0) goto LAB_00262a2c;
  }
  else {
    uVar15 = sVar7 + 0x10 & 0xfffffffffffffff0;
    pvVar16 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar15);
    local_228 = uVar15 | 1;
    local_220 = sVar7;
    local_218 = pvVar16;
  }
  memcpy(pvVar16,pbVar11,sVar7);
LAB_00262a2c:
  *(undefined1 *)((long)pvVar16 + sVar7) = 0;
  puStack_60 = (undefined8 *)param_3[1];
  local_68 = (undefined8 *)*param_3;
  local_58 = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
                    /* try { // try from 00262a4c to 00262a63 has its CatchHandler @ 00262d24 */
  FUN_00272b50(param_1,&local_228,&local_1b0,auStack_210,&local_68);
  puVar12 = local_68;
  puVar4 = PTR_LAB_047cba48;
  puVar14 = puStack_60;
  if (local_68 != (undefined8 *)0x0) {
    while (puVar14 != puVar12) {
      puVar14 = puVar14 + -1;
      puVar13 = (undefined8 *)*puVar14;
      *puVar14 = 0;
      if (puVar13 != (undefined8 *)0x0) {
        (**(code **)*puVar13)(puVar13);
        FUN_0049e790(puVar4,puVar13);
      }
    }
    puStack_60 = puVar12;
    FUN_0049e790(PTR_LAB_047cba48,local_68);
  }
  if ((local_228 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_218);
  }
  FUN_00273abc(auStack_210);
  FUN_00273abc(&local_1e0);
  if (local_1a8 != (long *)0x0) {
    plVar1 = local_1a8 + 1;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_1a8 + 0x10))(local_1a8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (((ulong)local_170 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_160);
  }
  if (((ulong)local_188 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_178);
  }
  if ((local_1a0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_190);
  }
  return;
}


