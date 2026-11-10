/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01242f98; name: FUN_01242f98
 */


undefined1 FUN_01242f98(long param_1)

{
  undefined8 uVar1;
  undefined1 local_20 [8];
  undefined1 auStack_18 [8];
  
  uVar1 = FUN_01242fc8(*(undefined8 *)(param_1 + 0x78));
  FUN_01242fd0(uVar1,local_20,auStack_18);
  return local_20[0];
}


