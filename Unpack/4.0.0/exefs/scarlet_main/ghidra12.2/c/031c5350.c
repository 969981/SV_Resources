/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031c5350; name: FUN_031c5350
 */


void FUN_031c5350(long *param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  uVar5 = *(uint *)((long)param_1 + 0xc);
  if ((int)uVar5 < (int)param_1[1] * 2) {
    FUN_02ef5fd4(param_1,param_2,uVar5 * 2 + 2);
    uVar5 = *(uint *)((long)param_1 + 0xc);
  }
  lVar6 = *param_3;
  uVar1 = (int)lVar6 * -0x61c8864f;
  uVar2 = (int)((ulong)lVar6 >> 0x20) * -0x61c8864f;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  uVar3 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = uVar3 + (uVar3 >> 2) + uVar1 * 0x40 + 0x9e3779b9 ^ uVar1;
  do {
    uVar1 = uVar1 & uVar5;
    lVar7 = *(long *)(*param_1 + (ulong)uVar1 * 0x10);
    if (lVar7 == -1) {
      iVar4 = 1;
LAB_031c53f8:
      *(int *)(param_1 + 1) = (int)param_1[1] + iVar4;
      *(long *)(*param_1 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4)) =
           *param_3;
      *(undefined8 *)(*param_1 + (long)(int)uVar1 * 0x10 + 8) = *param_4;
      return;
    }
    if (lVar7 == lVar6) {
      iVar4 = 0;
      goto LAB_031c53f8;
    }
    uVar1 = uVar1 + 1;
  } while( true );
}


