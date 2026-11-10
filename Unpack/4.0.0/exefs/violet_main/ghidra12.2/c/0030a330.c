/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0030a330; name: FUN_0030a330
 */


void FUN_0030a330(long param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  long *extraout_x1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    plVar1 = param_2;
    if (param_3 < 5) {
      do {
        *param_2 = *(long *)(lVar2 + 0x10);
        FUN_00308360(param_1,plVar1,lVar2 + 8,param_3);
        *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_1 + 0x1160);
        *(long *)(param_1 + 0x1160) = lVar2;
        lVar2 = *param_2;
        plVar1 = extraout_x1;
      } while (lVar2 != 0);
    }
    else {
      do {
        *param_2 = *(long *)(lVar2 + 0x10);
        auVar3 = FUN_00350fb0(param_3);
        FUN_00308360(param_1,auVar3._8_8_,lVar2 + 8,auVar3._0_8_);
        *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_1 + 0x1160);
        *(long *)(param_1 + 0x1160) = lVar2;
        lVar2 = *param_2;
      } while (lVar2 != 0);
    }
  }
  if (param_3 < 5) {
    return;
  }
  FUN_00350fd0(param_3);
  return;
}


