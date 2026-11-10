/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008dadd4; name: FUN_008dadd4
 */


void FUN_008dadd4(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (0x20 < *(uint *)(param_2 + 4)) {
    uVar1 = *(uint *)(param_2 + 0x14);
    *(ulong *)(param_1 + 200) = (ulong)*(uint *)(param_2 + 4);
    param_2 = param_2 + (ulong)uVar1;
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    lVar3 = FUN_00ddef1c(param_2);
    *(long *)(param_1 + 0xa8) = lVar3;
    if (*(long *)(param_1 + 0x18) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      local_70 = CONCAT44(local_70._4_4_,0x21);
      local_60 = 0;
      uStack_58 = 0;
      lVar4 = *(long *)(lVar3 + 0x30);
      iVar2 = nn::util::BinaryBlockHeader::GetBlockSize();
      local_70 = CONCAT44(iVar2 + -0x10,(undefined4)local_70);
      local_68 = lVar4 + 0x10;
      FUN_00ddef7c(*(undefined8 *)(lVar3 + 0x40),uVar5,&local_70);
      iVar2 = 0;
      *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)(lVar3 + 0x40);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x28);
      *(long *)(lVar3 + 0x48) = *(long *)(param_1 + 0x18);
      iVar2 = *(int *)(lVar3 + 0x30) + (((int)param_2 - (int)uVar5) - (int)lVar3) + iVar2 + 0x10;
    }
    *(int *)(lVar3 + 0x50) = iVar2;
    lVar3 = *(long *)(param_1 + 0xa8);
    iVar2 = *(int *)(*(long *)(lVar3 + 0x38) + 4);
    *(int *)(param_1 + 0xa0) = iVar2;
    if (0 < iVar2) {
      lVar4 = 0;
      while( true ) {
        lVar6 = *(long *)(*(long *)(lVar3 + 0x28) + lVar4 * 8);
        lVar3 = *(long *)(lVar6 + 0x68);
        uVar5 = *(undefined8 *)(param_1 + 0x10);
        FUN_00ddf110(*(undefined8 *)(lVar6 + 0x80),uVar5,lVar6 + 0x10,*(undefined8 *)(lVar3 + 0x28),
                     ((ulong)*(uint *)(lVar3 + 0x30) - *(long *)(lVar3 + 0x10)) +
                     **(long **)(lVar6 + 0x70) + -0x10,*(undefined4 *)(lVar6 + 0x50));
        local_40 = 0;
        uStack_38 = 0;
        local_50 = 0;
        uStack_48 = 0;
        local_60 = 0;
        uStack_58 = 0;
        local_70 = 0;
        local_68 = 0;
        FUN_00ddef50(&local_70);
        local_70 = CONCAT71(local_70._1_7_,*(undefined1 *)(lVar6 + 0x5c));
        local_70 = CONCAT44(*(undefined4 *)(lVar6 + 0x1c),(undefined4)local_70);
        local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(lVar6 + 0x58));
        local_40 = *(undefined8 *)(lVar6 + 0x80);
        local_50 = CONCAT44(*(undefined4 *)(lVar6 + 0x30),(undefined4)local_50);
        local_60._0_4_ = CONCAT22(*(undefined2 *)(lVar6 + 0x16),(undefined2)local_60);
        FUN_00ddf1e0(*(undefined8 *)(lVar6 + 0x88),uVar5,&local_70);
        lVar4 = lVar4 + 1;
        if (*(int *)(param_1 + 0xa0) <= lVar4) break;
        lVar3 = *(long *)(param_1 + 0xa8);
      }
    }
  }
  return;
}


