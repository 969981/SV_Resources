/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008a0b7c; name: FUN_008a0b7c
 */


void FUN_008a0b7c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ushort *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  
  puVar5 = PTR_DAT_047d2358;
  puVar4 = PTR_DAT_047d2350;
  puVar3 = PTR_DAT_047d2248;
  bVar2 = *(byte *)(param_1 + 0x14);
  if ((bVar2 & 3) != 0) {
    lVar11 = *(long *)(param_1 + 0x18);
    uVar13 = 0;
    do {
      puVar1 = (ushort *)(lVar11 + uVar13 * 0x10);
      if ((*puVar1 & 0x100) != 0) {
        plVar12 = *(long **)(puVar1 + 4);
        puVar7 = (undefined8 *)(**(code **)(*plVar12 + 0x48))(plVar12);
        if (((*PTR_DAT_047d2240 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d2240), iVar6 != 0)) {
          if (((*PTR_DAT_047d2108 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d2108), iVar6 != 0)) {
            *(undefined8 *)PTR_DAT_047d2110 = 0;
            __cxa_guard_release(PTR_DAT_047d2108);
          }
          *(undefined **)puVar3 = PTR_DAT_047d2110;
          __cxa_guard_release(PTR_DAT_047d2240);
        }
        if (puVar7 != (undefined8 *)0x0) {
          for (plVar8 = (long *)(**(code **)*puVar7)(puVar7); plVar8 != (long *)0x0;
              plVar8 = (long *)*plVar8) {
            if (plVar8 == (long *)puVar3) goto LAB_008a0c48;
          }
          puVar7 = (undefined8 *)0x0;
        }
LAB_008a0c48:
        puVar9 = (undefined8 *)(**(code **)(*plVar12 + 0x48))(plVar12);
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          if (((*PTR_DAT_047d2108 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d2108), iVar6 != 0)) {
            *(undefined8 *)PTR_DAT_047d2110 = 0;
            __cxa_guard_release(PTR_DAT_047d2108);
          }
          *(undefined **)puVar5 = PTR_DAT_047d2110;
          __cxa_guard_release(puVar4);
        }
        if (puVar9 != (undefined8 *)0x0) {
          for (plVar12 = (long *)(**(code **)*puVar9)(puVar9); plVar12 != (long *)0x0;
              plVar12 = (long *)*plVar12) {
            if (plVar12 == (long *)puVar5) goto LAB_008a0c90;
          }
          puVar9 = (undefined8 *)0x0;
        }
LAB_008a0c90:
        uVar10 = FUN_0089a654(*(undefined8 *)(param_4 + 0xa0),*puVar1 >> 9 & 7);
        if (puVar7 == (undefined8 *)0x0) {
          if (puVar9 != (undefined8 *)0x0) {
            FUN_0089a500(uVar10,param_2,param_3,*(long *)(param_4 + 0x20),
                         *(undefined8 *)(*(long *)(param_4 + 0x20) + 0x40),puVar9[2]);
          }
        }
        else {
          FUN_0089a3dc(uVar10,puVar7[2]);
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != (bVar2 & 3));
  }
  return;
}


