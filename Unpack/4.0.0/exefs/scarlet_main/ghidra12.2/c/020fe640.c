/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020fe640; name: FUN_020fe640
 */


undefined8 FUN_020fe640(long param_1,int *param_2)

{
  int iVar1;
  undefined2 uVar2;
  ulong uVar3;
  
  iVar1 = *param_2;
  if (iVar1 == 2) {
    *(undefined1 *)(param_1 + 0x138) = 1;
    uVar3 = ((ulong)*(byte *)(param_1 + 0x3d9) & 0xf) << 8 |
            ((ulong)*(byte *)(param_1 + 0x3d8) & 0xf) << 4 | 0x203e8bb807d0000d;
    *(ulong *)(param_1 + 0x220) = uVar3;
    *(ulong *)(param_1 + 0x140) = uVar3;
    *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x228);
    FUN_0132746c(param_1,param_1 + 0x138,200);
    return 1;
  }
  if (iVar1 == 1) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x218) + 0x7b0))();
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    uVar2 = **(undefined2 **)(param_1 + 0xf8);
    *(undefined1 *)(param_1 + 0x3da) = *(undefined1 *)(*(undefined2 **)(param_1 + 0xf8) + 1);
    *(undefined2 *)(param_1 + 0x3d8) = uVar2;
    (**(code **)(**(long **)(param_1 + 0x218) + 0x7a8))
              (*(long **)(param_1 + 0x218),*(undefined1 *)(param_1 + 0x3d8),
               *(undefined1 *)(param_1 + 0x3d9));
  }
  *param_2 = *param_2 + 1;
  return 0;
}


