/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034c3d70; name: FUN_034c3d70
 */


undefined8 FUN_034c3d70(long param_1,undefined8 *param_2,ushort param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_50;
  ushort local_4c [2];
  undefined2 local_48 [2];
  undefined2 local_44 [2];
  undefined4 local_40;
  undefined4 local_3c;
  ushort local_38 [2];
  undefined1 auStack_34 [4];
  
  local_38[0] = 0;
  uVar2 = (**(code **)*param_2)(param_2,local_38,2,auStack_34);
  if ((uVar2 & 1) == 0) {
    return 2;
  }
  if (local_38[0] != param_3) {
    return 2;
  }
  local_3c = 0;
  local_40 = 0;
  local_44[0] = 0;
  local_48[0] = 0;
  local_4c[0] = 0;
  local_50 = 0;
  uVar2 = (**(code **)*param_2)(param_2,&local_3c,4,auStack_34);
  if (((uVar2 & 1) != 0) &&
     (uVar2 = (**(code **)*param_2)(param_2,&local_40,4,auStack_34), (uVar2 & 1) != 0)) {
    uVar2 = (**(code **)*param_2)(param_2,local_44,2,auStack_34);
    if ((uVar2 & 1) == 0) {
      return 2;
    }
    uVar2 = (**(code **)*param_2)(param_2,local_48,2,auStack_34);
    if ((uVar2 & 1) == 0) {
      return 2;
    }
    uVar2 = (**(code **)*param_2)(param_2,local_4c,2,auStack_34);
    if ((uVar2 & 1) == 0) {
      return 2;
    }
    uVar1 = param_3 + 7 >> 3;
    uVar2 = (**(code **)*param_2)(param_2,*(undefined8 *)(param_1 + 0x28),uVar1,&local_50);
    if (((uVar2 & 1) != 0) &&
       (uVar2 = (**(code **)*param_2)(param_2,*(undefined8 *)(param_1 + 0x30),uVar1,&local_50),
       (uVar2 & 1) != 0)) {
      *(undefined4 *)(param_1 + 8) = local_3c;
      *(undefined4 *)(param_1 + 0xc) = local_40;
      *(undefined2 *)(param_1 + 0x10) = local_44[0];
      *(undefined2 *)(param_1 + 0x12) = local_48[0];
      if (local_4c[0] != 0) {
        uVar1 = *(uint *)(param_1 + 0x20);
        uVar4 = (uint)local_4c[0];
        uVar5 = (uint)local_4c[0];
        if ((uVar1 < local_4c[0] || uVar1 == uVar4) && (*(uint *)(param_1 + 0x24) < uVar4)) {
          uVar1 = *(uint *)(param_1 + 0x24) + (uVar5 - uVar1);
          lVar3 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))
                            (0,*(undefined8 *)(param_1 + 0x18),(ulong)uVar1 << 1);
          if (lVar3 == 0) {
            return 2;
          }
          *(long *)(param_1 + 0x18) = lVar3;
          *(uint *)(param_1 + 0x24) = uVar1;
          uVar4 = (uint)local_4c[0];
        }
        *(uint *)(param_1 + 0x20) = uVar5;
        uVar2 = (**(code **)*param_2)(param_2,*(undefined8 *)(param_1 + 0x18),uVar4 << 1,&local_50);
        if ((uVar2 & 1) == 0) {
          return 2;
        }
      }
      return 1;
    }
  }
  return 2;
}


