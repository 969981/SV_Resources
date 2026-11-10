/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f9d77c; name: FUN_01f9d77c
 */


void FUN_01f9d77c(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  iVar1 = *(int *)(param_1 + 0x27);
  *param_1 = &PTR_FUN_04568468;
  param_1[4] = &PTR_LAB_045685b0;
  param_1[5] = &DAT_045686d8;
  param_1[6] = &PTR_LAB_04568730;
  param_1[7] = &PTR_LAB_04568758;
  if (iVar1 != 0) {
    lVar5 = param_1[0x26];
    lVar4 = lVar5 + (long)iVar1 * 0x40;
    if ((*(ulong *)(lVar4 + -8) & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,*(ulong *)(lVar4 + -8) - 1,0);
    }
    if (lVar4 + -0x40 != lVar5) {
      if ((*(ulong *)(lVar4 + -0x48) & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,*(ulong *)(lVar4 + -0x48) - 1,0);
      }
      if (lVar4 + -0x80 != lVar5) {
        if ((*(ulong *)(lVar4 + -0x88) & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,*(ulong *)(lVar4 + -0x88) - 1,0);
        }
        if (lVar4 + -0xc0 != lVar5) {
          if ((*(ulong *)(lVar4 + -200) & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,*(ulong *)(lVar4 + -200) - 1,0);
          }
          puVar2 = PTR_DAT_047d1a08;
          if (lVar4 + -0x100 != lVar5) {
            lVar4 = (long)iVar1 << 6;
            do {
              uVar3 = *(ulong *)(lVar5 + -0x108 + lVar4);
              if ((uVar3 & 1) != 0) {
                (**(code **)(puVar2 + 8))(0,uVar3 - 1,0);
              }
              lVar4 = lVar4 + -0x40;
            } while (lVar4 != 0x100);
          }
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x27) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x13c)) && (param_1[0x26] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x26],(ulong)*(uint *)((long)param_1 + 0x13c) << 6);
  }
  param_1[0x26] = 0;
  *(undefined4 *)((long)param_1 + 0x13c) = 0x80000000;
  FUN_00e6bfa4(param_1);
  return;
}


