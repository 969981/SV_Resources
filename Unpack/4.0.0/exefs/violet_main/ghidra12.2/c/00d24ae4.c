/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d24ae4; name: FUN_00d24ae4
 */


void FUN_00d24ae4(long *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = *param_1;
  lVar5 = param_1[1];
  while (lVar5 != lVar1) {
    if (*(long *)(lVar5 + -0x38) != 0) {
      FUN_00d24be4((long *)(lVar5 + -0x38));
      lVar6 = *(long *)(lVar5 + -0x38);
      plVar2 = *(long **)(lVar5 + -0x20);
      lVar7 = *(long *)(lVar5 + -0x28) - lVar6;
      uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2);
      if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar2 + 0x18))(plVar2,lVar6,lVar7,8);
      }
      else {
        FUN_00c48fe8(plVar2,lVar6,lVar7,8);
      }
    }
    if (*(long **)(lVar5 + -0x48) != (long *)0x0) {
      (**(code **)(**(long **)(lVar5 + -0x48) + 0x20))();
    }
    plVar2 = (long *)(lVar5 + -0x68);
    lVar5 = lVar5 + -0x88;
    if ((long *)*plVar2 != (long *)0x0) {
      (**(code **)(*(long *)*plVar2 + 0x20))();
    }
  }
  param_1[1] = lVar1;
  return;
}


