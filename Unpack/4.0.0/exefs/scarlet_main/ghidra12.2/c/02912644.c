/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02912644; name: FUN_02912644
 */


uint FUN_02912644(long param_1)

{
  short sVar1;
  uint uVar2;
  
  sVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if (((sVar1 == 0) && ((*(char *)(param_1 + 0xb8) == '\0' || (*(char *)(param_1 + 0xb9) == '\0'))))
     && ((sVar1 = *(short *)(param_1 + 0x9e), sVar1 == 10 || ((sVar1 == 0x4e || (sVar1 == 0x1f))))))
  {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46);
    return uVar2 & 1;
  }
  return 0;
}


