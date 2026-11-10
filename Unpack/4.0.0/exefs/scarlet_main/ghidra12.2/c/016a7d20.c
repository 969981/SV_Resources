/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016a7d20; name: FUN_016a7d20
 */


void FUN_016a7d20(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  FUN_00d1a22c(param_1,9);
  *param_1 = &PTR_FUN_045af8f0;
  param_1[4] = &PTR_LAB_045afa38;
  param_1[5] = &DAT_045afb60;
  param_1[6] = &PTR_LAB_045afbb8;
  param_1[7] = &PTR_LAB_045afbe0;
  uVar2 = param_2[3];
  param_1[0x25] = param_2[1];
  param_1[0x27] = uVar2;
  uVar2 = *param_2;
  param_1[0x26] = param_2[2];
  param_1[0x24] = uVar2;
  param_1[0x28] = 0;
  *(undefined4 *)((long)param_1 + 0x154) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x29,0,1);
  if (*(char *)((long)param_2 + 0x1c) == '\0') {
    if (((*PTR_DAT_047d88a0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d88a0), iVar1 != 0)) {
      FUN_00100190(PTR_LAB_047dbdd0,PTR_DAT_047d88a8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d88a0);
    }
    lVar3 = *(long *)PTR_DAT_047d88a8;
    *(long *)PTR_DAT_047d88b0 = lVar3;
    lVar3 = *(long *)(lVar3 + 0x30);
    if (*(char *)(lVar3 + 0x20) != '\0') {
      FUN_016a7ee4(lVar3,1);
      FUN_00c42a5c(*param_2,lVar3);
      FUN_016a7e78(*(undefined4 *)(param_2 + 2),lVar3);
      FUN_016a7e9c(*(undefined4 *)((long)param_2 + 0x14),lVar3);
      FUN_016a7ec0(*(undefined4 *)(param_2 + 3),lVar3);
    }
  }
  FUN_00c6a514(param_1 + 7,0x82);
  return;
}


