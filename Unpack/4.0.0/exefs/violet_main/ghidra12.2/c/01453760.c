/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01453760; name: FUN_01453760
 */


void FUN_01453760(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 10) == '\x03') {
    iVar3 = *(int *)(param_1 + 0x10);
    iVar4 = *(int *)(param_1 + 0x14);
    iVar5 = (int)((long)*(int *)(param_1 + 0xc) * (long)param_2 + 0x800U >> 0xc);
    iVar1 = iVar3;
    if (iVar3 <= iVar5) {
      iVar1 = iVar5;
    }
    iVar2 = iVar4;
    if (iVar1 <= iVar4) {
      iVar2 = iVar1;
    }
    if (iVar4 != 0 || iVar3 != 0) {
      iVar5 = iVar2;
    }
    *(int *)(param_1 + 0xc) = iVar5;
  }
  return;
}


