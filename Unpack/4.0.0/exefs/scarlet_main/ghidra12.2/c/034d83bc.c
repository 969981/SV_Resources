/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034d83bc; name: FUN_034d83bc
 */


void FUN_034d83bc(long param_1,uint param_2)

{
  int iVar1;
  undefined4 local_8;
  uint uStack_4;
  
  if ((*(byte *)(param_1 + 0xdc) & 0x30) != 0) {
    return;
  }
  local_8 = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x7c);
  uStack_4 = *(uint *)(*(long *)(param_1 + 0x18) + 699) >> 0x1c & 7;
  iVar1 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x28))
                    (*(long **)(param_1 + 0xb8),param_1 + 0x40,param_1 + 0x24,&local_8,param_2 & 1);
  if (iVar1 != 0x34) {
    if (iVar1 == 0x11) {
      *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) | 4;
      return;
    }
    if (iVar1 != 2) {
      return;
    }
  }
  *(byte *)(param_1 + 0xdc) = *(byte *)(param_1 + 0xdc) | 0x40;
  return;
}


