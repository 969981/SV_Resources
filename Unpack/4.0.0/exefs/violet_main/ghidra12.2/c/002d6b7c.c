/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002d6b7c; name: FUN_002d6b7c
 */


undefined8 FUN_002d6b7c(long param_1,int param_2)

{
  code *pcVar1;
  long local_38;
  undefined1 auStack_30 [8];
  undefined1 **local_28;
  undefined1 *local_20;
  long *plStack_18;
  
  local_38 = param_1;
  if (param_2 == 3) {
    if (*(long *)(param_1 + 0x198) == -1) goto LAB_002d6bf4;
    pcVar1 = (code *)&LAB_002d74e0;
  }
  else {
    if (param_2 != 0) {
      if (*(ulong *)(param_1 + 0x1a0) != 0xffffffffffffffff) {
        local_20 = auStack_30;
        plStack_18 = &local_38;
        local_28 = &local_20;
        std::__call_once((ulong *)(param_1 + 0x1a0),&local_28,(_func_void_void_ptr *)&LAB_002d7530);
      }
      return *(undefined8 *)(param_1 + 0x90);
    }
    if (*(long *)(param_1 + 0x198) == -1) goto LAB_002d6bf4;
    pcVar1 = FUN_002d7480;
  }
  plStack_18 = &local_38;
  local_20 = auStack_30;
  local_28 = &local_20;
  std::__call_once((ulong *)(param_1 + 0x198),&local_28,pcVar1);
LAB_002d6bf4:
  return *(undefined8 *)(param_1 + 0x88);
}


