/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001da2e0; name: FUN_001da2e0
 */


undefined8 FUN_001da2e0(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if ((*(long *)(param_1 + 0xd8) != 0) && (plVar2 = (long *)FUN_001d14d0(), plVar2 != (long *)0x0))
  {
    for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
      lVar3 = *plVar2;
      iVar1 = FUN_001e0990(lVar3 + 0x1a,*(undefined8 *)(param_2 + 0xd0));
      if ((iVar1 != 0) && (*(uint *)(param_2 + 0x198) == (uint)*(ushort *)(lVar3 + 0x18))) {
        FUN_001db818(param_1,"Site %s:%d is pipeline blacklisted\n",*(undefined8 *)(param_2 + 0xd0))
        ;
        return 1;
      }
    }
  }
  return 0;
}


