/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01888a50; name: FUN_01888a50
 */


void FUN_01888a50(long param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  
  uVar6 = FUN_01195974();
  iVar4 = *(int *)(param_1 + 0x108);
  iVar7 = (int)((ulong)uVar6 >> 0x20);
  iVar3 = 3;
  if (iVar4 == 1) {
    iVar3 = iVar4;
  }
  iVar1 = 1;
  if (iVar4 == 1) {
    iVar1 = iVar7;
  }
  iVar2 = iVar7;
  iVar5 = iVar4;
  if (iVar4 != 2) {
    iVar2 = iVar1;
    iVar5 = iVar3;
  }
  iVar3 = (int)uVar6 + iVar7 * 6;
  iVar7 = 0;
  if (iVar4 != 0) {
    iVar3 = iVar2;
    iVar7 = iVar5;
  }
  FUN_01888ab8(*(undefined8 *)(param_1 + 0x1a8),iVar7,iVar3,param_2 & 1);
  return;
}


