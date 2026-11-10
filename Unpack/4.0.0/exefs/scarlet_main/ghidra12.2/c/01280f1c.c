/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01280f1c; name: FUN_01280f1c
 */


void FUN_01280f1c(long param_1,undefined8 param_2)

{
  int *piVar1;
  ushort uVar2;
  undefined *puVar3;
  uint *puVar4;
  ulong uVar5;
  ushort *puVar6;
  uint uVar7;
  int *piVar8;
  undefined1 auVar9 [16];
  float fVar10;
  undefined1 auVar11 [12];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  int *local_f8;
  int *local_f0;
  int *local_e0;
  int *local_d8;
  char *local_c8;
  char *pcStack_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  local_c8 = (char *)0x6c4507352bbf63a9;
  pcStack_c0 = "PartnerBasicData";
  local_b8 = 0x10;
  local_b0 = (long *)0x0;
  FUN_00d996a8(auStack_a8,param_2,&local_c8);
  local_60 = 0x6a906d52f97c4993;
  pcStack_58 = "LeftOffset";
  local_50 = 10;
  local_48 = (long *)0x0;
  FUN_00fb4c10(auStack_78,auStack_a8,&local_60);
  auVar9 = FUN_0128180c(auStack_78);
  *(undefined1 (*) [16])(param_1 + 0x40) = auVar9;
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  local_60 = 0x3ea7af3f99151f0a;
  pcStack_58 = "RightOffset";
  local_50 = 0xb;
  local_48 = (long *)0x0;
  FUN_00fb4c10(auStack_90,auStack_a8,&local_60);
  auVar9 = FUN_0128180c(auStack_90);
  *(undefined1 (*) [16])(param_1 + 0x50) = auVar9;
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  local_60 = 0x17b9139c82aa49fe;
  pcStack_58 = "ObonFloaterData";
  local_50 = 0xf;
  local_48 = (long *)0x0;
  FUN_00d996a8(&local_e0,param_2,&local_60);
  puVar3 = PTR_DAT_047d5608;
  fVar10 = 0.0;
  if (((local_d8 != (int *)0x0) && (6 < *(ushort *)((long)local_d8 - (long)*local_d8))) &&
     (uVar5 = (ulong)((ushort *)((long)local_d8 - (long)*local_d8))[3], uVar5 != 0)) {
    puVar4 = (uint *)((long)local_d8 + uVar5);
    puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
    local_c8 = "Scale";
    puVar4 = bsearch(&local_c8,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
    if ((puVar4 != (uint *)0x0) && (local_e0 != (int *)0x0)) {
      piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
      puVar6 = (ushort *)((long)piVar1 - (long)*piVar1);
      uVar2 = *puVar6;
      if (uVar2 < 7) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = (int *)0x0;
        if ((ulong)puVar6[3] != 0) {
          puVar4 = (uint *)((long)piVar1 + (ulong)puVar6[3]);
          piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
        }
      }
      if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
         (uVar5 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar5 == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = (long)*(char *)((long)piVar8 + uVar5) & 0xffffffff;
      }
      if (*(long *)(puVar3 + uVar5 * 8) == 4) {
        fVar10 = 0.0;
        if (uVar2 < 0xb) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          if ((ulong)puVar6[5] != 0) {
            uVar7 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar6[5]);
          }
          if ((0xe < uVar2) && ((ulong)puVar6[7] != 0)) {
            fVar10 = (float)*(double *)((long)piVar1 + (ulong)puVar6[7]);
          }
        }
        if ((uVar7 < *(ushort *)((long)local_e0 - (long)*local_e0)) &&
           (uVar5 = (ulong)*(ushort *)(((long)local_e0 - (long)*local_e0) + (ulong)uVar7),
           uVar5 != 0)) {
          fVar10 = *(float *)((long)local_e0 + uVar5);
        }
      }
      else if ((0xe < uVar2) && ((ulong)puVar6[7] != 0)) {
        fVar10 = (float)*(double *)((long)piVar1 + (ulong)puVar6[7]);
      }
    }
  }
  *(float *)(param_1 + 0x60) = fVar10;
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  local_60 = 0x22ec0f2161ea1024;
  pcStack_58 = "IttekoiData";
  local_50 = 0xb;
  local_48 = (long *)0x0;
  FUN_00d996a8(&local_f8,param_2,&local_60);
  fVar10 = 0.0;
  if (((local_f0 != (int *)0x0) && (6 < *(ushort *)((long)local_f0 - (long)*local_f0))) &&
     (uVar5 = (ulong)((ushort *)((long)local_f0 - (long)*local_f0))[3], uVar5 != 0)) {
    puVar4 = (uint *)((long)local_f0 + uVar5);
    puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
    local_c8 = "MoveSpeedRate";
    puVar4 = bsearch(&local_c8,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
    if ((puVar4 != (uint *)0x0) && (local_f8 != (int *)0x0)) {
      piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
      puVar6 = (ushort *)((long)piVar1 - (long)*piVar1);
      uVar2 = *puVar6;
      if (uVar2 < 7) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = (int *)0x0;
        if ((ulong)puVar6[3] != 0) {
          puVar4 = (uint *)((long)piVar1 + (ulong)puVar6[3]);
          piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
        }
      }
      if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
         (uVar5 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar5 == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = (long)*(char *)((long)piVar8 + uVar5) & 0xffffffff;
      }
      if (*(long *)(puVar3 + uVar5 * 8) == 4) {
        fVar10 = 0.0;
        if (uVar2 < 0xb) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          if ((ulong)puVar6[5] != 0) {
            uVar7 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar6[5]);
          }
          if ((0xe < uVar2) && ((ulong)puVar6[7] != 0)) {
            fVar10 = (float)*(double *)((long)piVar1 + (ulong)puVar6[7]);
          }
        }
        if ((uVar7 < *(ushort *)((long)local_f8 - (long)*local_f8)) &&
           (uVar5 = (ulong)*(ushort *)(((long)local_f8 - (long)*local_f8) + (ulong)uVar7),
           uVar5 != 0)) {
          fVar10 = *(float *)((long)local_f8 + uVar5);
        }
      }
      else if ((0xe < uVar2) && ((ulong)puVar6[7] != 0)) {
        fVar10 = (float)*(double *)((long)piVar1 + (ulong)puVar6[7]);
      }
    }
  }
  *(float *)(param_1 + 100) = fVar10;
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  local_c8 = (char *)0xfe22cc320bdacafd;
  pcStack_c0 = "FollowupData";
  local_b8 = 0xc;
  local_b0 = (long *)0x0;
  FUN_00d996a8(auStack_110,param_2,&local_c8);
  local_60 = 0x763cf1786ae199be;
  pcStack_58 = "GroundFollowupData";
  local_50 = 0x12;
  local_48 = (long *)0x0;
  FUN_00d996a8(auStack_78,auStack_110,&local_60);
  auVar11 = FUN_0128167c(auStack_78);
  *(undefined1 (*) [12])(param_1 + 0x68) = auVar11;
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  local_60 = 0x7c040d7f6e1af990;
  pcStack_58 = "WaterFollowupData";
  local_50 = 0x11;
  local_48 = (long *)0x0;
  FUN_00d996a8(auStack_90,auStack_110,&local_60);
  auVar11 = FUN_0128167c(auStack_90);
  *(undefined1 (*) [12])(param_1 + 0x74) = auVar11;
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  local_c8 = (char *)0x314a7f2cffebf2;
  pcStack_c0 = "RummagingData";
  local_b8 = 0xd;
  local_b0 = (long *)0x0;
  FUN_00d996a8(auStack_128,param_2,&local_c8);
  local_60 = 0xb495c8b6495a33ed;
  pcStack_58 = "IsGrass";
  local_50 = 7;
  local_48 = (long *)0x0;
  uVar5 = FUN_00cf7518(auStack_128,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if ((uVar5 & 1) != 0) {
    local_60 = local_60 & 0xffffffff00000000;
    FUN_01281bcc(param_1 + 0x80,&local_60);
  }
  local_60 = 0x280add53dbd1cb98;
  pcStack_58 = "IsUnderWater";
  local_50 = 0xc;
  local_48 = (long *)0x0;
  uVar5 = FUN_00cf7518(auStack_128,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if ((uVar5 & 1) != 0) {
    local_60._4_4_ = (undefined4)(local_60 >> 0x20);
    local_60 = CONCAT44(local_60._4_4_,1);
    FUN_01281bcc(param_1 + 0x80,&local_60);
  }
  local_60 = 0x8670911b5cacff4e;
  pcStack_58 = "IsInTheGround";
  local_50 = 0xd;
  local_48 = (long *)0x0;
  uVar5 = FUN_00cf7518(auStack_128,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if ((uVar5 & 1) != 0) {
    local_60._4_4_ = (undefined4)(local_60 >> 0x20);
    local_60 = CONCAT44(local_60._4_4_,2);
    FUN_01281bcc(param_1 + 0x80,&local_60);
  }
  local_60 = 0x58309af89181bb17;
  pcStack_58 = "IsOnTheTree";
  local_50 = 0xb;
  local_48 = (long *)0x0;
  uVar5 = FUN_00cf7518(auStack_128,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if ((uVar5 & 1) != 0) {
    local_60._4_4_ = (undefined4)(local_60 >> 0x20);
    local_60 = CONCAT44(local_60._4_4_,3);
    FUN_01281bcc(param_1 + 0x80,&local_60);
  }
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  return;
}


