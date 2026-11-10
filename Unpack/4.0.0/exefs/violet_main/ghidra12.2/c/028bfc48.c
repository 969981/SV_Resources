/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028bfc48; name: FUN_028bfc48
 */


void FUN_028bfc48(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[10];
  (**(code **)(*param_1 + 0xa8))(param_1,lVar1);
  if (param_1[0x19] == 0) {
    return;
  }
  FUN_00cbcea8(param_1[0x19],lVar1);
  return;
}


