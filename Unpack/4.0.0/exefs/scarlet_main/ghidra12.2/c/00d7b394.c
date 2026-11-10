/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d7b394; name: FUN_00d7b394
 */


void FUN_00d7b394(ulong *param_1,long param_2,uint *param_3,ulong *param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined4 uVar12;
  
  uVar11 = *param_4;
  param_1[1] = (ulong)(uint)((float)*(int *)((long)param_4 + 4) * 3.0 + 1.5);
  *param_1 = (ulong)(uint)((float)(int)uVar11 * 3.0 + 1.5);
  param_1[2] = *param_4;
  *(uint *)(param_1 + 3) = (uint)param_1[3] | 9;
  puVar5 = PTR_DAT_047dca10;
  puVar4 = PTR_DAT_047dca08;
  lVar8 = *(long *)(param_2 + 0xa8);
  if ((lVar8 != 0) && (uVar1 = *param_3, 0 < (int)uVar1)) {
    uVar2 = param_3[1];
    uVar11 = 0;
    do {
      if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
        FUN_00100190(&LAB_02a7e49c,puVar5,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar4);
      }
      DAT_0483c008 = *(undefined8 *)puVar5;
      puVar7 = (undefined8 *)FUN_00d7b52c(*param_1);
      if (puVar7 != (undefined8 *)0x0) {
        puVar7[5] = 0;
        uVar9 = param_1[4];
        if (uVar9 == 0) {
          param_1[4] = (ulong)puVar7;
        }
        else {
          for (uVar3 = *(ulong *)(uVar9 + 0x28); uVar3 != 0; uVar3 = *(ulong *)(uVar3 + 0x28)) {
            uVar9 = uVar3;
          }
          *(undefined8 **)(uVar9 + 0x28) = puVar7;
        }
        puVar10 = (undefined8 *)(lVar8 + (long)(int)uVar2 * 0x18 + uVar11 * 0x18);
        uVar12 = *(undefined4 *)(puVar10 + 2);
        puVar7[1] = puVar7[1];
        *puVar7 = CONCAT44(uVar12,(int)*puVar7);
        *(undefined4 *)(puVar7 + 4) = *(undefined4 *)((long)puVar10 + 0x14);
        puVar7[2] = *puVar10;
        puVar7[3] = puVar10[1];
        *(byte *)((long)puVar7 + 0x25) = *(byte *)((long)puVar7 + 0x25) | 8;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar1);
  }
  return;
}


