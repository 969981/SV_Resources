/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0158c718; name: FUN_0158c718
 */


void FUN_0158c718(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  
  if ((ulong)((param_1[2] - param_1[1] >> 3) * -0x1084210842108421) < param_2) {
    uVar1 = FUN_0158c7e8(param_1,param_2 + (param_1[1] - *param_1 >> 3) * -0x1084210842108421);
    FUN_0158c84c(auStack_58,uVar1,(param_1[1] - *param_1 >> 3) * -0x1084210842108421,param_1 + 3);
    FUN_0158ca4c(auStack_58,param_2);
    FUN_0158c8e0(param_1,auStack_58);
    FUN_0158c988(auStack_58);
    return;
  }
  FUN_0158d150(param_1,param_2);
  return;
}


