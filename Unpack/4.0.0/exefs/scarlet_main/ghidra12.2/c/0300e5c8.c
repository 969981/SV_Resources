/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0300e5c8; name: FUN_0300e5c8
 */


void FUN_0300e5c8(long *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long local_70;
  undefined8 local_68;
  
  puVar1 = PTR_PTR_047d1a50;
  lVar7 = *(long *)(param_1[1] + (param_2 & 0xffffff) * 0x10);
  if (*(char *)(lVar7 + 0x1688) == '\0') {
    FUN_03008668(lVar7,0);
  }
  else if (0 < *(int *)(lVar7 + 0x15d4)) {
    local_70 = 0;
    local_68._0_4_ = 0;
    local_68._4_4_ = 0x80000000;
    FUN_0133bb88(&local_70,PTR_PTR_047d1a50);
    puVar2 = PTR_PTR_047d1a50;
    iVar4 = *(int *)(lVar7 + 0x15d8);
    if (0 < iVar4) {
      lVar8 = 0;
      iVar9 = 0;
      do {
        if ((*(char *)(lVar7 + 0x1688) == '\0') ||
           (*(char *)(*(long *)(lVar7 + 0x1690) + lVar8) != '\0')) {
          lVar5 = (long)(int)local_68;
          if ((int)(local_68._4_4_ & 0x7fffffff) <= (int)local_68) {
            FUN_0133bb88(&local_70,puVar2,lVar5 + 1);
          }
          *(int *)(local_70 + (long)(int)local_68 * 4) = (int)lVar8;
          local_68._0_4_ = (int)(lVar5 + 1);
          iVar9 = iVar9 + 1;
          if (iVar9 == *(int *)(lVar7 + 0x15d4)) break;
          iVar4 = *(int *)(lVar7 + 0x15d8);
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < iVar4);
    }
    FUN_03008f04(lVar7,local_70,local_70 + (long)(int)local_68 * 4);
    uVar3 = local_68._4_4_;
    uVar6 = (ulong)local_68._4_4_;
    local_68 = (ulong)local_68._4_4_ << 0x20;
    if ((-1 < (int)uVar3) && (local_70 != 0)) {
      (**(code **)(*(long *)puVar1 + 0x20))(puVar1,local_70,uVar6 << 2);
    }
  }
  (**(code **)(*(long *)*param_1 + 200))((long *)*param_1,*(undefined8 *)(lVar7 + 0x140),0,0);
  FUN_02f3bb18(*param_1 + 0x7a8,*param_1,param_2 & 0xffffffff);
  return;
}


