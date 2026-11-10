/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01043fbc; name: FUN_01043fbc
 */


void FUN_01043fbc(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  if (param_1[0xb] != 0) {
    plVar1 = (long *)param_1[6];
    while (plVar1 != (long *)0x0) {
      plVar6 = (long *)*plVar1;
      FUN_010440c8(plVar1 + 2);
      plVar5 = (long *)param_1[7];
      uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar5 + 0x18))(plVar5,plVar1,0x50,8);
        plVar1 = plVar6;
      }
      else {
        FUN_00c48fe8(plVar5,plVar1,0x50,8);
        plVar1 = plVar6;
      }
    }
    lVar3 = param_1[1];
    param_1[6] = 0;
    if ((((lVar3 != 0) && (*(undefined8 *)*param_1 = 0, lVar3 != 1)) &&
        (*(undefined8 *)(*param_1 + 8) = 0, lVar3 != 2)) &&
       (*(undefined8 *)(*param_1 + 0x10) = 0, lVar3 != 3)) {
      lVar4 = 3;
      do {
        *(undefined8 *)(*param_1 + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    param_1[0xb] = 0;
  }
  return;
}


