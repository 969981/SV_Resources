/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d7b8f0; name: FUN_00d7b8f0
 */


void FUN_00d7b8f0(long *param_1,long *param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  puVar2 = PTR_DAT_047dca00;
  puVar1 = PTR_DAT_047dc9f8;
  if ((param_2 != (long *)0x0) && (lVar7 = *param_2, lVar7 != 0)) {
    if (0 < (int)param_3) {
      uVar9 = 0;
      do {
        while (lVar7 == 0) {
          uVar9 = uVar9 + 1;
          if (uVar9 == (param_3 & 0xffffffff)) {
            return;
          }
        }
        if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar1), iVar3 != 0)) {
          FUN_00100190(PTR_LAB_047dca48,puVar2,&PTR_LOOP_04483000);
          __cxa_guard_release(puVar1);
        }
        lVar6 = *(long *)puVar2;
        uVar8 = *(ulong *)(lVar7 + uVar9 * 8);
        DAT_0483c5d8 = lVar6;
        if (uVar8 != 0) {
          if ((uVar8 < *(ulong *)(lVar6 + 0x30)) ||
             (*(ulong *)(lVar6 + 0x30) + (long)*(int *)(lVar6 + 0x38) * 0x30 <= uVar8)) {
            FUN_00d7b620(uVar8);
            plVar4 = *(long **)(lVar6 + 8);
            uVar5 = (**(code **)(*plVar4 + 0xf8))();
            if (((uVar5 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
              (**(code **)(*plVar4 + 0x18))(plVar4,uVar8,0x30,0x10);
            }
            else {
              FUN_00c48fe8(plVar4,uVar8,0x30,0x10);
            }
            *(int *)(lVar6 + 0x44) = *(int *)(lVar6 + 0x44) + -1;
          }
          else {
            FUN_00d7bb00(uVar8);
            *(undefined8 *)(uVar8 + 0x28) = *(undefined8 *)(lVar6 + 0x28);
            *(ulong *)(lVar6 + 0x28) = uVar8;
            *(int *)(lVar6 + 0x40) = *(int *)(lVar6 + 0x40) + -1;
          }
        }
        lVar7 = *param_2;
        uVar9 = uVar9 + 1;
      } while (uVar9 != (param_3 & 0xffffffff));
      if (lVar7 == 0) {
        return;
      }
    }
    uVar8 = -(param_3 >> 0x1f & 1) & 0xfffffff800000000 | (param_3 & 0xffffffff) << 3;
    uVar9 = (**(code **)(*param_1 + 0xf8))(param_1);
    if (((uVar9 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*param_1 + 0x18))(param_1,lVar7,uVar8,8);
    }
    else {
      FUN_00c48fe8(param_1,lVar7,uVar8,8);
    }
    *param_2 = 0;
  }
  return;
}


