/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00133660; name: FUN_00133660
 */


void FUN_00133660(long param_1,long param_2,int param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  
  iVar5 = param_3 - *(int *)(param_1 + 0x28);
  uVar4 = (long)*(int *)(param_1 + 0x20) - 1;
  iVar2 = -iVar5;
  if (-1 < iVar5) {
    iVar2 = iVar5;
  }
  if ((0x7f < iVar2) ||
     (cVar1 = *(char *)(param_1 + 0x45), *(char *)(param_1 + 0x45) = cVar1 + '\x01', cVar1 < '\0'))
  {
    lVar3 = FUN_0012d3b0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x38),
                         *(undefined8 *)(param_2 + 0x60),*(undefined4 *)(param_1 + 0x34),
                         param_2 + 0x28,8,0x7fffffff,"lines");
    *(long *)(param_2 + 0x60) = lVar3;
    *(int *)(lVar3 + (long)*(int *)(param_1 + 0x34) * 8) = (int)uVar4;
    lVar3 = *(long *)(param_2 + 0x60);
    iVar2 = *(int *)(param_1 + 0x34);
    *(int *)(param_1 + 0x34) = iVar2 + 1;
    *(int *)(lVar3 + (long)iVar2 * 8 + 4) = param_3;
    iVar5 = -0x80;
    *(undefined1 *)(param_1 + 0x45) = 1;
  }
  lVar3 = FUN_0012d3b0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x38),
                       *(undefined8 *)(param_2 + 0x58),uVar4 & 0xffffffff,param_2 + 0x1c,1,
                       0x7fffffff,"opcodes");
  *(long *)(param_2 + 0x58) = lVar3;
  *(char *)(lVar3 + uVar4) = (char)iVar5;
  *(int *)(param_1 + 0x28) = param_3;
  return;
}


