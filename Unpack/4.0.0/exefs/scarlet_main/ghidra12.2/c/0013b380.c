/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0013b380; name: FUN_0013b380
 */


int FUN_0013b380(long param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  *(long *)(param_1 + 0x20) = param_1 + 0x60;
  cVar2 = *(char *)(param_1 + 10);
  *(undefined1 *)(*(long *)(param_1 + 0x30) + 8) = 0;
  cVar1 = '\0';
  if (cVar2 != '\x01') {
    cVar1 = cVar2;
  }
  *(undefined2 *)(param_1 + 0x9e) = 2;
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x30);
  iVar3 = FUN_001281f0(param_1,1,cVar1);
  lVar5 = *(long *)(param_1 + 0x30);
  lVar4 = lVar5 + 0x10;
  if (iVar3 == 0) {
    *(long *)(param_1 + 0x10) = lVar4;
  }
  else {
    FUN_00126b30(param_1,iVar3);
    lVar4 = *(long *)(param_1 + 0x10);
    lVar5 = *(long *)(param_1 + 0x30);
  }
  *(long *)(param_1 + 0x68) = lVar4 + 0x140;
  *(char *)(param_1 + 10) = (char)iVar3;
  FUN_00126ce0(param_1,(ulong)((lVar4 + 0x140) - lVar5) >> 4,0);
  return iVar3;
}


