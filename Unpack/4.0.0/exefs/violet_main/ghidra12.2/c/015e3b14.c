/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015e3b14; name: FUN_015e3b14
 */


void FUN_015e3b14(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  if (param_1[0xb] != 0) {
    plVar5 = (long *)param_1[6];
    if (plVar5 != (long *)0x0) {
      plVar4 = (long *)*plVar5;
      if ((long *)plVar5[2] != (long *)0x0) {
        (**(code **)(*(long *)plVar5[2] + 0x60))();
      }
      plVar6 = (long *)param_1[7];
      uVar1 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar5,0x18,8);
      }
      else {
        FUN_00c48fe8(plVar6,plVar5,0x18,8);
      }
      while (plVar4 != (long *)0x0) {
        plVar5 = (long *)*plVar4;
        if ((long *)plVar4[2] != (long *)0x0) {
          (**(code **)(*(long *)plVar4[2] + 0x60))();
        }
        plVar6 = (long *)param_1[7];
        uVar1 = (**(code **)(*plVar6 + 0xf8))(plVar6);
        if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
          (**(code **)(*plVar6 + 0x18))(plVar6,plVar4,0x18,8);
          plVar4 = plVar5;
        }
        else {
          FUN_00c48fe8(plVar6,plVar4,0x18,8);
          plVar4 = plVar5;
        }
      }
    }
    lVar2 = param_1[1];
    param_1[6] = 0;
    if ((((lVar2 != 0) && (*(undefined8 *)*param_1 = 0, lVar2 != 1)) &&
        (*(undefined8 *)(*param_1 + 8) = 0, lVar2 != 2)) &&
       (*(undefined8 *)(*param_1 + 0x10) = 0, lVar2 != 3)) {
      lVar3 = 3;
      do {
        *(undefined8 *)(*param_1 + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    param_1[0xb] = 0;
  }
  return;
}


