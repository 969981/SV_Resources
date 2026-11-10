/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0013b2e0; name: FUN_0013b2e0
 */


int FUN_0013b2e0(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  *(long *)(param_1 + 0x20) = param_1 + 0x60;
  *(undefined1 *)(*(long *)(param_1 + 0x30) + 8) = 0;
  iVar1 = 0;
  if (param_2 != 1) {
    iVar1 = param_2;
  }
  *(undefined2 *)(param_1 + 0x9e) = 2;
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x30);
  iVar1 = FUN_001281f0(param_1,1,iVar1);
  lVar3 = *(long *)(param_1 + 0x30);
  lVar2 = lVar3 + 0x10;
  if (iVar1 == 0) {
    *(long *)(param_1 + 0x10) = lVar2;
  }
  else {
    FUN_00126b30(param_1,iVar1);
    lVar2 = *(long *)(param_1 + 0x10);
    lVar3 = *(long *)(param_1 + 0x30);
  }
  *(long *)(param_1 + 0x68) = lVar2 + 0x140;
  *(char *)(param_1 + 10) = (char)iVar1;
  FUN_00126ce0(param_1,(ulong)((lVar2 + 0x140) - lVar3) >> 4,0);
  return iVar1;
}


