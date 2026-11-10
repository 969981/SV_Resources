/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f30e90; name: FUN_02f30e90
 */


void FUN_02f30e90(long param_1,undefined8 param_2,long param_3)

{
  (**(code **)(**(long **)(param_1 + 0x4c0) + 0x20))
            (*(long **)(param_1 + 0x4c0),*(undefined8 *)(param_3 + 0x10),
             *(undefined4 *)(param_3 + 0x18));
  if ((ulong)(long)((float)(*(long *)(param_1 + 0x968) * 7 + 7) * 0.7) <
      (ulong)*(uint *)(param_3 + 0x18)) {
    FUN_031c51a0(0x3f333333,param_1 + 0x960);
    return;
  }
  return;
}


