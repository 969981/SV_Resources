/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0296aad0; name: FUN_0296aad0
 */


uint FUN_0296aad0(long param_1,int param_2)

{
  undefined1 uVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  int local_118 [2];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined4 local_e6;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  uint local_b8 [10];
  undefined8 local_90 [6];
  
  lVar12 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x20);
  iVar11 = 0;
  if (lVar12 != 0) {
    iVar11 = *(int *)(lVar12 + 0xc);
  }
  if (iVar11 == param_2) {
    local_90[0] = 0;
    local_90[3] = 0;
    local_90[4] = 0;
    local_90[1] = 0;
    local_90[2] = 0;
    uVar1 = FUN_0293d780(param_1,param_2);
    uVar7 = FUN_029439e0(param_1,0);
    uVar14 = 0;
    if ((uVar7 & 1) != 0) {
      uVar7 = FUN_029439f0(param_1,uVar1,0);
      uVar14 = 0;
      if ((uVar7 & 1) != 0) {
        local_90[0] = FUN_02943a00(param_1,0);
        uVar14 = 1;
      }
    }
    uVar7 = FUN_029439e0(param_1,1);
    if (((uVar7 & 1) != 0) && (uVar7 = FUN_029439f0(param_1,uVar1,1), (uVar7 & 1) != 0)) {
      uVar8 = FUN_02943a00(param_1,1);
      local_90[uVar14] = uVar8;
      uVar14 = (ulong)((int)uVar14 + 1);
    }
    uVar7 = FUN_029439e0(param_1,2);
    if (((uVar7 & 1) != 0) && (uVar7 = FUN_029439f0(param_1,uVar1,2), (uVar7 & 1) != 0)) {
      uVar8 = FUN_02943a00(param_1,2);
      local_90[uVar14] = uVar8;
      uVar14 = (ulong)((int)uVar14 + 1);
    }
    uVar7 = FUN_029439e0(param_1,3);
    if (((uVar7 & 1) != 0) && (uVar7 = FUN_029439f0(param_1,uVar1,3), (uVar7 & 1) != 0)) {
      uVar8 = FUN_02943a00(param_1,3);
      local_90[uVar14] = uVar8;
      uVar14 = (ulong)((int)uVar14 + 1);
    }
    uVar7 = FUN_029439e0(param_1,4);
    if (((uVar7 & 1) == 0) || (uVar7 = FUN_029439f0(param_1,uVar1,4), (uVar7 & 1) == 0)) {
      if ((int)uVar14 != 0) goto LAB_0296ac78;
    }
    else {
      uVar8 = FUN_02943a00(param_1,4);
      local_90[uVar14] = uVar8;
      uVar14 = (ulong)((int)uVar14 + 1);
LAB_0296ac78:
      uVar7 = 0;
      uVar6 = 0;
      do {
        uVar8 = local_90[uVar7];
        bVar2 = FUN_00f7e274(uVar8);
        if (bVar2 != 0) {
          uVar13 = 0;
          do {
            plVar9 = (long *)FUN_0124e4c0(uVar8,uVar13);
            uVar5 = (**(code **)(*plVar9 + 0x98))();
            cVar3 = FUN_02943aa0(param_1,uVar5);
            if ((((cVar3 == '\n') || (uVar10 = FUN_02942730(param_1,uVar5), (uVar10 & 1) != 0)) &&
                (sVar4 = FUN_02943740(param_1,uVar5), uVar6 < 10)) && (sVar4 != 0)) {
              local_b8[uVar6] = uVar5;
              uVar6 = uVar6 + 1;
            }
            uVar13 = uVar13 + 1;
          } while (bVar2 != uVar13);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar14);
      if (uVar6 != 0) {
        local_110 = 0;
        uStack_108 = 0;
        local_118[1] = 0x31;
        local_e6 = 0;
        local_f0 = 0;
        local_c0 = 0;
        local_e8 = (undefined1)uVar6;
        local_100 = 0;
        uStack_f8 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        local_d0 = 0;
        uStack_c8 = 0;
        local_118[0] = param_2;
        memcpy(&local_110,local_b8,(ulong)uVar6 << 2);
        uVar6 = FUN_01852330(param_1,local_118);
        goto LAB_0296adac;
      }
    }
    lVar12 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x2d0);
    if (((lVar12 != 0) && (*(byte *)(lVar12 + 10) < 2)) &&
       (*(undefined4 *)(lVar12 + 0xc) = 1, *(byte *)(lVar12 + 10) == 1)) {
      uVar6 = 0;
      *(undefined1 *)(lVar12 + 10) = 2;
      goto LAB_0296adac;
    }
  }
  uVar6 = 0;
LAB_0296adac:
  return uVar6 & 1;
}


