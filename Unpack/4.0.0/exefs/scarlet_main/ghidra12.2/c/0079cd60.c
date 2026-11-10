/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0079cd60; name: FUN_0079cd60
 */


undefined8 FUN_0079cd60(long *param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined1 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_28;
  
  lVar4 = param_1[0x22e];
  (**(code **)(*(long *)param_1[0x24] + 0x48))((long *)param_1[0x24],param_2,lVar4);
  if (*(short *)((long)param_1 + 0x114e) != 0) {
    uVar5 = 0;
    do {
      uVar3 = FUN_007967e8(*(long *)(param_1[0x11] + uVar5 * 8) + 0x10,lVar4);
      if ((uVar3 & 1) != 0) {
        if (-1 < (short)uVar5) {
          lVar4 = *(long *)(param_1[0x11] + uVar5 * 8);
          if (*(char *)(lVar4 + 8) == '\x01') {
            *(undefined1 *)(lVar4 + 8) = 2;
            return 1;
          }
          return 0;
        }
        uVar1 = *(ushort *)((long)param_1 + 0x114e);
        break;
      }
      uVar1 = *(ushort *)((long)param_1 + 0x114e);
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
    if (uVar1 != 0) {
      uVar5 = 0;
      do {
        uVar3 = FUN_00796784(*(long *)(param_1[0x11] + uVar5 * 8) + 0x10);
        if ((uVar3 & 1) == 0) {
          uVar2 = (**(code **)(*param_1 + 0x128))(param_1,lVar4);
          lVar6 = uVar5 * 8;
          FUN_00796828(*(long *)(param_1[0x11] + lVar6) + 0x10,lVar4);
          *(undefined1 *)(*(long *)(param_1[0x11] + lVar6) + 9) = uVar2;
          if (param_1[0x230] != 0) {
            local_28 = 0;
            FUN_007935cc(&local_28);
            *(undefined8 *)(param_1[0x230] + lVar6) = local_28;
            local_28 = 0;
            FUN_007935cc(&local_28);
            *(undefined8 *)(param_1[0x231] + lVar6) = local_28;
          }
          return 1;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ushort *)((long)param_1 + 0x114e));
    }
  }
  return 0;
}


