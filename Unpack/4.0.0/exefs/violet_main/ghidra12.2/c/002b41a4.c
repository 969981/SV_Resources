/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002b41a4; name: FUN_002b41a4
 */


void FUN_002b41a4(long *param_1,long *param_2)

{
  ulong *puVar1;
  void *pvVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  size_t sVar7;
  void *pvVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  char *pcVar14;
  long *plVar15;
  undefined1 *puVar16;
  ulong uVar17;
  long *plVar18;
  ulong local_180;
  ulong uStack_178;
  void *local_170;
  ulong local_168;
  size_t local_160;
  undefined1 *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  long *local_140;
  long *plStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  plVar18 = param_1 + 1;
  *plVar18 = 1;
  puVar5 = PTR_DAT_047cc790;
  param_1[2] = 0;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[2] = *param_2;
  *param_2 = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = (long)(param_1 + 0x1f);
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[8] = 0;
  param_1[0xd] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = (long)(param_1 + 0x22);
  lVar9 = *(long *)(*(long *)(param_1[2] + 0x18) + 0x10);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002b4928 to 002b4933 has its CatchHandler @ 002b4978 */
    abort();
  }
  if ((*(byte *)(lVar9 + 0x80) & 1) == 0) {
    uVar13 = (ulong)(*(byte *)(lVar9 + 0x80) >> 1);
  }
  else {
    uVar13 = *(ulong *)(lVar9 + 0x88);
  }
  if (uVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* try { // try from 002b4264 to 002b429b has its CatchHandler @ 002b4978 */
  lVar9 = FUN_0036f8e0(*(undefined8 *)(*(long *)(param_1[2] + 0x18) + 0x18),0,0xffff,
                       *(undefined8 *)(lVar9 + 0x28),*(long *)PTR_DAT_047cc628 + 0x4a0,0,
                       0x7fffffffffffffff,0);
  param_1[4] = lVar9;
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_00373770(param_1 + 5);
  FUN_00373770(param_1 + 0x12);
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  local_150 = 0xa000000000;
  uStack_148 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  plStack_f0 = (long *)0x0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  plStack_138 = (long *)0x0;
  local_140 = (long *)0x0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
                    /* try { // try from 002b42d0 to 002b42df has its CatchHandler @ 002b4974 */
  iVar6 = FUN_0036cee0(param_1[4],&local_150,1,0);
  puVar5 = PTR_LAB_047cc798;
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002b4934 to 002b493f has its CatchHandler @ 002b4974 */
    abort();
  }
  param_1[0xc] = 0;
  param_1[10] = (long)puVar5;
  param_1[0xb] = (long)param_1;
  lVar9 = *(long *)(*(long *)(param_1[2] + 0x18) + 0x10);
  if (*(long *)(lVar9 + 0x98) == 0) goto LAB_002b44a4;
  pcVar14 = *(char **)PTR_PTR_047cc6f0;
  sVar7 = strlen(pcVar14);
  if (0xffffffffffffffef < sVar7) {
                    /* try { // try from 002b4940 to 002b4947 has its CatchHandler @ 002b4954 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar7 < 0x17) {
    local_168 = CONCAT71(local_168._1_7_,(char)((int)sVar7 << 1));
    puVar16 = (undefined1 *)((ulong)&local_168 | 1);
    if (sVar7 != 0) goto LAB_002b4370;
  }
  else {
    uVar13 = sVar7 + 0x10 & 0xfffffffffffffff0;
    puVar16 = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar13);
    local_168 = uVar13 | 1;
    local_160 = sVar7;
    local_158 = puVar16;
LAB_002b4370:
    memcpy(puVar16,pcVar14,sVar7);
  }
  puVar16[sVar7] = 0;
                    /* try { // try from 002b4394 to 002b439f has its CatchHandler @ 002b496c */
  FUN_002b3fb4(param_1,&local_168,*(long *)(*(long *)(param_1[2] + 0x18) + 0x10) + 0x80);
  if ((local_168 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_158);
  }
  lVar9 = *(long *)(*(long *)(param_1[2] + 0x18) + 0x10);
  if (*(char *)(lVar9 + 0xa8) == '\0') goto LAB_002b44a4;
  if ((*(byte *)(lVar9 + 0xb0) & 1) == 0) {
    if (*(byte *)(lVar9 + 0xb0) >> 1 == 0) goto LAB_002b44a4;
  }
  else if (*(long *)(lVar9 + 0xb8) == 0) goto LAB_002b44a4;
  pcVar14 = *(char **)PTR_PTR_047cc6f8;
  sVar7 = strlen(pcVar14);
  if (0xffffffffffffffef < sVar7) {
                    /* try { // try from 002b4948 to 002b494f has its CatchHandler @ 002b4950 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar7 < 0x17) {
    local_168 = CONCAT71(local_168._1_7_,(char)((int)sVar7 << 1));
    puVar16 = (undefined1 *)((ulong)&local_168 | 1);
    if (sVar7 != 0) goto LAB_002b4450;
  }
  else {
    uVar13 = sVar7 + 0x10 & 0xfffffffffffffff0;
    puVar16 = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar13);
    local_168 = uVar13 | 1;
    local_160 = sVar7;
    local_158 = puVar16;
LAB_002b4450:
    memcpy(puVar16,pcVar14,sVar7);
  }
  puVar16[sVar7] = 0;
                    /* try { // try from 002b4474 to 002b447f has its CatchHandler @ 002b4968 */
  FUN_002b3fb4(param_1,&local_168,*(long *)(*(long *)(param_1[2] + 0x18) + 0x10) + 0xb0);
  if ((local_168 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_158);
  }
  lVar9 = *(long *)(*(long *)(param_1[2] + 0x18) + 0x10);
LAB_002b44a4:
  puVar5 = PTR_PTR_047cc700;
  if (*(long **)(lVar9 + 0x108) != (long *)(lVar9 + 0x110)) {
    plVar15 = *(long **)(lVar9 + 0x108);
    do {
      pcVar14 = *(char **)puVar5;
      sVar7 = strlen(pcVar14);
      if (0xffffffffffffffef < sVar7) {
                    /* try { // try from 002b4908 to 002b490f has its CatchHandler @ 002b4964 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      puVar1 = (ulong *)(plVar15 + 4);
      if (sVar7 < 0x17) {
        local_168 = CONCAT71(local_168._1_7_,(char)((int)sVar7 << 1));
        puVar16 = (undefined1 *)((ulong)&local_168 | 1);
        if (sVar7 != 0) goto LAB_002b4564;
        *(undefined1 *)((ulong)&local_168 | 1) = 0;
        if ((*puVar1 & 1) == 0) goto LAB_002b4528;
LAB_002b4580:
        uVar13 = plVar15[5];
        pvVar2 = (void *)plVar15[6];
        if (uVar13 < 0x17) {
          local_180 = CONCAT71(local_180._1_7_,(char)((int)uVar13 << 1));
          pvVar8 = (void *)((ulong)&local_180 | 1);
        }
        else {
          if (0xffffffffffffffef < uVar13) {
                    /* try { // try from 002b4918 to 002b491f has its CatchHandler @ 002b495c */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          uVar17 = uVar13 + 0x10 & 0xfffffffffffffff0;
          pvVar8 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar17);
          local_180 = uVar17 | 1;
          uStack_178 = uVar13;
          local_170 = pvVar8;
        }
        memcpy(pvVar8,pvVar2,uVar13 + 1);
      }
      else {
        uVar13 = sVar7 + 0x10 & 0xfffffffffffffff0;
        puVar16 = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar13);
        local_168 = uVar13 | 1;
        local_160 = sVar7;
        local_158 = puVar16;
LAB_002b4564:
        memcpy(puVar16,pcVar14,sVar7);
        puVar16[sVar7] = 0;
        if ((*puVar1 & 1) != 0) goto LAB_002b4580;
LAB_002b4528:
        uStack_178 = plVar15[5];
        local_180 = *puVar1;
        local_170 = (void *)plVar15[6];
      }
                    /* try { // try from 002b45d4 to 002b45e3 has its CatchHandler @ 002b4984 */
      FUN_002b3fb4(param_1,&local_168,&local_180);
      if ((local_180 & 1) == 0) {
        if ((local_168 & 1) == 0) goto LAB_002b45f4;
LAB_002b4618:
        FUN_0049e790(PTR_LAB_047cba48,local_158);
        plVar10 = (long *)plVar15[1];
        if ((long *)plVar15[1] != (long *)0x0) goto LAB_002b4630;
LAB_002b4640:
        plVar10 = plVar15 + 2;
        plVar11 = (long *)*plVar10;
        if ((long *)*plVar11 != plVar15) {
          do {
            lVar12 = *plVar10;
            plVar10 = (long *)(lVar12 + 0x10);
            plVar11 = (long *)*plVar10;
          } while (*plVar11 != lVar12);
        }
      }
      else {
        FUN_0049e790(PTR_LAB_047cba48,local_170);
        if ((local_168 & 1) != 0) goto LAB_002b4618;
LAB_002b45f4:
        plVar10 = (long *)plVar15[1];
        if ((long *)plVar15[1] == (long *)0x0) goto LAB_002b4640;
LAB_002b4630:
        do {
          plVar11 = plVar10;
          plVar10 = (long *)*plVar11;
        } while ((long *)*plVar11 != (long *)0x0);
      }
      plVar15 = plVar11;
    } while (plVar11 != (long *)(lVar9 + 0x110));
    lVar9 = *(long *)(*(long *)(param_1[2] + 0x18) + 0x10);
  }
  puVar5 = PTR_PTR_047cc710;
  if (*(long **)(lVar9 + 0x120) != (long *)(lVar9 + 0x128)) {
    plVar15 = *(long **)(lVar9 + 0x120);
    do {
      pcVar14 = *(char **)puVar5;
      sVar7 = strlen(pcVar14);
      if (0xffffffffffffffef < sVar7) {
                    /* try { // try from 002b4910 to 002b4917 has its CatchHandler @ 002b4960 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      puVar1 = (ulong *)(plVar15 + 4);
      if (sVar7 < 0x17) {
        local_168 = CONCAT71(local_168._1_7_,(char)((int)sVar7 << 1));
        puVar16 = (undefined1 *)((ulong)&local_168 | 1);
        if (sVar7 != 0) goto LAB_002b4734;
        *(undefined1 *)((ulong)&local_168 | 1) = 0;
        if ((*puVar1 & 1) == 0) goto LAB_002b46f8;
LAB_002b4750:
        uVar13 = plVar15[5];
        pvVar2 = (void *)plVar15[6];
        if (uVar13 < 0x17) {
          local_180 = CONCAT71(local_180._1_7_,(char)((int)uVar13 << 1));
          pvVar8 = (void *)((ulong)&local_180 | 1);
        }
        else {
          if (0xffffffffffffffef < uVar13) {
                    /* try { // try from 002b4920 to 002b4927 has its CatchHandler @ 002b4958 */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          uVar17 = uVar13 + 0x10 & 0xfffffffffffffff0;
          pvVar8 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar17);
          local_180 = uVar17 | 1;
          uStack_178 = uVar13;
          local_170 = pvVar8;
        }
        memcpy(pvVar8,pvVar2,uVar13 + 1);
      }
      else {
        uVar13 = sVar7 + 0x10 & 0xfffffffffffffff0;
        puVar16 = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar13);
        local_168 = uVar13 | 1;
        local_160 = sVar7;
        local_158 = puVar16;
