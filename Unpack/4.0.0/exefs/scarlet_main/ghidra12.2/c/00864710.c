/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00864710; name: FUN_00864710
 */


uint FUN_00864710(ulong param_1)

{
  uint uVar1;
  char cVar2;
  long local_30;
  long lStack_28;
  
  cVar2 = FUN_0322f1b0();
  if ((cVar2 == '\0') ||
     (FUN_018a2d8c(&local_30,
                   *(long *)PTR_DAT_047d1b90 + (param_1 & 0xff | (param_1 & 0xff) << 8) + 0x18),
     local_30 != lStack_28)) {
    uVar1 = *(uint *)PTR_DAT_047d1c38 | 1 << (ulong)((uint)param_1 & 0x1f);
    *(uint *)PTR_DAT_047d1c38 = uVar1;
    return uVar1;
  }
  return 0;
}


