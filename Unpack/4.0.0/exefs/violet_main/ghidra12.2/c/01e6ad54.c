/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e6ad54; name: FUN_01e6ad54
 */


uint FUN_01e6ad54(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long local_58 [4];
  undefined1 auStack_34 [4];
  undefined4 local_30 [2];
  undefined1 auStack_28 [8];
  
  local_30[0] = param_2;
  FUN_017522c8(local_58,auStack_34,4);
  if (local_58[0] != 0) {
    FUN_01e61adc(auStack_28,local_30,local_58[0] + 8);
  }
  uVar2 = FUN_014c27b0(local_58);
  uVar3 = FUN_014c27c8(local_58);
  uVar1 = FUN_01e61bd8(param_1,uVar2,uVar3);
  FUN_01694aa8(local_58);
  return uVar1 & 1;
}


