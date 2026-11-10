/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004bba08; name: FUN_004bba08
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_004bba08(long param_1,long param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  long *plVar5;
  int iVar6;
  byte *pbVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  byte *pbVar13;
  undefined8 uVar14;
  byte local_138 [16];
  undefined8 local_128;
  ulong local_120;
  ulong uStack_118;
  ulong local_110;
  ulong local_100;
  ulong uStack_f8;
  ulong local_f0;
  ulong local_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  ulong *local_68;
  
  if (0 < *(int *)(param_2 + 0x74)) {
    lVar8 = 0;
    lVar10 = 0;
    do {
      FUN_004bba08(param_1,*(long *)(param_2 + 0x38) + lVar8,
                   *(undefined8 *)(*(long *)(param_3 + 0x40) + lVar10 * 8 + 8));
      lVar10 = lVar10 + 1;
      lVar8 = lVar8 + 0x90;
    } while (lVar10 < *(int *)(param_2 + 0x74));
  }
  iVar6 = *(int *)(param_2 + 0x78);
  if (0 < iVar6) {
    lVar8 = 0;
    lVar10 = 0;
    do {
      lVar9 = *(long *)(param_2 + 0x40) + lVar8;
      if ((0 < *(int *)(lVar9 + 0x2c)) && (*(int *)(*(long *)(lVar9 + 0x30) + 0x10) != 0)) {
        FUN_004aa7f4(param_1,*(undefined8 *)(lVar9 + 8),
                     *(undefined8 *)
                      (*(long *)(*(long *)(*(long *)(param_3 + 0x58) + lVar10 * 8 + 8) + 0x28) + 8),
                     1,"The first enum value must be zero in proto3.");
        iVar6 = *(int *)(param_2 + 0x78);
      }
      lVar10 = lVar10 + 1;
      lVar8 = lVar8 + 0x50;
    } while (lVar10 < iVar6);
  }
  if (0 < *(int *)(param_2 + 0x68)) {
    lVar8 = 0;
    lVar10 = 0;
    do {
      FUN_004bb144(param_1,*(long *)(param_2 + 0x28) + lVar8,
                   *(undefined8 *)(*(long *)(param_3 + 0x28) + lVar10 * 8 + 8));
      lVar10 = lVar10 + 1;
      lVar8 = lVar8 + 0x98;
    } while (lVar10 < *(int *)(param_2 + 0x68));
  }
  if (0 < *(int *)(param_2 + 0x80)) {
    lVar8 = 0;
    lVar10 = 0;
    do {
      FUN_004bb144(param_1,*(long *)(param_2 + 0x50) + lVar8,
                   *(undefined8 *)(*(long *)(param_3 + 0x88) + lVar10 * 8 + 8));
      lVar10 = lVar10 + 1;
      lVar8 = lVar8 + 0x98;
    } while (lVar10 < *(int *)(param_2 + 0x80));
  }
  if (0 < *(int *)(param_2 + 0x7c)) {
    FUN_004aa7f4(param_1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(*(long *)(param_3 + 0x70) + 8)
                 ,1,"Extension ranges are not allowed in proto3.");
  }
  if (*(char *)(*(long *)(param_2 + 0x20) + 0x48) != '\0') {
    FUN_004aa7f4(param_1,*(undefined8 *)(param_2 + 8),param_3,0,
                 "MessageSet is not supported in proto3.");
  }
  puVar2 = PTR_LAB_047cba48;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = &local_80;
  if (*(int *)(param_2 + 0x68) < 1) {
LAB_004bbeec:
    FUN_004c88e0(&local_88,local_80);
    return;
  }
  lVar10 = 0;
LAB_004bbc1c:
  uVar11 = 0;
  pbVar13 = *(byte **)(*(long *)(param_2 + 0x28) + lVar10 * 0x98);
  local_90 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  do {
    if ((*pbVar13 & 1) == 0) {
      if (*pbVar13 >> 1 <= uVar11) break;
      bVar1 = pbVar13[uVar11 + 1];
      if (bVar1 != 0x5f) {
        if (0x19 < bVar1 - 0x41) goto LAB_004bbc3c;
LAB_004bbc9c:
        FUN_002cdcec(&local_a0,bVar1 + 0x20);
      }
    }
    else {
      if (*(ulong *)(pbVar13 + 8) <= uVar11) break;
      bVar1 = *(byte *)(*(long *)(pbVar13 + 0x10) + uVar11);
      if (bVar1 != 0x5f) {
        if (bVar1 - 0x41 < 0x1a) goto LAB_004bbc9c;
LAB_004bbc3c:
                    /* try { // try from 004bbc3c to 004bbca7 has its CatchHandler @ 004bc034 */
        FUN_002cdcec(&local_a0);
      }
    }
    uVar11 = uVar11 + 1;
  } while( true );
                    /* try { // try from 004bbcac to 004bbcb7 has its CatchHandler @ 004bbff0 */
  puVar3 = (undefined8 *)FUN_004c893c(&local_88,&local_a0);
  if (&local_80 == puVar3) {
    lVar9 = *(long *)(param_2 + 0x28);
                    /* try { // try from 004bbe3c to 004bbe57 has its CatchHandler @ 004bbf14 */
    local_c0 = &local_a0;
    lVar8 = FUN_004c8a4c(&local_88,&local_a0,&DAT_03d0681c,&local_c0,&local_e0);
    *(long *)(lVar8 + 0x38) = lVar9 + lVar10 * 0x98;
  }
  else {
    uVar14 = *(undefined8 *)(*(long *)(param_3 + 0x28) + lVar10 * 8 + 8);
    uVar12 = *(undefined8 *)(param_2 + 8);
                    /* try { // try from 004bbcdc to 004bbceb has its CatchHandler @ 004bbfec */
    FUN_004a8ec0(local_138,"The JSON camel-case name of field \"",
                 *(undefined8 *)(*(long *)(param_2 + 0x28) + lVar10 * 0x98));
                    /* try { // try from 004bbcec to 004bbcff has its CatchHandler @ 004bbfdc */
    puVar4 = (ulong *)FUN_0021d540(local_138,"\" conflicts with field \"",0x18);
    uStack_118 = puVar4[1];
    local_120 = *puVar4;
    local_110 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
                    /* try { // try from 004bbd1c to 004bbd5f has its CatchHandler @ 004bbff4 */
    local_68 = &local_a0;
    lVar8 = FUN_004c8a4c(&local_88,&local_a0,&DAT_03d0681c,&local_68,auStack_70);
    pbVar7 = (byte *)**(undefined8 **)(lVar8 + 0x38);
    uVar11 = *(ulong *)(pbVar7 + 8);
    pbVar13 = *(byte **)(pbVar7 + 0x10);
    if ((*pbVar7 & 1) == 0) {
      pbVar13 = pbVar7 + 1;
      uVar11 = (ulong)(*pbVar7 >> 1);
    }
    puVar4 = (ulong *)FUN_0021d540(&local_120,pbVar13,uVar11);
    uStack_f8 = puVar4[1];
    local_100 = *puVar4;
    local_f0 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
                    /* try { // try from 004bbd78 to 004bbd8b has its CatchHandler @ 004bbfb4 */
    puVar4 = (ulong *)FUN_0021d540(&local_100,"\". This is not ",0xf);
    uStack_d8 = puVar4[1];
    local_e0 = *puVar4;
    local_d0 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
                    /* try { // try from 004bbda4 to 004bbdb7 has its CatchHandler @ 004bbf8c */
    puVar3 = (undefined8 *)FUN_0021d540(&local_e0,"allowed in proto3.",0x12);
    uStack_b8 = puVar3[1];
    local_c0 = (ulong *)*puVar3;
    local_b0 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    plVar5 = *(long **)(param_1 + 0x10);
    if (plVar5 != (long *)0x0) {
                    /* try { // try from 004bbde0 to 004bbdf7 has its CatchHandler @ 004bbf18 */
      (**(code **)(*plVar5 + 0x10))(plVar5,param_1 + 0x38,uVar12,uVar14,0,&local_c0);
    }
    *(undefined1 *)(param_1 + 0x30) = 1;
    if (((ulong)local_c0 & 1) != 0) {
      FUN_0049e790(puVar2,local_b0);
    }
    if ((local_e0 & 1) != 0) {
      FUN_0049e790(puVar2,local_d0);
    }
    if ((local_100 & 1) != 0) {
      FUN_0049e790(puVar2,local_f0);
    }
    if ((local_120 & 1) != 0) {
      FUN_0049e790(puVar2,local_110);
    }
    if ((local_138[0] & 1) != 0) {
      FUN_0049e790(puVar2,local_128);
    }
  }
  if ((local_a0 & 1) != 0) {
    FUN_0049e790(puVar2,local_90);
  }
  lVar10 = lVar10 + 1;
  if (*(int *)(param_2 + 0x68) <= lVar10) goto LAB_004bbeec;
  goto LAB_004bbc1c;
}


