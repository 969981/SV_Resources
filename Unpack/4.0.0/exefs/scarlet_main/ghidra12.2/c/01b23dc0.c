/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b23dc0; name: FUN_01b23dc0
 */


undefined8 FUN_01b23dc0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar4 == (undefined8 *)0x0) ||
     (puVar5 = (undefined *)*puVar4, (undefined *)*puVar4 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d3b00 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d3b00);
      puVar5 = PTR_DAT_047d3b08;
      if (iVar1 != 0) {
        *PTR_DAT_047d3b08 = 0;
        *(undefined8 *)(puVar5 + 8) = 0;
        FUN_00100190(PTR_LAB_047d44c0,puVar5,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3b00);
      }
    }
    else {
      puVar5 = PTR_DAT_047d3b08;
    }
  }
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar4 == (undefined8 *)0x0) ||
     (puVar6 = (undefined *)*puVar4, (undefined *)*puVar4 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d3b00 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d3b00);
      puVar6 = PTR_DAT_047d3b08;
      if (iVar1 != 0) {
        *PTR_DAT_047d3b08 = 0;
        *(undefined8 *)(puVar6 + 8) = 0;
        FUN_00100190(PTR_LAB_047d44c0,puVar6,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3b00);
      }
    }
    else {
      puVar6 = PTR_DAT_047d3b08;
    }
  }
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,3);
  if ((puVar4 == (undefined8 *)0x0) ||
     (puVar7 = (undefined *)*puVar4, (undefined *)*puVar4 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d3b00 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d3b00);
      puVar7 = PTR_DAT_047d3b08;
      if (iVar1 != 0) {
        *PTR_DAT_047d3b08 = 0;
        *(undefined8 *)(puVar7 + 8) = 0;
        FUN_00100190(PTR_LAB_047d44c0,puVar7,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3b00);
      }
    }
    else {
      puVar7 = PTR_DAT_047d3b08;
    }
  }
  iVar1 = FUN_00c92df0(param_1,4,0);
  iVar2 = FUN_00c92df0(param_1,5,0);
  if (((DAT_04805618 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04805618), iVar3 != 0)) {
    DAT_04805610 = PTR_LAB_047d44d0;
    __cxa_guard_release(&DAT_04805618);
  }
  FUN_01b23b68(&DAT_04805610,puVar5,puVar6,puVar7,(long)iVar1,(long)iVar2);
  return 0;
}


