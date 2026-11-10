/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02122208; name: FUN_02122208
 */


void FUN_02122208(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  lVar5 = *(long *)(param_1 + 0x2f0);
  if (lVar5 != 0) {
    lVar6 = (long)DAT_045986a0;
    if (((*PTR_DAT_047d89f8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d89f8), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d8ed8,PTR_DAT_047d8a00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d89f8);
    }
    lVar7 = *(long *)PTR_DAT_047d8a00;
    *(long *)PTR_DAT_047d8a08 = lVar7;
    bVar2 = *(byte *)(lVar7 + 0x2c);
    if (bVar2 < 8 && (1 << (ulong)(bVar2 & 0x1f) & 0xbcU) != 0) {
      puVar8 = &DAT_03cac150;
    }
    else {
      puVar8 = &DAT_03caae80;
    }
    uVar1 = *(undefined4 *)(&DAT_03cabdb0 + lVar6 * 4);
    *(undefined4 *)(lVar5 + 0x6c) = uVar1;
    *(undefined4 *)(lVar5 + 0x70) = uVar1;
    uVar3 = puVar8[lVar6 * 4];
    *(undefined1 *)(lVar5 + 0x88) = uVar3;
    *(undefined1 *)(lVar5 + 0x89) = uVar3;
  }
  return;
}


