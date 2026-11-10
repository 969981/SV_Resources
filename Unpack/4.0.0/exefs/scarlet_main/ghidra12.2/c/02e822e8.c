/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e822e8; name: FUN_02e822e8
 */


void FUN_02e822e8(long *param_1,int param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *__src;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  void *__dest;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  ulong local_28;
  
  puVar5 = PTR_DAT_047d1a08;
  uVar4 = *(uint *)(param_1 + 1);
  uVar8 = uVar4 << 1;
  if (uVar4 == 0) {
    uVar8 = 1;
  }
  uVar2 = uVar4 + param_2;
  if ((int)(uVar4 + param_2) <= (int)uVar8) {
    uVar2 = uVar8;
  }
  uVar8 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  if ((int)uVar8 <= (int)uVar4) {
    uVar8 = uVar4;
  }
  if ((int)uVar8 < (int)uVar2) {
    local_28 = -(ulong)(uVar2 >> 0x1f) & 0xffffffc000000000 | (ulong)uVar2 << 6;
    __dest = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_28,0);
    __src = (void *)0x0;
    if (*param_1 != 0) {
      __src = (void *)(*param_1 + (long)param_1);
    }
    memcpy(__dest,__src,(long)(int)param_1[1] << 6);
    if (*(int *)((long)param_1 + 0xc) < 0) {
      lVar3 = 0;
      if (*param_1 != 0) {
        lVar3 = *param_1 + (long)param_1;
      }
      (**(code **)(puVar5 + 8))(0,lVar3,0);
    }
    lVar3 = 0;
    if (__dest != (void *)0x0) {
      lVar3 = (long)__dest - (long)param_1;
    }
    *param_1 = lVar3;
    *(uint *)((long)param_1 + 0xc) = uVar2 | 0x80000000;
    if (*(uint *)(param_1 + 1) == uVar2) goto LAB_02e823d8;
  }
  else {
    if (uVar4 == uVar2) goto LAB_02e823d8;
    if (*(uint *)((long)param_1 + 0xc) == 0) {
      *(uint *)((long)param_1 + 0xc) = uVar4;
    }
  }
  *(uint *)(param_1 + 1) = uVar2;
LAB_02e823d8:
  if ((int)uVar4 < (int)uVar2) {
    uVar6 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x238);
    uVar7 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x230);
    uVar10 = NEON_fmov(0x3f800000,4);
    uVar8 = uVar4;
    do {
      puVar1 = (undefined8 *)((long)param_1 + (ulong)(uVar8 & 0xffff) * 0x40 + *param_1);
      if ((int)uVar8 < (int)(uVar2 - 1)) {
        iVar9 = uVar8 + 1;
      }
      else {
        iVar9 = (int)param_1[2];
      }
      uVar8 = uVar8 + 1;
      *puVar1 = uVar7;
      puVar1[1] = uVar6;
      puVar1[4] = uVar10;
      *(undefined4 *)(puVar1 + 5) = 0x3f800000;
      *(int *)((long)puVar1 + 0x2c) = iVar9;
      puVar1[2] = 0;
      puVar1[3] = 0x1ffff00000000;
      puVar1[6] = 0;
      puVar1[7] = 0;
    } while (uVar8 != uVar2);
  }
  *(uint *)(param_1 + 2) = uVar4;
  return;
}


