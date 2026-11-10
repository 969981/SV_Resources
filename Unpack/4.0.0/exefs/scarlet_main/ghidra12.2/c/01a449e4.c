/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a449e4; name: FUN_01a449e4
 */


void FUN_01a449e4(void *param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  uint *puVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  short *psVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  short local_b8 [66];
  uint local_34;
  
  memset(local_b8,0,0x88);
  uVar4 = FUN_00cf44f4(*(undefined8 *)(param_2 + 0x70));
  auVar15 = FUN_00cf41a8(*(undefined8 *)(param_2 + 0x70));
  uVar8 = auVar15._0_8_ & 0xffffffff;
  if (((*PTR_DAT_047d7430 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_047d7430,auVar15._8_8_,uVar8), iVar5 != 0)) {
    FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7430);
  }
  uVar6 = *(undefined8 *)PTR_DAT_047d7438;
  *(undefined8 *)PTR_DAT_047d7440 = uVar6;
  puVar7 = (uint *)FUN_00f73a90(uVar6,uVar4,uVar8);
  if ((puVar7 != (uint *)0x0) && (uVar2 = *puVar7, uVar2 != 0)) {
    uVar10 = 0;
    uVar11 = 0;
    uVar8 = 0;
    do {
      uVar1 = *(byte *)((long)(puVar7 + uVar8 + 1) + 2) + 4;
      uVar9 = (uint)(0x10404040003 >> (((ulong)uVar1 & 7) << 3));
      if (5 < (uVar1 & 0xff)) {
        uVar9 = 2;
      }
      if ((uVar9 & 0xff) == (param_3 & 0xff)) {
        sVar3 = (short)puVar7[uVar8 + 1];
        if (uVar11 == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = (ulong)uVar11;
          psVar13 = local_b8;
          uVar14 = uVar12;
          do {
            uVar11 = uVar10;
            if (*psVar13 == sVar3) goto LAB_01a44ae8;
            uVar14 = uVar14 - 1;
            psVar13 = psVar13 + 1;
          } while (uVar14 != 0);
        }
        local_b8[uVar12] = sVar3;
        local_34 = local_34 + 1;
        uVar11 = local_34;
LAB_01a44ae8:
        uVar10 = uVar11;
        if (0x40 < uVar11) break;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar2);
  }
  memcpy(param_1,local_b8,0x88);
  return;
}


