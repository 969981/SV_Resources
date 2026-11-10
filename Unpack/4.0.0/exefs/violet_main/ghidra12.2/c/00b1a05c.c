/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b1a05c; name: FUN_00b1a05c
 */


void FUN_00b1a05c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_047d8cc8;
  if (((*PTR_DAT_047d8cc8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d94a0,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8cc8);
  }
  puVar4 = PTR_DAT_047d8cd8;
  puVar3 = PTR_DAT_047d8cd0;
  lVar6 = *(long *)PTR_DAT_047d8cd0;
  *(long *)PTR_DAT_047d8cd8 = lVar6;
  if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x50), lVar6 != 0)) {
    if ((DAT_04839660 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_04839660);
      if (iVar5 != 0) {
        FUN_00100190(&LAB_00b1a5bc,&DAT_04839650,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04839660);
      }
    }
    DAT_04839648 = DAT_04839650;
    if (DAT_04839650 == 0) {
      lVar6 = FUN_01e99c9c(lVar6);
      if ((*puVar2 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(PTR_DAT_047d8cc8);
        if (iVar5 != 0) {
          FUN_00100190(PTR_LAB_047d94a0,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d8cc8);
        }
      }
      lVar7 = *(long *)puVar3;
      *(long *)puVar4 = lVar7;
      if (lVar7 != 0) {
        lVar1 = 0;
        if (lVar6 != 0) {
          lVar1 = lVar6 + 0x28;
        }
        FUN_01793e80(lVar7,lVar1);
        return;
      }
    }
  }
  return;
}


