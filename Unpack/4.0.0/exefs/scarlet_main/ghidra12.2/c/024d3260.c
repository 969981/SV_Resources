/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024d3260; name: FUN_024d3260
 */


undefined8 FUN_024d3260(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  uVar4 = FUN_024d2bf0(param_1,1);
  puVar5 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar5 == (undefined8 *)0x0) ||
     (puVar6 = (undefined *)*puVar5, (undefined *)*puVar5 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d7bd0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d7bd0);
      puVar6 = PTR_DAT_047d7bd8;
      if (iVar1 != 0) {
        *PTR_DAT_047d7bd8 = 0;
        *(undefined8 *)(puVar6 + 8) = 0;
        FUN_00100190(PTR_FUN_047dea28,puVar6,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d7bd0);
      }
    }
    else {
      puVar6 = PTR_DAT_047d7bd8;
    }
  }
  dVar7 = (double)FUN_00c41790(param_1,3,0);
  dVar8 = (double)FUN_00c41790(param_1,4,0);
  dVar9 = (double)FUN_00c41790(param_1,5,0);
  iVar1 = FUN_00cc4dc0(param_1,6);
  if ((DAT_0484d0c8 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_0484d0c8);
    if (iVar3 != 0) {
      DAT_0484f058 = 1;
      __cxa_guard_release(&DAT_0484d0c8);
    }
  }
  uVar2 = FUN_024d33fc(CONCAT44((float)dVar8,(float)dVar7),(float)dVar9,uVar4,puVar6,iVar1 != 0);
  FUN_00c419e0(param_1,uVar2 & 1);
  return 1;
}


