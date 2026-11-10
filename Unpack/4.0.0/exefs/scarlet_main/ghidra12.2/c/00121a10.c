/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00121a10; name: FUN_00121a10
 */


undefined8 FUN_00121a10(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar5 = (long)param_2;
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar5 < *(long *)(param_1 + 0x28) - lVar3 >> 4) {
    uVar2 = 1;
    uVar4 = lVar3 + lVar5 * 0x10;
    if (*(ulong *)(lVar1 + 8) < uVar4) {
LAB_00121abc:
      *(ulong *)(lVar1 + 8) = uVar4;
      return uVar2;
    }
  }
  else {
    if (1000000 - param_2 < (int)((ulong)(lVar3 - *(long *)(param_1 + 0x30)) >> 4) + 5) {
      return 0;
    }
    uVar2 = FUN_00126e50(param_1,param_2,0);
    if (((int)uVar2 != 0) &&
       (uVar4 = *(long *)(param_1 + 0x10) + lVar5 * 0x10, *(ulong *)(lVar1 + 8) < uVar4))
    goto LAB_00121abc;
  }
  return uVar2;
}


