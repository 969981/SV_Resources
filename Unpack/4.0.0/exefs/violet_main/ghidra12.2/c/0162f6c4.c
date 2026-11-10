/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0162f6c4; name: FUN_0162f6c4
 */


undefined8 * FUN_0162f6c4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  long *plVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  plVar4 = (long *)param_2[3];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  plVar1 = (long *)param_1[3];
  param_1[3] = plVar4;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  pcVar2 = (code *)param_1[7];
  if (pcVar2 != (code *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    (*pcVar2)(param_1 + 10);
  }
  if ((code *)param_2[8] != (code *)0x0) {
    (*(code *)param_2[8])(param_2 + 10,param_1 + 10);
    uVar3 = param_2[9];
    param_1[7] = param_2[7];
    param_1[9] = uVar3;
    uVar3 = param_2[6];
    param_1[8] = param_2[8];
    param_1[6] = uVar3;
  }
  pcVar2 = (code *)param_1[0x17];
  if (pcVar2 != (code *)0x0) {
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    (*pcVar2)(param_1 + 0x1a);
  }
  if ((code *)param_2[0x18] != (code *)0x0) {
    (*(code *)param_2[0x18])(param_2 + 0x1a,param_1 + 0x1a);
    uVar3 = param_2[0x19];
    param_1[0x17] = param_2[0x17];
    param_1[0x19] = uVar3;
    uVar3 = param_2[0x16];
    param_1[0x18] = param_2[0x18];
    param_1[0x16] = uVar3;
  }
  pcVar2 = (code *)param_1[0x27];
  if (pcVar2 != (code *)0x0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    (*pcVar2)(param_1 + 0x2a);
  }
  if ((code *)param_2[0x28] != (code *)0x0) {
    (*(code *)param_2[0x28])(param_2 + 0x2a,param_1 + 0x2a);
    uVar3 = param_2[0x29];
    param_1[0x27] = param_2[0x27];
    param_1[0x29] = uVar3;
    uVar3 = param_2[0x26];
    param_1[0x28] = param_2[0x28];
    param_1[0x26] = uVar3;
  }
  pcVar2 = (code *)param_1[0x37];
  if (pcVar2 != (code *)0x0) {
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    (*pcVar2)(param_1 + 0x3a);
  }
  if ((code *)param_2[0x38] != (code *)0x0) {
    (*(code *)param_2[0x38])(param_2 + 0x3a,param_1 + 0x3a);
    uVar3 = param_2[0x39];
    param_1[0x37] = param_2[0x37];
    param_1[0x39] = uVar3;
    uVar3 = param_2[0x36];
    param_1[0x38] = param_2[0x38];
    param_1[0x36] = uVar3;
  }
  pcVar2 = (code *)param_1[0x47];
  if (pcVar2 != (code *)0x0) {
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    param_1[0x46] = 0;
    param_1[0x47] = 0;
    (*pcVar2)(param_1 + 0x4a);
  }
  if ((code *)param_2[0x48] != (code *)0x0) {
    (*(code *)param_2[0x48])(param_2 + 0x4a,param_1 + 0x4a);
    uVar3 = param_2[0x49];
    param_1[0x47] = param_2[0x47];
    param_1[0x49] = uVar3;
    uVar3 = param_2[0x46];
    param_1[0x48] = param_2[0x48];
    param_1[0x46] = uVar3;
  }
  return param_1;
}


