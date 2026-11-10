/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a1508; name: FUN_007a1508
 */


void FUN_007a1508(int *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 local_30 [2];
  
  FUN_007a0058(param_2,*(undefined8 *)(param_2 + 0x158));
  if (*param_1 == 0) {
    if ((*(int *)(param_2 + 0x1148) != 0) && (*(int *)(param_2 + 0x1118) != 1)) {
      FUN_0078cac8(param_2 + 0x1118);
      *(undefined4 *)(param_2 + 0x1148) = 0;
    }
    FUN_007ac0dc(local_30,*(undefined8 *)(param_2 + 0x158),param_2 + 0x1118);
    FUN_018ff39c(param_1,local_30);
    if (*param_1 == 0) {
      FUN_0078cd58(*(undefined8 *)(param_2 + 0x158),0);
      *(undefined4 *)(param_2 + 0x1148) = 8;
      *(undefined4 *)(param_2 + 100) = 0;
      if ((*(long *)(param_2 + 0x1180) != 0) && (*(short *)(param_2 + 0x114e) != 0)) {
        uVar2 = 0;
        do {
          uVar1 = FUN_00796784(*(long *)(*(long *)(param_2 + 0x88) + uVar2 * 8) + 0x10);
          if ((uVar1 & 1) != 0) {
            local_30[0] = 0;
            FUN_007935cc(local_30);
            *(undefined8 *)(*(long *)(param_2 + 0x1180) + uVar2 * 8) = local_30[0];
            local_30[0] = 0;
            FUN_007935cc(local_30);
            *(undefined8 *)(*(long *)(param_2 + 0x1188) + uVar2 * 8) = local_30[0];
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(ushort *)(param_2 + 0x114e));
      }
    }
  }
  return;
}


