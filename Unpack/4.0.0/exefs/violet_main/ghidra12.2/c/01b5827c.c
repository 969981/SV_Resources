/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b5827c; name: FUN_01b5827c
 */


void FUN_01b5827c(undefined8 param_1,byte param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar11 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar11;
  puVar4 = PTR_DAT_047d4a48;
  puVar3 = PTR_DAT_047d4a40;
  puVar14 = *(undefined8 **)(lVar11 + 0x1c0);
  puVar1 = *(undefined8 **)(lVar11 + 0x1c8);
  if (puVar14 != puVar1) {
    do {
      plVar13 = (long *)*puVar14;
      plVar8 = (long *)(**(code **)plVar13[5])(plVar13 + 5);
      if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar3), iVar7 != 0)) {
        uVar10 = FUN_01b580f4();
        *(undefined8 *)puVar4 = uVar10;
        __cxa_guard_release(puVar3);
      }
      for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        if (plVar8 == (long *)puVar4) {
          uVar9 = FUN_00f5b590(plVar13,param_1);
          if ((uVar9 & 1) == 0) {
            local_60 = 0;
            uStack_58 = 0;
            uVar9 = FUN_00f5b6fc(plVar13,param_1,&local_60);
          }
          uVar12 = (uint)(uVar9 >> 0x20);
          if (*(uint *)((long)plVar13 + 0x54) <= uVar12) {
            return;
          }
          if (plVar13[8] == 0) {
            if (plVar13[9] == 0) {
              return;
            }
            uVar5 = (**(code **)(*plVar13 + 0x88))(plVar13);
            uVar2 = 0;
            if (uVar5 != 0) {
              uVar2 = uVar12 / uVar5;
            }
            uVar6 = (**(code **)(*plVar13 + 0x88))(plVar13);
            uVar5 = 0;
            if (uVar6 != 0) {
              uVar5 = uVar12 / uVar6;
            }
            lVar11 = *(long *)(plVar13[9] + (ulong)uVar2 * 8) +
                     (ulong)(uVar12 - uVar5 * uVar6) * 0x10;
          }
          else {
            lVar11 = plVar13[8] + (uVar9 >> 0x20) * 0x10;
          }
          if (lVar11 == 0) {
            return;
          }
          *(byte *)(lVar11 + 8) = param_2 & 1;
          return;
        }
      }
      puVar14 = puVar14 + 1;
    } while (puVar14 != puVar1);
  }
  return;
}


