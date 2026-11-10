/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024cfbb0; name: FUN_024cfbb0
 */


undefined8 FUN_024cfbb0(undefined8 param_1)

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
  if ((puVar4 == (undefined8 *)0x0) || (pcVar5 = (char *)*puVar4, pcVar5 == (char *)0x0)) {
    if ((DAT_0484cf88 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_0484cf88);
      pcVar5 = &DAT_0484cf60;
      if (iVar3 != 0) {
        DAT_0484cf60 = 0;
        DAT_0484cf68 = 0;
        FUN_00100190(&LAB_024d1cf8,&DAT_0484cf60,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0484cf88);
      }
    }
    else {
      pcVar5 = &DAT_0484cf60;
    }
  }
  dVar6 = (double)FUN_00c41790(param_1,2,0);
  dVar7 = (double)FUN_00c41790(param_1,3,0);
  dVar8 = (double)FUN_00c41790(param_1,4,0);
  uVar9 = (ulong)(uint)(float)dVar8;
  if ((DAT_0484d050 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_0484d050);
    if (iVar3 != 0) {
      DAT_0484e8a8 = '\x01';
      __cxa_guard_release(uVar9,&DAT_0484d050);
    }
  }
  pcVar1 = (code *)PTR_FUN_047def30;
  if (DAT_0484e8a8 == '\0') {
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


