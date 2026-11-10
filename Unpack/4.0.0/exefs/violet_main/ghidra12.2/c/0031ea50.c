/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0031ea50; name: FUN_0031ea50
 */


undefined8 FUN_0031ea50(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00344190();
  if ((uVar1 & 1) == 0) {
    uVar2 = FUN_00343fb0(param_1,"grpc.max_receive_message_length",0xffffffff00400000,0x7fffffff);
    return uVar2;
  }
  return 0xffffffff;
}


