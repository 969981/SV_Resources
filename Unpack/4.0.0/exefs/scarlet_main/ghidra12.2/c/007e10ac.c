/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e10ac; name: FUN_007e10ac
 */


undefined4 FUN_007e10ac(ulong param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  undefined4 uVar6;
  int local_38 [4];
  long local_28;
  undefined4 local_20 [4];
  
  local_28 = param_2;
  if (*(code **)(param_1 + 0x68) == (code *)0x0) {
    uVar3 = (uint)param_2;
    uVar5 = (uint)((ulong)param_2 >> 0x20);
    uVar3 = (uVar3 >> 8 & 0xff) + (uVar3 & 0xff) + ((uint)((ulong)param_2 >> 0x10) & 0xff) +
            (uVar3 >> 0x18) + (uVar5 & 0xff) + (uVar5 >> 8 & 0xff) +
            ((ushort)((ulong)param_2 >> 0x30) & 0xff) + (uint)(byte)((ulong)param_2 >> 0x38);
    uVar5 = *(uint *)(param_1 + 0x28);
    uVar1 = 0;
    if (uVar5 != 0) {
      uVar1 = uVar3 / uVar5;
    }
    uVar2 = (ulong)(uVar3 - uVar1 * uVar5);
  }
  else {
    uVar2 = (**(code **)(param_1 + 0x68))(&local_28,*(undefined4 *)(param_1 + 0x28));
  }
  plVar4 = *(long **)(*(long *)(param_1 + 0x30) + (uVar2 & 0xffffffff) * 0x18);
  do {
    if (plVar4 == (long *)0x0) {
      local_20[0] = 0x2c0a;
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_20 | 4),(Result *)local_38);
      FUN_00cbd7c0(local_38,local_20);
LAB_007e1194:
      uVar6 = (undefined4)param_1;
      if (local_38[0] != 0) {
        uVar6 = 0xffffffff;
      }
      return uVar6;
    }
    if (*plVar4 == local_28) {
      param_1 = (ulong)*(byte *)(plVar4 + 1);
      local_20[0] = 0;
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_20 | 4),(Result *)local_38);
      FUN_00cbd7c0(local_38,local_20);
      goto LAB_007e1194;
    }
    plVar4 = (long *)plVar4[6];
  } while( true );
}


