/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031d8238; name: FUN_031d8238
 */


ulong FUN_031d8238(long param_1)

{
  int *piVar1;
  int iVar2;
  size_t sVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  
  uVar8 = *(uint *)(param_1 + 0x188);
  uVar4 = 0;
  if (*(int *)(param_1 + 0x178) != 0) {
    uVar4 = (long)*(int *)(param_1 + 0x178) << 4 | 8;
  }
  if (uVar8 != 0) {
    uVar4 = uVar4 + ((long)(int)uVar8 << 6 | 0x10U);
    if (0 < (int)uVar8) {
      if (uVar8 == 1) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        piVar6 = (int *)(*(long *)(param_1 + 0x180) + 0x60);
        do {
          piVar1 = piVar6 + -0xe;
          iVar2 = *piVar6;
          piVar6 = piVar6 + 0x1c;
          uVar5 = uVar5 + 2;
          uVar4 = uVar4 + (long)*piVar1 * 0x10 + (long)iVar2 * 0x10 + 0x20;
        } while (((ulong)uVar8 & 0xfffffffe) != uVar5);
      }
      if ((uVar8 & 1) != 0) {
        uVar4 = uVar4 + (long)*(int *)(*(long *)(param_1 + 0x180) + uVar5 * 0x38 + 0x28) * 0x10 +
                0x10;
      }
    }
  }
  uVar8 = (uint)*(undefined8 *)(param_1 + 0x60);
  if (((uVar8 >> 0xf & 1) != 0) && (*(long *)(param_1 + 0xe0) == 0)) {
    lVar10 = (long)*(int *)(param_1 + 0x198);
    uVar4 = uVar4 + lVar10 * 0x10 + 0x10;
    if (0 < *(int *)(param_1 + 0x198)) {
      puVar7 = (undefined8 *)(*(long *)(param_1 + 400) + 8);
      do {
        sVar3 = strlen((char *)*puVar7);
        uVar4 = ((sVar3 & 0xffffffff) + 8 & 0x1fffffff8) + uVar4;
        lVar10 = lVar10 + -1;
        puVar7 = puVar7 + 2;
      } while (lVar10 != 0);
    }
  }
  if ((uVar8 >> 0xe & 1) != 0) {
    uVar4 = ((long)*(int *)(param_1 + 0x1c8) << 4 | 8U) + uVar4;
  }
  if (((uVar8 >> 0x17 & 1) != 0) && (*(long *)(param_1 + 0x120) == 0)) {
    iVar2 = *(int *)(param_1 + 0x1d8);
    lVar10 = uVar4 + (long)iVar2 * 8 + 8;
    if (iVar2 != 0) {
      lVar9 = (long)iVar2 << 3;
      puVar7 = *(undefined8 **)(param_1 + 0x1d0);
      do {
        uVar4 = (**(code **)(*(long *)*puVar7 + 0x10))();
        lVar10 = lVar10 + (uVar4 & 0xffffffff);
        lVar9 = lVar9 + -8;
        puVar7 = puVar7 + 1;
      } while (lVar9 != 0);
    }
    uVar4 = lVar10 + 8;
  }
  return uVar4 & 0xffffffff;
}


