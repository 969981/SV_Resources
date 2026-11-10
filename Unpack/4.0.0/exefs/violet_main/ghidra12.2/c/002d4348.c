/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002d4348; name: FUN_002d4348
 */


void FUN_002d4348(long *param_1,long param_2,undefined4 param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  iVar6 = pthread_rwlock_init((pthread_rwlock_t *)(param_1 + 2),(pthread_rwlockattr_t *)0x0);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[10] = 0;
                    /* try { // try from 002d4394 to 002d439b has its CatchHandler @ 002d4568 */
  iVar6 = pthread_rwlock_init((pthread_rwlock_t *)(param_1 + 0xc),(pthread_rwlockattr_t *)0x0);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002d4564 to 002d4567 has its CatchHandler @ 002d4568 */
    abort();
  }
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  lVar10 = *param_1;
  param_1[0x12] = param_4;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  iVar4 = *(int *)(lVar10 + 0x10);
  iVar6 = iVar4;
  if ((int)param_1[1] != 1) {
    iVar6 = 0;
  }
  iVar2 = iVar4 + iVar6;
  uVar1 = iVar6 + *(int *)(lVar10 + 0x38) + *(int *)(lVar10 + 0x3c) + *(int *)(lVar10 + 0x44) + 1;
  uVar11 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
  lVar9 = ((param_4 + (long)iVar2 * -0x10) - uVar11) + -0x108;
  param_1[0x12] = lVar9;
  if ((lVar9 < 0) ||
     (param_1[0x13] = lVar9,
     lVar9 < ((long)*(int *)(lVar10 + 0x14) * 8 + (long)(*(int *)(lVar10 + 0x28) + iVar6) * 4) *
             0x14 + 0x1e0)) {
    *(undefined1 *)((long)param_1 + 0xc) = 1;
    return;
  }
  puVar7 = (undefined4 *)FUN_0049e770(PTR_FUN_047cba38,0x38);
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
    puVar5 = PTR_FUN_047cba38;
    uVar8 = FUN_0049e770(PTR_FUN_047cba38,(long)iVar2 << 2);
    *(undefined8 *)(puVar7 + 2) = uVar8;
    puVar7[4] = iVar2;
    uVar8 = FUN_0049e770(puVar5,(long)iVar2 << 2);
    puVar7[8] = iVar2;
    *(undefined8 *)(puVar7 + 6) = uVar8;
    puVar7[10] = iVar4;
    puVar7[0xb] = iVar6;
    puVar7[0xc] = iVar4;
    *(undefined1 *)(puVar7 + 0xd) = 1;
  }
  param_1[8] = (long)puVar7;
  iVar4 = *(int *)(*param_1 + 0x10);
  puVar7 = (undefined4 *)FUN_0049e770(PTR_FUN_047cba38,0x38);
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
    puVar5 = PTR_FUN_047cba38;
    uVar3 = iVar4 + iVar6;
    uVar12 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2;
    uVar8 = FUN_0049e770(PTR_FUN_047cba38,uVar12);
    *(undefined8 *)(puVar7 + 2) = uVar8;
    puVar7[4] = uVar3;
    uVar8 = FUN_0049e770(puVar5,uVar12);
    puVar7[8] = uVar3;
    *(undefined8 *)(puVar7 + 6) = uVar8;
    puVar7[10] = iVar4;
    puVar7[0xb] = iVar6;
    puVar7[0xc] = iVar4;
    *(undefined1 *)(puVar7 + 0xd) = 1;
  }
  param_1[9] = (long)puVar7;
  lVar10 = FUN_0049e770(PTR_FUN_047cba38,uVar11);
  lVar9 = param_1[10];
  param_1[10] = lVar10;
  if (lVar9 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  *(uint *)(param_1 + 0xb) = uVar1;
  return;
}


