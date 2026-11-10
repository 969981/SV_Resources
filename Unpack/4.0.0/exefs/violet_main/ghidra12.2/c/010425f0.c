/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010425f0; name: FUN_010425f0
 */


undefined8 * FUN_010425f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    plVar1 = (long *)param_3[3];
    param_3[2] = param_1[2];
    param_3[3] = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))();
    }
    uVar2 = param_1[3];
    param_1[3] = 0;
    param_3[3] = uVar2;
    FUN_00f0ecf0(param_3 + 4,param_1 + 4);
    if (param_1 + 6 == param_2) {
      param_3 = param_3 + 6;
    }
    else {
      param_3[6] = param_1[6];
      param_3[7] = param_1[7];
      plVar1 = (long *)param_3[9];
      param_3[8] = param_1[8];
      param_3[9] = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x20))();
      }
      uVar2 = param_1[9];
      param_1[9] = 0;
      param_3[9] = uVar2;
      FUN_00f0ecf0(param_3 + 10,param_1 + 10);
      if (param_1 + 0xc == param_2) {
        param_3 = param_3 + 0xc;
      }
      else {
        param_3[0xc] = param_1[0xc];
        param_3[0xd] = param_1[0xd];
        plVar1 = (long *)param_3[0xf];
        param_3[0xe] = param_1[0xe];
        param_3[0xf] = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x20))();
        }
        uVar2 = param_1[0xf];
        param_1[0xf] = 0;
        param_3[0xf] = uVar2;
        FUN_00f0ecf0(param_3 + 0x10,param_1 + 0x10);
        param_3 = param_3 + 0x12;
        for (param_1 = param_1 + 0x12; param_1 != param_2; param_1 = param_1 + 6) {
          *param_3 = *param_1;
          param_3[1] = param_1[1];
          plVar1 = (long *)param_3[3];
          param_3[2] = param_1[2];
          param_3[3] = 0;
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 0x20))();
          }
          uVar2 = param_1[3];
          param_1[3] = 0;
          param_3[3] = uVar2;
          FUN_00f0ecf0(param_3 + 4,param_1 + 4);
          param_3 = param_3 + 6;
        }
      }
    }
  }
  return param_3;
}


