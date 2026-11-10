/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02503170; name: FUN_02503170
 */


undefined8 FUN_02503170(undefined8 param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  char *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  ulong uVar9;
  ulong extraout_d0;
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar4 == (undefined8 *)0x0) || (pcVar5 = (char *)*puVar4, (char *)*puVar4 == (char *)0x0)) {
    if ((*PTR_DAT_047d7b98 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_047d7b98);
      pcVar5 = PTR_DAT_047d7ba0;
      if (iVar3 != 0) {
        *PTR_DAT_047d7ba0 = 0;
        *(undefined8 *)(pcVar5 + 8) = 0;
        FUN_00100190(PTR_LAB_047dea30,pcVar5,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d7b98);
      }
    }
    else {
      pcVar5 = PTR_DAT_047d7ba0;
    }
  }
  dVar6 = (double)FUN_00c41790(param_1,2,0);
  dVar7 = (double)FUN_00c41790(param_1,3,0);
  dVar8 = (double)FUN_00c41790(param_1,4,0);
  uVar9 = (ulong)(uint)(float)dVar8;
  if ((DAT_0484dd90 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_0484dd90);
    if (iVar3 != 0) {
      DAT_0484eb80 = '\x01';
      __cxa_guard_release(uVar9,&DAT_0484dd90);
    }
  }
  pcVar1 = (code *)PTR_FUN_047df1d0;
  if (DAT_0484eb80 == '\0') {
    pcVar1 = (code *)0x0;
  }
  if ((*pcVar5 == '\x01') || (*pcVar5 == '\0')) {
    uVar2 = 0;
    if (*(long *)(pcVar5 + 8) != 0) {
      uVar2 = (*pcVar1)(CONCAT44((float)dVar7,(float)dVar6));
      uVar9 = extraout_d0;
    }
  }
  else {
    uVar2 = 0;
  }
  FUN_00c419e0(uVar9,param_1,uVar2 & 1);
  return 1;
}


