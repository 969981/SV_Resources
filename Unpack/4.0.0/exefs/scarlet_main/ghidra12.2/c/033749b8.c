/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033749b8; name: FUN_033749b8
 */


void FUN_033749b8(long *param_1,undefined4 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined4 local_24;
  
  local_24 = param_2;
  lVar4 = FUN_03375eb8(param_1,&local_24);
  if (lVar4 == 0) {
    lVar4 = -0x100000000;
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = *(uint *)(lVar4 + 4);
    lVar4 = (lVar4 - param_1[2]) * 0x20000000;
  }
  uVar5 = uVar5 | (uint)lVar4;
  if (-1 < (int)uVar5) {
    lVar6 = *param_1 + (long)(int)uVar5 * 0x18;
    iVar2 = *(int *)(lVar6 + 0x10);
    if (iVar2 != 0) {
      puVar9 = *(undefined8 **)(lVar6 + 8);
      uVar10 = (long)iVar2 * 8 - 8;
      uVar1 = ((uint)(uVar10 >> 3) & 0x1fffffff) + 1;
      if ((uVar1 & 3) == 0) {
        puVar8 = puVar9;
      }
      else {
        lVar6 = -((ulong)uVar1 & 3);
        puVar7 = puVar9;
        do {
          puVar8 = puVar7 + 1;
          bVar3 = lVar6 != -1;
          lVar6 = lVar6 + 1;
          *(undefined8 *)*puVar7 = param_3;
          puVar7 = puVar8;
        } while (bVar3);
      }
      if (0x17 < uVar10) {
        do {
          *(undefined8 *)*puVar8 = param_3;
          *(undefined8 *)puVar8[1] = param_3;
          *(undefined8 *)puVar8[2] = param_3;
          puVar7 = puVar8 + 3;
          puVar8 = puVar8 + 4;
          *(undefined8 *)*puVar7 = param_3;
        } while (puVar8 != puVar9 + iVar2);
      }
    }
    if ((*(uint *)(param_1 + 3) < (uint)((ulong)lVar4 >> 0x20)) ||
       (lVar4 = param_1[2] + (lVar4 >> 0x20) * 8, *(uint *)(lVar4 + 4) != uVar5)) {
      lVar4 = FUN_03375eb8(param_1,*param_1 + (long)(int)uVar5 * 0x18);
    }
    FUN_03375f2c(param_1,lVar4);
  }
  return;
}


