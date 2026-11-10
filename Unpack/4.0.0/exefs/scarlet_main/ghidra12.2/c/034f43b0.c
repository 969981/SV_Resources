/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034f43b0; name: FUN_034f43b0
 */


void FUN_034f43b0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,uint param_7,long *param_8)

{
  undefined2 uVar1;
  undefined1 *puVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_80 [8];
  undefined1 *local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  local_78 = (undefined1 *)0x0;
  local_70 = 0x2b00000000;
  local_68 = 0;
  uVar4 = *(uint *)(param_8 + 0xc);
  uVar5 = (param_7 & 0xffff) * (uVar4 & 0xff) * 4;
  uVar1 = (undefined2)param_7;
  if (uVar5 < 0x7ff1) {
    puVar2 = auStack_80 + -((ulong)(uVar5 + 0x1f) & 0xffffff0);
  }
  else {
    puVar2 = (undefined1 *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))(5,uVar5 + 0x10,0x10);
    if (puVar2 == (undefined1 *)0x0) {
      FUN_034f5860(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      bVar3 = 0;
      goto LAB_034f4500;
    }
    uVar4 = *(uint *)(param_8 + 0xc);
  }
  local_68 = CONCAT22(uVar1,uVar1);
  local_70 = CONCAT44(local_70._4_4_,uVar4);
  local_78 = puVar2;
  if ((*param_8 == 0) || (param_8[2] == 0)) {
    if ((param_8[4] != 0) && (param_8[6] != 0)) {
      FUN_034fc2c0(param_2,&local_78,param_8 + 10);
    }
  }
  else {
    FUN_034fbb30(param_2,&local_78,param_8 + 8,param_8);
    if ((param_8[4] != 0) && (param_8[6] != 0)) {
      FUN_034fb430(&local_78,param_8 + 10);
    }
  }
  FUN_034f5860(param_1,&local_78,param_3,param_4,param_5,param_6,param_7);
  bVar3 = 1;
LAB_034f4500:
  *(undefined2 *)(param_3 + 0x12) = uVar1;
  if ((*(char *)((long)param_8 + 0x4d) == '\0') &&
     (*(ushort *)PTR_DAT_047e7208 <= *(ushort *)(param_8 + 9))) {
    uVar4 = (int)*(char *)((long)param_8 + 0x4a) - 1;
    *(float *)(param_8 + 8) = *(float *)((long)param_8 + 0x44);
    if (*(char *)((long)param_8 + 0x4a) < 1) {
      if (*(float *)((long)param_8 + 0x44) <= 0.1) {
        *(undefined1 *)((long)param_8 + 0x4a) = 4;
      }
    }
    else {
      *(char *)((long)param_8 + 0x4a) = (char)uVar4;
      if ((uVar4 & 0xff) == 0) {
        *(undefined2 *)((long)param_8 + 0x4d) = 1;
      }
    }
  }
  if ((*(char *)((long)param_8 + 0x5d) == '\0') &&
     (*(ushort *)PTR_DAT_047e7208 <= *(ushort *)(param_8 + 0xb))) {
    uVar4 = (int)*(char *)((long)param_8 + 0x5a) - 1;
    *(float *)(param_8 + 10) = *(float *)((long)param_8 + 0x54);
    if (*(char *)((long)param_8 + 0x5a) < 1) {
      if (*(float *)((long)param_8 + 0x54) <= 0.1) {
        *(undefined1 *)((long)param_8 + 0x5a) = 4;
      }
    }
    else {
      *(char *)((long)param_8 + 0x5a) = (char)uVar4;
      if ((uVar4 & 0xff) == 0) {
        *(undefined2 *)((long)param_8 + 0x5d) = 1;
      }
    }
  }
  if (!(bool)(uVar5 < 0x7ff1 | bVar3 ^ 1)) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar2);
  }
  return;
}


