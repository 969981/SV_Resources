/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c5b19c; name: FUN_00c5b19c
 */


bool FUN_00c5b19c(long param_1,int param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_58 [8];
  undefined2 local_50;
  undefined1 local_4e;
  undefined8 local_38;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x9e8 + 0x9b8);
  if (lVar4 == 0) {
    bVar3 = false;
  }
  else {
    lVar4 = lVar4 + (param_4 & 0xffffffff) * 8;
    iVar1 = *(int *)(lVar4 + 0x14);
    iVar2 = *(int *)(lVar4 + 0x18);
    local_4e = 0;
    local_50 = 0;
    local_38 = param_5;
    lVar4 = FUN_008ee2f4(auStack_58);
    bVar3 = false;
    if (lVar4 != 0) {
      bVar3 = iVar2 != -1;
      if (bVar3) {
        FUN_00c5afc0(param_3,iVar2,0,&local_38,lVar4 + 0x28);
      }
      if (iVar1 != -1) {
        FUN_00c5afc0(param_3,iVar1,4,&local_38,lVar4 + 0x28);
        bVar3 = true;
      }
    }
  }
  return bVar3;
}


