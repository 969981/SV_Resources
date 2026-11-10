/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d5240; name: FUN_007d5240
 */


void FUN_007d5240(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 local_60;
  undefined8 local_58;
  
  puVar2 = PTR_DAT_047d0860;
  if (param_2 == (long *)0x0) {
    return;
  }
  lVar3 = FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
  plVar4 = (long *)FUN_007e2afc(lVar3,*(undefined1 *)(lVar3 + 0x120));
  lVar3 = FUN_01f7c4e8(*(undefined8 *)puVar2);
  plVar8 = *(long **)(lVar3 + 0x98);
  local_60 = 0x10000000000;
  local_58 = (long *)((ulong)local_58._4_4_ << 0x20);
  (**(code **)(*param_2 + 0x18))(param_2,&local_60);
  if (param_2 == plVar8) {
    lVar6 = FUN_01f7c4e8(*(undefined8 *)puVar2);
    for (lVar3 = *(long *)(lVar6 + 0x20); lVar3 != lVar6 + 0x18; lVar3 = *(long *)(lVar3 + 8)) {
      plVar7 = *(long **)(lVar3 + 0x10);
      if (plVar7 != param_2) {
        local_60 = 0x10000000000;
        local_58 = (long *)((ulong)local_58 & 0xffffffff00000000);
        (**(code **)(*plVar7 + 0x18))(plVar7,&local_60);
        FUN_007d5240(param_1,*(undefined8 *)(lVar3 + 0x10));
      }
    }
  }
  if (*(char *)((long)param_2 + 0x3a) != '\x03') {
    if (*(char *)((long)param_2 + 0x3a) == '\x02') {
      *(undefined1 *)((long)param_2 + 0x3a) = 3;
    }
    uVar5 = FUN_007d6714(param_1 + 0x868,param_2[6],(short)param_2[7]);
    if ((uVar5 & 1) == 0) {
      FUN_007d9788(param_1 + 0x868,param_2[6],(short)param_2[7]);
      if (*(code **)(param_1 + 0x778) != (code *)0x0) {
        local_60 = CONCAT44(local_60._4_4_,1);
        local_58 = param_2;
        (**(code **)(param_1 + 0x778))(&local_60);
      }
    }
  }
  if (plVar4 == param_2) {
    FUN_007ec51c(param_1,0);
  }
  if (param_2 == plVar8) {
    FUN_007ec4c8(param_1,0);
    *(undefined1 *)(param_1 + 0x780) = 0;
    lVar3 = *(long *)(param_1 + 0x130);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x130);
  }
  if (lVar3 != 0) {
    FUN_007de8c0(lVar3,param_2);
  }
  bVar1 = *(byte *)(param_2 + 5);
  if ((bVar1 != 0xfd) &&
     ((uint)bVar1 <= (uint)*(ushort *)(*(long *)puVar2 + 0x50) &&
      (uint)*(ushort *)(*(long *)puVar2 + 0x50) != (uint)bVar1)) {
    *(undefined1 *)(*(long *)(param_1 + 0x788) + (ulong)(uint)bVar1) = 0;
  }
  FUN_007e08dc(*(undefined8 *)PTR_DAT_047d11a0,param_2);
  plVar4 = (long *)FUN_01f7c4e8(*(undefined8 *)puVar2);
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  local_60 = 0x10000000000;
  local_58 = (long *)((ulong)local_58 & 0xffffffff00000000);
  FUN_007f72e0(*(undefined8 *)puVar2,&local_60);
  FUN_007d44f0(param_1);
  if (*(long *)(param_1 + 0x130) != 0) {
    FUN_007ddf88();
  }
  *(undefined1 *)(param_1 + 0x792) = 1;
  return;
}


