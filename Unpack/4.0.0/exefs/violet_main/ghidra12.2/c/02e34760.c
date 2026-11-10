/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e34760; name: FUN_02e34760
 */


uint FUN_02e34760(long param_1,long *param_2,undefined2 *param_3,undefined8 *param_4)

{
  undefined2 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int *piVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  undefined8 *puVar13;
  
  uVar3 = FUN_015826c0(*(undefined8 *)(param_1 + 0x38),param_2,*param_3,0x21,param_3,param_4);
  if ((uVar3 & 0xff) != 0) {
    return uVar3;
  }
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x499) >> 2 & 1) != 0) {
    uVar1 = *param_3;
    if (((*PTR_DAT_047d7940 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7940);
    }
    uVar6 = *(undefined8 *)PTR_DAT_047d7948;
    *(undefined8 *)PTR_DAT_047d7950 = uVar6;
    piVar7 = (int *)FUN_00cf60cc(uVar6,uVar1);
    if (((*(ushort *)((long)piVar7 - (long)*piVar7) < 0xf) ||
        (uVar9 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[7], uVar9 == 0)) ||
       (*(char *)((long)piVar7 + uVar9) == '\0')) {
      lVar12 = *(long *)(param_1 + 0x10);
      iVar4 = (**(code **)(*param_2 + 0x98))(param_2);
      lVar12 = *(long *)(lVar12 + 0x310);
      if (((*(byte *)(*(long *)(*(long *)(lVar12 + 8) + 0x38) + 0x499) >> 2 & 1) != 0) &&
         (*(int *)(lVar12 + 0x18) == 0)) {
        uVar6 = FUN_00f7e284(*(undefined8 *)(lVar12 + 0x10));
        uVar6 = FUN_015b5634(uVar6,1);
        plVar10 = (long *)FUN_0124c614(uVar6,0);
        if (plVar10 != (long *)0x0) {
          uVar5 = (**(code **)(*plVar10 + 0x98))();
          *(undefined4 *)(lVar12 + 0x18) = uVar5;
        }
      }
      if (((*(int *)(lVar12 + 0x18) != iVar4) &&
          (uVar9 = FUN_01250ed0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x310)),
          param_4 != (undefined8 *)0x0)) &&
         (((uVar9 & 1) != 0 && (uVar9 = (ulong)*(byte *)((long)param_4 + 0xa6), uVar9 != 0)))) {
        puVar13 = param_4;
        uVar3 = 0;
        do {
          lVar12 = *(long *)(param_1 + 0x10);
          iVar4 = (**(code **)(*(long *)*puVar13 + 0x98))();
          lVar12 = *(long *)(lVar12 + 0x310);
          if (((*(byte *)(*(long *)(*(long *)(lVar12 + 8) + 0x38) + 0x499) >> 2 & 1) != 0) &&
             (*(int *)(lVar12 + 0x18) == 0)) {
            uVar6 = FUN_00f7e284(*(undefined8 *)(lVar12 + 0x10));
            uVar6 = FUN_015b5634(uVar6,1);
            plVar10 = (long *)FUN_0124c614(uVar6,0);
            if (plVar10 != (long *)0x0) {
              uVar5 = (**(code **)(*plVar10 + 0x98))();
              *(undefined4 *)(lVar12 + 0x18) = uVar5;
            }
          }
          uVar11 = 0x24;
          if (*(int *)(lVar12 + 0x18) != iVar4) {
            uVar11 = uVar3;
          }
          puVar13 = puVar13 + 1;
          uVar9 = uVar9 - 1;
          uVar3 = uVar11;
        } while (uVar9 != 0);
        if (uVar11 != 0) {
          return uVar11;
        }
      }
    }
  }
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x49c) >> 1 & 1) != 0) {
    uVar1 = *param_3;
    if (((*PTR_DAT_047d7940 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7940);
    }
    uVar6 = *(undefined8 *)PTR_DAT_047d7948;
    *(undefined8 *)PTR_DAT_047d7950 = uVar6;
    piVar7 = (int *)FUN_00cf60cc(uVar6,uVar1);
    if (((*(ushort *)((long)piVar7 - (long)*piVar7) < 0xf) ||
        (uVar9 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[7], uVar9 == 0)) ||
       (*(char *)((long)piVar7 + uVar9) == '\0')) {
      lVar12 = *(long *)(param_1 + 0x10);
      uVar5 = (**(code **)(*param_2 + 0x98))(param_2);
      piVar7 = (int *)FUN_011e2dd4(*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x290) + 8) + 0x50),
                                   uVar5);
      if (piVar7 == (int *)0x0) {
        bVar2 = false;
      }
      else {
        bVar2 = *piVar7 == 1;
      }
      if (param_4 == (undefined8 *)0x0) {
        return 0;
      }
      if (bVar2) {
        return 0;
      }
      uVar9 = (ulong)*(byte *)((long)param_4 + 0xa6);
      if (uVar9 != 0) {
        uVar3 = 0;
        do {
          plVar10 = (long *)*param_4;
          lVar12 = *(long *)(param_1 + 0x10);
          uVar5 = (**(code **)(*plVar10 + 0x98))(plVar10);
          piVar7 = (int *)FUN_011e2dd4(*(undefined8 *)
                                        (*(long *)(*(long *)(lVar12 + 0x290) + 8) + 0x50),uVar5);
          uVar11 = uVar3;
          if ((piVar7 != (int *)0x0) && (*piVar7 == 1)) {
            uVar8 = (**(code **)(*plVar10 + 0x4d0))(plVar10,0x1e);
            uVar11 = 0x24;
            if ((uVar8 & 1) == 0) {
              uVar11 = uVar3;
            }
          }
          param_4 = param_4 + 1;
          uVar9 = uVar9 - 1;
          uVar3 = uVar11;
        } while (uVar9 != 0);
        return uVar11;
      }
    }
  }
  return 0;
}


