/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004eda24; name: FUN_004eda24
 */


void FUN_004eda24(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  param_1[1] = 0;
  puVar1 = PTR_DAT_047cda90;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  uVar3 = *(ulong *)(param_2 + 8);
  if ((uVar3 & 1) == 0) {
    return;
  }
  uVar2 = FUN_00264e54(param_1 + 1);
  FUN_0051496c(uVar2,(uVar3 & 0xfffffffffffffffe) + 8);
  return;
}


