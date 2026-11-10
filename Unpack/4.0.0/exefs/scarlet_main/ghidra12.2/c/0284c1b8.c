/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0284c1b8; name: FUN_0284c1b8
 */


ulong FUN_0284c1b8(long *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 4);
  uVar2 = (**(code **)(*param_1 + 0x30))();
  if (uVar2 < uVar5) {
    lVar1 = param_1[4];
    iVar3 = (**(code **)(*param_1 + 0x30))(param_1);
    uVar5 = (int)lVar1 - iVar3;
  }
  else {
    uVar5 = 0;
  }
  uVar2 = (**(code **)(*param_1 + 0x28))(param_1);
  if (uVar2 < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x0284c228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*param_1 + 0x28))(param_1);
    return uVar4;
  }
  return (ulong)uVar5;
}


