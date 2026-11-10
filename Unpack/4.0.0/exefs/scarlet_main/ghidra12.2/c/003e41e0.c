/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e41e0; name: FUN_003e41e0
 */


int FUN_003e41e0(undefined8 param_1,long *param_2,long param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_54;
  
  local_54 = (int)*(undefined8 *)(param_3 + 8);
  iVar3 = FUN_003e4360(param_1,0,&local_54,param_3);
  iVar4 = 0;
  if (iVar3 != -1) {
    uVar1 = 0x180001 >> (ulong)(local_54 + 3U & 0x1f);
    uVar5 = (uint)(local_54 + 3U < 0x15);
    iVar2 = local_54;
    if (iVar3 == -2) {
      bVar7 = false;
      iVar6 = 2;
      iVar3 = 0;
      if (param_4 != -1) {
        iVar2 = param_4;
      }
    }
    else {
      bVar7 = true;
      iVar6 = iVar4;
      if (param_4 != -1) {
        iVar2 = param_4;
      }
    }
    iVar4 = iVar3;
    if (param_2 != (long *)0x0) {
      if ((uVar1 & uVar5) == 0) {
        FUN_003dede0(param_2,iVar6,iVar4,iVar2,param_5);
      }
      FUN_003e4360(param_1,*param_2,&local_54,param_3);
      if (bVar7) {
        *param_2 = *param_2 + (long)iVar4;
      }
      else {
        FUN_003def70(param_2);
      }
    }
    if ((uVar1 & uVar5) == 0) {
      iVar4 = FUN_003def90(iVar6,iVar4,iVar2);
    }
  }
  return iVar4;
}


