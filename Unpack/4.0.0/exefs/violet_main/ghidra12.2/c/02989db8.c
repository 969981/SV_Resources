/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02989db8; name: FUN_02989db8
 */


undefined8 FUN_02989db8(undefined8 param_1,long *param_2,byte param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint uVar7;
  bool bVar8;
  undefined8 local_90;
  undefined1 auStack_88 [40];
  undefined1 auStack_48 [8];
  
  uVar5 = (**(code **)(*param_2 + 0x98))(param_2);
  bVar2 = (**(code **)(*param_2 + 0x710))(param_2);
  if (bVar2 != 0) {
    if (param_3 == 0) {
      uVar7 = 0;
      bVar8 = false;
      do {
        cVar4 = (**(code **)(*param_2 + 0x678))(param_2,uVar7);
        if (cVar4 != '\0') {
          local_90 = 0;
          FUN_01246154(auStack_88);
          bVar8 = true;
          local_90._0_7_ =
               (undefined7)CONCAT26(local_90._6_2_,CONCAT15(cVar4,(int5)CONCAT44(uVar7,uVar5)));
          local_90 = CONCAT17(1,(undefined7)local_90);
          FUN_01461214(param_1);
          uVar6 = FUN_0293df74();
          FUN_0293df7c(uVar6,auStack_48,&local_90);
        }
        uVar7 = uVar7 + 1;
      } while (bVar2 != uVar7);
    }
    else {
      uVar7 = 0;
      bVar8 = false;
      do {
        bVar3 = (**(code **)(*param_2 + 0x678))(param_2,uVar7);
        bVar1 = param_3;
        if (bVar3 <= param_3) {
          bVar1 = bVar3;
        }
        if (bVar1 != 0) {
          local_90 = 0;
          FUN_01246154(auStack_88);
          bVar8 = true;
          local_90._0_7_ =
               (undefined7)CONCAT26(local_90._6_2_,CONCAT15(bVar1,(int5)CONCAT44(uVar7,uVar5)));
          local_90 = CONCAT17(1,(undefined7)local_90);
          FUN_01461214(param_1);
          uVar6 = FUN_0293df74();
          FUN_0293df7c(uVar6,auStack_48,&local_90);
        }
        uVar7 = uVar7 + 1;
      } while (bVar2 != uVar7);
    }
    if (bVar8) {
      local_90 = local_90 & 0xffffff0000000000;
      FUN_01246154(auStack_88);
      local_90 = CONCAT44(local_90._4_4_,uVar5);
      FUN_02943244(auStack_88,2,0x84);
      FUN_0294325c(auStack_88,uVar5);
      FUN_01461214(param_1);
      uVar6 = FUN_01907950();
      FUN_0124aab0(uVar6,auStack_48,&local_90);
      return 1;
    }
  }
  return 0;
}


