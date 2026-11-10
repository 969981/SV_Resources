/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00216d4c; name: FUN_00216d4c
 */


void FUN_00216d4c(long *param_1,undefined *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  param_1[1] = 0;
  puVar2 = PTR_DAT_047cbe28;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    uVar3 = FUN_0021d48c(param_1 + 1);
    uVar1 = (ulong)(*(byte *)(uVar6 + 8) >> 1);
    lVar5 = uVar6 + 9;
    if ((*(byte *)(uVar6 + 8) & 1) != 0) {
      uVar1 = *(ulong *)(uVar6 + 0x10);
      lVar5 = *(long *)(uVar6 + 0x18);
    }
    FUN_0021d540(uVar3,lVar5,uVar1);
  }
  if ((param_2 == PTR_DAT_047cbe20) || (lVar5 = *(long *)(param_2 + 0x10), lVar5 == 0)) {
    param_1[2] = 0;
    return;
  }
  lVar4 = FUN_0049e770(PTR_FUN_047cba38,0x38);
  if (lVar4 != 0) {
    FUN_0021b394(lVar4,lVar5);
  }
  param_1[2] = lVar4;
  return;
}


