/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01241124; name: FUN_01241124
 */


void FUN_01241124(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_28 [8];
  undefined8 local_20;
  undefined4 local_18;
  
  local_20 = *(undefined8 *)(param_2 + 0x40);
  local_18 = *(undefined4 *)(param_2 + 0x48);
  uVar1 = FUN_02985a24(*(undefined8 *)(param_1 + 0x78));
  FUN_0297e6d0(uVar1,auStack_28,&local_20);
  return;
}


