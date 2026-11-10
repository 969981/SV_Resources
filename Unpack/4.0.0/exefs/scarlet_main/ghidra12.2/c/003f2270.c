/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003f2270; name: FUN_003f2270
 */


undefined8 FUN_003f2270(undefined8 *param_1,long *param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  void *__s;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  uint *puVar13;
  
  uVar3 = param_3 + 0x1f;
  if (-1 < (int)param_3) {
    uVar3 = param_3;
  }
  uVar3 = (int)uVar3 >> 5;
  lVar8 = FUN_003eb9a0(param_1,uVar3 + 1 + (int)param_2[1]);
  uVar9 = 0;
  if (lVar8 != 0) {
    iVar5 = (int)param_2[1];
    if (iVar5 == 0) {
      __s = (void *)*param_1;
      *(undefined4 *)((long)__s + (long)(int)uVar3 * 4) = 0;
    }
    else {
      lVar8 = *param_2;
      __s = (void *)*param_1;
      uVar2 = -param_3 & 0x1f;
      uVar6 = -uVar2;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar10 = *(uint *)(lVar8 + (long)(iVar5 + -1) * 4);
      puVar1 = (uint *)((long)__s + (long)(int)uVar3 * 4);
      puVar1[iVar5] = uVar10 >> (ulong)(-param_3 & 0x1f) & uVar6;
      uVar4 = *(uint *)(param_2 + 1);
      uVar10 = uVar10 << (ulong)(param_3 & 0x1f);
      if (1 < (int)uVar4) {
        lVar11 = (ulong)uVar4 + 1;
        uVar12 = uVar4 - 2;
        puVar13 = (uint *)((long)__s + ((long)(int)uVar3 + (long)(int)uVar4) * 4);
        do {
          puVar13 = puVar13 + -1;
          uVar4 = *(uint *)(lVar8 + (ulong)uVar12 * 4);
          uVar12 = uVar12 - 1;
          uVar7 = uVar4 >> (ulong)uVar2 & uVar6 | uVar10;
          lVar11 = lVar11 + -1;
          uVar10 = uVar4 << (ulong)(param_3 & 0x1f);
          *puVar13 = uVar7;
        } while (2 < lVar11);
      }
      *puVar1 = uVar10;
    }
    if (0x3e < param_3 + 0x1f) {
      memset(__s,0,-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2);
    }
    *(int *)(param_1 + 2) = (int)param_2[2];
    uVar9 = 1;
    *(uint *)(param_1 + 1) = uVar3 + 1 + (int)param_2[1];
  }
  return uVar9;
}


