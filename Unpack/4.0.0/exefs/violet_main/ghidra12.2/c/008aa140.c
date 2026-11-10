/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008aa140; name: FUN_008aa140
 */


void FUN_008aa140(long *param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar6 = *param_1;
  uVar2 = *(undefined8 *)(lVar6 + 0x70);
  uVar3 = *(undefined8 *)(lVar6 + 0x78);
  uVar12 = *(undefined8 *)(lVar6 + 0x88);
  uVar11 = *(undefined8 *)(lVar6 + 0x98);
  uVar9 = *(undefined8 *)(lVar6 + 0x80);
  uVar10 = *(undefined8 *)(lVar6 + 0x90);
  if ((param_1[1] == 0) && (lVar6 = FUN_008a6694(lVar6,3), lVar6 != 0)) {
    lVar6 = FUN_008a6694(*param_1,3);
    param_1[1] = lVar6;
  }
  if ((param_1[0xb] == 0) && (lVar6 = FUN_008a6694(*param_1,4), lVar6 != 0)) {
    lVar6 = FUN_008a6694(*param_1,4);
    param_1[0xb] = lVar6;
  }
  if (param_1[1] != 0) {
    *(undefined8 *)(param_2 + 0xa8) = uVar11;
    *(undefined8 *)(param_2 + 0x80) = uVar2;
    *(undefined8 *)(param_2 + 0x88) = uVar3;
    *(undefined8 *)(param_2 + 0x90) = uVar9;
    *(undefined8 *)(param_2 + 0x98) = uVar12;
    *(undefined8 *)(param_2 + 0xa0) = uVar10;
    *(undefined1 *)(param_2 + 0x18b) = 0;
    FUN_008aa348(param_1,param_2);
    if ((long *)param_1[3] == (long *)0x0) {
      puVar7 = (undefined8 *)0x0;
      bVar1 = *PTR_DAT_047d2350;
    }
    else {
      puVar7 = (undefined8 *)(**(code **)(*(long *)param_1[3] + 0x48))();
      bVar1 = *PTR_DAT_047d2350;
    }
    if (((bVar1 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d2350), puVar4 = PTR_DAT_047d2110, iVar5 != 0)) {
      if (((*PTR_DAT_047d2108 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_047d2108), iVar5 != 0)) {
        *(undefined8 *)puVar4 = 0;
        __cxa_guard_release(PTR_DAT_047d2108);
      }
      *(undefined **)PTR_DAT_047d2358 = puVar4;
      __cxa_guard_release(PTR_DAT_047d2350);
    }
    if (puVar7 != (undefined8 *)0x0) {
      for (plVar8 = (long *)(**(code **)*puVar7)(puVar7); plVar8 != (long *)0x0;
          plVar8 = (long *)*plVar8) {
        if (plVar8 == (long *)PTR_DAT_047d2358) {
          *(byte *)(puVar7 + 0x2b) = *(byte *)(puVar7 + 0x2b) | 2;
          lVar6 = param_1[0xb];
          goto joined_r0x008aa2d8;
        }
      }
    }
  }
  lVar6 = param_1[0xb];
joined_r0x008aa2d8:
  if (lVar6 != 0) {
    *(undefined8 *)(param_2 + 0xa8) = uVar11;
    *(undefined8 *)(param_2 + 0x80) = uVar2;
    *(undefined8 *)(param_2 + 0x88) = uVar3;
    *(undefined8 *)(param_2 + 0x90) = uVar9;
    *(undefined8 *)(param_2 + 0x98) = uVar12;
    *(undefined8 *)(param_2 + 0xa0) = uVar10;
    *(undefined1 *)(param_2 + 0x18b) = 0;
    FUN_008aa5c0(param_1,param_2);
  }
  return;
}


