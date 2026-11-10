/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0199e810; name: FUN_0199e810
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0199e810(void *param_1)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  *(undefined4 *)((long)param_1 + 0x4c) = 1;
  FUN_026f3730(param_1,1);
  if (*(code **)PTR_DAT_047cb828 != (code *)0x0) {
    (**(code **)PTR_DAT_047cb828)(param_1);
  }
  if (*(int *)((long)param_1 + 0x1d4) != 0) {
    FUN_001209d0(&DAT_047ec2a8);
    pvVar3 = DAT_047ec4b8;
    if (DAT_047ec4b8 == param_1) {
      DAT_047ec4b8 = *(void **)((long)DAT_047ec4b8 + 0xb8);
    }
    else {
      do {
        pvVar4 = pvVar3;
        if (pvVar4 == (void *)0x0) goto LAB_0199e8ac;
        pvVar3 = *(void **)((long)pvVar4 + 0xb8);
      } while (*(void **)((long)pvVar4 + 0xb8) != param_1);
      *(undefined8 *)((long)pvVar4 + 0xb8) = *(undefined8 *)((long)param_1 + 0xb8);
    }
LAB_0199e8ac:
    if (DAT_047ec298 == param_1) {
      DAT_047ec298 = (void *)0x0;
    }
    FUN_00120750(&DAT_047ec2a8);
    *(undefined4 *)((long)param_1 + 0x1d4) = 0;
  }
  if ((*(byte *)((long)param_1 + 0x23) >> 3 & 1) == 0) {
    FUN_00103990((long)param_1 + 0x460);
    if (DAT_047ec298 == param_1) {
      DAT_047ec298 = (void *)0x0;
    }
    FUN_00120750((long)param_1 + 0x460);
    FUN_00120750(&DAT_047ec2a8);
  }
  if (DAT_047ec298 == param_1) {
    DAT_047ec298 = (void *)0x0;
  }
  if ((*(int *)((long)param_1 + 300) != 0) &&
     ((iVar1 = *(int *)(*(long *)((long)param_1 + 0x1b8) + 0x5c), iVar1 < 1 || (iVar1 == 2)))) {
    FUN_00103990((long)param_1 + 0x520);
    FUN_00120750((long)param_1 + 0x520);
    FUN_00120750(&DAT_047ec2a8);
  }
  if ((*(byte *)((long)param_1 + 0x23) >> 4 & 1) == 0) {
    FUN_001209d0((long)param_1 + 0x3a0);
    *(undefined4 *)((long)param_1 + 0x48) = 0;
    FUN_00120750((long)param_1 + 0x3a0);
  }
  if (DAT_047ec298 == param_1) {
    DAT_047ec298 = (void *)0x0;
  }
  if (DAT_047ec2a0 != 0) {
    FUN_001209d0(&DAT_047ec328);
  }
  if (*(int *)((long)param_1 + 300) != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      (**(code **)(*(long *)((long)param_1 + 0x1b8) + lVar5 + 0x1a8))();
      DAT_047ec0f0 = DAT_047ec0f0 + -1;
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x1c0;
    } while (uVar6 < *(uint *)((long)param_1 + 300));
  }
  if (DAT_047ec2a0 != 0) {
    FUN_00120750(&DAT_047ec328);
  }
  if (*(long *)((long)param_1 + 0x6b8) != 0) {
    FUN_0011f610();
  }
  lVar5 = *(long *)((long)param_1 + 0x1f8);
  if (lVar5 == 0) {
    if (DAT_047ec2a0 != 0) {
      FUN_001209d0(&DAT_047ec3a8);
    }
    (**(code **)((long)param_1 + 0x238))((long)param_1 + 0x210);
    if (DAT_047ec2a0 != 0) {
      FUN_00120750(&DAT_047ec3a8);
    }
    lVar5 = *(long *)((long)param_1 + 0x5e0);
  }
  else if ((*(byte *)((long)param_1 + 0x23) & 0x14) != 0) {
    uVar2 = *(uint *)((long)param_1 + 0x20);
    goto joined_r0x0199ea6c;
  }
  FUN_0011f610(lVar5);
  uVar2 = *(uint *)((long)param_1 + 0x20);
joined_r0x0199ea6c:
  if ((uVar2 >> 0x1b & 1) == 0) {
    FUN_00120720((long)param_1 + 0x460);
    uVar2 = *(uint *)((long)param_1 + 0x20);
  }
  if ((uVar2 >> 0x1c & 1) == 0) {
    FUN_00120720((long)param_1 + 0x3a0);
    uVar2 = *(uint *)((long)param_1 + 0x20);
  }
  if ((uVar2 >> 0x1b & 1) == 0) {
    if (DAT_047ec2a0 != 0) {
      FUN_001209d0(&DAT_047ec3a8);
    }
    DAT_047ec758 = DAT_047ec758 + -1;
    if (DAT_047ec758 == 0 && (uVar2 & 0x40) == 0) {
      FUN_001038d0();
    }
    if (DAT_047ec2a0 != 0) {
      FUN_00120750(&DAT_047ec3a8);
    }
  }
  if (((*(int *)((long)param_1 + 300) != 0) &&
      (((iVar1 = *(int *)(*(long *)((long)param_1 + 0x1b8) + 0x5c), iVar1 < 1 || (iVar1 == 2)) &&
       (FUN_00120720((long)param_1 + 0x520), *(int *)((long)param_1 + 300) != 0)))) &&
     (*(int *)(*(long *)((long)param_1 + 0x1b8) + 0x5c) < 1)) {
    uVar2 = *(uint *)((long)param_1 + 0x20);
    if (DAT_047ec2a0 != 0) {
      FUN_001209d0(&DAT_047ec328);
    }
    DAT_047ec4c4 = DAT_047ec4c4 + -1;
    if (DAT_047ec4c4 == 0) {
      if ((uVar2 >> 6 & 1) == 0) {
        FUN_00103810();
      }
      else {
        DAT_04483020 = 0xffffffff;
      }
    }
    if (DAT_047ec2a0 != 0) {
      FUN_00120750(&DAT_047ec328);
    }
  }
  if (*(long *)((long)param_1 + 0x6a8) != 0) {
    FUN_0011f610();
  }
  memset(param_1,0,0x6d0);
  FUN_0011f610((long)param_1 - (ulong)*(uint *)((long)param_1 + -4));
  return;
}


