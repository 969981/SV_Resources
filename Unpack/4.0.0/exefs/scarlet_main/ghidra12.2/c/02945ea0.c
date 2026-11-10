/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02945ea0; name: FUN_02945ea0
 */


undefined8 FUN_02945ea0(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 0x78);
  lVar4 = *(long *)(lVar2 + 0x18);
  iVar3 = 0;
  if (lVar4 != 0) {
    iVar3 = *(int *)(lVar4 + 0xc);
  }
  if (((iVar3 == param_2) && (lVar2 = *(long *)(lVar2 + 400), lVar2 != 0)) &&
     ((*(byte *)(lVar2 + 0xc) & 1) != 0)) {
    uVar1 = FUN_01828610();
    return uVar1;
  }
  return 0;
}


