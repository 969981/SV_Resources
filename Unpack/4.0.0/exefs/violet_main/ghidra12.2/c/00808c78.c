/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00808c78; name: FUN_00808c78
 */


void FUN_00808c78(long param_1,undefined8 *param_2,uint param_3,undefined8 param_4,
                 undefined4 param_5)

{
  ulong uVar1;
  undefined1 auStack_40 [16];
  
  if (0 < (int)param_3) {
    uVar1 = (ulong)param_3;
    do {
      FUN_0080a990(auStack_40,*(undefined8 *)(param_1 + 0x13e8),*param_2,param_4,param_5,1);
      uVar1 = uVar1 - 1;
      param_2 = param_2 + 1;
    } while (uVar1 != 0);
  }
  return;
}


