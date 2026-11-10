/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00133110; name: FUN_00133110
 */


void FUN_00133110(long *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  
  iVar3 = (int)param_1[4];
  if (*(int *)((long)param_1 + 0x24) < iVar3) {
    puVar8 = (uint *)(*(long *)(*param_1 + 0x40) + (long)(iVar3 + -1) * 4);
    uVar4 = *puVar8;
  }
  else {
    puVar8 = &DAT_03cb2738;
    uVar4 = DAT_03cb2738;
  }
  if ((uVar4 & 0x7f) == 8) {
    uVar5 = uVar4 >> 7 & 0xff;
    iVar1 = uVar5 + (uVar4 >> 0x10 & 0xff);
    iVar2 = param_3 + param_2;
    if (((int)uVar5 <= (int)param_2 && (int)param_2 <= iVar1 + 1) ||
       (((int)param_2 <= (int)uVar5 && ((int)uVar5 <= iVar2)))) {
      if ((int)param_2 <= (int)uVar5) {
        uVar5 = param_2;
      }
      iVar3 = iVar2 + 0xff;
      if (iVar2 <= iVar1) {
        iVar3 = iVar1;
      }
      *puVar8 = uVar4 & 0xff000000 |
                uVar4 & 0x8000 | uVar4 & 0x7f | (uVar5 & 0xff) << 7 |
                (iVar3 - uVar5) * 0x10000 & 0xff0000;
      return;
    }
  }
  lVar9 = *param_1;
  lVar7 = FUN_0012d3b0(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar9 + 0x40),iVar3,
                       lVar9 + 0x18,4,0x7fffffff,"opcodes");
  *(long *)(lVar9 + 0x40) = lVar7;
  lVar6 = param_1[4];
  *(int *)(param_1 + 4) = (int)lVar6 + 1;
  *(uint *)(lVar7 + (long)(int)lVar6 * 4) = param_3 * 0x10000 - 0x10000U | param_2 << 7 | 8;
  FUN_00133660(param_1,lVar9,*(undefined4 *)(param_1[2] + 8));
  return;
}


