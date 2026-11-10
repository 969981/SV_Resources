/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01585ea8; name: FUN_01585ea8
 */


void FUN_01585ea8(long param_1,undefined4 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar8 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar8;
  puVar4 = PTR_DAT_047d4910;
  puVar3 = PTR_DAT_047d4908;
  plVar1 = *(long **)(lVar8 + 0x1c0);
  plVar2 = *(long **)(lVar8 + 0x1c8);
  for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
    lVar8 = *plVar1;
    plVar6 = (long *)(*(code *)**(undefined8 **)(lVar8 + 0x28))((undefined8 *)(lVar8 + 0x28));
    if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
      uVar7 = FUN_01b3fb0c();
      *(undefined8 *)puVar4 = uVar7;
      __cxa_guard_release(puVar3);
    }
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)puVar4) goto LAB_01585f54;
    }
  }
  lVar8 = 0;
LAB_01585f54:
  lVar9 = -16000;
  while( true ) {
    lVar11 = *(long *)(lVar8 + lVar9 + 0x3ed8);
    if (lVar11 != 0 && lVar11 == param_1) {
      return;
    }
    lVar11 = *(long *)(lVar8 + lVar9 + 0x3ef8);
    if ((lVar11 != 0) && (lVar11 == param_1)) break;
    lVar9 = lVar9 + 0x40;
    if (lVar9 == 0) {
      pcVar10 = (char *)(lVar8 + 0x50);
      lVar8 = 500;
      while ((*pcVar10 != '\0' || (*(long *)(pcVar10 + 8) != 0))) {
        pcVar10 = pcVar10 + 0x20;
        lVar8 = lVar8 + -1;
        if (lVar8 == 0) {
          return;
        }
      }
      *pcVar10 = '\x01';
      *(long *)(pcVar10 + 8) = param_1;
      *(undefined4 *)(pcVar10 + 0x18) = param_2;
      pcVar10[0x1c] = '\x01';
      return;
    }
  }
  return;
}


