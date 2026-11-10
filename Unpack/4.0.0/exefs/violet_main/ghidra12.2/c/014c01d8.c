/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014c01d8; name: FUN_014c01d8
 */


ulong FUN_014c01d8(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined4 param_5)

{
  long *plVar1;
  
  if (param_3 != 0) {
    FUN_014c06c0(param_1,param_4);
    FUN_014c0254(param_1,0,param_2);
    FUN_014c0254(param_1,1,param_3);
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = param_5;
    plVar1 = (long *)(param_1 + 0xa0);
    param_1 = 0;
    if (*plVar1 != 0) {
      return (ulong)(*(char *)(*plVar1 + 0x60) == '\x06');
    }
  }
  return param_1;
}


