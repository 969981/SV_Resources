/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00802884; name: FUN_00802884
 */


void FUN_00802884(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  byte bVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  int local_d0 [4];
  undefined *local_c0 [2];
  long local_b0;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [48];
  
  uVar6 = FUN_007ec554();
  uVar5 = (**(code **)(*param_1 + 0x18))(param_1);
  local_c0[0] = (undefined *)CONCAT44(local_c0[0]._4_4_,uVar5);
  plVar7 = (long *)FUN_007e9698(uVar6,local_c0);
  (**(code **)(*(long *)*plVar7 + 0x70))();
  uVar8 = (**(code **)(*(long *)*plVar7 + 0x78))();
  if ((uVar8 & 1) == 0) {
    puVar1 = PTR_DAT_047d1688 + 0x10;
    do {
      plVar2 = (long *)0x0;
      if (*(long *)(*plVar7 + 0x50) != 0) {
        plVar2 = (long *)(*plVar7 + 0x50);
      }
      bVar3 = *(byte *)(plVar2 + 5);
      uVar10 = 1;
      if ((bVar3 & 1) != 0) {
        uVar10 = 2;
      }
      if ((bVar3 & 2) != 0) {
        uVar10 = uVar10 + 2;
      }
      lVar9 = *plVar2;
      if ((bVar3 & 4) != 0) {
        uVar10 = uVar10 + 4;
      }
      uVar4 = *(undefined2 *)((long)plVar2 + 0x2a);
      if ((bVar3 & 8) != 0) {
        uVar10 = uVar10 + 8;
      }
      FUN_00804f78(local_c0);
      FUN_008051d4(local_d0,local_c0,lVar9 + (ulong)uVar10,uVar4);
      if (((local_d0[0] == 0) && (local_b0 != -1)) && (param_1[0x14] != -1)) {
        FUN_00803628(param_1,local_c0);
      }
      local_c0[0] = puVar1;
      FUN_0284e3d4(auStack_80);
      FUN_0284e3d4(auStack_a0);
      (**(code **)(*(long *)*plVar7 + 0x80))();
      uVar8 = (**(code **)(*(long *)*plVar7 + 0x78))();
    } while ((uVar8 & 1) == 0);
  }
  return;
}


