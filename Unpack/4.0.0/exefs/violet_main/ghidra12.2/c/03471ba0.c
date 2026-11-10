/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03471ba0; name: FUN_03471ba0
 */


void FUN_03471ba0(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  undefined1 auStack_d0 [16];
  float local_c0;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  ulong local_50;
  uint local_48;
  undefined2 local_44;
  ushort local_42;
  long local_40;
  ulong local_38;
  
  FUN_034acd10();
  local_40 = 0;
  local_38 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_034acffc(param_1,*(long *)(param_1 + 0x70),&local_40,param_2);
  }
  plVar5 = *(long **)(param_1 + 0x78);
  if (plVar5 != (long *)0x0) {
    plVar4 = (long *)*plVar5;
    uVar2 = *(uint *)(plVar5 + 1);
    if ((uVar2 == 0) || (*plVar4 == *param_3)) {
      plVar5 = plVar4;
    }
    else {
      lVar6 = (ulong)uVar2 * 0x10;
      plVar7 = plVar4;
      do {
        lVar6 = lVar6 + -0x10;
        if (lVar6 == 0) goto LAB_03471c54;
        plVar5 = plVar7 + 2;
        plVar1 = plVar7 + 2;
        plVar7 = plVar5;
      } while (*plVar1 != *param_3);
    }
    if (plVar5 != plVar4 + (ulong)uVar2 * 2) {
      FUN_034acffc(param_1,plVar5[1],&local_40,param_2);
    }
  }
LAB_03471c54:
  if (local_40 != 0) {
    local_38 = local_38 & 0xffffffff00000000;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    local_40 = 0;
    local_38 = local_38 & 0xffffffff;
  }
  plVar5 = *(long **)(param_1 + 0x178);
  if (plVar5 == (long *)0x0) {
    fVar8 = 0.0;
  }
  else {
    fVar8 = 0.0;
    do {
      fVar8 = *(float *)(plVar5 + 5) + fVar8;
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
  }
  if (fVar8 <= *(float *)(param_1 + 0x120)) {
    fVar8 = *(float *)(param_1 + 0x120);
  }
  *(float *)(param_2 + 0x10) = fVar8 + *(float *)(param_2 + 0x10);
  if ((*(long *)(param_1 + 0xa0) != 0) && (uVar3 = FUN_03471aac(), (uVar3 & 1) == 0)) {
    memset(auStack_d0,0,0x68);
    local_68 = 0x3f800000;
    local_42 = local_42 & 0xfc00;
    local_44 = 0;
    local_64 = 0;
    local_5c = 0;
    local_54 = 0;
    local_50 = *(ulong *)(param_2 + 0x80) & 0xfffffffff07ffff;
    local_48 = *(uint *)(param_2 + 0x88) & 0xffffffc0;
    FUN_03471ba0(*(undefined8 *)(param_1 + 0xa0),auStack_d0,param_3);
    *(float *)(param_2 + 0x2c) = *(float *)(param_2 + 0x2c) + local_c0 + local_a4;
    *(float *)(param_2 + 0x34) = *(float *)(param_2 + 0x34) + local_9c;
    *(float *)(param_2 + 0x30) = *(float *)(param_2 + 0x30) + local_a0;
  }
  return;
}


