/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e2bb4; name: FUN_007e2bb4
 */


long FUN_007e2bb4(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  uint *puVar6;
  long lVar7;
  int local_38 [4];
  long local_28;
  undefined4 local_20 [4];
  
  puVar6 = *(uint **)(param_1 + 0xf0);
  local_28 = param_2;
  if (*(code **)(puVar6 + 0x10) == (code *)0x0) {
    uVar3 = (uint)param_2;
    uVar5 = (uint)((ulong)param_2 >> 0x20);
    uVar3 = (uVar3 >> 8 & 0xff) + (uVar3 & 0xff) + ((uint)((ulong)param_2 >> 0x10) & 0xff) +
            (uVar3 >> 0x18) + (uVar5 & 0xff) + (uVar5 >> 8 & 0xff) +
            ((ushort)((ulong)param_2 >> 0x30) & 0xff) + (uint)(byte)((ulong)param_2 >> 0x38);
    uVar5 = *puVar6;
    uVar1 = 0;
    if (uVar5 != 0) {
      uVar1 = uVar3 / uVar5;
    }
    uVar2 = (ulong)(uVar3 - uVar1 * uVar5);
  }
  else {
    uVar2 = (**(code **)(puVar6 + 0x10))(&local_28,*puVar6);
  }
  plVar4 = *(long **)(*(long *)(puVar6 + 2) + (uVar2 & 0xffffffff) * 0x18);
  do {
    if (plVar4 == (long *)0x0) {
      local_20[0] = 0x2c0a;
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_20 | 4),(Result *)local_38);
      FUN_00cbd7c0(local_38,local_20);
      lVar7 = 0;
LAB_007e2ca0:
      if (local_38[0] != 0) {
        lVar7 = 0;
      }
      return lVar7;
    }
    if (*plVar4 == local_28) {
      lVar7 = plVar4[1];
      local_20[0] = 0;
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_20 | 4),(Result *)local_38);
      FUN_00cbd7c0(local_38,local_20);
      goto LAB_007e2ca0;
    }
    plVar4 = (long *)plVar4[6];
  } while( true );
}


