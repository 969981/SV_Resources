/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a6c974; name: FUN_01a6c974
 */


bool FUN_01a6c974(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5,undefined1 (*param_6) [16],byte *param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar15 = param_4._8_8_;
  uVar14 = param_4._0_8_;
  uVar13 = param_3._8_8_;
  uVar12 = param_3._0_8_;
  uVar11 = param_2._8_8_;
  uVar10 = param_2._0_8_;
  lVar7 = *(long *)(param_5 + 0x38);
  if (param_7 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar8 = *(undefined1 **)PTR_DAT_047d3e30;
    plVar6 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  else {
    bVar3 = *param_7;
    puVar8 = &DAT_cbf29ce484222645;
    if (bVar3 == 0) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = (long *)0x0;
      do {
        param_7 = param_7 + 1;
        puVar8 = (undefined1 *)(((ulong)puVar8 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *param_7;
      } while (bVar3 != 0);
    }
  }
  puVar1 = *(undefined8 **)(lVar7 + 0x140);
  puVar2 = *(undefined8 **)(lVar7 + 0x148);
  puVar5 = puVar1;
  if ((puVar1 != puVar2) && ((undefined1 *)*puVar1 != puVar8)) {
    do {
      puVar5 = puVar5 + 4;
      if (puVar2 == puVar5) {
        puVar5 = puVar2;
        goto LAB_01a6ca08;
      }
    } while ((undefined1 *)*puVar5 != puVar8);
  }
LAB_01a6ca08:
  iVar4 = (int)((ulong)((long)puVar5 - (long)puVar1) >> 5);
  if (puVar2 == puVar5) {
    iVar4 = -1;
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  if (-1 < iVar4) {
    auVar9 = FUN_01a6caf4(*(undefined8 *)(param_5 + 0x38),iVar4);
    *param_6 = auVar9;
    *(undefined8 *)(param_6[1] + 8) = uVar11;
    *(undefined8 *)param_6[1] = uVar10;
    *(undefined8 *)(param_6[2] + 8) = uVar13;
    *(undefined8 *)param_6[2] = uVar12;
    *(undefined8 *)(param_6[3] + 8) = uVar15;
    *(undefined8 *)param_6[3] = uVar14;
  }
  return -1 < iVar4;
}


