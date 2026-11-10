/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025c6330; name: FUN_025c6330
 */


undefined8 FUN_025c6330(undefined8 param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 local_40;
  ulong uStack_38;
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar4 == (undefined8 *)0x0) || (puVar5 = (undefined1 *)*puVar4, puVar5 == (undefined1 *)0x0)
     ) {
    if ((DAT_04852c68 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_04852c68);
      puVar5 = &DAT_04852c58;
      if (iVar3 != 0) {
        DAT_04852c58 = 0;
        DAT_04852c60 = 0;
        FUN_00100190(&LAB_02ba0eb8,&DAT_04852c58,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04852c68);
      }
    }
    else {
      puVar5 = &DAT_04852c58;
    }
  }
  dVar6 = (double)FUN_00c41790(param_1,2,0);
  dVar7 = (double)FUN_00c41790(param_1,3,0);
  dVar8 = (double)FUN_00c41790(param_1,4,0);
  if (((DAT_04852dc0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04852dc0), iVar3 != 0)) {
    DAT_048533f0 = '\x01';
    __cxa_guard_release(&DAT_04852dc0);
  }
  local_40 = CONCAT44((float)dVar7,(float)dVar6);
  uStack_38 = (ulong)(uint)(float)dVar8;
  pcVar1 = FUN_025cfccc;
  if (DAT_048533f0 == '\0') {
    pcVar1 = (code *)0x0;
  }
  uVar2 = FUN_01712e20(puVar5,pcVar1,0,&local_40);
  FUN_00c419e0(param_1,uVar2 & 1);
  return 1;
}


