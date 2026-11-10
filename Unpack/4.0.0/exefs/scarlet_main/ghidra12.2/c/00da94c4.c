/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00da94c4; name: FUN_00da94c4
 */


ulong FUN_00da94c4(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  float *pfVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_850 [32];
  float local_830 [504];
  
  memset(auStack_850,0,0x800);
  if (((*PTR_DAT_047d8c00 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c00);
  }
  lVar3 = *(long *)PTR_DAT_047d8c08;
  *(long *)PTR_DAT_047d8c10 = lVar3;
  lVar3 = *(long *)(lVar3 + 0x70);
  if (lVar3 == 0) {
LAB_00da955c:
    uVar6 = 0;
    uVar7 = 0;
  }
  else {
    uVar5 = 0x20;
    uVar1 = FUN_00da9620(param_1,param_2,lVar3,param_3 + 0x20,param_4,auStack_850,0x20,0);
    if (uVar1 < 0x20) {
      if (uVar1 == 0) goto LAB_00da955c;
      uVar5 = (ulong)uVar1;
    }
    pfVar4 = local_830;
    do {
      if ((0.01 < *pfVar4) &&
         (uVar6 = FUN_00daa390(param_3,*(undefined8 *)(pfVar4 + 2)), (uVar6 & 1) == 0)) {
        uVar6 = (ulong)(uint)*pfVar4 << 0x20;
        uVar7 = 1;
        break;
      }
      uVar6 = 0;
      uVar7 = 0;
      uVar5 = uVar5 - 1;
      pfVar4 = pfVar4 + 0x10;
    } while (uVar5 != 0);
  }
  FUN_00da98ac(auStack_850);
  return uVar7 | uVar6;
}


