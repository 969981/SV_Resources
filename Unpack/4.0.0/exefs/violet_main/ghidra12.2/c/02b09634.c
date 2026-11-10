/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b09634; name: FUN_02b09634
 */


void FUN_02b09634(int param_1,byte param_2)

{
  byte *pbVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar9 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar9;
  puVar5 = PTR_DAT_047d4c00;
  puVar4 = PTR_DAT_047d4bf8;
  plVar2 = *(long **)(lVar9 + 0x1c0);
  plVar3 = *(long **)(lVar9 + 0x1c8);
  do {
    if (plVar2 == plVar3) {
      return;
    }
    lVar9 = *plVar2;
    plVar7 = (long *)(*(code *)**(undefined8 **)(lVar9 + 0x28))((undefined8 *)(lVar9 + 0x28));
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      uVar8 = FUN_01b3fb0c();
      *(undefined8 *)puVar5 = uVar8;
      __cxa_guard_release(puVar4);
    }
    for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      if (plVar7 == (long *)puVar5) {
        piVar11 = (int *)(lVar9 + 0x8544);
        uVar10 = 1;
        goto LAB_02b09724;
      }
    }
    plVar2 = plVar2 + 1;
  } while( true );
  while( true ) {
    if (piVar11[-2] == param_1) {
      uVar10 = uVar10 - 1;
      goto LAB_02b0976c;
    }
    if (*piVar11 == 0) goto LAB_02b09760;
    if (*piVar11 == param_1) goto LAB_02b0976c;
    uVar10 = uVar10 + 2;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0xbb9) break;
LAB_02b09724:
    if (piVar11[-2] == 0) {
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + -2;
LAB_02b09760:
      *piVar11 = param_1;
LAB_02b0976c:
      pbVar1 = (byte *)(lVar9 + (uVar10 & 0xffffffff) * 8 + 0x8540);
      if (*pbVar1 == 0) {
        *pbVar1 = param_2 & 1;
      }
      break;
    }
  }
  *(undefined1 *)(lVar9 + 0x8538) = 1;
  return;
}


