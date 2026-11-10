/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a50734; name: FUN_00a50734
 */


undefined8 FUN_00a50734(long param_1,int param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  param_1 = param_1 + (long)param_2 * 0x18;
  puVar4 = (undefined8 *)(param_1 + 0x2c);
  local_48 = *puVar4;
  uStack_38 = *(undefined8 *)(param_1 + 0x3c);
  if ((param_3 & 0xff) < 0x20) {
    local_40._4_4_ = (uint)((ulong)*(undefined8 *)(param_1 + 0x34) >> 0x20);
    uVar2 = 1 << (ulong)(param_3 & 0x1f);
    if ((local_40._4_4_ & uVar2) != 0) {
      uVar1 = 0;
      if (((ushort)local_48 & 0xfffe) != 0x298 && (ushort)local_48 != 0x2e8) {
        uVar1 = param_3;
      }
      local_40 = *(undefined8 *)(param_1 + 0x34);
      uVar3 = FUN_00a65d24(&local_48,param_4,uVar1);
      if ((uVar3 & 1) == 0) {
        return 0;
      }
    }
    uStack_38 = *(undefined8 *)(param_1 + 0x3c);
    local_48 = *puVar4;
    local_40 = *(undefined8 *)(param_1 + 0x34);
    if (((uint)uStack_38 & uVar2) != 0) {
      uVar1 = 0;
      if (((ushort)local_48 & 0xfffe) != 0x298 && (ushort)local_48 != 0x2e8) {
        uVar1 = param_3;
      }
      uVar3 = FUN_00a65d24(&local_48,param_4,uVar1);
      if ((uVar3 & 1) == 0) {
        return 0;
      }
    }
    local_48 = *puVar4;
    local_40 = *(undefined8 *)(param_1 + 0x34);
    uStack_38 = *(undefined8 *)(param_1 + 0x3c);
    if (((uint)((ulong)uStack_38 >> 0x20) & uVar2) != 0) {
      uVar2 = 0;
      if (((ushort)local_48 & 0xfffe) != 0x298 && (ushort)local_48 != 0x2e8) {
        uVar2 = param_3;
      }
      uVar3 = FUN_00a65d24(&local_48,param_4,uVar2);
      if ((uVar3 & 1) == 0) {
        return 0;
      }
    }
  }
  return 1;
}


