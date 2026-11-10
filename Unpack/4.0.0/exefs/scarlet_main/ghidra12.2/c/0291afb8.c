/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0291afb8; name: FUN_0291afb8
 */


uint FUN_0291afb8(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined2 local_8 [2];
  undefined4 local_4;
  
  iVar1 = FUN_0154b6c8(*(undefined8 *)(param_1 + 0x40));
  uVar2 = 0;
  if (iVar1 != 0) {
    local_4 = 0;
    local_8[0] = 0;
    iVar1 = FUN_020ff04c(*(undefined8 *)(param_1 + 0x60),&local_4,local_8,
                         *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
    uVar2 = 0;
    if (iVar1 == 0) {
      uVar3 = FUN_0291b120(param_1);
      if ((uVar3 & 1) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_0291b17c(param_1);
      }
    }
  }
  return uVar2 & 1;
}


