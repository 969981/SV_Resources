/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0124cc24; name: FUN_0124cc24
 */


void FUN_0124cc24(long param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 local_24;
  
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x49c) & 1) != 0) {
    lVar5 = *(long *)(param_1 + 0x10);
    uVar3 = FUN_011d3d7c(lVar5);
    if (((uVar3 & 1) == 0) &&
       ((plVar4 = (long *)FUN_011d3f10(*(undefined8 *)(lVar5 + 0x290)), plVar4 == (long *)0x0 ||
        (uVar3 = (**(code **)(*plVar4 + 0x208))(), (uVar3 & 1) != 0)))) {
      plVar4 = (long *)FUN_010a0028(*(undefined8 *)
                                     (*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x330) + 8) +
                                     0x30),1,0);
      uVar3 = (**(code **)(*plVar4 + 0x88))(plVar4,0x3fd);
      if (((uVar3 & 1) != 0) &&
         ((uVar3 = (**(code **)(*plVar4 + 0x90))(plVar4,0x3fd,0), (uVar3 & 1) != 0 &&
          (uVar3 = (**(code **)(*plVar4 + 0x5b0))(plVar4), (uVar3 & 1) == 0)))) {
        local_50 = 0;
        local_48 = 0x100;
        local_46 = 0;
        local_44 = 0;
        local_3c = 0;
        local_34 = 0;
        local_2c = 0;
        local_24 = 0;
        uVar2 = (**(code **)(*plVar4 + 0x98))(plVar4);
        uVar1 = local_50;
        local_50._7_1_ = SUB81(uVar1,7);
        local_50._0_7_ = CONCAT16(1,CONCAT24(1,uVar2));
        FUN_019079dc(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0xc20),auStack_58,&local_50);
        lVar5 = *(long *)(param_1 + 0x20);
        FUN_010a0810(*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0x10) + 0x330));
        FUN_0129aff0(*(undefined8 *)(lVar5 + 0x18),0x87,1,0);
        FUN_0129aff0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0xc6,1,0);
      }
    }
  }
  return;
}


