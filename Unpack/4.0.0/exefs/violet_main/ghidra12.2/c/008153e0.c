/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008153e0; name: FUN_008153e0
 */


void FUN_008153e0(long *param_1,long param_2,undefined2 param_3,undefined8 *param_4,uint param_5)

{
  ulong uVar1;
  undefined8 local_30;
  undefined4 local_28;
  
  param_1[0xf9] = param_2;
  *(undefined2 *)(param_1 + 0xfa) = param_3;
  if (param_5 != 0) {
    if (0x15 < param_5 - 1) {
      param_5 = 0x17;
    }
    uVar1 = (ulong)param_5;
    do {
      FUN_00815460(param_1,*param_4,0);
      uVar1 = uVar1 - 1;
      param_4 = param_4 + 1;
    } while (uVar1 != 0);
  }
  *(undefined1 *)(param_1 + 0xf8) = 1;
  local_28 = 0;
  local_30 = 0x1000;
  (**(code **)(*param_1 + 0x10))(param_1,&local_30);
  return;
}


