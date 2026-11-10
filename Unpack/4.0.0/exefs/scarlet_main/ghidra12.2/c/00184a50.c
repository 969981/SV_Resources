/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00184a50; name: FUN_00184a50
 */


int FUN_00184a50(long param_1,long param_2,long param_3,uint param_4,long param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int local_440;
  int aiStack_43c [255];
  
  uVar1 = 0;
  if (param_4 != 0) {
    uVar1 = 0x40000000 / param_4;
  }
  uVar2 = 0;
  if (param_6 != 0) {
    uVar2 = 0x40000000 / param_6;
  }
  if (param_2 < 0x101) {
    if (param_2 < 1) {
      iVar3 = 0;
    }
    else {
      lVar7 = 0;
      iVar3 = 0;
      iVar4 = 1;
      do {
        lVar7 = (ulong)*(byte *)(param_1 + lVar7) * 4;
        iVar5 = *(int *)(PTR_DAT_047cb918 + (ulong)(*(int *)(param_3 + lVar7) * uVar1 >> 0x11) * 4)
                >> 5;
        iVar6 = *(int *)(PTR_DAT_047cb918 + (ulong)(*(int *)(param_5 + lVar7) * uVar2 >> 0x11) * 4)
                >> 5;
        if (0xaff < iVar5) {
          iVar5 = 0xb00;
        }
        if (0xaff < iVar6) {
          iVar6 = 0xb00;
        }
        iVar3 = (iVar5 + iVar3) - iVar6;
        lVar7 = (long)iVar4;
        iVar4 = iVar4 + 1;
      } while (lVar7 < param_2);
    }
  }
  else {
    FUN_0015edc0(param_1,param_2,&local_440,0x100,0);
    iVar3 = 0;
    lVar7 = 0;
    while( true ) {
      if (local_440 != 0) {
        iVar4 = *(int *)(PTR_DAT_047cb918 + (ulong)(*(int *)(param_3 + lVar7) * uVar1 >> 0x11) * 4)
                >> 5;
        iVar5 = *(int *)(PTR_DAT_047cb918 + (ulong)(*(int *)(param_5 + lVar7) * uVar2 >> 0x11) * 4)
                >> 5;
        if (0xaff < iVar4) {
          iVar4 = 0xb00;
        }
        if (0xaff < iVar5) {
          iVar5 = 0xb00;
        }
        iVar3 = (iVar4 + iVar3) - iVar5;
      }
      if (lVar7 == 0x3fc) break;
      local_440 = *(int *)((long)aiStack_43c + lVar7);
      lVar7 = lVar7 + 4;
    }
  }
  return iVar3;
}


