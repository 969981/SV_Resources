/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e71480; name: FUN_00e71480
 */


void FUN_00e71480(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long *local_28;
  
  lVar1 = param_1 + 0x4068;
  lVar9 = 0;
  iVar8 = 1;
  lVar2 = param_1 + 0x4058;
  do {
    lVar3 = param_1 + lVar9;
    if (((*(long *)(lVar3 + 0x4070) == 0) || (*(short *)(*(long *)(lVar3 + 0x4070) + 0x1a) == 0)) &&
       (plVar7 = *(long **)(lVar3 + 0x4080), plVar7 != (long *)0x0)) {
      iVar5 = (**(code **)(*plVar7 + 0x98))(plVar7);
      if (iVar5 == 0) {
        local_60 = (long *)CONCAT44(local_60._4_4_,iVar8);
        FUN_021d87c0(*(undefined8 *)PTR_DAT_047dd658,&local_60);
        *(undefined8 *)(lVar3 + 0x4080) = 0;
      }
      else if (**(char **)(lVar2 + lVar9) != '*') {
        FUN_021d8878(&local_28,param_1 + 0x4050 + lVar9);
        FUN_0135d26c(&local_60,&local_28);
        *(long **)(lVar3 + 0x4050) = local_60;
        *(undefined8 *)(lVar2 + lVar9) = local_58;
        *(undefined8 *)(lVar3 + 0x4060) = local_50;
        plVar7 = *(long **)(lVar1 + lVar9);
        *(undefined8 *)(lVar1 + lVar9) = 0;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x20))();
        }
        uVar4 = local_48;
        local_48 = 0;
        *(undefined8 *)(lVar1 + lVar9) = uVar4;
        if (local_28 != (long *)0x0) {
          (**(code **)(*local_28 + 0x20))();
        }
      }
    }
    if (*(long *)(lVar3 + 0x4070) == 0) {
      local_60 = (long *)0x0;
    }
    else {
      FUN_00e74e20(&local_60,*(long *)(lVar3 + 0x4070));
      plVar7 = local_60;
      if (local_60 != (long *)0x0) {
        *(long *)(lVar3 + 0x4050) = local_60[0x33];
        *(long *)(lVar2 + lVar9) = local_60[0x34];
        *(long *)(lVar3 + 0x4060) = local_60[0x35];
        plVar10 = (long *)local_60[0x36];
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x18))(plVar10);
        }
        plVar6 = *(long **)(lVar1 + lVar9);
        *(long **)(lVar1 + lVar9) = plVar10;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x20))();
        }
        (**(code **)(**(long **)(lVar3 + 0x4080) + 0xe0))
                  (*(long **)(lVar3 + 0x4080),*(undefined8 *)(lVar2 + lVar9));
        (**(code **)(*plVar7 + 0x60))(plVar7);
      }
    }
    lVar9 = lVar9 + 0x38;
    iVar8 = iVar8 + 1;
  } while (lVar9 != 0x7000);
  return;
}


