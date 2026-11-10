/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00134a90; name: FUN_00134a90
 */


void FUN_00134a90(long *param_1,int *param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  
  FUN_001345b0();
  iVar1 = param_2[2];
  if ((*param_2 == 8) && (iVar3 = FUN_0012ea70(param_1), iVar3 <= iVar1)) {
    *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
  }
  param_2[2] = (uint)*(byte *)((long)param_1 + 0x44);
  *param_2 = 8;
  bVar6 = *(byte *)((long)param_1 + 0x44);
  uVar7 = bVar6 + 2;
  if (*(byte *)(*param_1 + 0xc) < uVar7) {
    if (0xfc < bVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_00138770(param_1[2],"function or expression needs too many registers");
    }
    *(char *)(*param_1 + 0xc) = (char)uVar7;
    bVar6 = *(byte *)((long)param_1 + 0x44);
  }
  *(byte *)((long)param_1 + 0x44) = bVar6 + 2;
  iVar3 = param_2[2];
  iVar4 = FUN_00134700(param_1,param_3);
  if (iVar4 == 0) {
    FUN_001345b0(param_1,param_3);
    uVar7 = 0;
  }
  else {
    uVar7 = 0x8000;
  }
  iVar4 = param_3[2];
  lVar8 = *param_1;
  lVar5 = FUN_0012d3b0(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar8 + 0x40),
                       (int)param_1[4],lVar8 + 0x18,4,0x7fffffff,"opcodes");
  *(long *)(lVar8 + 0x40) = lVar5;
  lVar2 = param_1[4];
  *(int *)(param_1 + 4) = (int)lVar2 + 1;
  *(uint *)(lVar5 + (long)(int)lVar2 * 4) =
       iVar1 << 0x10 | iVar3 << 7 | uVar7 | iVar4 << 0x18 | 0x14;
  FUN_00133660(param_1,lVar8,*(undefined4 *)(param_1[2] + 8));
  if ((*param_3 == 8) && (iVar1 = param_3[2], iVar3 = FUN_0012ea70(param_1), iVar3 <= iVar1)) {
    *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
  }
  return;
}


