/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02953510; name: FUN_02953510
 */


void FUN_02953510(long param_1,int param_2,char param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x20);
  iVar2 = 0;
  if (lVar3 != 0) {
    iVar2 = *(int *)(lVar3 + 0xc);
  }
  if (((iVar2 == param_2) && (cVar1 = FUN_017962f0(param_1), cVar1 == param_3)) &&
     (*(int *)(*(long *)(param_1 + 0x48) + 0x48) != 0)) {
    FUN_01453738(*(undefined8 *)(param_1 + 0x38),0x34,0x1333);
    return;
  }
  return;
}


