/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00813bc4; name: FUN_00813bc4
 */


void FUN_00813bc4(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  int local_90 [8];
  undefined *local_70;
  uint local_68;
  undefined4 local_64;
  undefined2 local_60;
  undefined4 local_5c;
  undefined2 local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  uVar5 = FUN_007ec554();
  uVar4 = (**(code **)(*param_1 + 0x18))(param_1);
  local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar4);
  plVar6 = (long *)FUN_007e9698(uVar5,&local_70);
  uVar7 = (**(code **)(*(long *)*plVar6 + 0x78))();
  if ((uVar7 & 1) == 0) {
    puVar1 = PTR_DAT_047d18e0 + 0x10;
    do {
      plVar2 = (long *)0x0;
      if (*(long *)(*plVar6 + 0x50) != 0) {
        plVar2 = (long *)(*plVar6 + 0x50);
      }
      if (*(short *)((long)plVar2 + 0x2a) == 0x19) {
        local_68 = local_68 & 0xffffff00;
        local_64 = 0;
        local_60 = 0;
        local_5c = 0;
        local_58 = 0;
        local_50 = 0;
        local_48 = 0;
        bVar3 = *(byte *)(plVar2 + 5);
        uVar8 = 1;
        if ((bVar3 & 1) != 0) {
          uVar8 = 2;
        }
        if ((bVar3 & 2) != 0) {
          uVar8 = uVar8 + 2;
        }
        if ((bVar3 & 4) != 0) {
          uVar8 = uVar8 + 4;
        }
        if ((bVar3 & 8) != 0) {
          uVar8 = uVar8 + 8;
        }
        local_70 = puVar1;
        FUN_008173c4(local_90,&local_70,*plVar2 + (ulong)uVar8,0x19);
        if (local_90[0] != 0) {
          return;
        }
        FUN_00796868(local_90,plVar2 + 8);
        FUN_00817488(param_1,&local_70);
        FUN_0284e3d4(local_90);
      }
      else {
        local_68 = 0;
        local_70 = (undefined *)0x1;
        FUN_007ed6ec(plVar2,&local_70);
      }
      (**(code **)(*(long *)*plVar6 + 0x80))();
      uVar7 = (**(code **)(*(long *)*plVar6 + 0x78))();
    } while ((uVar7 & 1) == 0);
  }
  return;
}


