/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029fed74; name: FUN_029fed74
 */


void FUN_029fed74(byte *param_1,byte param_2,long *param_3,long param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_48;
  undefined3 uStack_44;
  
  *param_1 = param_2 & 1;
  *(uint *)(param_1 + 4) = (uint)*(byte *)((long)param_3 + 0x1c);
  *(uint *)(param_1 + 8) = (uint)*(byte *)((long)param_3 + 0x1d);
  *(int *)(param_1 + 0xc) = (int)param_3[2];
  iVar7 = *(int *)((long)param_3 + 0x14);
  *(int *)(param_1 + 0x10) = iVar7;
  if (iVar7 != -1) {
    *(int *)(param_1 + 0x14) = (int)param_3[3];
  }
  if ((0 < (int)param_3[1]) && (lVar9 = *(long *)(param_4 + 0x130), lVar9 != 0)) {
    if (((int)param_3[1] <= (int)(*(uint *)(param_1 + 0x24) & 0x7fffffff)) ||
       (FUN_029ff920(param_1 + 0x18), 0 < (int)param_3[1])) {
      lVar10 = 0;
      do {
        uVar2 = *(uint *)(*param_3 + lVar10 * 4);
        uVar3 = uVar2 >> 0x16;
        local_70 = 0;
        uStack_68 = 0;
        FUN_029ffacc(lVar9,*(undefined4 *)(*param_3 + lVar10 * 4),&local_70);
        uVar5 = local_70;
        auVar4._8_8_ = uStack_68;
        auVar4._0_8_ = local_70;
        auVar11._8_8_ = uStack_68;
        auVar11._0_8_ = local_70;
        auVar11 = NEON_ext(auVar11,auVar4,8,1);
        bVar6 = false;
        if ((int)uVar3 < *(int *)(lVar9 + 0x40)) {
          bVar6 = *(long *)(*(long *)(lVar9 + 0x38) + (ulong)uVar3 * 0x100) != 0;
        }
        iVar7 = *(int *)(param_1 + 0x20);
        lVar8 = (long)iVar7;
        if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) <= iVar7) {
          FUN_029ff920(param_1 + 0x18,lVar8 + 1);
          iVar7 = *(int *)(param_1 + 0x20);
        }
        puVar1 = (uint *)(*(long *)(param_1 + 0x18) + (long)iVar7 * 0x20);
        *puVar1 = uVar3;
        puVar1[1] = uVar2 & 0x3fffff;
        *(bool *)(puVar1 + 2) = bVar6;
        puVar1[3] = CONCAT31(uStack_44,local_48._3_1_);
        *(undefined4 *)((long)puVar1 + 9) = local_48;
        *(ulong *)(puVar1 + 6) = (ulong)auVar11._0_4_;
        *(undefined8 *)(puVar1 + 4) = uVar5;
        *(int *)(param_1 + 0x20) = (int)(lVar8 + 1);
        lVar10 = lVar10 + 1;
      } while (lVar10 < (int)param_3[1]);
    }
  }
  return;
}


