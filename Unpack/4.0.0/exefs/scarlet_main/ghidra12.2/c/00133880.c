/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00133880; name: FUN_00133880
 */


void FUN_00133880(long *param_1,int param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  long local_60;
  undefined1 local_58;
  long local_50;
  undefined1 local_48;
  
  if (param_3 + 0xffffU >> 0x11 == 0) {
    lVar5 = *param_1;
    lVar4 = FUN_0012d3b0(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar5 + 0x40),
                         (int)param_1[4],lVar5 + 0x18,4,0x7fffffff,"opcodes");
    *(long *)(lVar5 + 0x40) = lVar4;
    lVar7 = param_1[4];
    *(int *)(param_1 + 4) = (int)lVar7 + 1;
    *(uint *)(lVar4 + (long)(int)lVar7 * 4) = (int)param_3 * 0x8000 + 0x7fff8000U | param_2 << 7 | 1
    ;
    FUN_00133660(param_1,lVar5,*(undefined4 *)(param_1[2] + 8));
    return;
  }
  local_48 = 2;
  local_58 = 3;
  local_60 = param_3;
  local_50 = param_3;
  iVar2 = FUN_00137f00(param_1,&local_50,&local_60);
  if (iVar2 < 0x20000) {
    lVar7 = *param_1;
    uVar8 = param_2 << 7 | iVar2 << 0xf | 3;
    uVar6 = *(undefined8 *)(lVar7 + 0x40);
    uVar3 = *(undefined8 *)(param_1[2] + 0x38);
    uVar1 = (undefined4)param_1[4];
  }
  else {
    lVar5 = *param_1;
    lVar4 = FUN_0012d3b0(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar5 + 0x40),
                         (int)param_1[4],lVar5 + 0x18,4,0x7fffffff,"opcodes");
    *(long *)(lVar5 + 0x40) = lVar4;
    lVar7 = param_1[4];
    *(int *)(param_1 + 4) = (int)lVar7 + 1;
    *(uint *)(lVar4 + (long)(int)lVar7 * 4) = param_2 << 7 | 4;
    FUN_00133660(param_1,lVar5,*(undefined4 *)(param_1[2] + 8));
    uVar8 = iVar2 << 7 | 0x52;
    lVar7 = *param_1;
    uVar3 = *(undefined8 *)(param_1[2] + 0x38);
    uVar6 = *(undefined8 *)(lVar7 + 0x40);
    uVar1 = (undefined4)param_1[4];
  }
  lVar5 = FUN_0012d3b0(uVar3,uVar6,uVar1,lVar7 + 0x18,4,0x7fffffff,"opcodes");
  *(long *)(lVar7 + 0x40) = lVar5;
  lVar4 = param_1[4];
  *(int *)(param_1 + 4) = (int)lVar4 + 1;
  *(uint *)(lVar5 + (long)(int)lVar4 * 4) = uVar8;
  FUN_00133660(param_1,lVar7,*(undefined4 *)(param_1[2] + 8));
  return;
}


