/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00722ca0; name: FUN_00722ca0
 */


void FUN_00722ca0(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  param_1[1] = 0;
  puVar3 = PTR_DAT_047d0378;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = (long)(puVar3 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    uVar4 = FUN_0021d48c(param_1 + 1);
    uVar1 = (ulong)(*(byte *)(uVar5 + 8) >> 1);
    lVar2 = uVar5 + 9;
    if ((*(byte *)(uVar5 + 8) & 1) != 0) {
      uVar1 = *(ulong *)(uVar5 + 0x10);
      lVar2 = *(long *)(uVar5 + 0x18);
    }
    FUN_0021d540(uVar4,lVar2,uVar1);
  }
  return;
}


