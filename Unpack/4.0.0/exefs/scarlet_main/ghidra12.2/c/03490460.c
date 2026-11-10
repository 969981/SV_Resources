/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03490460; name: FUN_03490460
 */


void FUN_03490460(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  
  *param_1 = (long)&PTR_FUN_047c30c8;
  puVar2 = PTR_DAT_047e6fd8;
  uVar3 = (ulong)*(uint *)(param_1 + 6);
  if (*(uint *)(param_1 + 6) != 0) {
    uVar4 = 0;
    do {
      uVar7 = 1L << (uVar4 & 0x3f);
      if ((uVar7 & uVar3) != 0) {
        FUN_034b6c14(*(undefined8 *)puVar2,param_1,uVar4);
        uVar1 = *(uint *)(param_1 + 6) & ((uint)uVar7 ^ 0xffffffff);
        uVar3 = (ulong)uVar1;
        *(uint *)(param_1 + 6) = uVar1;
      }
      uVar4 = (ulong)((int)uVar4 + 1);
    } while ((int)uVar3 != 0);
  }
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xff;
  local_50 = 0xff;
  local_48 = 0;
  FUN_03490f40(param_1 + 7,FUN_0348b400,&local_70,&local_70,0);
  if (*(long *)(*(long *)PTR_DAT_047e7048 + 0x18) != 0) {
    FUN_03497ca8();
  }
  puVar5 = (undefined8 *)param_1[10];
  if (*(uint *)(param_1 + 0xb) != 0) {
    lVar6 = (ulong)*(uint *)(param_1 + 0xb) * 0x30;
    do {
      FUN_034916b4(puVar5);
      puVar5 = puVar5 + 6;
      lVar6 = lVar6 + -0x30;
    } while (lVar6 != 0);
    puVar5 = (undefined8 *)param_1[10];
  }
  puVar2 = PTR_DAT_047e2fd0;
  if (puVar5 != (undefined8 *)0x0) {
    if (*(uint *)(param_1 + 0xb) != 0) {
      lVar6 = (ulong)*(uint *)(param_1 + 0xb) * 0x30;
      do {
        (**(code **)*puVar5)(puVar5);
        lVar6 = lVar6 + -0x30;
        puVar5 = puVar5 + 6;
      } while (lVar6 != 0);
      puVar5 = (undefined8 *)param_1[10];
    }
    *(undefined4 *)(param_1 + 0xb) = 0;
    (**(code **)(puVar2 + 0x30))(0,puVar5);
    param_1[10] = 0;
    *(undefined4 *)((long)param_1 + 0x5c) = 0;
  }
  if (param_1[0xc] != 0) {
    *(undefined4 *)(param_1 + 0xd) = 0;
    (**(code **)(puVar2 + 0x30))(0);
    param_1[0xc] = 0;
    *(undefined4 *)((long)param_1 + 0x6c) = 0;
  }
  param_1[7] = (long)&PTR_LAB_047c3268;
  if (param_1[5] != 0) {
    (**(code **)(puVar2 + 0x30))(0);
  }
  param_1[5] = 0;
  if (param_1[4] != 0) {
    (**(code **)(puVar2 + 0x30))(0);
  }
  puVar2 = PTR_DAT_047e70a0;
  param_1[4] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  return;
}


