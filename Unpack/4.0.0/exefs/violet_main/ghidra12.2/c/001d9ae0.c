/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001d9ae0; name: FUN_001d9ae0
 */


void FUN_001d9ae0(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (param_2 != 0) {
    uVar1 = 0x802;
  }
  nnsocketFcntl(param_1,4,uVar1);
  return;
}


