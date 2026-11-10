/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0053234c; name: FUN_0053234c
 */


uint * FUN_0053234c(long *param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  
  iVar3 = (int)param_1[1];
  uVar4 = iVar3 + param_2;
  puVar5 = (uint *)param_1[2];
  puVar2 = puVar5;
  if ((int)uVar4 <= *(int *)((long)param_1 + 0xc)) goto LAB_00532420;
  uVar1 = *(int *)((long)param_1 + 0xc) * 2;
  lVar6 = *param_1;
  if ((int)uVar4 <= (int)uVar1) {
    uVar4 = uVar1;
  }
  if ((int)uVar4 < 5) {
    uVar4 = 4;
  }
  if (lVar6 == 0) {
    puVar2 = (uint *)FUN_0049e6c0((ulong)uVar4 * 8 + 8);
    param_1[2] = (long)puVar2;
    *(uint *)((long)param_1 + 0xc) = uVar4;
    if (puVar5 != (uint *)0x0) goto LAB_005323d4;
LAB_00532404:
    *puVar2 = 0;
  }
  else {
    uVar7 = (ulong)uVar4 * 8 + 0xf & 0x7fffffff8;
    if (*(long *)(lVar6 + 0x70) != 0) {
      FUN_00520d08(lVar6,0,uVar7);
    }
    puVar2 = (uint *)FUN_00520c00(lVar6,uVar7);
    param_1[2] = (long)puVar2;
    *(uint *)((long)param_1 + 0xc) = uVar4;
    if (puVar5 == (uint *)0x0) goto LAB_00532404;
LAB_005323d4:
    if ((int)*puVar5 < 1) goto LAB_00532404;
    memcpy(puVar2 + 2,puVar5 + 2,(ulong)*puVar5 << 3);
    puVar2 = (uint *)param_1[2];
    *puVar2 = *puVar5;
  }
  if (lVar6 == 0) {
    FUN_0049e700(puVar5);
    puVar2 = (uint *)param_1[2];
  }
  iVar3 = (int)param_1[1];
LAB_00532420:
  return puVar2 + (long)iVar3 * 2 + 2;
}


