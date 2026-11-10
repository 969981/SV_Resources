/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034d9b10; name: FUN_034d9b10
 */


undefined8 FUN_034d9b10(undefined8 *param_1,long param_2,int param_3)

{
  uint uVar1;
  short sVar2;
  long lVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int local_40 [2];
  undefined4 local_38;
  
  uVar4 = *(uint *)(param_1 + 6);
  uVar1 = *(int *)((long)param_1 + 0x2c) + param_3;
  param_1[3] = param_2 + (ulong)uVar4;
  *(uint *)(param_1 + 4) = param_3 - uVar4;
  *(uint *)(param_1 + 5) = uVar4 + *(int *)((long)param_1 + 0x2c);
  *(uint *)((long)param_1 + 0x2c) = uVar1;
  bVar5 = *(byte *)((long)param_1 + 0x42);
  lVar3 = 0x34;
  if (*(short *)(param_1 + 8) != 1) {
    lVar3 = 0x3c;
  }
  if (uVar1 < *(uint *)((long)param_1 + lVar3)) {
    if ((bVar5 & 0xf8) != 0x10) {
      *(undefined4 *)(param_1 + 6) = 0;
LAB_034d9ca0:
      if ((bVar5 & 0xc0) == 0x40) {
        *(byte *)((long)param_1 + 0x42) = bVar5 & 0x3f | 0x80;
      }
      return 1;
    }
    iVar6 = (**(code **)(*(long *)*param_1 + 0x80))((long *)*param_1,uVar1,0,local_40);
    if (iVar6 != 1) {
      return 2;
    }
    *(int *)((long)param_1 + 0x2c) = local_40[0];
    *(uint *)(param_1 + 6) = uVar1 - local_40[0];
  }
  else {
    *(uint *)(param_1 + 4) = ((param_3 - uVar4) - uVar1) + *(uint *)((long)param_1 + lVar3);
    if (*(short *)(param_1 + 8) == 1) {
      *(byte *)((long)param_1 + 0x42) = bVar5 | 1;
    }
    else {
      iVar6 = *(int *)(param_1 + 7);
      iVar7 = (**(code **)(*(long *)*param_1 + 0x80))((long *)*param_1,iVar6,0,local_40);
      if (iVar7 != 1) {
        return 2;
      }
      *(int *)((long)param_1 + 0x2c) = local_40[0];
      *(int *)(param_1 + 6) = iVar6 - local_40[0];
      sVar2 = 0;
      if (*(short *)(param_1 + 8) != 0) {
        sVar2 = *(short *)(param_1 + 8) + -1;
      }
      *(short *)(param_1 + 8) = sVar2;
      *(byte *)((long)param_1 + 0x42) = *(byte *)((long)param_1 + 0x42) | 4;
      if (sVar2 == 1) {
        (**(code **)(*(long *)*param_1 + 0x28))((long *)*param_1,local_40);
        local_38 = 0;
        (**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,local_40);
      }
    }
    if ((bVar5 & 0xf8) != 0x10) {
      bVar5 = *(byte *)((long)param_1 + 0x42);
      goto LAB_034d9ca0;
    }
  }
  uVar8 = (**(code **)(*(long *)*param_1 + 0x68))();
  if ((int)uVar8 == 1) {
    *(byte *)((long)param_1 + 0x42) = *(byte *)((long)param_1 + 0x42) & 0x3f | 0x40;
    return uVar8;
  }
  return 2;
}


