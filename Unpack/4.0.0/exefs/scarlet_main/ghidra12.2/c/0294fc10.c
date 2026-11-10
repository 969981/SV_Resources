/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0294fc10; name: FUN_0294fc10
 */


void FUN_0294fc10(long param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 0x78);
  lVar5 = *(long *)(lVar3 + 0x28);
  iVar4 = 0;
  if (lVar5 != 0) {
    iVar4 = *(int *)(lVar5 + 0xc);
  }
  if (iVar4 == param_2) {
    lVar3 = *(long *)(lVar3 + 0x1f0);
    if (lVar3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(lVar3 + 0xc);
    }
    cVar2 = FUN_0294fbf0(uVar1);
    if (cVar2 == '\x02') {
      FUN_01453738(*(undefined8 *)(param_1 + 0x38),0x38,0xc00);
      return;
    }
  }
  return;
}


