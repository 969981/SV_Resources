/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004b3fc4; name: FUN_004b3fc4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b3fc4(undefined8 param_1,long param_2,long param_3,int *param_4)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  size_t sVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  long lVar19;
  void *pvVar20;
  undefined4 *puVar21;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  void *local_68;
  undefined4 *local_60;
  undefined4 *local_58;
  
  iVar6 = *(int *)(param_2 + 0x20);
  *param_4 = iVar6;
  iVar7 = *(int *)(param_2 + 0x24);
  param_4[1] = iVar7;
  if (iVar6 < 1) {
    FUN_004aa7f4(param_1,*(undefined8 *)(param_3 + 8),param_2,1,
                 "Extension numbers must be positive integers.");
    if (*param_4 < param_4[1]) goto LAB_004b400c;
LAB_004b4044:
    FUN_004aa7f4(param_1,*(undefined8 *)(param_3 + 8),param_2,1,
                 "Extension range end number must be greater than start number.");
    param_4[2] = 0;
    param_4[3] = 0;
    bVar8 = *(byte *)(param_2 + 0x10);
  }
  else {
    if (iVar7 <= iVar6) goto LAB_004b4044;
LAB_004b400c:
    param_4[2] = 0;
    param_4[3] = 0;
    bVar8 = *(byte *)(param_2 + 0x10);
  }
  if ((bVar8 & 1) == 0) {
    s_google_protobuf_ExtensionRangeOp_03c3a6ad[0] = s_google_protobuf_ExtensionRangeOp_03c3a6ad[0];
    s_google_protobuf_ExtensionRangeOp_03c3a6ad[1] = s_google_protobuf_ExtensionRangeOp_03c3a6ad[1];
    s_google_protobuf_ExtensionRangeOp_03c3a6ad[2] = s_google_protobuf_ExtensionRangeOp_03c3a6ad[2];
    s_google_protobuf_ExtensionRangeOp_03c3a6ad[3] = s_google_protobuf_ExtensionRangeOp_03c3a6ad[3];
    s_google_protobuf_ExtensionRangeOp_03c3a6ad[4] = s_google_protobuf_ExtensionRangeOp_03c3a6ad[4];
    s_google_protobuf_ExtensionRangeOp_03c3a6ad[5] = s_google_protobuf_ExtensionRangeOp_03c3a6ad[5];
    s_google_protobuf_ExtensionRangeOp_03c3a6ad[6] = s_google_protobuf_ExtensionRangeOp_03c3a6ad[6];
    s_google_protobuf_ExtensionRangeOp_03c3a6ad[7] = s_google_protobuf_ExtensionRangeOp_03c3a6ad[7];
    s_google_protobuf_ExtensionRangeOp_03c3a6ad[8] = s_google_protobuf_ExtensionRangeOp_03c3a6ad[8];
    s_google_protobuf_ExtensionRangeOp_03c3a6ad[9] = s_google_protobuf_ExtensionRangeOp_03c3a6ad[9];
    s_google_protobuf_ExtensionRangeOp_03c3a6ad[10] =
         s_google_protobuf_ExtensionRangeOp_03c3a6ad[10];
    s_google_protobuf_ExtensionRangeOp_03c3a6ad[0xb] =
         s_google_protobuf_ExtensionRangeOp_03c3a6ad[0xb];
    s_google_protobuf_ExtensionRangeOp_03c3a6ad[0xc] =
         s_google_protobuf_ExtensionRangeOp_03c3a6ad[0xc];
    s_google_protobuf_ExtensionRangeOp_03c3a6ad[0xd] =
         s_google_protobuf_ExtensionRangeOp_03c3a6ad[0xd];
    s_google_protobuf_ExtensionRangeOp_03c3a6ad[0xe] =
         s_google_protobuf_ExtensionRangeOp_03c3a6ad[0xe];
    s_google_protobuf_ExtensionRangeOp_03c3a6ad[0xf] =
         s_google_protobuf_ExtensionRangeOp_03c3a6ad[0xf];
    s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x10] =
         s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x10];
    s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x11] =
         s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x11];
    s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x12] =
         s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x12];
    s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x13] =
         s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x13];
    s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x14] =
         s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x14];
    s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x15] =
         s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x15];
    s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x16] =
         s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x16];
    s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x17] =
         s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x17];
    s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x18] =
         s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x18];
    s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x19] =
         s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x19];
    s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x1a] =
         s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x1a];
    s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x1b] =
         s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x1b];
    s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x1c] =
         s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x1c];
    s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x1d] =
         s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x1d];
    s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x1e] =
         s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x1e];
    s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x1f] =
         s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x1f];
    s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x20] =
         s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x20];
    s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x21] =
         s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x21];
    s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x22] =
         s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x22];
    s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x23] =
         s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x23];
    s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x24] =
         s_google_protobuf_ExtensionRangeOp_03c3a6ad[0x24];
    return;
  }
  local_68 = (void *)0x0;
  local_60 = (undefined4 *)0x0;
  local_58 = (undefined4 *)0x0;
                    /* try { // try from 004b4074 to 004b407f has its CatchHandler @ 004b4414 */
  FUN_004a908c(param_3,&local_68);
  if (local_60 < local_58) {
    *local_60 = 5;
    local_60 = local_60 + 1;
  }
  else {
    lVar19 = (long)local_60 - (long)local_68 >> 2;
    uVar1 = lVar19 + 1;
    if (uVar1 >> 0x3e != 0) {
                    /* try { // try from 004b4394 to 004b439b has its CatchHandler @ 004b43cc */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    uVar16 = (long)local_58 - (long)local_68 >> 1;
    if (uVar1 <= uVar16) {
      uVar1 = uVar16;
    }
    if (0x1ffffffffffffffe < (ulong)((long)local_58 - (long)local_68 >> 2)) {
      uVar1 = 0x3fffffffffffffff;
    }
    if (uVar1 == 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = FUN_0049e770(PTR_FUN_047cba38,uVar1 << 2);
    }
    puVar2 = (undefined4 *)(lVar14 + lVar19 * 4);
    sVar15 = (long)local_60 - (long)local_68;
    puVar3 = (undefined4 *)(lVar14 + uVar1 * 4);
    pvVar20 = (void *)((long)puVar2 - sVar15);
    *puVar2 = 5;
    if (0 < (long)sVar15) {
      memcpy(pvVar20,local_68,sVar15);
    }
    bVar4 = local_68 != (void *)0x0;
    local_68 = pvVar20;
    local_60 = puVar2 + 1;
    local_58 = puVar3;
    if (bVar4) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
  }
  uVar18 = (undefined4)((ulong)((long)param_4 - *(long *)(param_3 + 0x48)) >> 4);
  if (local_60 == local_58) {
    lVar19 = (long)local_60 - (long)local_68 >> 2;
    uVar1 = lVar19 + 1;
    if (uVar1 >> 0x3e != 0) {
                    /* try { // try from 004b43a4 to 004b43ab has its CatchHandler @ 004b43ac */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    uVar16 = (long)local_58 - (long)local_68 >> 1;
    if (uVar1 <= uVar16) {
      uVar1 = uVar16;
    }
    if (0x1ffffffffffffffe < (ulong)((long)local_58 - (long)local_68 >> 2)) {
      uVar1 = 0x3fffffffffffffff;
    }
    if (uVar1 == 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = FUN_0049e770(PTR_FUN_047cba38,uVar1 << 2);
    }
    puVar2 = (undefined4 *)(lVar14 + lVar19 * 4);
    sVar15 = (long)local_60 - (long)local_68;
    puVar3 = (undefined4 *)(lVar14 + uVar1 * 4);
    puVar21 = puVar2 + 1;
    *puVar2 = uVar18;
    pvVar20 = (void *)((long)puVar2 - sVar15);
    if (0 < (long)sVar15) {
      memcpy(pvVar20,local_68,sVar15);
    }
    local_60 = puVar21;
    local_58 = puVar3;
    if (local_68 == (void *)0x0) {
      local_68 = pvVar20;
      if (puVar21 < puVar3) goto LAB_004b4218;
    }
    else {
      local_68 = pvVar20;
      FUN_0049e790(PTR_LAB_047cba48);
      puVar21 = local_60;
      if (local_60 < local_58) {
LAB_004b4218:
        local_60 = puVar21 + 1;
        *puVar21 = 3;
        goto LAB_004b42d4;
      }
    }
  }
  else {
    puVar21 = local_60 + 1;
    *local_60 = uVar18;
    local_60 = puVar21;
    if (puVar21 < local_58) goto LAB_004b4218;
  }
  lVar19 = (long)local_60 - (long)local_68 >> 2;
  uVar1 = lVar19 + 1;
  if (uVar1 >> 0x3e != 0) {
                    /* try { // try from 004b439c to 004b43a3 has its CatchHandler @ 004b43bc */
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  uVar16 = (long)local_58 - (long)local_68 >> 1;
  if (uVar1 <= uVar16) {
    uVar1 = uVar16;
  }
  if (0x1ffffffffffffffe < (ulong)((long)local_58 - (long)local_68 >> 2)) {
    uVar1 = 0x3fffffffffffffff;
  }
  if (uVar1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = FUN_0049e770(PTR_FUN_047cba38,uVar1 << 2);
  }
  puVar2 = (undefined4 *)(lVar14 + lVar19 * 4);
  sVar15 = (long)local_60 - (long)local_68;
  puVar3 = (undefined4 *)(lVar14 + uVar1 * 4);
  pvVar20 = (void *)((long)puVar2 - sVar15);
  *puVar2 = 3;
  if (0 < (long)sVar15) {
    memcpy(pvVar20,local_68,sVar15);
  }
  bVar4 = local_68 != (void *)0x0;
  local_68 = pvVar20;
  local_60 = puVar2 + 1;
  local_58 = puVar3;
  if (bVar4) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
LAB_004b42d4:
  uVar17 = *(undefined8 *)(param_3 + 8);
  puVar5 = PTR_DAT_047cd788;
  if (*(undefined **)(param_2 + 0x18) != (undefined *)0x0) {
    puVar5 = *(undefined **)(param_2 + 0x18);
  }
  local_70 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x30);
  uVar13 = s_google_protobuf_ExtensionRangeOp_03c3a6ad._16_8_;
  uVar12 = s_google_protobuf_ExtensionRangeOp_03c3a6ad._8_8_;
  uVar11 = s_google_protobuf_ExtensionRangeOp_03c3a6ad._0_8_;
  uStack_78 = _UNK_03caaf28;
  local_80 = _DAT_03caaf20;
  uVar9 = CONCAT35(s_google_protobuf_ExtensionRangeOp_03c3a6ad._29_3_,
                   s_google_protobuf_ExtensionRangeOp_03c3a6ad._24_5_);
  uVar10 = CONCAT53(s_google_protobuf_ExtensionRangeOp_03c3a6ad._32_5_,
                    s_google_protobuf_ExtensionRangeOp_03c3a6ad._29_3_);
  local_70[0x25] = '\0';
  *(undefined8 *)(local_70 + 8) = uVar12;
  *(undefined8 *)local_70 = uVar11;
  *(undefined8 *)(local_70 + 0x18) = uVar9;
  *(undefined8 *)(local_70 + 0x10) = uVar13;
  *(undefined8 *)(local_70 + 0x1d) = uVar10;
                    /* try { // try from 004b4328 to 004b4347 has its CatchHandler @ 004b43dc */
  FUN_004b5ffc(param_1,uVar17,uVar17,puVar5,param_4,&local_68,&local_80);
  if ((local_80 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_70);
  }
  if (local_68 != (void *)0x0) {
    local_60 = local_68;
    FUN_0049e790(PTR_LAB_047cba48);
  }
  return;
}


