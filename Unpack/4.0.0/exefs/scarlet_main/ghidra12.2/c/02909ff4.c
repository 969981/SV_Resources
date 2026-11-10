/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02909ff4; name: FUN_02909ff4
 */


uint FUN_02909ff4(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0));
  if ((((uVar3 & 1) == 0) && (*(short *)(param_1 + 0x9e) != 0x9e)) ||
     (iVar1 = FUN_02914d78(param_1), iVar1 != 1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
    uVar2 = uVar2 & 1;
  }
  return uVar2;
}


