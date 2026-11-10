/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030cd0d0; name: FUN_030cd0d0
 */


void FUN_030cd0d0(long param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  uint local_24;
  
  if (((*(uint *)(param_1 + 0x128) & 0x7fffffff) != 0) && (iVar3 = (int)param_2[1], 1 < iVar3)) {
    uVar6 = iVar3 - 1;
    if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) < (int)uVar6) {
      FUN_030cd3dc(param_3,uVar6);
    }
    iVar4 = (int)param_3[1];
    if (iVar4 < (int)uVar6) {
      *(uint *)(param_3 + 1) = uVar6;
      memset((void *)(*param_3 + (long)iVar4 * 4),0xff,(ulong)((iVar3 - iVar4) - 2) * 4 + 4);
    }
    else if (iVar3 <= iVar4) {
      *(uint *)(param_3 + 1) = uVar6;
    }
    uVar7 = 0;
    do {
      uVar1 = uVar7 + 1;
      iVar3 = *(int *)(*param_2 + uVar1 * 4);
      local_24 = 0xffffffff;
      uVar2 = *(uint *)(param_1 + 300);
      if ((int)uVar2 < 1) {
LAB_030cd1f0:
        puVar8 = &local_24;
      }
      else {
        uVar5 = (iVar3 * -0x61c8864f & 0xff00ff00U) >> 8 | (iVar3 * -0x61c8864f & 0xff00ffU) << 8;
        uVar10 = (ulong)(uVar2 & (uVar5 >> 0x10 | uVar5 << 0x10));
        lVar9 = *(long *)(param_1 + 0x120);
        iVar4 = *(int *)(lVar9 + uVar10 * 8);
        if (iVar4 == -1) goto LAB_030cd1f0;
        if (iVar4 != iVar3) {
          do {
            uVar10 = (ulong)((int)uVar10 + 1U & uVar2);
            iVar4 = *(int *)(lVar9 + uVar10 * 8);
            if (iVar4 == -1) goto LAB_030cd1f0;
          } while (iVar4 != iVar3);
        }
        puVar8 = (uint *)(lVar9 + uVar10 * 8 + 4);
      }
      if (*puVar8 != 0xffffffff) {
        *(uint *)(*param_3 + uVar7 * 4) = *(uint *)(*param_2 + uVar7 * 4) & 0xffc00000 | *puVar8;
      }
      uVar7 = uVar1;
    } while (uVar1 != uVar6);
  }
  return;
}


