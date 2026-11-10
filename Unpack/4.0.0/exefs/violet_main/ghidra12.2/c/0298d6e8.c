/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298d6e8; name: FUN_0298d6e8
 */


void FUN_0298d6e8(long param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_28 [8];
  undefined8 local_8;
  
  local_28[0] = 0;
  local_8 = param_3;
  uVar1 = FUN_0298d72c(*(undefined8 *)(param_1 + 0x18));
  FUN_02987eb0(uVar1,local_28,&local_8);
  *param_2 = 0;
  return;
}


