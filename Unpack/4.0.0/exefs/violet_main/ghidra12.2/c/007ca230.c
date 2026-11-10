/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ca230; name: FUN_007ca230
 */


void FUN_007ca230(long *param_1)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_047d1128 + 0x10);
  lVar1 = *(long *)PTR_DAT_047d08a0;
  if (lVar1 != 0) {
    if (*(long **)(lVar1 + 0x80) != param_1) {
      FUN_007c9e3c(lVar1 + 0x40);
      if (param_1[0x14] != 0) {
        param_1[0x14] = 0;
        FUN_007bfd58(param_1 + 0x11);
        *(int *)(lVar1 + 0x38) = *(int *)(lVar1 + 0x38) + -1;
      }
      FUN_007c9e44(lVar1 + 0x40);
      if (*(int *)((long)param_1 + 0xcc) - 2U < 2) {
        nn::os::WaitThread((ThreadType *)param_1[0x1a]);
        *(undefined4 *)((long)param_1 + 0xcc) = 4;
      }
      else if (*(int *)((long)param_1 + 0xcc) == 1) {
        FUN_007caac0(param_1,0);
      }
      nn::os::DestroyThread((ThreadType *)param_1[0x1a]);
      if (param_1[0x1a] != 0) {
        FUN_007bfaa0();
      }
      lVar1 = param_1[0x1b];
      if (lVar1 != 0) {
        FUN_007bfae0(lVar1);
        FUN_007bfaa0(lVar1);
      }
    }
    FUN_007ca888(param_1 + 6);
  }
  FUN_007ca7ec(param_1 + 6);
  FUN_007c3b34(param_1);
  return;
}


