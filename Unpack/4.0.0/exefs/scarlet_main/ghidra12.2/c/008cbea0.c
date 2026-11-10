/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008cbea0; name: FUN_008cbea0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008cbea0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined4 *puVar19;
  byte *pbVar20;
  long *plVar21;
  undefined4 uVar22;
  float fVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar40 [16];
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar56;
  float fVar57;
  undefined1 auVar54 [16];
  float fVar58;
  undefined1 auVar55 [16];
  undefined8 local_18;
  
  plVar21 = (long *)(param_1 + 0x10);
  lVar12 = *plVar21;
  if (*(long *)(lVar12 + 0x9f0) != -1) {
    uVar11 = FUN_008ee2f4(lVar12 + 0x9f0);
    lVar12 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x60) = uVar11;
  }
  if (*(long *)(lVar12 + 0xa10) != -1) {
    uVar11 = FUN_008ee2f4(lVar12 + 0xa10);
    lVar12 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x68) = uVar11;
  }
  if (*(long *)(lVar12 + 0xa30) != -1) {
    uVar11 = FUN_008ee2f4(lVar12 + 0xa30);
    lVar12 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x70) = uVar11;
  }
  if (*(char *)(lVar12 + 0x99c) == '\0') {
    *(undefined8 *)(lVar12 + 0x3c0) = *(undefined8 *)(lVar12 + 0x9a0);
    *(undefined4 *)(lVar12 + 0x3c8) = *(undefined4 *)(lVar12 + 0x9a8);
    lVar12 = *plVar21;
    cVar5 = *(char *)(lVar12 + 0x99e);
  }
  else {
    cVar5 = *(char *)(lVar12 + 0x99e);
  }
  if (cVar5 == '\0') {
    *(undefined4 *)(lVar12 + 0x440) = *(undefined4 *)(lVar12 + 0x9ac);
    lVar12 = *plVar21;
    cVar5 = *(char *)(lVar12 + 0x99d);
  }
  else {
    cVar5 = *(char *)(lVar12 + 0x99d);
  }
  if (cVar5 == '\0') {
    *(undefined8 *)(lVar12 + 0x4c0) = *(undefined8 *)(lVar12 + 0x9b0);
    *(undefined4 *)(lVar12 + 0x4c8) = *(undefined4 *)(lVar12 + 0x9b8);
    lVar12 = *plVar21;
    cVar5 = *(char *)(lVar12 + 0x99f);
  }
  else {
    cVar5 = *(char *)(lVar12 + 0x99f);
  }
  if (cVar5 == '\0') {
    *(undefined4 *)(lVar12 + 0x540) = *(undefined4 *)(lVar12 + 0x9bc);
    lVar12 = *plVar21;
  }
  if ((ulong)(long)*(char *)(lVar12 + 0xa54) < 4) {
    lVar13 = (long)*(char *)(lVar12 + 0xa54) * 4;
    uVar22 = *(undefined4 *)(&DAT_03caae40 + lVar13);
    *(undefined4 *)(lVar12 + 0x300) = *(undefined4 *)(&DAT_03cab810 + lVar13);
    *(undefined4 *)(*plVar21 + 0x304) = uVar22;
    lVar12 = *plVar21;
    cVar5 = *(char *)(lVar12 + 0xa64);
  }
  else {
    lVar12 = *plVar21;
    cVar5 = *(char *)(lVar12 + 0xa64);
  }
  if ((ulong)(long)cVar5 < 4) {
    lVar13 = (long)cVar5 * 4;
    uVar22 = *(undefined4 *)(&DAT_03caae40 + lVar13);
    *(undefined4 *)(lVar12 + 0x350) = *(undefined4 *)(&DAT_03cab810 + lVar13);
    *(undefined4 *)(*plVar21 + 0x354) = uVar22;
    lVar12 = *plVar21;
    cVar5 = *(char *)(lVar12 + 0xa74);
  }
  else {
    lVar12 = *plVar21;
    cVar5 = *(char *)(lVar12 + 0xa74);
  }
  if ((ulong)(long)cVar5 < 4) {
    lVar13 = (long)cVar5 * 4;
    *(undefined4 *)(lVar12 + 0x3a0) = *(undefined4 *)(&DAT_03cab810 + lVar13);
    *(undefined4 *)(*plVar21 + 0x3a4) = *(undefined4 *)(&DAT_03caae40 + lVar13);
    lVar12 = *plVar21;
    cVar5 = *(char *)(lVar12 + 0xa51);
  }
  else {
    lVar12 = *plVar21;
    cVar5 = *(char *)(lVar12 + 0xa51);
  }
  if (cVar5 == '\0') {
    *(undefined4 *)(lVar12 + 0x2c8) = 0;
    *(undefined4 *)(*plVar21 + 0x2cc) = 0;
    *(undefined4 *)(*plVar21 + 0x2c0) = 0;
    *(undefined4 *)(*plVar21 + 0x2c4) = 0;
    *(undefined4 *)(*plVar21 + 0x2d0) = 0;
    *(undefined4 *)(*plVar21 + 0x2d4) = 0;
    lVar12 = *plVar21;
    cVar5 = *(char *)(lVar12 + 0xa61);
  }
  else {
    cVar5 = *(char *)(lVar12 + 0xa61);
  }
  if (cVar5 == '\0') {
    *(undefined4 *)(lVar12 + 0x318) = 0;
    *(undefined4 *)(*plVar21 + 0x31c) = 0;
    *(undefined4 *)(*plVar21 + 0x310) = 0;
    *(undefined4 *)(*plVar21 + 0x314) = 0;
    *(undefined4 *)(*plVar21 + 800) = 0;
    *(undefined4 *)(*plVar21 + 0x324) = 0;
    lVar12 = *plVar21;
    cVar5 = *(char *)(lVar12 + 0xa71);
  }
  else {
    cVar5 = *(char *)(lVar12 + 0xa71);
  }
  if (cVar5 == '\0') {
    *(undefined4 *)(lVar12 + 0x368) = 0;
    *(undefined4 *)(*plVar21 + 0x36c) = 0;
    *(undefined4 *)(*plVar21 + 0x360) = 0;
    *(undefined4 *)(*plVar21 + 0x364) = 0;
    *(undefined4 *)(*plVar21 + 0x370) = 0;
    *(undefined4 *)(*plVar21 + 0x374) = 0;
    lVar12 = *plVar21;
    cVar5 = *(char *)(lVar12 + 0xa52);
  }
  else {
    cVar5 = *(char *)(lVar12 + 0xa52);
  }
  if (cVar5 == '\0') {
    *(undefined4 *)(lVar12 + 0x2f0) = 0;
    *(undefined4 *)(*plVar21 + 0x2f4) = 0;
    *(undefined4 *)(*plVar21 + 0x2f8) = 0;
    lVar12 = *plVar21;
    cVar5 = *(char *)(lVar12 + 0xa62);
  }
  else {
    cVar5 = *(char *)(lVar12 + 0xa62);
  }
  if (cVar5 == '\0') {
    *(undefined4 *)(lVar12 + 0x340) = 0;
    *(undefined4 *)(*plVar21 + 0x344) = 0;
    *(undefined4 *)(*plVar21 + 0x348) = 0;
    lVar12 = *plVar21;
    cVar5 = *(char *)(lVar12 + 0xa72);
  }
  else {
    cVar5 = *(char *)(lVar12 + 0xa72);
  }
  if (cVar5 == '\0') {
    *(undefined4 *)(lVar12 + 0x390) = 0;
    *(undefined4 *)(*plVar21 + 0x394) = 0;
    *(undefined4 *)(*plVar21 + 0x398) = 0;
    lVar12 = *plVar21;
    cVar5 = *(char *)(lVar12 + 0xa53);
  }
  else {
    cVar5 = *(char *)(lVar12 + 0xa53);
  }
  if (cVar5 == '\0') {
    *(undefined4 *)(lVar12 + 0x2e0) = 0x3f800000;
    *(undefined4 *)(*plVar21 + 0x2e4) = 0x3f800000;
    *(undefined4 *)(*plVar21 + 0x2d8) = 0;
    *(undefined4 *)(*plVar21 + 0x2dc) = 0;
    *(undefined4 *)(*plVar21 + 0x2e8) = 0;
    *(undefined4 *)(*plVar21 + 0x2ec) = 0;
    lVar12 = *plVar21;
    cVar5 = *(char *)(lVar12 + 0xa63);
  }
  else {
    cVar5 = *(char *)(lVar12 + 0xa63);
  }
  if (cVar5 == '\0') {
    *(undefined4 *)(lVar12 + 0x330) = 0x3f800000;
    *(undefined4 *)(*plVar21 + 0x334) = 0x3f800000;
    *(undefined4 *)(*plVar21 + 0x328) = 0;
    *(undefined4 *)(*plVar21 + 0x32c) = 0;
    *(undefined4 *)(*plVar21 + 0x338) = 0;
    *(undefined4 *)(*plVar21 + 0x33c) = 0;
    lVar12 = *plVar21;
    cVar5 = *(char *)(lVar12 + 0xa73);
  }
  else {
    cVar5 = *(char *)(lVar12 + 0xa73);
  }
  if (cVar5 == '\0') {
    *(undefined4 *)(lVar12 + 0x380) = 0x3f800000;
    *(undefined4 *)(*plVar21 + 900) = 0x3f800000;
    *(undefined4 *)(*plVar21 + 0x378) = 0;
    *(undefined4 *)(*plVar21 + 0x37c) = 0;
    *(undefined4 *)(*plVar21 + 0x388) = 0;
    *(undefined4 *)(*plVar21 + 0x38c) = 0;
    lVar12 = *plVar21;
    cVar5 = *(char *)(lVar12 + 0x8b0);
  }
  else {
    cVar5 = *(char *)(lVar12 + 0x8b0);
  }
  if (cVar5 == '\0') {
    *(undefined4 *)(lVar12 + 0x700) = 0;
    *(undefined4 *)(*plVar21 + 0x710) = 0;
    *(undefined4 *)(*plVar21 + 0x720) = 0;
    *(undefined4 *)(*plVar21 + 0x730) = 0;
    lVar12 = *plVar21;
    cVar5 = *(char *)(lVar12 + 0x8b1);
  }
  else {
    cVar5 = *(char *)(lVar12 + 0x8b1);
  }
  if (cVar5 == '\0') {
    *(undefined4 *)(lVar12 + 0x704) = 0;
    *(undefined4 *)(*plVar21 + 0x714) = 0;
    *(undefined4 *)(*plVar21 + 0x724) = 0;
    *(undefined4 *)(*plVar21 + 0x734) = 0;
    lVar12 = *plVar21;
    cVar5 = *(char *)(lVar12 + 0x8b2);
  }
  else {
    cVar5 = *(char *)(lVar12 + 0x8b2);
  }
  if (cVar5 == '\0') {
    *(undefined4 *)(lVar12 + 0x708) = 0;
    *(undefined4 *)(*plVar21 + 0x718) = 0;
    *(undefined4 *)(*plVar21 + 0x728) = 0;
    *(undefined4 *)(*plVar21 + 0x738) = 0;
    lVar12 = *plVar21;
    cVar5 = *(char *)(lVar12 + 0xa50);
  }
  else {
    cVar5 = *(char *)(lVar12 + 0xa50);
  }
  if ((cVar5 == '\x05') &&
     (lVar12 = FUN_008dc050(param_2,*(undefined8 *)(lVar12 + 0x9f0)), lVar12 != 0)) {
    *(float *)(*plVar21 + 0x110) = (float)*(int *)(lVar12 + 0x30);
  }
  if ((*(char *)(*plVar21 + 0xa60) == '\x05') &&
     (lVar12 = FUN_008dc050(param_2,*(undefined8 *)(*plVar21 + 0xa10)), lVar12 != 0)) {
    *(float *)(*plVar21 + 0x1a0) = (float)*(int *)(lVar12 + 0x30);
  }
  if ((*(char *)(*plVar21 + 0xa70) == '\x05') &&
     (lVar12 = FUN_008dc050(param_2,*(undefined8 *)(*plVar21 + 0xa30)), lVar12 != 0)) {
    *(float *)(*plVar21 + 0x230) = (float)*(int *)(lVar12 + 0x30);
  }
  lVar12 = *plVar21;
  uVar15 = *(uint *)(lVar12 + 0x60);
  uVar16 = (ulong)uVar15;
  if (uVar15 - 1 < 7) {
    lVar13 = uVar16 * 0x10 + 0x3c0;
    while( true ) {
      lVar18 = lVar12 + (long)(int)uVar15 * 0x10;
      uVar11 = *(undefined8 *)(lVar18 + 0x3b8);
      *(undefined8 *)(lVar12 + lVar13) = *(undefined8 *)(lVar18 + 0x3b0);
      ((undefined8 *)(lVar12 + lVar13))[1] = uVar11;
      iVar14 = (int)uVar16;
      *(float *)(*plVar21 + lVar13 + 0xc) = *(float *)(*plVar21 + lVar13 + 0xc) + (float)iVar14;
      lVar12 = *plVar21;
      if (iVar14 == 7) break;
      uVar15 = *(uint *)(lVar12 + 0x60);
      uVar16 = (ulong)(iVar14 + 1);
      lVar13 = lVar13 + 0x10;
    }
  }
  uVar15 = *(uint *)(lVar12 + 0x68);
  uVar16 = (ulong)uVar15;
  if (uVar15 - 1 < 7) {
    lVar13 = uVar16 * 0x10 + 0x4c0;
    while( true ) {
      lVar18 = lVar12 + (long)(int)uVar15 * 0x10;
      uVar11 = *(undefined8 *)(lVar18 + 0x4b8);
      *(undefined8 *)(lVar12 + lVar13) = *(undefined8 *)(lVar18 + 0x4b0);
      ((undefined8 *)(lVar12 + lVar13))[1] = uVar11;
      iVar14 = (int)uVar16;
      *(float *)(*plVar21 + lVar13 + 0xc) = *(float *)(*plVar21 + lVar13 + 0xc) + (float)iVar14;
      lVar12 = *plVar21;
      if (iVar14 == 7) break;
      uVar15 = *(uint *)(lVar12 + 0x68);
      uVar16 = (ulong)(iVar14 + 1);
      lVar13 = lVar13 + 0x10;
    }
  }
  uVar15 = *(uint *)(lVar12 + 100);
  uVar16 = (ulong)uVar15;
  if (uVar15 - 1 < 7) {
    lVar13 = uVar16 * 0x10 + 0x440;
    while( true ) {
      lVar18 = lVar12 + (long)(int)uVar15 * 0x10;
      uVar11 = *(undefined8 *)(lVar18 + 0x438);
      *(undefined8 *)(lVar12 + lVar13) = *(undefined8 *)(lVar18 + 0x430);
      ((undefined8 *)(lVar12 + lVar13))[1] = uVar11;
      iVar14 = (int)uVar16;
      *(float *)(*plVar21 + lVar13 + 0xc) = *(float *)(*plVar21 + lVar13 + 0xc) + (float)iVar14;
      lVar12 = *plVar21;
      if (iVar14 == 7) break;
      uVar15 = *(uint *)(lVar12 + 100);
      uVar16 = (ulong)(iVar14 + 1);
      lVar13 = lVar13 + 0x10;
    }
  }
  uVar15 = *(uint *)(lVar12 + 0x6c);
  uVar16 = (ulong)uVar15;
  if (uVar15 - 1 < 7) {
    lVar13 = uVar16 * 0x10 + 0x540;
    while( true ) {
      lVar18 = lVar12 + (long)(int)uVar15 * 0x10;
      uVar11 = *(undefined8 *)(lVar18 + 0x538);
      *(undefined8 *)(lVar12 + lVar13) = *(undefined8 *)(lVar18 + 0x530);
      ((undefined8 *)(lVar12 + lVar13))[1] = uVar11;
      iVar14 = (int)uVar16;
      *(float *)(*plVar21 + lVar13 + 0xc) = *(float *)(*plVar21 + lVar13 + 0xc) + (float)iVar14;
      lVar12 = *plVar21;
      if (iVar14 == 7) break;
      uVar15 = *(uint *)(lVar12 + 0x6c);
      uVar16 = (ulong)(iVar14 + 1);
      lVar13 = lVar13 + 0x10;
    }
  }
  uVar15 = *(uint *)(lVar12 + 0x70);
  uVar16 = (ulong)uVar15;
  if (uVar15 - 1 < 7) {
    lVar13 = uVar16 * 0x10 + 0x600;
    while( true ) {
      lVar18 = lVar12 + (long)(int)uVar15 * 0x10;
      uVar11 = *(undefined8 *)(lVar18 + 0x5f8);
      *(undefined8 *)(lVar12 + lVar13) = *(undefined8 *)(lVar18 + 0x5f0);
      ((undefined8 *)(lVar12 + lVar13))[1] = uVar11;
      iVar14 = (int)uVar16;
      *(float *)(*plVar21 + lVar13 + 0xc) = *(float *)(*plVar21 + lVar13 + 0xc) + (float)iVar14;
      lVar12 = *plVar21;
      if (iVar14 == 7) break;
      uVar15 = *(uint *)(lVar12 + 0x70);
      uVar16 = (ulong)(iVar14 + 1);
      lVar13 = lVar13 + 0x10;
    }
  }
  uVar15 = *(uint *)(lVar12 + 0x74);
  uVar16 = (ulong)uVar15;
  if (uVar15 - 1 < 7) {
    lVar13 = uVar16 * 0x10 + 0x680;
    while( true ) {
      lVar18 = lVar12 + (long)(int)uVar15 * 0x10;
      uVar11 = *(undefined8 *)(lVar18 + 0x678);
      *(undefined8 *)(lVar12 + lVar13) = *(undefined8 *)(lVar18 + 0x670);
      ((undefined8 *)(lVar12 + lVar13))[1] = uVar11;
      iVar14 = (int)uVar16;
      *(float *)(*plVar21 + lVar13 + 0xc) = *(float *)(*plVar21 + lVar13 + 0xc) + (float)iVar14;
      lVar12 = *plVar21;
      if (iVar14 == 7) break;
      uVar15 = *(uint *)(lVar12 + 0x74);
      uVar16 = (ulong)(iVar14 + 1);
      lVar13 = lVar13 + 0x10;
    }
  }
  fVar27 = 0.0;
  if (*(char *)(lVar12 + 0x8d8) != '\0') {
    fVar27 = (float)*(int *)(lVar12 + 0x8e4);
  }
  *(float *)(lVar12 + 0x80) = fVar27;
  uVar22 = 0;
  if (*(char *)(*plVar21 + 0x8dd) != '\0') {
    uVar22 = 0x3f800000;
  }
  *(undefined4 *)(*plVar21 + 0x94) = uVar22;
  lVar12 = *plVar21;
  fVar27 = 0.0;
  if (*(char *)(lVar12 + 0x8d9) != '\0') {
    fVar27 = (float)*(int *)(lVar12 + 0x8e8);
  }
  *(float *)(lVar12 + 0x84) = fVar27;
  uVar22 = 0;
  if (*(char *)(*plVar21 + 0x8de) != '\0') {
    uVar22 = 0x3f800000;
  }
  *(undefined4 *)(*plVar21 + 0x98) = uVar22;
  lVar12 = *plVar21;
  fVar27 = 0.0;
  if (*(char *)(lVar12 + 0x8da) != '\0') {
    fVar27 = (float)*(int *)(lVar12 + 0x8ec);
  }
  *(float *)(lVar12 + 0x88) = fVar27;
  uVar22 = 0;
  if (*(char *)(*plVar21 + 0x8df) != '\0') {
    uVar22 = 0x3f800000;
  }
  *(undefined4 *)(*plVar21 + 0x9c) = uVar22;
  lVar12 = *plVar21;
  fVar27 = 0.0;
  if (*(char *)(lVar12 + 0x8db) != '\0') {
    fVar27 = (float)*(int *)(lVar12 + 0x8f0);
  }
  *(float *)(lVar12 + 0x8c) = fVar27;
  uVar22 = 0;
  if (*(char *)(*plVar21 + 0x8e0) != '\0') {
    uVar22 = 0x3f800000;
  }
  *(undefined4 *)(*plVar21 + 0xa0) = uVar22;
  lVar12 = *plVar21;
  fVar27 = 0.0;
  if (*(char *)(lVar12 + 0x8dc) != '\0') {
    fVar27 = (float)*(int *)(lVar12 + 0x8f4);
  }
  *(float *)(lVar12 + 0x90) = fVar27;
  uVar22 = 0;
  if (*(char *)(*plVar21 + 0x8e1) != '\0') {
    uVar22 = 0x3f800000;
  }
  *(undefined4 *)(*plVar21 + 0xa4) = uVar22;
  bVar41 = *(byte *)(*plVar21 + 0x838);
  if ((0xf < bVar41) || (uVar15 = (uint)bVar41, (1 << (ulong)(uVar15 & 0x1f) & 0xa064U) == 0)) {
    *(undefined4 *)(*plVar21 + 0x874) = 0xffffffff;
    uVar15 = (uint)*(byte *)(*plVar21 + 0x838);
  }
  if (uVar15 - 2 < 0xe) {
                    /* WARNING: Could not recover jumptable at 0x008cc6a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_008cc6a8 + (ulong)(byte)(&DAT_03d0feba)[uVar15 - 2] * 4))();
    return;
  }
  local_18 = 0;
  FUN_008cce68(&local_18,param_1);
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x50) = (undefined4)local_18;
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x54) = local_18._4_4_;
  if (*(undefined4 **)(param_1 + 0x288) != (undefined4 *)0x0) {
    *(undefined4 *)(*plVar21 + 0x5c) = **(undefined4 **)(param_1 + 0x288);
  }
  lVar13 = *(long *)(param_1 + 0x10);
  uVar11 = *(undefined8 *)*(undefined1 (*) [12])(lVar13 + 0x788);
  auVar10 = *(undefined1 (*) [12])(lVar13 + 0x788);
  fVar27 = *(float *)PTR_Float1Divided2Pi_047d23d0;
  fVar39 = (float)uVar11;
  fVar28 = fVar39 * fVar27;
  fVar37 = (float)((ulong)uVar11 >> 0x20) * fVar27;
  fVar38 = *(float *)(lVar13 + 0x790) * fVar27;
  auVar33._0_4_ = (int)(fVar28 + (float)(~-(uint)(0.0 <= fVar28) & 0x80000000 ^ 0x3f000000));
  auVar33._4_4_ = (int)(fVar37 + (float)(~-(uint)(0.0 <= fVar37) & 0x80000000 ^ 0x3f000000));
  auVar33._8_4_ = (int)(fVar38 + (float)(~-(uint)(0.0 <= fVar38) & 0x80000000 ^ 0x3f000000));
  auVar33._12_4_ =
       (int)(fVar27 * 0.0 + (float)(~-(uint)(0.0 <= fVar27 * 0.0) & 0x80000000 ^ 0x3f000000));
  auVar34 = NEON_scvtf(auVar33,4);
  fVar38 = *(float *)PTR_Float2Pi_047d23e8;
  fVar28 = *(float *)PTR_FloatPiDivided2_047d23f0;
  fVar27 = *(float *)(PTR_SinCoefficients_047d23d8 + 4);
  fVar37 = -fVar28;
  fVar50 = *(float *)PTR_SinCoefficients_047d23d8;
  fVar51 = -*(float *)(PTR_SinCoefficients_047d23d8 + 8);
  fVar52 = -*(float *)(PTR_SinCoefficients_047d23d8 + 0x10);
  auVar23._0_4_ = fVar39 - auVar34._0_4_ * fVar38;
  auVar23._4_4_ = auVar10._4_4_ - auVar34._4_4_ * fVar38;
  auVar23._8_4_ = auVar10._8_4_ - auVar34._8_4_ * fVar38;
  auVar23._12_4_ = 0.0 - auVar34._12_4_ * fVar38;
  fVar38 = *(float *)PTR_FloatPi_047d23a0;
  fVar39 = *(float *)(PTR_SinCoefficients_047d23d8 + 0xc);
  lVar12 = *(long *)(param_1 + 0x28);
  fVar29 = -fVar38;
  auVar54._0_4_ = -(uint)(fVar28 < auVar23._0_4_);
  auVar54._4_4_ = -(uint)(fVar28 < auVar23._4_4_);
  auVar54._8_4_ = -(uint)(fVar28 < auVar23._8_4_);
  auVar54._12_4_ = -(uint)(fVar28 < auVar23._12_4_);
  auVar9._4_4_ = fVar38 - auVar23._4_4_;
  auVar9._0_4_ = fVar38 - auVar23._0_4_;
  auVar9._8_4_ = fVar38 - auVar23._8_4_;
  auVar9._12_4_ = fVar38 - auVar23._12_4_;
  auVar23 = auVar23 ^ (auVar23 ^ auVar9) & auVar54;
  auVar35._0_4_ = fVar29 - auVar23._0_4_;
  auVar35._4_4_ = fVar29 - auVar23._4_4_;
  auVar35._8_4_ = fVar29 - auVar23._8_4_;
  auVar35._12_4_ = fVar29 - auVar23._12_4_;
  iVar14 = -(uint)(auVar23._0_4_ < fVar37);
  iVar6 = -(uint)(auVar23._4_4_ < fVar37);
  bVar41 = (byte)((uint)iVar6 >> 8);
  bVar42 = (byte)((uint)iVar6 >> 0x10);
  bVar43 = (byte)((uint)iVar6 >> 0x18);
  iVar7 = -(uint)(auVar23._8_4_ < fVar37);
  bVar44 = (byte)((uint)iVar7 >> 8);
  bVar45 = (byte)((uint)iVar7 >> 0x10);
  bVar46 = (byte)((uint)iVar7 >> 0x18);
  iVar8 = -(uint)(auVar23._12_4_ < fVar37);
  bVar47 = (byte)((uint)iVar8 >> 8);
  bVar48 = (byte)((uint)iVar8 >> 0x10);
  bVar49 = (byte)((uint)iVar8 >> 0x18);
  fVar28 = *(float *)(PTR_CosCoefficients_047d23e0 + 4);
  auVar34[4] = (byte)iVar6;
  auVar34._0_4_ = iVar14;
  auVar34[5] = bVar41;
  auVar34[6] = bVar42;
  auVar34[7] = bVar43;
  auVar34[8] = (byte)iVar7;
  auVar34[9] = bVar44;
  auVar34[10] = bVar45;
  auVar34[0xb] = bVar46;
  auVar34[0xc] = (byte)iVar8;
  auVar34[0xd] = bVar47;
  auVar34[0xe] = bVar48;
  auVar34[0xf] = bVar49;
  auVar23 = auVar23 ^ (auVar23 ^ auVar35) & auVar34;
  fVar30 = *(float *)PTR_CosCoefficients_047d23e0;
  fVar38 = auVar23._0_4_;
  fVar53 = fVar38 * fVar38;
  fVar29 = auVar23._4_4_;
  fVar56 = fVar29 * fVar29;
  fVar25 = auVar23._8_4_;
  fVar57 = fVar25 * fVar25;
  fVar26 = auVar23._12_4_;
  fVar58 = fVar26 * fVar26;
  fVar31 = -*(float *)(PTR_CosCoefficients_047d23e0 + 8);
  fVar37 = *(float *)(PTR_CosCoefficients_047d23e0 + 0xc);
  fVar32 = -*(float *)(PTR_CosCoefficients_047d23e0 + 0x10);
  auVar34 = NEON_fmov(0x3f800000,4);
  uVar15 = *(uint *)(lVar13 + 0x778);
  auVar40._0_4_ =
       auVar34._0_4_ +
       fVar53 * (fVar32 + fVar53 * (fVar37 + fVar53 * (fVar31 + fVar53 * (fVar28 - fVar53 * fVar30))
                                   ));
  auVar40._4_4_ =
       auVar34._4_4_ +
       fVar56 * (fVar32 + fVar56 * (fVar37 + fVar56 * (fVar31 + fVar56 * (fVar28 - fVar56 * fVar30))
                                   ));
  auVar40._8_4_ =
       auVar34._8_4_ +
       fVar57 * (fVar32 + fVar57 * (fVar37 + fVar57 * (fVar31 + fVar57 * (fVar28 - fVar57 * fVar30))
                                   ));
  auVar40._12_4_ =
       auVar34._12_4_ +
       fVar58 * (fVar32 + fVar58 * (fVar37 + fVar58 * (fVar31 + fVar58 * (fVar28 - fVar58 * fVar30))
                                   ));
  auVar36._0_4_ = -auVar40._0_4_;
  auVar36._4_4_ = -auVar40._4_4_;
  auVar36._8_4_ = -auVar40._8_4_;
  auVar36._12_4_ = -auVar40._12_4_;
  auVar24._0_4_ =
       fVar38 * (auVar34._0_4_ +
                fVar53 * (fVar52 + fVar53 * (fVar39 + fVar53 * (fVar51 + fVar53 * (fVar27 - fVar53 *
                                                                                            fVar50))
                                            )));
  auVar24._4_4_ =
       fVar29 * (auVar34._4_4_ +
                fVar56 * (fVar52 + fVar56 * (fVar39 + fVar56 * (fVar51 + fVar56 * (fVar27 - fVar56 *
                                                                                            fVar50))
                                            )));
  auVar24._8_4_ =
       fVar25 * (auVar34._8_4_ +
                fVar57 * (fVar52 + fVar57 * (fVar39 + fVar57 * (fVar51 + fVar57 * (fVar27 - fVar57 *
                                                                                            fVar50))
                                            )));
  auVar24._12_4_ =
       fVar26 * (auVar34._12_4_ +
                fVar58 * (fVar52 + fVar58 * (fVar39 + fVar58 * (fVar51 + fVar58 * (fVar27 - fVar58 *
                                                                                            fVar50))
                                            )));
  auVar34 = NEON_ext(auVar24,auVar24,8,1);
  auVar55[1] = ~(byte)((uint)iVar14 >> 8) & ~(byte)((uint)auVar54._0_4_ >> 8);
  auVar55[0] = ~(byte)iVar14 & ~(byte)auVar54._0_4_;
  auVar55[2] = ~(byte)((uint)iVar14 >> 0x10) & ~(byte)((uint)auVar54._0_4_ >> 0x10);
  auVar55[3] = ~(byte)((uint)iVar14 >> 0x18) & ~(byte)((uint)auVar54._0_4_ >> 0x18);
  auVar55[4] = ~(byte)iVar6 & ~(byte)auVar54._4_4_;
  auVar55[5] = ~bVar41 & ~(byte)((uint)auVar54._4_4_ >> 8);
  auVar55[6] = ~bVar42 & ~(byte)((uint)auVar54._4_4_ >> 0x10);
  auVar55[7] = ~bVar43 & ~(byte)((uint)auVar54._4_4_ >> 0x18);
  auVar55[8] = ~(byte)iVar7 & ~(byte)auVar54._8_4_;
  auVar55[9] = ~bVar44 & ~(byte)((uint)auVar54._8_4_ >> 8);
  auVar55[10] = ~bVar45 & ~(byte)((uint)auVar54._8_4_ >> 0x10);
  auVar55[0xb] = ~bVar46 & ~(byte)((uint)auVar54._8_4_ >> 0x18);
  auVar55[0xc] = ~(byte)iVar8 & ~(byte)auVar54._12_4_;
  auVar55[0xd] = ~bVar47 & ~(byte)((uint)auVar54._12_4_ >> 8);
  auVar55[0xe] = ~bVar48 & ~(byte)((uint)auVar54._12_4_ >> 0x10);
  auVar55[0xf] = ~bVar49 & ~(byte)((uint)auVar54._12_4_ >> 0x18);
  auVar36 = auVar36 ^ (auVar36 ^ auVar40) & auVar55;
  fVar32 = auVar36._4_4_;
  uVar11 = *(undefined8 *)(lVar13 + 0x770);
  auVar55 = NEON_ext(auVar36,auVar36,8,1);
  fVar28 = auVar55._0_4_;
  fVar37 = auVar34._0_4_;
  fVar39 = fVar32 * (float)DAT_03cb5410;
  fVar27 = (float)((ulong)DAT_03cb5410 >> 0x20) * 0.0;
  fVar51 = auVar24._4_4_ * (float)DAT_03cb56b0;
  fVar52 = (float)((ulong)DAT_03cb56b0 >> 0x20) * 0.0;
  fVar57 = (float)(CONCAT17((char)((uint)fVar27 >> 0x18),
                            CONCAT16((char)((uint)fVar27 >> 0x10),
                                     CONCAT15((char)((uint)fVar27 >> 8),
                                              CONCAT14(SUB41(fVar27,0),fVar39)))) >> 0x20);
  fVar30 = auVar36._0_4_;
  fVar27 = *(float *)(lVar13 + 0x7a8);
  fVar53 = (float)*(undefined8 *)(lVar13 + 0x7a0);
  fVar56 = (float)((ulong)*(undefined8 *)(lVar13 + 0x7a0) >> 0x20);
  fVar38 = fVar37 * fVar30 * (float)_DAT_03caac70 + fVar28 * auVar24._4_4_ * auVar24._0_4_;
  fVar29 = fVar28 * fVar30 * (float)((ulong)_DAT_03caac70 >> 0x20) +
           fVar37 * auVar24._4_4_ * auVar24._0_4_;
  fVar25 = fVar30 * 0.0 * (float)_UNK_03caac78 + fVar39 * auVar24._0_4_;
  fVar26 = fVar30 * 0.0 * (float)((ulong)_UNK_03caac78 >> 0x20) + fVar57 * auVar24._0_4_;
  fVar31 = fVar37 * auVar24._0_4_ * (float)_DAT_03cab9d0 + fVar28 * auVar24._4_4_ * fVar30;
  fVar50 = fVar28 * auVar24._0_4_ * (float)((ulong)_DAT_03cab9d0 >> 0x20) +
           fVar37 * auVar24._4_4_ * fVar30;
  fVar39 = auVar24._0_4_ * 0.0 * (float)_UNK_03cab9d8 + fVar39 * fVar30;
  fVar30 = auVar24._0_4_ * 0.0 * (float)((ulong)_UNK_03cab9d8 >> 0x20) + fVar57 * fVar30;
  *(ulong *)(param_1 + 0x208) = CONCAT44(fVar52,fVar51);
  *(ulong *)(param_1 + 0x200) = CONCAT44(fVar37 * fVar32,fVar28 * fVar32);
  *(float *)(param_1 + 0x218) = fVar25;
  *(float *)(param_1 + 0x21c) = fVar26;
  *(float *)(param_1 + 0x210) = fVar38;
  *(float *)(param_1 + 0x214) = fVar29;
  *(float *)(param_1 + 0x228) = fVar39;
  *(float *)(param_1 + 0x22c) = fVar30;
  *(float *)(param_1 + 0x220) = fVar31;
  *(float *)(param_1 + 0x224) = fVar50;
  *(ulong *)(param_1 + 0x238) = (ulong)uVar15;
  *(undefined8 *)(param_1 + 0x230) = uVar11;
  *(ulong *)(param_1 + 0x1c8) = CONCAT44(fVar52 * fVar53,fVar51 * fVar53);
  *(ulong *)(param_1 + 0x1c0) = CONCAT44(fVar37 * fVar32 * fVar53,fVar28 * fVar32 * fVar53);
  *(ulong *)(param_1 + 0x1d8) = CONCAT44(fVar26 * fVar56,fVar25 * fVar56);
  *(ulong *)(param_1 + 0x1d0) = CONCAT44(fVar29 * fVar56,fVar38 * fVar56);
  *(ulong *)(param_1 + 0x1e8) = CONCAT44(fVar30 * fVar27,fVar39 * fVar27);
  *(ulong *)(param_1 + 0x1e0) = CONCAT44(fVar50 * fVar27,fVar31 * fVar27);
  *(ulong *)(param_1 + 0x1f8) = (ulong)uVar15;
  *(undefined8 *)(param_1 + 0x1f0) = uVar11;
  uVar11 = *(undefined8 *)(lVar13 + 0x700);
  *(ulong *)(param_1 + 0x328) = (ulong)*(uint *)(lVar13 + 0x708);
  *(undefined8 *)(param_1 + 800) = uVar11;
  lVar13 = FUN_008f0928(*(undefined8 *)(param_1 + 0x20));
  if (lVar13 != 0) {
    memcpy((void *)(lVar13 + lVar12),*(void **)(param_1 + 0x10),0x750);
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    FUN_008f0940(uVar11,*(undefined8 *)(param_1 + 0x28),0x750);
    FUN_008f093c(uVar11);
  }
  if (*(long *)(param_1 + 0x338) != 0) {
    lVar13 = *(long *)(param_1 + 0x30);
    lVar12 = FUN_008f0928(*(undefined8 *)(param_1 + 0x20));
    if (lVar12 != 0) {
      puVar17 = *(undefined8 **)(param_1 + 0x338);
      puVar1 = (undefined8 *)(lVar12 + lVar13);
      uVar11 = *puVar17;
      uVar3 = puVar17[1];
      uVar4 = puVar17[3];
      puVar1[2] = puVar17[2];
      puVar1[3] = uVar4;
      *puVar1 = uVar11;
      puVar1[1] = uVar3;
      uVar11 = puVar17[4];
      uVar3 = puVar17[5];
      uVar4 = puVar17[7];
      puVar1[6] = puVar17[6];
      puVar1[7] = uVar4;
      puVar1[4] = uVar11;
      puVar1[5] = uVar3;
      uVar11 = puVar17[8];
      uVar3 = puVar17[9];
      uVar4 = puVar17[0xb];
      puVar1[10] = puVar17[10];
      puVar1[0xb] = uVar4;
      puVar1[8] = uVar11;
      puVar1[9] = uVar3;
      uVar11 = puVar17[0xc];
      uVar3 = puVar17[0xd];
      uVar4 = puVar17[0xf];
      puVar1[0xe] = puVar17[0xe];
      puVar1[0xf] = uVar4;
      puVar1[0xc] = uVar11;
      puVar1[0xd] = uVar3;
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      FUN_008f0940(uVar11,*(undefined8 *)(param_1 + 0x30),0x80);
      FUN_008f093c(uVar11);
    }
  }
  if (*(long *)(param_1 + 0x300) != 0) {
    lVar13 = *(long *)(param_1 + 0x38);
    lVar12 = FUN_008f0928(*(undefined8 *)(param_1 + 0x20));
    if (lVar12 != 0) {
      memcpy((void *)(lVar12 + lVar13),*(void **)(param_1 + 0x300),*(size_t *)(param_1 + 0x308));
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      FUN_008f0940(uVar11,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x308));
      FUN_008f093c(uVar11);
    }
  }
  if (*(char *)(param_1 + 3) != '\0') {
    lVar13 = *(long *)(param_1 + 0x40);
    lVar12 = FUN_008f0928(*(undefined8 *)(param_1 + 0x20));
    if (lVar12 != 0) {
      lVar18 = *(long *)(param_1 + 0x248);
      puVar2 = (undefined4 *)(lVar12 + lVar13);
      if (lVar18 != 0) {
        *puVar2 = *(undefined4 *)(lVar18 + 4);
        puVar2[1] = *(undefined4 *)(lVar18 + 8);
        puVar2[2] = *(undefined4 *)(lVar18 + 0xc);
        puVar2[3] = (float)*(int *)(*(long *)(param_1 + 0x248) + 0x10);
        puVar2[4] = *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x2c);
        puVar2[5] = *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x30);
        puVar2[6] = *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x34);
        puVar2[7] = *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x38);
        puVar2[8] = *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x1c);
        puVar2[9] = *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x20);
        puVar2[10] = *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x24);
        puVar2[0xb] = *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x28);
        uVar22 = NEON_ucvtf((uint)**(byte **)(param_1 + 0x248));
        puVar2[0xc] = uVar22;
        uVar22 = NEON_ucvtf((uint)*(byte *)(*(long *)(param_1 + 0x248) + 1));
        puVar2[0xd] = uVar22;
        uVar22 = NEON_ucvtf((uint)*(byte *)(*(long *)(param_1 + 0x248) + 2));
        puVar2[0xe] = uVar22;
        puVar2[0x10] = *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x14);
        puVar2[0x11] = *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x18);
      }
      puVar19 = *(undefined4 **)(param_1 + 0x250);
      if (puVar19 != (undefined4 *)0x0) {
        puVar2[0x14] = *puVar19;
        puVar2[0x15] = puVar19[1];
        puVar2[0x16] = puVar19[2];
        puVar2[0x17] = (float)*(int *)(*(long *)(param_1 + 0x250) + 0xc);
      }
      lVar12 = *(long *)(param_1 + 0x278);
      if (lVar12 != 0) {
        puVar2[0x18] = *(undefined4 *)(lVar12 + 4);
        puVar2[0x19] = *(undefined4 *)(lVar12 + 8);
        puVar2[0x1a] = *(undefined4 *)(lVar12 + 0xc);
        uVar22 = NEON_ucvtf((uint)**(byte **)(param_1 + 0x278));
        puVar2[0x1b] = uVar22;
      }
      lVar12 = *(long *)(param_1 + 600);
      if (lVar12 != 0) {
        puVar2[0x1c] = *(undefined4 *)(lVar12 + 8);
        puVar2[0x1d] = *(undefined4 *)(lVar12 + 0xc);
        puVar2[0x1e] = *(undefined4 *)(lVar12 + 0x10);
        puVar2[0x1f] = *(undefined4 *)(*(long *)(param_1 + 600) + 4);
        uVar22 = NEON_ucvtf((uint)**(byte **)(param_1 + 600));
        puVar2[0x20] = uVar22;
        uVar22 = NEON_ucvtf((uint)*(byte *)(*(long *)(param_1 + 600) + 1));
        puVar2[0x21] = uVar22;
        uVar22 = NEON_ucvtf((uint)*(byte *)(*(long *)(param_1 + 600) + 2));
        puVar2[0x22] = uVar22;
        uVar22 = NEON_ucvtf((uint)*(byte *)(*(long *)(param_1 + 600) + 3));
        puVar2[0x23] = uVar22;
      }
      lVar12 = *(long *)(param_1 + 0x270);
      if (lVar12 != 0) {
        puVar2[0x24] = *(undefined4 *)(lVar12 + 4);
        puVar2[0x25] = *(undefined4 *)(lVar12 + 8);
        puVar2[0x26] = *(undefined4 *)(lVar12 + 0xc);
        puVar2[0x27] = *(undefined4 *)(*(long *)(param_1 + 0x270) + 0x10);
        uVar22 = NEON_ucvtf((uint)**(byte **)(param_1 + 0x270));
        puVar2[0x28] = uVar22;
      }
      if (*(undefined4 **)(param_1 + 0x260) != (undefined4 *)0x0) {
        puVar2[0x2c] = **(undefined4 **)(param_1 + 0x260);
        puVar2[0x2d] = *(undefined4 *)(*(long *)(param_1 + 0x260) + 8);
        uVar22 = NEON_ucvtf(*(undefined4 *)(*(long *)(param_1 + 0x260) + 4));
        puVar2[0x2e] = uVar22;
      }
      pbVar20 = *(byte **)(param_1 + 0x268);
      if (pbVar20 != (byte *)0x0) {
        fVar27 = (float)NEON_ucvtf((uint)pbVar20[1]);
        puVar2[0x30] = fVar27 + (float)((uint)*pbVar20 << 1);
        puVar2[0x31] = *(undefined4 *)(*(long *)(param_1 + 0x268) + 8);
        puVar2[0x32] = *(undefined4 *)(*(long *)(param_1 + 0x268) + 0x10);
        puVar2[0x33] = *(undefined4 *)(*(long *)(param_1 + 0x268) + 4);
      }
      lVar12 = *(long *)(param_1 + 0x280);
      if (lVar12 != 0) {
        puVar2[0x34] = *(undefined4 *)(lVar12 + 0x10);
        puVar2[0x35] = *(undefined4 *)(lVar12 + 0x14);
        puVar2[0x36] = *(undefined4 *)(lVar12 + 0x18);
        puVar2[0x37] = *(undefined4 *)(*(long *)(param_1 + 0x280) + 0x1c);
        lVar12 = *(long *)(param_1 + 0x280);
        puVar2[0x38] = *(undefined4 *)(lVar12 + 4);
        puVar2[0x39] = *(undefined4 *)(lVar12 + 8);
        puVar2[0x3a] = *(undefined4 *)(lVar12 + 0xc);
        puVar2[0x3b] = *(undefined4 *)(*(long *)(param_1 + 0x280) + 0x20);
        uVar22 = NEON_ucvtf((uint)*(byte *)(*(long *)(param_1 + 0x280) + 1));
        puVar2[0x3c] = uVar22;
        uVar22 = NEON_ucvtf((uint)*(byte *)(*(long *)(param_1 + 0x280) + 2));
        puVar2[0x3d] = uVar22;
      }
      if (*(long *)(param_1 + 0x288) != 0) {
        puVar2[0x40] = *(undefined4 *)(*(long *)(param_1 + 0x288) + 4);
        puVar2[0x41] = *(undefined4 *)(*(long *)(param_1 + 0x288) + 8);
        puVar2[0x42] = *(undefined4 *)(*(long *)(param_1 + 0x288) + 0xc);
        puVar2[0x43] = *(undefined4 *)(*(long *)(param_1 + 0x288) + 0x10);
        puVar2[0x44] = *(undefined4 *)(*(long *)(param_1 + 0x288) + 0x14);
        puVar2[0x45] = *(undefined4 *)(*(long *)(param_1 + 0x288) + 0x18);
        puVar2[0x46] = *(undefined4 *)(*(long *)(param_1 + 0x288) + 0x1c);
        puVar2[0x47] = *(undefined4 *)(*(long *)(param_1 + 0x288) + 0x20);
      }
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      FUN_008f0940(uVar11,*(undefined8 *)(param_1 + 0x40),0x120);
      FUN_008f093c(uVar11);
    }
  }
  return;
}


