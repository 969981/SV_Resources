/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0199a4a0; name: FUN_0199a4a0
 */


undefined8 FUN_0199a4a0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) ||
     (puVar5 = (undefined *)*puVar3, (undefined *)*puVar3 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d4518 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d4518);
      puVar5 = PTR_DAT_047d4520;
      if (iVar1 != 0) {
        *PTR_DAT_047d4520 = 0;
        *(undefined8 *)(puVar5 + 8) = 0;
        FUN_00100190(PTR_FUN_047d47c8,puVar5,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4518);
      }
    }
    else {
      puVar5 = PTR_DAT_047d4520;
    }
  }
  uVar4 = FUN_00c646d0(param_1,2,0);
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,3);
  if ((puVar3 == (undefined8 *)0x0) ||
     (puVar6 = (undefined *)*puVar3, (undefined *)*puVar3 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d3d48 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d3d48);
      puVar6 = PTR_DAT_047d3d50;
      if (iVar1 != 0) {
        *PTR_DAT_047d3d50 = 0;
        *(undefined8 *)(puVar6 + 8) = 0;
        FUN_00100190(PTR_LAB_047d3f60,puVar6,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3d48);
      }
    }
    else {
      puVar6 = PTR_DAT_047d3d50;
    }
  }
  iVar1 = FUN_00c92df0(param_1,4,0);
  if (((DAT_04830030 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04830030), iVar2 != 0)) {
    DAT_04831020 = PTR_LAB_047d7ad8;
    __cxa_guard_release(&DAT_04830030);
  }
  FUN_0199a638(puVar5,uVar4,puVar6,(long)iVar1);
  return 0;
}


