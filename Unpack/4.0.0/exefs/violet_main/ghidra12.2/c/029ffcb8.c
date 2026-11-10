/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029ffcb8; name: FUN_029ffcb8
 */


void FUN_029ffcb8(long param_1,int param_2)

{
  undefined8 local_30;
  undefined4 local_28;
  int iStack_24;
  
  if (*(int *)(param_1 + 0xb4) != param_2) {
    local_28 = *(undefined4 *)(param_1 + 0x23c);
    local_30 = 0x3908000010;
    iStack_24 = param_2;
    FUN_00e08a00(*(long *)(param_1 + 0x180) + 0x28,*(long *)(param_1 + 0x180),&local_30);
    *(int *)(param_1 + 0xb4) = param_2;
    *(undefined1 *)(param_1 + 0x199) = 1;
    FUN_00e08aac(param_1);
  }
  return;
}


