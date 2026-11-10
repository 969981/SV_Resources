/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0039c428; name: FUN_0039c428
 */


/* WARNING: Removing unreachable block (ram,0x0039cfd4) */

undefined8 FUN_0039c428(long param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  size_t sVar9;
  long lVar10;
  undefined8 *puVar11;
  void *pvVar12;
  long *plVar13;
  size_t sVar14;
  uint uVar15;
  ulong *puVar16;
  ulong uVar17;
  long *plVar18;
  void *pvVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  void *pvVar23;
  long lVar24;
  long *plVar25;
  byte *pbVar26;
  int *piVar27;
  undefined8 uVar28;
  ulong *puVar29;
  byte bVar30;
  ulong uVar31;
  int *piVar32;
  byte bVar33;
  ulong uVar34;
  undefined1 auVar35 [16];
  byte local_f0;
  undefined7 uStack_ef;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulong *local_d8;
  ulong *local_d0;
  long local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  int local_90;
  char local_8c;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  
  lVar8 = (**(code **)(*param_3 + 0x10))(param_3,&local_90,0x2c);
  if (lVar8 != 0x2c) {
    return 0;
  }
  if (local_90 != 0x66695a54) {
    return 0;
  }
  uVar34 = ((ulong)local_70 << 0x20 & 0xff00ff00ff00ff00) >> 8 |
           ((ulong)local_70 << 0x20 & 0xff00ff00ff00ff) << 8;
  uVar34 = (uVar34 & 0xffff0000ffff0000) >> 0x10 | uVar34 << 0x10;
  local_c0 = uVar34 >> 0x20;
  if ((long)uVar34 < 0) {
    return 0;
  }
  uVar34 = ((ulong)local_6c << 0x20 & 0xff00ff00ff00ff00) >> 8 |
           ((ulong)local_6c << 0x20 & 0xff00ff00ff00ff) << 8;
  uVar34 = (uVar34 & 0xffff0000ffff0000) >> 0x10 | uVar34 << 0x10;
  local_b8 = uVar34 >> 0x20;
  if ((long)uVar34 < 0) {
    return 0;
  }
  uVar34 = ((ulong)local_68 << 0x20 & 0xff00ff00ff00ff00) >> 8 |
           ((ulong)local_68 << 0x20 & 0xff00ff00ff00ff) << 8;
  uVar34 = (uVar34 & 0xffff0000ffff0000) >> 0x10 | uVar34 << 0x10;
  local_b0 = uVar34 >> 0x20;
  if ((long)uVar34 < 0) {
    return 0;
  }
  uVar34 = ((ulong)local_74 << 0x20 & 0xff00ff00ff00ff00) >> 8 |
           ((ulong)local_74 << 0x20 & 0xff00ff00ff00ff) << 8;
  uVar34 = (uVar34 & 0xffff0000ffff0000) >> 0x10 | uVar34 << 0x10;
  local_a8 = uVar34 >> 0x20;
  if ((long)uVar34 < 0) {
    return 0;
  }
  uVar34 = ((ulong)local_78 << 0x20 & 0xff00ff00ff00ff00) >> 8 |
           ((ulong)local_78 << 0x20 & 0xff00ff00ff00ff) << 8;
  uVar34 = (uVar34 & 0xffff0000ffff0000) >> 0x10 | uVar34 << 0x10;
  local_a0 = uVar34 >> 0x20;
  if ((long)uVar34 < 0) {
    return 0;
  }
  uVar34 = ((ulong)local_7c << 0x20 & 0xff00ff00ff00ff00) >> 8 |
           ((ulong)local_7c << 0x20 & 0xff00ff00ff00ff) << 8;
  uVar34 = (uVar34 & 0xffff0000ffff0000) >> 0x10 | uVar34 << 0x10;
  local_98 = uVar34 >> 0x20;
  if ((long)uVar34 < 0) {
    return 0;
  }
  if (local_8c == '\0') {
    bVar6 = true;
    uVar34 = 4;
  }
  else {
    iVar7 = (**(code **)(*param_3 + 0x18))
                      (param_3,local_c0 * 5 + local_b8 * 6 + local_b0 + local_a8 * 8 + local_a0 +
                               local_98);
    if (iVar7 != 0) {
      return 0;
    }
    lVar8 = (**(code **)(*param_3 + 0x10))(param_3,&local_90,0x2c);
    if (lVar8 != 0x2c) {
      return 0;
    }
    if (local_90 != 0x66695a54) {
      return 0;
    }
    if (local_8c == '\0') {
      return 0;
    }
    uVar34 = ((ulong)local_70 << 0x20 & 0xff00ff00ff00ff00) >> 8 |
             ((ulong)local_70 << 0x20 & 0xff00ff00ff00ff) << 8;
    uVar34 = (uVar34 & 0xffff0000ffff0000) >> 0x10 | uVar34 << 0x10;
    local_c0 = uVar34 >> 0x20;
    if ((long)uVar34 < 0) {
      return 0;
    }
    uVar34 = ((ulong)local_6c << 0x20 & 0xff00ff00ff00ff00) >> 8 |
             ((ulong)local_6c << 0x20 & 0xff00ff00ff00ff) << 8;
    uVar34 = (uVar34 & 0xffff0000ffff0000) >> 0x10 | uVar34 << 0x10;
    local_b8 = uVar34 >> 0x20;
    if ((long)uVar34 < 0) {
      return 0;
    }
    uVar34 = ((ulong)local_68 << 0x20 & 0xff00ff00ff00ff00) >> 8 |
             ((ulong)local_68 << 0x20 & 0xff00ff00ff00ff) << 8;
    uVar34 = (uVar34 & 0xffff0000ffff0000) >> 0x10 | uVar34 << 0x10;
    local_b0 = uVar34 >> 0x20;
    if ((long)uVar34 < 0) {
      return 0;
    }
    uVar34 = ((ulong)local_74 << 0x20 & 0xff00ff00ff00ff00) >> 8 |
             ((ulong)local_74 << 0x20 & 0xff00ff00ff00ff) << 8;
    uVar34 = (uVar34 & 0xffff0000ffff0000) >> 0x10 | uVar34 << 0x10;
    local_a8 = uVar34 >> 0x20;
    if ((long)uVar34 < 0) {
      return 0;
    }
    uVar34 = ((ulong)local_78 << 0x20 & 0xff00ff00ff00ff00) >> 8 |
             ((ulong)local_78 << 0x20 & 0xff00ff00ff00ff) << 8;
    uVar34 = (uVar34 & 0xffff0000ffff0000) >> 0x10 | uVar34 << 0x10;
    local_a0 = uVar34 >> 0x20;
    if ((long)uVar34 < 0) {
      return 0;
    }
    uVar34 = ((ulong)local_7c << 0x20 & 0xff00ff00ff00ff00) >> 8 |
             ((ulong)local_7c << 0x20 & 0xff00ff00ff00ff) << 8;
    uVar34 = (uVar34 & 0xffff0000ffff0000) >> 0x10 | uVar34 << 0x10;
    local_98 = uVar34 >> 0x20;
    if ((long)uVar34 < 0) {
      return 0;
    }
    bVar6 = false;
    uVar34 = 8;
  }
  uVar4 = local_b0;
  uVar21 = local_b8;
  uVar31 = local_c0;
  if (local_b8 == 0) {
    return 0;
  }
  if (local_a8 != 0) {
    return 0;
  }
  if (((local_a0 != 0) && (local_a0 != local_b8)) || ((local_98 != 0 && (local_98 != local_b8)))) {
    return 0;
  }
  local_d8 = (ulong *)0x0;
  local_d0 = (ulong *)0x0;
  sVar14 = local_a0 + local_b8 * 6 + local_98 + local_c0 * (uVar34 | 1) + local_b0;
  local_c8 = 0;
  if (sVar14 != 0) {
    local_d8 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,sVar14);
    lVar8 = (long)local_d8 + sVar14;
    local_c8 = lVar8;
    memset(local_d8,0,sVar14);
    local_d0 = (ulong *)lVar8;
  }
                    /* try { // try from 0039c6ac to 0039c6b7 has its CatchHandler @ 0039cff8 */
  sVar9 = (**(code **)(*param_3 + 0x10))(param_3,local_d8,sVar14);
  puVar29 = local_d8;
  if (sVar9 != sVar14) {
LAB_0039c844:
    uVar28 = 0;
    goto LAB_0039c848;
  }
  plVar22 = (long *)(param_1 + 8);
  pvVar23 = (void *)*plVar22;
  if ((ulong)((*(long *)(param_1 + 0x18) - (long)pvVar23 >> 4) * -0x5555555555555555) < uVar31 + 2)
  {
    lVar8 = *(long *)(param_1 + 0x10);
    lVar24 = (uVar31 + 2) * 0x30;
    lVar10 = FUN_0049e770(PTR_FUN_047cba38,lVar24);
    lVar8 = lVar10 + (lVar8 - (long)pvVar23);
    pvVar12 = *(void **)(param_1 + 8);
    sVar14 = *(long *)(param_1 + 0x10) - (long)pvVar12;
    pvVar23 = (void *)(lVar8 - sVar14);
    if (0 < (long)sVar14) {
      memcpy(pvVar23,pvVar12,sVar14);
      pvVar12 = (void *)*plVar22;
    }
    *(void **)(param_1 + 8) = pvVar23;
    *(long *)(param_1 + 0x10) = lVar8;
    *(long *)(param_1 + 0x18) = lVar10 + lVar24;
    if (pvVar12 != (void *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48);
      pvVar23 = (void *)*plVar22;
    }
  }
  lVar8 = *(long *)(param_1 + 0x10) - (long)pvVar23 >> 4;
  bVar5 = uVar31 < (ulong)(lVar8 * -0x5555555555555555);
  lVar8 = uVar31 + lVar8 * 0x5555555555555555;
  if (bVar5 || lVar8 == 0) {
    if (bVar5) {
      *(void **)(param_1 + 0x10) = (void *)((long)pvVar23 + uVar31 * 0x30);
    }
    if (uVar31 != 0) goto LAB_0039c7b0;
    bVar30 = 0;
    bVar33 = 1;
  }
  else {
                    /* try { // try from 0039c790 to 0039c797 has its CatchHandler @ 0039cff0 */
    FUN_0039f104(plVar22,lVar8);
LAB_0039c7b0:
    puVar16 = (ulong *)*plVar22;
    uVar17 = 0;
    if (bVar6) {
      do {
        uVar20 = (long)(int)(((uint)(byte)*puVar29 << 0x10 | (uint)*(byte *)((long)puVar29 + 1) << 8
                             | (uint)*(byte *)((long)puVar29 + 2)) << 8) |
                 (ulong)*(byte *)((long)puVar29 + 3);
        *puVar16 = uVar20;
        if ((uVar17 != 0) && ((long)uVar20 <= (long)puVar16[-6])) goto LAB_0039c844;
        uVar17 = uVar17 + 1;
        puVar29 = (ulong *)((long)puVar29 + uVar34);
        puVar16 = puVar16 + 6;
      } while (uVar31 != uVar17);
    }
    else {
      do {
        uVar20 = (*puVar29 & 0xff00ff00ff00ff00) >> 8 | (*puVar29 & 0xff00ff00ff00ff) << 8;
        uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
        uVar20 = uVar20 >> 0x20 | uVar20 << 0x20;
        *puVar16 = uVar20;
        if ((uVar17 != 0) && ((long)uVar20 <= (long)puVar16[-6])) goto LAB_0039c844;
        uVar17 = uVar17 + 1;
        puVar29 = (ulong *)((long)puVar29 + uVar34);
        puVar16 = puVar16 + 6;
      } while (uVar31 != uVar17);
    }
    if (uVar31 == 0) {
      bVar33 = 0;
      bVar30 = 0;
    }
    else {
      bVar30 = 0;
      pbVar26 = (byte *)(*plVar22 + 8);
      uVar34 = uVar31;
      do {
        bVar33 = (byte)*puVar29;
        *pbVar26 = bVar33;
        if (uVar21 <= bVar33) goto LAB_0039c844;
        puVar29 = (ulong *)((long)puVar29 + 1);
        bVar30 = bVar30 | bVar33 == 0;
        uVar34 = uVar34 - 1;
        pbVar26 = pbVar26 + 0x30;
      } while (uVar34 != 0);
      bVar33 = 0;
    }
  }
  plVar25 = (long *)(param_1 + 0x20);
  lVar8 = *(long *)(param_1 + 0x28) - *plVar25 >> 4;
  bVar6 = uVar21 < (ulong)(lVar8 * -0x5555555555555555);
  lVar8 = uVar21 + lVar8 * 0x5555555555555555;
  if (bVar6 || lVar8 == 0) {
    if (bVar6) {
      *(ulong *)(param_1 + 0x28) = *plVar25 + uVar21 * 0x30;
    }
  }
  else {
                    /* try { // try from 0039c8e8 to 0039c9f7 has its CatchHandler @ 0039cff4 */
    FUN_0039ed98(plVar25,lVar8);
  }
  pbVar26 = (byte *)(*plVar25 + 0x29);
  uVar34 = uVar21;
  do {
    uVar15 = ((uint)*puVar29 & 0xff00ff00) >> 8 | ((uint)*puVar29 & 0xff00ff) << 8;
    uVar15 = uVar15 >> 0x10 | uVar15 << 0x10;
    *(uint *)(pbVar26 + -0x29) = uVar15;
    if (0x2a2fe < uVar15 + 0x1517f) goto LAB_0039c844;
    pbVar26[-1] = *(char *)((long)puVar29 + 4) != '\0';
    bVar1 = *(byte *)((long)puVar29 + 5);
    *pbVar26 = bVar1;
    if (uVar4 <= bVar1) goto LAB_0039c844;
    puVar29 = (ulong *)((long)puVar29 + 6);
    uVar34 = uVar34 - 1;
    pbVar26 = pbVar26 + 0x30;
  } while (uVar34 != 0);
  *(undefined1 *)(param_1 + 0x38) = 0;
  if (!(bool)(bVar33 | bVar30 ^ 1)) {
    lVar8 = *plVar25;
    bVar30 = 0;
    if ((*(char *)(lVar8 + 0x28) != '\0') && (bVar30 = *(byte *)(*plVar22 + 8), bVar30 != 0)) {
      do {
        if (*(char *)(lVar8 + (ulong)bVar30 * 0x30 + 0x28) == '\0') goto LAB_0039c9b4;
        bVar30 = bVar30 - 1;
      } while (bVar30 != 0);
      bVar30 = 0;
    }
LAB_0039c9b4:
    for (uVar34 = (ulong)bVar30; uVar21 != uVar34; uVar34 = (ulong)((int)uVar34 + 1) & 0xff) {
      if (*(char *)(lVar8 + uVar34 * 0x30 + 0x28) == '\0') {
        *(char *)(param_1 + 0x38) = (char)uVar34;
        break;
      }
    }
  }
  FUN_0026c6b8(param_1 + 0x40,puVar29,uVar4);
  pbVar26 = (byte *)(param_1 + 0x70);
  if ((*pbVar26 & 1) == 0) {
    pbVar26[0] = 0;
    pbVar26[1] = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  if (local_8c != '\0') {
                    /* try { // try from 0039ca28 to 0039ca37 has its CatchHandler @ 0039cfec */
    lVar8 = (**(code **)(*param_3 + 0x10))(param_3,&local_f0,1);
    uVar28 = 0;
    if ((lVar8 != 1) || (local_f0 != 10)) goto LAB_0039c848;
                    /* try { // try from 0039ca58 to 0039ca67 has its CatchHandler @ 0039cfe4 */
    lVar8 = (**(code **)(*param_3 + 0x10))(param_3,&local_f0,1);
    while( true ) {
      uVar15 = (uint)local_f0;
      if (lVar8 != 1) {
        uVar15 = 0xffffffff;
      }
      if (uVar15 == 0xffffffff) goto LAB_0039c844;
      if (uVar15 == 10) break;
                    /* try { // try from 0039ca84 to 0039caa7 has its CatchHandler @ 0039cffc */
      FUN_002cdcec(pbVar26,uVar15);
      lVar8 = (**(code **)(*param_3 + 0x10))(param_3,&local_f0,1);
    }
  }
  pbVar26 = (byte *)(param_1 + 0x58);
  if ((*pbVar26 & 1) == 0) {
    uVar34 = (ulong)(*pbVar26 >> 1);
  }
  else {
    uVar34 = *(ulong *)(param_1 + 0x60);
  }
  if (uVar34 == 0) {
                    /* try { // try from 0039cad0 to 0039cadb has its CatchHandler @ 0039cfe0 */
    (**(code **)(*param_3 + 0x20))(&local_f0,param_3);
    if ((*pbVar26 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 0x68));
    }
    *(undefined8 *)(param_1 + 0x68) = local_e0;
    *(undefined8 *)(param_1 + 0x60) = uStack_e8;
    *(ulong *)pbVar26 = CONCAT71(uStack_ef,local_f0);
  }
  if (uVar31 < 2) {
    plVar13 = (long *)*plVar22;
  }
  else {
    plVar13 = *(long **)(param_1 + 8);
    pbVar26 = (byte *)(plVar13 + uVar31 * 6 + -5);
    do {
      uVar21 = (ulong)*pbVar26;
      uVar34 = (ulong)pbVar26[-0x30];
      if ((*pbVar26 != pbVar26[-0x30]) &&
         (((lVar8 = *(long *)(param_1 + 0x20),
           *(char *)(lVar8 + uVar21 * 0x30 + 0x28) != *(char *)(lVar8 + uVar34 * 0x30 + 0x28) ||
           (*(int *)(lVar8 + uVar21 * 0x30) != *(int *)(lVar8 + uVar34 * 0x30))) ||
          (*(char *)(lVar8 + uVar21 * 0x30 + 0x29) != *(char *)(lVar8 + uVar34 * 0x30 + 0x29)))))
      goto LAB_0039cba0;
      uVar31 = uVar31 - 1;
      pbVar26 = pbVar26 + -0x30;
    } while (1 < uVar31);
    uVar31 = 1;
LAB_0039cba0:
    local_c0 = uVar31;
  }
  plVar18 = *(long **)(param_1 + 0x10);
  lVar8 = (long)plVar18 - (long)plVar13 >> 4;
  bVar6 = uVar31 < (ulong)(lVar8 * -0x5555555555555555);
  lVar8 = uVar31 + lVar8 * 0x5555555555555555;
  if (bVar6 || lVar8 == 0) {
    if (bVar6) {
      plVar18 = plVar13 + uVar31 * 6;
      *(long **)(param_1 + 0x10) = plVar18;
    }
  }
  else {
                    /* try { // try from 0039cbc4 to 0039cbcf has its CatchHandler @ 0039cff4 */
    FUN_0039f104(plVar22,lVar8);
    plVar13 = *(long **)(param_1 + 8);
    plVar18 = *(long **)(param_1 + 0x10);
  }
  if ((plVar13 == plVar18) || (-1 < *plVar13)) {
                    /* try { // try from 0039cbf8 to 0039cbff has its CatchHandler @ 0039cfe8 */
    puVar11 = (undefined8 *)FUN_0039b364(plVar22);
    *puVar11 = 0xf800000000000000;
    *(undefined1 *)(puVar11 + 1) = *(undefined1 *)(param_1 + 0x38);
    local_c0 = uVar31 + 1;
  }
                    /* try { // try from 0039cc18 to 0039cc27 has its CatchHandler @ 0039cff4 */
  FUN_0039b844(param_1,param_2,&local_c0);
  pvVar23 = *(void **)(param_1 + 0x10);
  piVar32 = *(int **)(param_1 + 0x20);
  if (pvVar23 == *(void **)(param_1 + 8)) {
    pvVar19 = pvVar23;
  }
  else {
    piVar32 = piVar32 + (ulong)*(byte *)(param_1 + 0x38) * 0xc;
    lVar8 = 0;
    lVar10 = -0x20;
    pvVar12 = *(void **)(param_1 + 8);
    do {
      lVar24 = *(long *)((long)pvVar12 + lVar10 + 0x20);
      auVar35 = FUN_00398570(0x7b2,1,1,0,lVar24 / 0x3c,lVar24 % 0x3c);
      lVar24 = auVar35._8_8_;
      auVar35 = FUN_00398570(auVar35._0_8_,(long)auVar35[8],(lVar24 << 0x30) >> 0x38,
                             (lVar24 << 0x28) >> 0x38,
                             (long)*piVar32 / 0x3c + ((lVar24 << 0x20) >> 0x38),
                             (long)*piVar32 % 0x3c + ((lVar24 << 0x18) >> 0x38));
      lVar24 = auVar35._8_8_;
      auVar35 = FUN_00398570(auVar35._0_8_,(long)auVar35[8],(lVar24 << 0x30) >> 0x38,
                             (lVar24 << 0x28) >> 0x38,(lVar24 << 0x20) >> 0x38,
                             ((lVar24 << 0x18) >> 0x38) + -1);
      *(long *)((long)pvVar12 + lVar10 + 0x40) = auVar35._0_8_;
      *(ulong *)((long)pvVar12 + lVar10 + 0x48) = auVar35._8_8_ & 0xffffffffff;
      piVar32 = (int *)(*plVar25 + (ulong)*(byte *)((long)pvVar12 + lVar10 + 0x28) * 0x30);
      lVar24 = *(long *)((long)pvVar12 + lVar10 + 0x20);
      auVar35 = FUN_00398570(0x7b2,1,1,0,lVar24 / 0x3c,lVar24 % 0x3c);
      lVar24 = auVar35._8_8_;
      auVar35 = FUN_00398570(auVar35._0_8_,(long)auVar35[8],(lVar24 << 0x30) >> 0x38,
                             (lVar24 << 0x28) >> 0x38,
                             (long)*piVar32 / 0x3c + ((lVar24 << 0x20) >> 0x38),
                             (long)*piVar32 % 0x3c + ((lVar24 << 0x18) >> 0x38));
      lVar24 = auVar35._0_8_;
      *(long *)((long)pvVar12 + lVar10 + 0x30) = lVar24;
      *(ulong *)((long)pvVar12 + lVar10 + 0x38) = auVar35._8_8_ & 0xffffffffff;
      if (lVar8 == 0) {
        pvVar23 = (void *)*plVar22;
      }
      else {
        pvVar23 = (void *)*plVar22;
        if ((lVar24 <= *(long *)((long)pvVar23 + lVar10)) &&
           ((*(long *)((long)pvVar23 + lVar10) != lVar24 ||
            ((cVar2 = *(char *)((long)pvVar23 + lVar10 + 8), auVar35[8] <= cVar2 &&
             ((cVar2 != auVar35[8] ||
              ((cVar2 = *(char *)((long)pvVar23 + lVar10 + 9),
               cVar3 = *(char *)((long)pvVar12 + lVar10 + 0x39), cVar3 <= cVar2 &&
               ((cVar2 != cVar3 ||
                ((cVar2 = *(char *)((long)pvVar23 + lVar10 + 10),
                 cVar3 = *(char *)((long)pvVar12 + lVar10 + 0x3a), cVar3 <= cVar2 &&
                 ((cVar2 != cVar3 ||
                  ((cVar2 = *(char *)((long)pvVar23 + lVar10 + 0xb),
                   cVar3 = *(char *)((long)pvVar12 + lVar10 + 0x3b), cVar3 <= cVar2 &&
                   ((cVar2 != cVar3 ||
                    (*(char *)((long)pvVar12 + lVar10 + 0x3c) <=
                     *(char *)((long)pvVar23 + lVar10 + 0xc))))))))))))))))))))) goto LAB_0039c844;
      }
      pvVar19 = *(void **)(param_1 + 0x10);
      lVar8 = lVar8 + 1;
      lVar10 = lVar10 + 0x30;
      pvVar12 = pvVar23;
    } while (lVar8 != ((long)pvVar19 - (long)pvVar23 >> 4) * -0x5555555555555555);
    piVar32 = (int *)*plVar25;
  }
  piVar27 = *(int **)(param_1 + 0x28);
  if (piVar32 != piVar27) {
    do {
      auVar35 = FUN_00398570(0x7b2,1,1,0,0x222222222222222,7);
      lVar8 = auVar35._8_8_;
      auVar35 = FUN_00398570(auVar35._0_8_,(long)auVar35[8],(lVar8 << 0x30) >> 0x38,
                             (lVar8 << 0x28) >> 0x38,
                             (long)*piVar32 / 0x3c + ((lVar8 << 0x20) >> 0x38),
                             (long)*piVar32 % 0x3c + ((lVar8 << 0x18) >> 0x38));
      *(long *)(piVar32 + 2) = auVar35._0_8_;
      *(ulong *)(piVar32 + 4) = auVar35._8_8_ & 0xffffffffff;
      auVar35 = FUN_00398570(0x7b2,1,1,0,0xfdddddddddddddde,0xfffffffffffffff8);
      lVar8 = auVar35._8_8_;
      auVar35 = FUN_00398570(auVar35._0_8_,(long)auVar35[8],(lVar8 << 0x30) >> 0x38,
                             (lVar8 << 0x28) >> 0x38,
                             (long)*piVar32 / 0x3c + ((lVar8 << 0x20) >> 0x38),
                             (long)*piVar32 % 0x3c + ((lVar8 << 0x18) >> 0x38));
      *(long *)(piVar32 + 6) = auVar35._0_8_;
      *(ulong *)(piVar32 + 8) = auVar35._8_8_ & 0xffffffffff;
      piVar32 = piVar32 + 0xc;
    } while (piVar32 != piVar27);
    pvVar23 = *(void **)(param_1 + 8);
    pvVar19 = *(void **)(param_1 + 0x10);
  }
  lVar8 = (long)pvVar19 - (long)pvVar23;
  if ((ulong)((lVar8 >> 4) * -0x5555555555555555) <
      (ulong)((*(long *)(param_1 + 0x18) - (long)pvVar23 >> 4) * -0x5555555555555555)) {
    if (lVar8 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = FUN_0049e770(PTR_FUN_047cba38,lVar8);
      pvVar23 = *(void **)(param_1 + 8);
      pvVar19 = *(void **)(param_1 + 0x10);
    }
    lVar10 = lVar10 + (lVar8 >> 4) * 0x10;
    sVar14 = (long)pvVar19 - (long)pvVar23;
    if (0 < (long)sVar14) {
      memcpy((void *)(lVar10 - sVar14),pvVar23,sVar14);
      pvVar23 = (void *)*plVar22;
    }
    *(void **)(param_1 + 8) = (void *)(lVar10 - sVar14);
    *(long *)(param_1 + 0x10) = lVar10;
    *(long *)(param_1 + 0x18) = lVar10;
    if (pvVar23 != (void *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
  }
  uVar28 = 1;
LAB_0039c848:
  if (local_d8 == (ulong *)0x0) {
    return uVar28;
  }
  local_d0 = local_d8;
  FUN_0049e790(PTR_LAB_047cba48);
  return uVar28;
}


