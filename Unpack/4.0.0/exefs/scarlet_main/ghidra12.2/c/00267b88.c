/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00267b88; name: FUN_00267b88
 */


void FUN_00267b88(long param_1,long param_2)

{
  ulong *puVar1;
  long *plVar2;
  
  plVar2 = (long *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_002679fc(param_1);
  }
  else {
    plVar2 = (long *)*plVar2;
    FUN_002679fc(param_1);
  }
  if (param_2 != 0) {
    puVar1 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_2 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if ((ulong *)plVar2 != puVar1) {
      param_2 = FUN_0052b1c0(plVar2,param_2);
    }
    *(undefined4 *)(param_1 + 0x1c) = 9;
    *(long *)(param_1 + 0x10) = param_2;
  }
  return;
}


