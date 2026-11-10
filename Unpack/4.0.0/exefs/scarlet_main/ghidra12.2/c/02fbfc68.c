/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fbfc68; name: FUN_02fbfc68
 */


/* WARNING: Removing unreachable block (ram,0x02fbfe54) */
/* WARNING: Removing unreachable block (ram,0x02fbfe5c) */

void FUN_02fbfc68(long *param_1,long param_2,long param_3,uint param_4,short param_5,short param_6)

{
  short *psVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  int aiStack_c0 [32];
  
  iVar7 = (int)param_1[1];
  aiStack_c0[param_4 & 0xff] = iVar7;
  uVar2 = iVar7 + 1;
  *(uint *)(param_1 + 1) = uVar2;
  puVar5 = PTR_DAT_047e4988;
  plVar4 = (long *)(*param_1 + (long)iVar7 * 0x20);
  lVar9 = (-(ulong)(uVar2 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar2 << 5) + (long)iVar7 * -0x20;
  puVar3 = PTR_DAT_047e4988 + 0x10;
  plVar10 = plVar4;
  do {
    lVar9 = lVar9 + -0x20;
    *plVar10 = (long)puVar3;
    plVar10 = plVar10 + 4;
  } while (lVar9 != 0);
  plVar4[3] = 0;
  *plVar4 = (long)(puVar5 + 0x10);
  plVar4[1] = param_2;
  *(undefined2 *)(plVar4 + 2) = 0x301;
  *(short *)((long)plVar4 + 0x12) =
       (short)param_4 +
       (short)((uint)(((int)(param_4 * 0x10000 + 0x10000) >> 0x10) * (int)(short)param_4) >> 1);
  *(char *)((long)plVar4 + 0x14) = (char)param_4;
  *(char *)((long)plVar4 + 0x15) = (char)param_4;
  *(undefined1 *)((long)plVar4 + 0x16) = 0;
  uVar2 = *(uint *)(param_3 + 0x20);
  uVar6 = uVar2;
  if ((int)(*(uint *)(param_3 + 0x24) & 0x7fffffff) <= (int)uVar2) {
    FUN_0323ff70(param_3 + 0x18,PTR_PTR_047d1a50,(long)(int)uVar2 + 1);
    uVar6 = *(uint *)(param_3 + 0x20);
  }
  puVar8 = (undefined8 *)(*(long *)(param_3 + 0x18) + (long)(int)uVar6 * 0x18);
  *(int *)(param_3 + 0x20) = (int)((long)(int)uVar2 + 1);
  *puVar8 = plVar4;
  *(undefined2 *)(puVar8 + 1) = 1;
  *(undefined1 *)((long)puVar8 + 10) = 0x40;
  puVar8[2] = 0;
  if ((param_5 != -1) && ((~uVar2 & 0xffff) != 0)) {
    iVar7 = *(int *)(param_3 + 0x330);
    lVar9 = (long)iVar7;
    if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar7) {
      FUN_02e7f7cc(param_3 + 0x328,PTR_PTR_047d1a50,lVar9 + 1);
      iVar7 = *(int *)(param_3 + 0x330);
    }
    psVar1 = (short *)(*(long *)(param_3 + 0x328) + (long)iVar7 * 4);
    *(int *)(param_3 + 0x330) = (int)(lVar9 + 1);
    *psVar1 = param_5;
    psVar1[1] = (short)uVar2;
  }
  if ((param_6 != -1) && ((~uVar2 & 0xffff) != 0)) {
    iVar7 = *(int *)(param_3 + 0x330);
    lVar9 = (long)iVar7;
    if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar7) {
      FUN_02e7f7cc(param_3 + 0x328,PTR_PTR_047d1a50,lVar9 + 1);
      iVar7 = *(int *)(param_3 + 0x330);
    }
    psVar1 = (short *)(*(long *)(param_3 + 0x328) + (long)iVar7 * 4);
    *(int *)(param_3 + 0x330) = (int)(lVar9 + 1);
    *psVar1 = (short)uVar2;
    psVar1[1] = param_6;
  }
  return;
}


