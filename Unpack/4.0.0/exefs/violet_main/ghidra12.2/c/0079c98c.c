/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0079c98c; name: FUN_0079c98c
 */


void FUN_0079c98c(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  ulong local_b8;
  undefined4 local_b0;
  ulong local_a8 [2];
  ulong local_98;
  undefined4 local_90;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  
  if (((((char)param_2[0x49] == '\0') || ((int)param_2[0x38] != 0)) ||
      (uVar3 = FUN_0078cdf4(param_2[0x37]), (uVar3 & 1) != 0)) ||
     (*(char *)((long)param_2 + 0x284) != '\0')) {
    local_98 = CONCAT44(local_98._4_4_,0x10408);
    local_a8[0]._0_4_ = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_98 | 4),(Result *)local_a8);
    puVar5 = &local_98;
  }
  else {
    FUN_007965ac(auStack_58,param_2 + 0x13);
    puVar1 = PTR_DAT_047d0a08;
    if ((*(long *)PTR_DAT_047d0a08 != 0) && ((char)param_2[0x22a] != '\0')) {
      FUN_007cdbcc();
    }
    iVar2 = FUN_0078cdcc(param_2[0x37]);
    if (iVar2 != 0) {
      (**(code **)(*(long *)param_2[0x37] + 0x10))((long *)param_2[0x37],1);
    }
    (**(code **)(*param_2 + 0x150))(param_2);
    FUN_007965ac(auStack_78,param_2 + 0x17);
    lVar6 = *(long *)puVar1;
    if ((lVar6 != 0) && ((char)param_2[0x22a] != '\0')) {
      FUN_007cdbbc(lVar6,auStack_78);
      FUN_007cd7e4(lVar6,auStack_78,0xffffffff);
    }
    local_90 = 0;
    local_98 = 0x100;
    (**(code **)(*param_2 + 0x10))(param_2,&local_98);
    if (*(short *)((long)param_2 + 0x114e) != 0) {
      uVar3 = 0;
      do {
        uVar4 = FUN_00796784(*(long *)(param_2[0x11] + uVar3 * 8) + 0x10);
        if ((uVar4 & 1) != 0) {
          *(undefined1 *)(*(long *)(param_2[0x11] + uVar3 * 8) + 8) = 1;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ushort *)((long)param_2 + 0x114e));
    }
    if (*(char *)((long)param_2 + 0x249) != '\0') {
      *(undefined1 *)((long)param_2 + 0x249) = 0;
    }
    if ((char)param_2[0x22d] != '\0') {
      *(undefined1 *)(param_2 + 0x22d) = 0;
    }
    *(undefined4 *)((long)param_2 + 0x1c4) = 0;
    FUN_00796584(&local_98);
    FUN_007a012c(local_a8,param_2,&local_98);
    if ((int)local_a8[0] == 0) {
      FUN_007a92e0(&local_b8,param_2[0x37],param_2 + 0x39,&local_98);
      FUN_018ff39c(local_a8,&local_b8);
      if ((int)local_a8[0] == 0) {
        FUN_0078cd58(param_2[0x37],0);
        if ((int)param_2[0x38] != 2) {
          *(undefined4 *)(param_2 + 0xc) = 0;
        }
        (**(code **)(*(long *)param_2[0x4f] + 0x18))((long *)param_2[0x4f],param_2[0x24]);
        local_b0 = 0;
        local_b8 = 0x100;
        (**(code **)(*(long *)param_2[0x4f] + 0x40))((long *)param_2[0x4f],&local_b8);
        local_b8 = local_b8 & 0xffffffff00000000;
        local_38[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)&local_b8 | 4),(Result *)local_38);
        puVar5 = &local_b8;
        goto LAB_0079c9ec;
      }
    }
    puVar5 = local_a8;
  }
LAB_0079c9ec:
  FUN_00cbd7c0(param_1,puVar5);
  return;
}


