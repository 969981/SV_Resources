/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a45bc8; name: FUN_01a45bc8
 */


void FUN_01a45bc8(byte *param_1,byte param_2)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  
  if ((((1 < *param_1) ||
       (puVar9 = *(undefined8 **)(param_1 + 8), *(undefined8 **)(param_1 + 8) == (undefined8 *)0x0))
      && (puVar9 = (undefined8 *)PTR_DAT_047d3ba0, (*PTR_DAT_047d3b98 & 1) == 0)) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3b98), puVar9 = (undefined8 *)PTR_DAT_047d3ba0,
     iVar5 != 0)) {
    *(undefined8 *)PTR_DAT_047d3ba0 = 0;
    __cxa_guard_release(PTR_DAT_047d3b98);
  }
  puVar6 = (undefined1 *)*puVar9;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar10 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar10;
  puVar4 = PTR_DAT_047d4860;
  puVar3 = PTR_DAT_047d4858;
  plVar1 = *(long **)(lVar10 + 0x1c0);
  plVar2 = *(long **)(lVar10 + 0x1c8);
  do {
    if (plVar1 == plVar2) {
      return;
    }
    lVar10 = *plVar1;
    plVar7 = (long *)(*(code *)**(undefined8 **)(lVar10 + 0x28))((undefined8 *)(lVar10 + 0x28));
    if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
      uVar8 = FUN_01b3fb0c();
      *(undefined8 *)puVar4 = uVar8;
      __cxa_guard_release(puVar3);
    }
    for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      if (plVar7 == (long *)puVar4) {
        puVar9 = (undefined8 *)(lVar10 + 0x50);
        uVar11 = 1;
        goto LAB_01a45d20;
      }
    }
    plVar1 = plVar1 + 1;
  } while( true );
  while( true ) {
    if (((undefined1 *)*puVar9 == puVar6) || ((undefined1 *)*puVar9 == &DAT_cbf29ce484222645))
    goto LAB_01a45da0;
    uVar11 = uVar11 + 2;
    puVar9 = puVar9 + 4;
    if (uVar11 == 0x12d) break;
LAB_01a45d20:
    if ((undefined1 *)puVar9[-2] == puVar6 || (undefined1 *)puVar9[-2] == &DAT_cbf29ce484222645) {
      uVar11 = uVar11 - 1;
      puVar9 = puVar9 + -2;
LAB_01a45da0:
      *puVar9 = puVar6;
      *(byte *)(lVar10 + (uVar11 & 0xffffffff) * 0x10 + 0x48) = param_2 & 1;
      return;
    }
  }
  puVar9 = (undefined8 *)(lVar10 + 0x1310);
  uVar11 = 1;
  while ((undefined1 *)puVar9[-2] != puVar6 && (undefined1 *)puVar9[-2] != &DAT_cbf29ce484222645) {
    if (((undefined1 *)*puVar9 == puVar6) || ((undefined1 *)*puVar9 == &DAT_cbf29ce484222645))
    goto LAB_01a45dd0;
    uVar11 = uVar11 + 2;
    puVar9 = puVar9 + 4;
    if (uVar11 == 0xc9) {
      return;
    }
  }
  uVar11 = uVar11 - 1;
  puVar9 = puVar9 + -2;
LAB_01a45dd0:
  *puVar9 = puVar6;
  *(byte *)(lVar10 + (uVar11 & 0xffffffff) * 0x10 + 0x1308) = param_2 & 1;
  return;
}


