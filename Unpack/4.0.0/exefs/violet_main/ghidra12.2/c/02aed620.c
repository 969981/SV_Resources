/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02aed620; name: FUN_02aed620
 */


void FUN_02aed620(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined1 *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  long *local_68;
  
  puVar3 = PTR_DAT_047d4ca8;
  puVar2 = PTR_DAT_047d4ca0;
  puVar1 = PTR_DAT_047d4c98;
  for (plVar12 = (long *)param_1[6]; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
    if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar1), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,puVar2,&PTR_LOOP_04483000);
      __cxa_guard_release(puVar1);
    }
    uVar5 = *(undefined8 *)puVar2;
    *(undefined8 *)puVar3 = uVar5;
    local_80 = &DAT_e4d07a996e5ef5e8;
    puStack_78 = &DAT_03c60f6f;
    local_70 = 4;
    local_68 = (long *)0x0;
    uVar5 = FUN_00f844f4(uVar5,&local_80);
    FUN_01576244(uVar5,plVar12 + 2,(long)plVar12 + 0x14);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
  }
  if (param_1[0xb] != 0) {
    plVar12 = (long *)param_1[6];
    while (plVar12 != (long *)0x0) {
      plVar10 = (long *)param_1[7];
      plVar11 = (long *)*plVar12;
      uVar9 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar9 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar10 + 0x18))(plVar10,plVar12,0x18,4);
        plVar12 = plVar11;
      }
      else {
        FUN_00c48fe8(plVar10,plVar12,0x18,4);
        plVar12 = plVar11;
      }
    }
    uVar9 = param_1[1];
    param_1[6] = 0;
    if (uVar9 != 0) {
      uVar6 = uVar9 & 3;
      if (uVar9 - 1 < 3) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        do {
          *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
          *(undefined8 *)(*param_1 + uVar7 * 8 + 8) = 0;
          *(undefined8 *)(*param_1 + uVar7 * 8 + 0x10) = 0;
          lVar8 = uVar7 * 8;
          uVar7 = uVar7 + 4;
          *(undefined8 *)(*param_1 + lVar8 + 0x18) = 0;
        } while ((uVar9 & 0xfffffffffffffffc) != uVar7);
      }
      if (uVar6 != 0) {
        lVar8 = uVar7 << 3;
        do {
          *(undefined8 *)(*param_1 + lVar8) = 0;
          uVar6 = uVar6 - 1;
          lVar8 = lVar8 + 8;
        } while (uVar6 != 0);
      }
    }
    param_1[0xb] = 0;
  }
  return;
}


