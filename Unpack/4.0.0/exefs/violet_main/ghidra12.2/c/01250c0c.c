/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01250c0c; name: FUN_01250c0c
 */


void FUN_01250c0c(long param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined1 local_28 [8];
  undefined1 auStack_8 [8];
  
  local_28[0] = 0;
  uVar1 = FUN_01250c50(*(undefined8 *)(param_1 + 0x18));
  FUN_01251044(uVar1,local_28,auStack_8);
  *param_2 = local_28[0];
  return;
}


