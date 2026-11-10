/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f352c; name: FUN_021f352c
 */


void FUN_021f352c(short *param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  uint *puVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  short *psVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  
  if (*(long *)(*(long *)(param_2 + 0x70) + 8) == 0) {
    uVar7 = FUN_00cf44f4();
    uVar5 = FUN_00cf41a8(*(undefined8 *)(param_2 + 0x70));
    uVar6 = FUN_00f14b64(*(undefined8 *)(param_2 + 0x70));
    uVar4 = FUN_00f13da0(uVar7,uVar5,uVar6);
    uVar4 = uVar4 & 0xff;
  }
  else {
    uVar4 = FUN_00e9987c();
  }
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  memset(param_1,0,0x82);
  uVar7 = FUN_00cf44f4(*(undefined8 *)(param_2 + 0x70));
  auVar16 = FUN_00cf41a8(*(undefined8 *)(param_2 + 0x70));
  uVar11 = auVar16._0_8_ & 0xffffffff;
  if (((*PTR_DAT_047d7430 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_047d7430,auVar16._8_8_,uVar11), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7430);
  }
  uVar9 = *(undefined8 *)PTR_DAT_047d7438;
  *(undefined8 *)PTR_DAT_047d7440 = uVar9;
  puVar10 = (uint *)FUN_00f73a90(uVar9,uVar7,uVar11);
  if ((puVar10 != (uint *)0x0) && (uVar1 = *puVar10, uVar1 != 0)) {
    uVar12 = 0;
    uVar11 = 0;
    do {
      cVar2 = *(char *)((long)(puVar10 + uVar11 + 1) + 2);
      if (((cVar2 != '\x01') && (cVar2 != -3)) && ((uVar4 & 0xff) == (int)cVar2)) {
        sVar3 = (short)puVar10[uVar11 + 1];
        if (uVar12 == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = (ulong)uVar12;
          psVar14 = param_1;
          uVar15 = uVar13;
          do {
            if (*psVar14 == sVar3) goto LAB_021f366c;
            uVar15 = uVar15 - 1;
            psVar14 = psVar14 + 1;
          } while (uVar15 != 0);
        }
        param_1[uVar13] = sVar3;
        uVar12 = *(int *)(param_1 + 0x42) + 1;
        *(uint *)(param_1 + 0x42) = uVar12;
LAB_021f366c:
        if (0x40 < uVar12) {
          return;
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar1);
  }
  return;
}


