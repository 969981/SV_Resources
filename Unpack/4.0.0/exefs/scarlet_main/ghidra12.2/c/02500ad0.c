/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02500ad0; name: FUN_02500ad0
 */


void FUN_02500ad0(undefined8 *param_1,long *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                 undefined4 *param_9,undefined4 *param_10,undefined4 *param_11,undefined4 *param_12,
                 undefined4 *param_13,undefined4 *param_14,undefined4 *param_15,undefined4 *param_16
                 ,undefined4 *param_17,undefined4 *param_18)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x40,0x10);
  if (puVar2 == (undefined8 *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    uVar10 = *param_11;
    uVar4 = *param_3;
    uVar6 = *param_7;
    uVar11 = *param_12;
    uVar5 = *param_4;
    uVar12 = *param_13;
    uVar14 = *param_15;
    uVar7 = *param_8;
    uVar15 = *param_16;
    uVar8 = *param_9;
    uVar13 = *param_14;
    uVar16 = *param_17;
    uVar9 = *param_10;
    uVar17 = *param_18;
    puVar2[1] = CONCAT44(*param_6,*param_5);
    *puVar2 = CONCAT44(uVar5,uVar4);
    puVar2[3] = CONCAT44(uVar9,uVar8);
    puVar2[2] = CONCAT44(uVar7,uVar6);
    puVar2[5] = CONCAT44(uVar13,uVar12);
    puVar2[4] = CONCAT44(uVar11,uVar10);
    puVar2[7] = CONCAT44(uVar17,uVar16);
    puVar2[6] = CONCAT44(uVar15,uVar14);
    *param_1 = puVar2;
    param_1[1] = param_2;
    param_1[2] = 0x40;
    param_1[3] = 0x10;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


