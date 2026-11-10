/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ffcc04; name: FUN_02ffcc04
 */


void FUN_02ffcc04(long param_1,long *param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 local_740;
  undefined8 uStack_738;
  undefined *local_730;
  byte local_728;
  undefined4 local_724;
  undefined8 local_720;
  undefined1 local_718;
  undefined1 *local_710;
  undefined4 local_708;
  uint local_704;
  undefined1 auStack_6f0 [1280];
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined2 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1b8;
  float local_1b0;
  undefined8 local_1a8;
  undefined *local_1a0;
  undefined1 local_198;
  undefined4 local_194;
  undefined8 local_190;
  undefined1 local_188;
  undefined1 *local_180;
  undefined8 local_178;
  undefined1 auStack_170 [256];
  long *local_70;
  undefined8 local_68;
  undefined1 local_60;
  
  uVar8 = (ulong)*(uint *)(param_1 + 0x20);
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    do {
      uVar10 = uVar8 - 1;
      iVar5 = (**(code **)(**(long **)(param_1 + 0x48) + 0x78))
                        (*(long **)(param_1 + 0x48),
                         *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar10 * 0x40 + 0x28));
      if (iVar5 == 0) {
        lVar7 = *(long *)(param_1 + 0x18);
        if (0 < (int)*(uint *)(param_1 + 0x100)) {
          uVar3 = (ulong)*(uint *)(param_1 + 0x100);
          do {
            plVar6 = *(long **)(*(long *)(param_1 + 0xf8) + (uVar3 - 1) * 8);
            (**(code **)(*plVar6 + 0x30))(plVar6,param_1,lVar7 + uVar10 * 0x40);
            bVar1 = 1 < (long)uVar3;
            uVar3 = uVar3 - 1;
          } while (bVar1);
          lVar7 = *(long *)(param_1 + 0x18);
        }
        iVar5 = *(int *)(param_1 + 0x20);
        lVar9 = (long)iVar5 + -1;
        *(int *)(param_1 + 0x20) = (int)lVar9;
        if (iVar5 != (int)uVar8) {
          memcpy((void *)(lVar7 + uVar10 * 0x40),(void *)(lVar7 + lVar9 * 0x40),0x38);
        }
      }
      bVar1 = 1 < (long)uVar8;
      uVar8 = uVar10;
    } while (bVar1);
  }
  local_68 = (**(code **)(**(long **)(param_1 + 0x48) + 0x30))();
  puVar4 = PTR_DAT_047e49d8;
  local_194 = 0;
  local_190 = 0x5f7ffff05f7ffff0;
  local_188 = 0;
  local_60 = 0;
  local_1a0 = PTR_DAT_047e49d8 + 0x10;
  local_178 = -0x7ffffffc00000000;
  local_180 = auStack_170;
  local_198 = (undefined1)param_2[1];
  local_70 = param_2;
  (**(code **)(*param_2 + 0x18))(param_2);
  local_1b0 = *(float *)(param_1 + 0x140) + *(float *)(param_1 + 0x144);
  local_1b8 = *(undefined8 *)(param_1 + 0x28);
  local_1e0 = 0xffff;
  local_1dc = 0;
  local_1d8 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1d0 = 0xfb0001;
  local_1a8 = 0;
  local_1e8 = (**(code **)(**(long **)(param_1 + 0x48) + 0x18))();
  local_1f0 = (**(code **)(**(long **)(param_1 + 0x48) + 0x20))();
  local_1dc = *(undefined4 *)(param_1 + 0x40);
  if (*(long *)(param_1 + 0x38) == -1) {
    local_1a8 = 0;
  }
  else {
    local_1a8 = (**(code **)(**(long **)(param_1 + 0x48) + 0x80))();
  }
  local_1d0 = CONCAT31(local_1d0._1_3_,*(undefined1 *)(param_1 + 0x11c));
  (**(code **)(**(long **)(param_1 + 0x48) + 0x1f8))
            (*(long **)(param_1 + 0x48),&local_1f0,param_1 + 0x60,&local_1a0);
  local_728 = 0;
  local_724 = 0;
  local_710 = auStack_6f0;
  local_720 = 0x5f7ffff05f7ffff0;
  puVar2 = PTR_DAT_047ddb00 + 0x10;
  local_718 = 0;
  local_708 = 0;
  local_704 = 0x8000000a;
  local_730 = puVar2;
  FUN_00c7a7ac(&local_730);
  local_728 = local_728 | 0x40;
  local_740 = 0;
  uStack_738 = 0;
  FUN_02ffcefc(param_1,param_2,&local_730,&local_740);
  local_730 = puVar2;
  FUN_00c7a7ac(&local_730);
  local_708 = 0;
  if ((-1 < (int)local_704) && (local_710 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,local_710,(ulong)local_704 << 7);
  }
  lVar7 = local_178;
  local_1a0 = puVar4 + 0x10;
  uVar8 = (ulong)local_178._4_4_;
  local_178 = (ulong)local_178._4_4_ << 0x20;
  if ((-1 < lVar7) && (local_180 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_180,uVar8 << 6);
  }
  return;
}


