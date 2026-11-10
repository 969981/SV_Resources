/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0116e3d8; name: FUN_0116e3d8
 */


void FUN_0116e3d8(undefined8 *param_1,uint param_2)

{
  long *plVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  long *plVar10;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar6 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar6;
  plVar10 = *(long **)(lVar6 + 0x1c0);
  plVar1 = *(long **)(lVar6 + 0x1c8);
  for (; plVar10 != plVar1; plVar10 = plVar10 + 1) {
    lVar6 = *plVar10;
    plVar4 = (long *)(*(code *)**(undefined8 **)(lVar6 + 0x28))((undefined8 *)(lVar6 + 0x28));
    lVar5 = FUN_0116e50c();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar5) goto LAB_0116e464;
    }
  }
  lVar6 = 0;
LAB_0116e464:
  lVar6 = lVar6 + (ulong)(param_2 & 0xff) * 0x40;
  pbVar8 = (byte *)(lVar6 + 0x40);
  bVar2 = *pbVar8;
  puVar7 = &DAT_cbf29ce484222645;
  if (bVar2 != 0) {
    pbVar9 = (byte *)(lVar6 + 0x41);
    do {
      puVar7 = (undefined1 *)(((ulong)puVar7 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (bVar2 != 0);
  }
  *param_1 = puVar7;
  param_1[1] = pbVar8;
  param_1[2] = 0x3f;
  param_1[3] = 0;
  return;
}