LAB_002b4734:
        memcpy(puVar16,pcVar14,sVar7);
        puVar16[sVar7] = 0;
        if ((*puVar1 & 1) != 0) goto LAB_002b4750;
LAB_002b46f8:
        uStack_178 = plVar15[5];
        local_180 = *puVar1;
        local_170 = (void *)plVar15[6];
      }
                    /* try { // try from 002b47a4 to 002b47b3 has its CatchHandler @ 002b4980 */
      FUN_002b3fb4(param_1,&local_168,&local_180);
      if ((local_180 & 1) == 0) {
        if ((local_168 & 1) == 0) goto LAB_002b47c4;
LAB_002b47e8:
        FUN_0049e790(PTR_LAB_047cba48,local_158);
        plVar10 = (long *)plVar15[1];
        if ((long *)plVar15[1] != (long *)0x0) goto LAB_002b4800;
LAB_002b4810:
        plVar10 = plVar15 + 2;
        plVar11 = (long *)*plVar10;
        if ((long *)*plVar11 != plVar15) {
          do {
            lVar12 = *plVar10;
            plVar10 = (long *)(lVar12 + 0x10);
            plVar11 = (long *)*plVar10;
          } while (*plVar11 != lVar12);
        }
      }
      else {
        FUN_0049e790(PTR_LAB_047cba48,local_170);
        if ((local_168 & 1) != 0) goto LAB_002b47e8;
LAB_002b47c4:
        plVar10 = (long *)plVar15[1];
        if ((long *)plVar15[1] == (long *)0x0) goto LAB_002b4810;
LAB_002b4800:
        do {
          plVar11 = plVar10;
          plVar10 = (long *)*plVar11;
        } while ((long *)*plVar11 != (long *)0x0);
      }
      plVar15 = plVar11;
    } while (plVar11 != (long *)(lVar9 + 0x128));
  }
  uStack_148 = 0;
  local_150 = DAT_03cb5380;
  uStack_f8 = 0;
  local_100 = DAT_03cb5678;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar4) {
      *plVar18 = *plVar18 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    puVar5 = PTR_LAB_047cc7a0;
  } while (cVar3 != '\0');
  param_1[0x11] = 0;
  param_1[0xf] = (long)puVar5;
  param_1[0x10] = (long)param_1;
                    /* try { // try from 002b4890 to 002b48e3 has its CatchHandler @ 002b4974 */
  local_140 = param_1 + 5;
  plStack_f0 = param_1 + 0xd;
  iVar6 = FUN_0036cee0(param_1[4],&local_150,2,param_1 + 0xe);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plStack_138 = param_1 + 0x15;
  plStack_130 = param_1 + 0x16;
  local_150 = DAT_03cb53c0;
  uStack_148 = 0;
  param_1[0x1b] = (long)PTR_LAB_047cc7a8;
  param_1[0x1c] = (long)param_1;
  param_1[0x1d] = 0;
  local_140 = param_1 + 0x12;
  iVar6 = FUN_0036cee0(param_1[4],&local_150,1,param_1 + 0x1a);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}


