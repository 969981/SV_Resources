/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029ffc48; name: FUN_029ffc48
 */


void FUN_029ffc48(long param_1)

{
  undefined8 local_30;
  undefined4 local_28;
  
  if (0 < *(int *)(param_1 + 0xb4)) {
    local_28 = *(undefined4 *)(param_1 + 0x23c);
    local_30 = 0x3a08000010;
    FUN_00e08a00(*(long *)(param_1 + 0x180) + 0x28,*(long *)(param_1 + 0x180),&local_30);
    *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x199) = 1;
    FUN_00e08aac(param_1);
  }
  return;
}


