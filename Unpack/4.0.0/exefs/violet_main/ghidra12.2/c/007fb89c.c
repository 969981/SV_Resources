/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007fb89c; name: FUN_007fb89c
 */


void FUN_007fb89c(long *param_1)

{
  char cVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 uVar4;
  long lVar5;
  undefined1 auStack_33f8 [16];
  undefined1 auStack_33e8 [32];
  undefined2 local_33c8 [4];
  undefined1 auStack_33c0 [32];
  undefined4 local_33a0;
  undefined4 uStack_339c;
  undefined4 local_3398;
  undefined4 local_338c;
  undefined1 local_3387;
  undefined8 local_3380;
  undefined1 auStack_3378 [304];
  undefined1 auStack_3248 [128];
  undefined1 auStack_31c8 [304];
  undefined8 local_3098;
  undefined1 auStack_3088 [12336];
  undefined4 local_58;
  int local_50 [4];
  
  cVar1 = *(char *)((long)param_1 + 9);
  if (cVar1 == '\x04') {
    uVar3 = (**(code **)(*param_1 + 0x58))(param_1);
    if ((uVar3 & 1) != 0) {
      (**(code **)(*param_1 + 0x60))(local_50 + 0xc,param_1);
      FUN_018ff39c(param_1 + 5,local_50 + 0xc);
      *(undefined1 *)((long)param_1 + 9) = 5;
    }
  }
  else if (((cVar1 == '\x03') || (cVar1 == '\x01')) &&
          (uVar3 = FUN_008101bc(param_1[4]), (uVar3 & 1) != 0)) {
    FUN_007fc2f0(local_50);
    if (*(char *)((long)param_1 + 9) == '\x03') {
      if (local_50[0] == 0) {
        lVar5 = param_1[4];
        FUN_007fc3b8(local_33c8);
        FUN_0284e39c(auStack_33c0,lVar5 + 0xee8);
        local_33c8[0] = *(undefined2 *)(lVar5 + 0xee0);
        local_33a0 = *(undefined4 *)(lVar5 + 0xf08);
        uStack_339c = *(undefined4 *)(lVar5 + 0xf0c);
        local_3398 = *(undefined4 *)(lVar5 + 0xf10);
        local_338c = *(undefined4 *)(lVar5 + 0xf1c);
        local_3387 = *(undefined1 *)(lVar5 + 0xf21);
        local_3380 = FUN_00810194(param_1[4]);
        lVar5 = (**(code **)(*param_1 + 0xc0))(param_1);
        FUN_0278a178(auStack_33e8,auStack_3378,lVar5 + 0x18);
        lVar5 = (**(code **)(*param_1 + 0xc0))(param_1);
        FUN_0278a178(auStack_33e8,auStack_31c8,lVar5 + 0x148);
        lVar5 = (**(code **)(*param_1 + 0xc0))(param_1);
        local_3098 = *(undefined8 *)(lVar5 + 8);
        lVar5 = (**(code **)(*param_1 + 0xc0))(param_1);
        FUN_0278a178(auStack_33e8,auStack_3248,lVar5 + 0x278);
        puVar2 = PTR_DAT_047d15d8;
        local_58 = *(undefined4 *)((long)*(long **)PTR_DAT_047d15d8 + 0x13e4);
        lVar5 = (**(code **)(**(long **)PTR_DAT_047d15d8 + 0x228))();
        FUN_018dd540(auStack_33e8,lVar5 + 8);
        FUN_0278a178(auStack_33f8,auStack_3088,auStack_33e8);
        FUN_007fd230(auStack_33e8,*(undefined8 *)puVar2,local_33c8);
        FUN_018ff39c(local_50,auStack_33e8);
        if (local_50[0] == 0) {
          uVar4 = 4;
        }
        else {
          FUN_018ff39c(param_1 + 5,local_50);
          uVar4 = 5;
        }
        *(undefined1 *)((long)param_1 + 9) = uVar4;
        FUN_0284e3d4(auStack_33c0);
      }
      else {
        FUN_018ff39c(param_1 + 5,local_50);
        *(undefined1 *)((long)param_1 + 9) = 5;
      }
    }
    else if (*(char *)((long)param_1 + 9) == '\x01') {
      *(undefined1 *)((long)param_1 + 9) = 2;
    }
    return;
  }
  return;
}


