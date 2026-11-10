/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007df9c0; name: FUN_007df9c0
 */


void FUN_007df9c0(undefined8 param_1,ushort *param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  uint uVar7;
  long lVar8;
  int local_60 [4];
  undefined8 local_50;
  int local_48 [4];
  undefined4 local_38 [2];
  
  piVar6 = local_60;
  uVar4 = FUN_007de240(param_3 + 8);
  bVar2 = FUN_007e10ac(param_2,uVar4);
  if (bVar2 == 0xff) {
    local_48[0] = 0x10408;
    local_60[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_60);
    piVar6 = local_48;
    goto LAB_007dfb60;
  }
  local_50 = FUN_007de240(param_3 + 8);
  if (*(code **)(param_2 + 0x34) == (code *)0x0) {
    uVar3 = (uint)local_50;
    uVar7 = (uint)((ulong)local_50 >> 0x20);
    uVar3 = (uVar3 >> 8 & 0xff) + (uVar3 & 0xff) + ((uint)((ulong)local_50 >> 0x10) & 0xff) +
            (uVar3 >> 0x18) + (uVar7 & 0xff) + (uVar7 >> 8 & 0xff) +
            ((ushort)((ulong)local_50 >> 0x30) & 0xff) + (uint)(byte)((ulong)local_50 >> 0x38);
    uVar7 = *(uint *)(param_2 + 0x14);
    uVar1 = 0;
    if (uVar7 != 0) {
      uVar1 = uVar3 / uVar7;
    }
    uVar5 = (ulong)(uVar3 - uVar1 * uVar7);
  }
  else {
    uVar5 = (**(code **)(param_2 + 0x34))(&local_50,*(undefined4 *)(param_2 + 0x14));
  }
  FUN_007e175c(local_48,*(long *)(param_2 + 0x18) + (uVar5 & 0xffffffff) * 0x18,&local_50);
  if (local_48[0] != 0) {
    piVar6 = local_48;
    goto LAB_007dfb60;
  }
  if ((ushort)bVar2 < *param_2) {
    lVar8 = *(long *)(param_2 + 4) + (ulong)bVar2 * 0x20;
    if (*(char *)(param_3 + 0x28) == -3) goto LAB_007dfb18;
LAB_007dfaf0:
    uVar5 = FUN_0078fa50(param_2 + 8,*(int *)(param_2 + 0x12) + lVar8);
    if ((uVar5 & 1) != 0) {
      FUN_0078fa2c(param_2 + 8,*(int *)(param_2 + 0x12) + lVar8);
      goto LAB_007dfb18;
    }
    local_60[0] = 0x10408;
  }
  else {
    lVar8 = 0;
    if (*(char *)(param_3 + 0x28) != -3) goto LAB_007dfaf0;
LAB_007dfb18:
    param_2[1] = param_2[1] - 1;
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(undefined4 *)(lVar8 + 0x18) = 0;
    *(undefined1 *)(lVar8 + 0x1c) = 0xff;
    local_60[0] = 0;
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_38);
LAB_007dfb60:
  FUN_00cbd7c0(param_1,piVar6);
  return;
}


