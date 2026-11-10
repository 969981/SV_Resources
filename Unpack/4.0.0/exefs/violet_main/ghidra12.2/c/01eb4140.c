/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eb4140; name: FUN_01eb4140
 */


void FUN_01eb4140(undefined1 param_1 [16],undefined4 param_2,long param_3,undefined8 param_4,
                 undefined4 param_5,long param_6,undefined8 param_7)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  undefined4 uVar7;
  int local_9a0;
  undefined4 uStack_99c;
  undefined4 local_998;
  char local_990;
  undefined1 uStack_98f;
  undefined2 uStack_98e;
  undefined4 uStack_98c;
  undefined4 local_988;
  undefined4 uStack_984;
  uint uStack_980;
  undefined4 local_97c;
  long *local_78 [4];
  long local_58;
  undefined4 local_38;
  undefined4 local_34;
  
  local_58 = param_6;
  if ((*(long *)(param_3 + 0x50) == 0) ||
     (lVar6 = *(long *)(*(long *)(param_3 + 0x50) + 0x10), lVar6 == 0)) goto LAB_01eb41a8;
  pcVar2 = (char *)FUN_019462f4(lVar6 + -0x28);
  pcVar3 = (char *)FUN_019462f4(param_7);
  if ((*pcVar2 != *pcVar3) || (pcVar2[1] != pcVar3[1])) goto LAB_01eb41a8;
  FUN_01267a34(local_78,param_4,param_5);
  local_34 = 0;
  if (local_78[0] == (long *)0x0) goto switchD_01eb4240_default;
  uVar7 = FUN_01eb47c4(&local_990,&local_34);
  switch(local_34) {
  case 1:
    *(undefined4 *)(param_3 + 0xb0) = 2;
    FUN_01eaf3e0(param_3);
    break;
  case 2:
    uVar4 = FUN_01eaf650(param_3 + 0xd8);
    if ((((((uVar4 & 1) == 0) || (uVar4 = FUN_01eaf650(param_3 + 0xe3), (uVar4 & 1) == 0)) ||
         (uVar4 = FUN_01eaf650(param_3 + 0xee), (uVar4 & 1) == 0)) ||
        (uVar4 = FUN_01eaf650(param_3 + 0xf9), (uVar4 & 1) == 0)) &&
       (uVar4 = FUN_0148d1e8(param_3 + 0x38,&local_58), local_78[0] != (long *)0x0)) {
      cVar1 = *(char *)(*local_78[0] + local_78[0][2]);
      local_78[0][2] = local_78[0][2] + 1;
      if (cVar1 == -0x47) {
        FUN_01eb4814(&local_990,param_3 + (uVar4 & 0xff) * 0xb + 0xd8);
      }
      else {
        local_990 = '\x01';
        uStack_98f = 0;
        uStack_98e = 0;
      }
    }
    break;
  case 3:
    uVar7 = 3;
    goto LAB_01eb4634;
  case 4:
    FUN_015c52ec(&local_990);
    if (local_78[0] != (long *)0x0) {
      cVar1 = *(char *)(*local_78[0] + local_78[0][2]);
      local_78[0][2] = local_78[0][2] + 1;
      if (cVar1 == -0x47) {
        FUN_01eb4a64(&local_9a0,&local_990);
      }
      else {
        local_9a0 = 1;
      }
    }
    if (*(int *)(param_3 + 0x178) < CONCAT22(uStack_98e,CONCAT11(uStack_98f,local_990))) {
      memcpy((void *)(param_3 + 0x178),&local_990,0x912);
      FUN_01eafdb0((void *)(param_3 + 0x178),0);
      lVar6 = FUN_019965ec(param_3 + 0x38);
      if ((*(long *)(param_3 + 0x180) == lVar6) && (*(char *)(param_3 + 0xa90) == '\0')) {
        *(undefined1 *)(param_3 + 0xa90) = 1;
      }
    }
    break;
  case 5:
  case 0xb:
  case 0xd:
    if (*(long *)(param_3 + 0xb8) == param_6) {
      uVar5 = 0;
    }
    else if (*(long *)(param_3 + 0xc0) == param_6) {
      uVar5 = 1;
    }
    else if (*(long *)(param_3 + 200) == param_6) {
      uVar5 = 2;
    }
    else {
      uVar5 = 3;
      if (*(long *)(param_3 + 0xd0) != param_6) {
        uVar5 = 0xffffffff;
      }
    }
    local_990 = '\0';
    uStack_98f = 0;
    uStack_98c = 0;
    local_988 = 0;
    if (local_78[0] != (long *)0x0) {
      cVar1 = *(char *)(*local_78[0] + local_78[0][2]);
      local_78[0][2] = local_78[0][2] + 1;
      if (cVar1 == -0x47) {
        FUN_01eb48a8(&local_9a0,&local_990);
      }
      else {
        local_9a0 = 1;
      }
    }
    if ((uVar5 < 4) &&
       (lVar6 = param_3 + (ulong)uVar5 * 0xc,
       *(short *)(lVar6 + 0x104) < CONCAT11(uStack_98f,local_990))) {
      *(undefined4 *)(lVar6 + 0x10c) = local_988;
      *(ulong *)(lVar6 + 0x104) =
           CONCAT44(uStack_98c,CONCAT22(uStack_98e,CONCAT11(uStack_98f,local_990)));
    }
    break;
  case 6:
    FUN_015fc9ac(local_78,&local_990);
    FUN_01eaf920(param_3,(long)local_990,&local_58);
    break;
  case 7:
    local_988 = 0;
    uStack_984 = 0;
    uStack_980 = uStack_980 & 0xffffff00;
    local_990 = -1;
    if (local_78[0] != (long *)0x0) {
      cVar1 = *(char *)(*local_78[0] + local_78[0][2]);
      local_78[0][2] = local_78[0][2] + 1;
      if (cVar1 == -0x47) {
        FUN_01eb493c(&local_9a0,&local_990);
      }
      else {
        local_9a0 = 1;
      }
    }
    lVar6 = FUN_019965ec(param_3 + 0x38);
    if (CONCAT44(uStack_984,local_988) == lVar6) {
      *(undefined1 *)(param_3 + 0x70) = (undefined1)uStack_980;
    }
    local_9a0 = (int)local_990;
    FUN_01eb03e4(param_3 + 0x78,&local_9a0);
    break;
  case 8:
    if (*(long *)(param_3 + 0xb8) == param_6) {
      uVar5 = 0;
    }
    else if (*(long *)(param_3 + 0xc0) == param_6) {
      uVar5 = 1;
    }
    else if (*(long *)(param_3 + 200) == param_6) {
      uVar5 = 2;
    }
    else {
      uVar5 = 3;
      if (*(long *)(param_3 + 0xd0) != param_6) {
        uVar5 = 0xffffffff;
      }
    }
    local_990 = '\0';
    uStack_98f = 0;
    uStack_98c = 0;
    local_988 = 0;
    if (local_78[0] != (long *)0x0) {
      cVar1 = *(char *)(*local_78[0] + local_78[0][2]);
      local_78[0][2] = local_78[0][2] + 1;
      if (cVar1 == -0x47) {
        FUN_01eb48a8(&local_9a0,&local_990);
      }
      else {
        local_9a0 = 1;
      }
    }
    if ((uVar5 < 4) &&
       (lVar6 = param_3 + (ulong)uVar5 * 0xc,
       *(short *)(lVar6 + 0x104) < CONCAT11(uStack_98f,local_990))) {
      *(undefined4 *)(lVar6 + 0x10c) = local_988;
      *(ulong *)(lVar6 + 0x104) =
           CONCAT44(uStack_98c,CONCAT22(uStack_98e,CONCAT11(uStack_98f,local_990)));
      if (local_78[0] != (long *)0x0) {
        cVar1 = *(char *)(*local_78[0] + local_78[0][2]);
        local_78[0][2] = local_78[0][2] + 1;
        if (cVar1 == -0x47) {
          FUN_01eb49d0(&local_9a0,param_3 + (ulong)uVar5 * 0x10 + 0x134);
        }
        else {
          local_9a0 = 1;
        }
      }
    }
    break;
  case 9:
    local_990 = '\0';
    uStack_98f = 0;
    uStack_98e = 0;
    uStack_98c = 0;
    local_988 = CONCAT31(local_988._1_3_,0xff);
    uStack_984 = 0;
    uStack_980 = 0;
    local_97c = 0;
    FUN_015fc9ac(local_78,&local_988);
    if (local_78[0] != (long *)0x0) {
      FUN_01eb4af8(&local_9a0,&uStack_984);
    }
    local_990 = (char)local_58;
    uStack_98f = (undefined1)((ulong)local_58 >> 8);
    uStack_98e = (undefined2)((ulong)local_58 >> 0x10);
    uStack_98c = (undefined4)((ulong)local_58 >> 0x20);
    FUN_01eaff2c(param_3 + 0xb78,&local_990);
    break;
  case 10:
    uVar7 = 4;
    goto LAB_01eb4634;
  case 0xc:
    FUN_015c52ec(&local_990);
    if (local_78[0] != (long *)0x0) {
      cVar1 = *(char *)(*local_78[0] + local_78[0][2]);
      local_78[0][2] = local_78[0][2] + 1;
      if (cVar1 == -0x47) {
        FUN_01eb4a64(&local_9a0,&local_990);
      }
      else {
        local_9a0 = 1;
      }
    }
    memcpy((void *)(param_3 + 0x178),&local_990,0x912);
    FUN_01eafdb0((void *)(param_3 + 0x178),0);
    FUN_019482e4(&local_9a0);
    if (local_78[0] != (long *)0x0) {
      cVar1 = *(char *)(*local_78[0] + local_78[0][2]);
      local_78[0][2] = local_78[0][2] + 1;
      if (cVar1 == -0x47) {
        FUN_01eb4b30(&local_38,&local_9a0);
      }
      else {
        local_38 = 1;
      }
    }
    *(ulong *)(param_3 + 0xac0) = CONCAT44(uStack_99c,local_9a0);
    *(undefined4 *)(param_3 + 0xac8) = local_998;
    if (*(char *)(param_3 + 0xacc) == '\0') {
      *(undefined1 *)(param_3 + 0xacc) = 1;
    }
    uVar7 = 5;
LAB_01eb4634:
    *(undefined4 *)(param_3 + 0xb0) = uVar7;
    break;
  case 0xe:
    if ((((*(long *)(param_3 + 0xb8) == param_6) || (*(long *)(param_3 + 0xc0) == param_6)) ||
        (*(long *)(param_3 + 200) == param_6)) || (*(long *)(param_3 + 0xd0) == param_6)) {
      if (local_78[0] != (long *)0x0) {
        cVar1 = *(char *)(*local_78[0] + local_78[0][2]);
        local_78[0][2] = local_78[0][2] + 1;
        if (cVar1 == -0x47) {
          FUN_01eb4bc4(&local_9a0,&local_990);
          param_2 = CONCAT22(uStack_98e,CONCAT11(uStack_98f,local_990));
          uVar7 = uStack_98c;
        }
        else {
          local_9a0 = 1;
        }
      }
      *(undefined8 *)(param_3 + 0xaa8) = 0;
      *(ulong *)(param_3 + 0xaa0) = CONCAT44(uVar7,param_2);
      if (*(char *)(param_3 + 0xab0) == '\0') {
        *(undefined1 *)(param_3 + 0xab0) = 1;
      }
    }
  }
switchD_01eb4240_default:
  FUN_01267b4c(local_78);
LAB_01eb41a8:
  if ((*(long *)(param_3 + 0x60) != 0) &&
     (lVar6 = *(long *)(*(long *)(param_3 + 0x60) + 0x10), lVar6 != 0)) {
    FUN_019462f4(lVar6 + -0x28);
    FUN_019462f4(param_7);
  }
  return;
}


