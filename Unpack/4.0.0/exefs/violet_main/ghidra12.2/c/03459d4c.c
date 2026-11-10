/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03459d4c; name: FUN_03459d4c
 */


undefined8 FUN_03459d4c(long *param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  void *pvVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_d8 [48];
  undefined1 auStack_a8 [48];
  undefined4 local_78 [2];
  long local_70;
  undefined4 local_68;
  undefined4 local_64;
  uint local_60;
  undefined1 local_5c;
  int local_58;
  undefined1 local_54;
  undefined8 local_50;
  long *plStack_48;
  
  puVar3 = PTR_DAT_047e6f28;
  lVar7 = *(long *)(param_2 + 0x40);
  if (*(ushort *)((long)param_1 + 0x34) - 0x104 < 2) {
    if ((int)param_1[8] == 0) {
      local_5c = 0;
      local_50 = 0;
      local_54 = 0;
      local_58 = (uint)(lVar7 == 0) << 8;
      local_60 = *(byte *)((long)param_1 + 0x36) & 0x1f;
      local_78[0] = 0;
      local_68 = *(undefined4 *)(param_2 + 0x38);
      local_70 = lVar7;
      local_64 = FUN_03458770(param_1);
      (**(code **)(*param_1 + 0x70))(param_1,local_78);
      memcpy(auStack_d8,local_78,0x30);
      FUN_0345a0b0(param_1,auStack_d8);
      plVar4 = *(long **)(PTR_DAT_047e70c0 + 0x10);
      while (plVar4 != (long *)0x0) {
        plVar5 = (long *)plVar4[10];
        (**(code **)(*plVar4 + 0xa0))(plVar4,local_78);
        plVar4 = plVar5;
      }
      lVar2 = *(long *)(PTR_DAT_047e70c8 + 0x10);
      while (lVar2 != 0) {
        lVar9 = *(long *)(lVar2 + 0x1e0);
        FUN_034a2fcc(lVar2,local_78);
        lVar2 = lVar9;
      }
    }
    else {
      local_68 = *(undefined4 *)(param_2 + 0x38);
      local_5c = 0;
      local_50 = 0;
      local_54 = 0;
      local_58 = (uint)(lVar7 == 0) << 8;
      local_60 = *(byte *)((long)param_1 + 0x36) & 0x1f;
      local_78[0] = 0;
      local_70 = lVar7;
      plStack_48 = param_1 + 7;
      local_64 = FUN_03458770(param_1);
      (**(code **)(*param_1 + 0x70))(param_1,local_78);
      pvVar6 = memcpy(auStack_a8,local_78,0x30);
      FUN_0345a0b0(pvVar6,auStack_a8);
      FUN_03471440(local_78);
    }
    FUN_03456260(*(undefined8 *)PTR_DAT_047e2fe8,lVar7,param_1 + 7,*(undefined4 *)(param_2 + 0x38));
  }
  else if ((*(ushort *)((long)param_1 + 0x34) - 0x102 < 2) &&
          (plVar4 = (long *)FUN_0344ec90(*(undefined8 *)PTR_DAT_047e6f28,(int)param_1[6],
                                         *(byte *)((long)param_1 + 0x36) >> 6 & 1),
          plVar4 != (long *)0x0)) {
    uVar1 = *(undefined4 *)(param_2 + 0x38);
    plVar5 = (long *)FUN_0344ec90(*(undefined8 *)puVar3,(int)param_1[6],
                                  *(byte *)((long)param_1 + 0x36) >> 6 & 1);
    if (plVar5 == (long *)0x0) {
      uVar8 = 0xf;
    }
    else {
      local_5c = 0;
      local_50 = 0;
      local_58 = 0;
      local_54 = 0;
      local_60 = *(byte *)((long)param_1 + 0x36) & 0x1f;
      local_78[0] = 0;
      local_70 = lVar7;
      local_68 = uVar1;
      local_64 = FUN_03458770(param_1);
      (**(code **)(*param_1 + 0x70))(param_1,local_78);
      (**(code **)(*plVar5 + 0x98))(plVar5,local_78);
      (**(code **)(*plVar5 + 0x30))(plVar5);
      uVar8 = 1;
    }
    FUN_0345423c(*(undefined8 *)PTR_DAT_047e2fe8,plVar4,lVar7,*(undefined4 *)(param_2 + 0x38));
    (**(code **)(*plVar4 + 0x30))(plVar4);
    return uVar8;
  }
  return 1;
}


