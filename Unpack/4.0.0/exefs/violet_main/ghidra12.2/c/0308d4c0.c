/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0308d4c0; name: FUN_0308d4c0
 */


void FUN_0308d4c0(long param_1,long param_2,undefined8 param_3)

{
  undefined *local_30;
  long lStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_30 = &DAT_0464ce68;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  lStack_28 = param_2;
  local_20 = param_3;
  (**(code **)(**(long **)(param_1 + 0x18) + 0x38))
            (*(long **)(param_1 + 0x18),param_2 + 0x30,&local_30);
  return;
}


