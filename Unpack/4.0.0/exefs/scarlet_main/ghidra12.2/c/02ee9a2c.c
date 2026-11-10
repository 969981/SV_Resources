/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ee9a2c; name: FUN_02ee9a2c
 */


undefined8 FUN_02ee9a2c(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long local_40;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  
  local_30 = 0;
  local_28 = -0x8000000000000000;
  local_40 = 0;
  local_38 = -0x8000000000000000;
  iVar4 = *(int *)(param_1 + 0x40);
  iVar3 = *(int *)(param_1 + 0x50);
  lVar1 = 0;
  if (iVar4 != 0) {
    lVar1 = (long)iVar4 + param_1 + 0x40;
  }
  lVar6 = 0;
  if (iVar3 != 0) {
    lVar6 = (long)iVar3 + param_1 + 0x50;
  }
  iVar4 = *(int *)(param_1 + 0x58);
  lVar2 = 0;
  if (iVar4 != 0) {
    lVar2 = (long)iVar4 + param_1 + 0x58;
  }
  iVar4 = FUN_02eebcf4(lVar1,lVar1 + (long)*(int *)(param_1 + 0x44) * 0xc,lVar6,
                       lVar6 + (long)*(int *)(param_1 + 0x54) * 4,lVar2,
                       lVar2 + *(int *)(param_1 + 0x5c),&local_30,&local_40);
  lVar1 = local_38;
  if (iVar4 < 0) {
    uVar5 = *(ushort *)(param_1 + 0x1a) & 0xf7ff;
    uVar8 = 0x80040200;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  else {
    if (0 < (int)local_38) {
      lVar6 = 0;
      do {
        *(undefined4 *)(param_1 + 0x68 + lVar6 * 4 + (long)*(int *)(param_1 + 0x68)) =
             *(undefined4 *)(local_40 + lVar6 * 4);
        lVar6 = lVar6 + 1;
      } while (lVar6 < (int)local_38);
    }
    if (0 < (int)local_28) {
      lVar6 = 0;
      do {
        *(undefined4 *)(param_1 + 0x60 + lVar6 * 4 + (long)*(int *)(param_1 + 0x60)) =
             *(undefined4 *)(local_30 + lVar6 * 4);
        lVar6 = lVar6 + 1;
      } while (lVar6 < (int)local_28);
    }
    uVar5 = *(ushort *)(param_1 + 0x1a) | 0x800;
    uVar8 = 0;
  }
  *(ushort *)(param_1 + 0x1a) = uVar5;
  uVar7 = (ulong)local_38._4_4_;
  local_38 = (ulong)local_38._4_4_ << 0x20;
  if ((-1 < lVar1) && (local_40 != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_40,uVar7 << 2);
  }
  lVar1 = local_28;
  uVar7 = (ulong)local_28._4_4_;
  local_28 = (ulong)local_28._4_4_ << 0x20;
  if ((-1 < lVar1) && (local_30 != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_30,uVar7 << 2);
  }
  return uVar8;
}


