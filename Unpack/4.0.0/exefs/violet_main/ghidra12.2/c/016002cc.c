/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016002cc; name: FUN_016002cc
 */


undefined8
FUN_016002cc(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5)

{
  undefined1 auStack_40 [16];
  undefined8 local_18;
  
  FUN_0160033c(auStack_40,*(undefined8 *)(param_2 + 8),param_3,0,0);
  local_18 = 0;
  (**(code **)(**(long **)(param_1 + 0x60) + 0x130))
            (*(long **)(param_1 + 0x60),auStack_40,&local_18,param_4,param_5);
  return local_18;
}


