/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0012ead0; name: FUN_0012ead0
 */


long FUN_0012ead0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 ,undefined4 param_6)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long local_130;
  undefined8 local_128;
  undefined1 *local_120;
  long *local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined2 local_f0;
  undefined1 uStack_ee;
  undefined4 uStack_ed;
  undefined1 auStack_e8 [16];
  int local_d8;
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  long lStack_88;
  long local_80;
  long local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined1 local_68;
  undefined2 local_67;
  undefined1 local_65;
  
  lVar3 = FUN_00129640(param_1,1);
  plVar7 = *(long **)(param_1 + 0x10);
  *plVar7 = lVar3;
  *(undefined1 *)(plVar7 + 1) = 0x46;
  FUN_00126fc0(param_1);
  local_98 = FUN_0013ca00(param_1);
  puVar8 = *(undefined8 **)(param_1 + 0x10);
  *puVar8 = local_98;
  *(undefined1 *)(puVar8 + 1) = 0x45;
  FUN_00126fc0(param_1);
  lVar4 = FUN_00129c10(param_1);
  *(long *)(lVar3 + 0x18) = lVar4;
  local_130 = lVar4;
  if (((*(byte *)(lVar3 + 9) >> 5 & 1) != 0) && ((*(byte *)(lVar4 + 9) & 0x18) != 0)) {
    FUN_00129d70(param_1,lVar3,lVar4);
  }
  lVar5 = FUN_0013c0f0(param_1,param_5);
  *(long *)(lVar4 + 0x70) = lVar5;
  if (((*(byte *)(lVar4 + 9) >> 5 & 1) != 0) && ((*(byte *)(lVar5 + 9) & 0x18) != 0)) {
    FUN_00129d70(param_1,lVar4,lVar5);
  }
  *(undefined4 *)(param_4 + 0x28) = 0;
  *(undefined4 *)(param_4 + 0x18) = 0;
  *(undefined4 *)(param_4 + 8) = 0;
  local_a0 = param_3;
  local_90 = param_4;
  FUN_00138990(param_1,auStack_e8,param_2,*(undefined8 *)(lVar4 + 0x70),param_6);
  local_128 = local_b8;
  local_110 = 0;
  local_108 = *(undefined4 *)(lVar4 + 0x2c);
  local_104 = 0;
  local_fc = 0;
  local_f0 = 0;
  uStack_ee = 0;
  uStack_ed = 0;
  local_f8 = *(undefined4 *)(local_90 + 8);
  local_f4 = *(undefined4 *)(local_90 + 0x28);
  local_118 = (long *)0x0;
  *(long *)(lVar4 + 0x70) = lStack_88;
  local_120 = auStack_e8;
  local_b8 = (undefined1 *)&local_130;
  if (((*(byte *)(lVar4 + 9) >> 5 & 1) != 0) &&
     (local_b8 = (undefined1 *)&local_130, (*(byte *)(lStack_88 + 9) & 0x18) != 0)) {
    local_b8 = (undefined1 *)&local_130;
    FUN_00129d70(local_b0,lVar4);
  }
  *(undefined1 *)(lVar4 + 0xc) = 2;
  local_68 = uStack_ee;
  local_67 = 0;
  local_70 = *(undefined4 *)(*(long *)(local_120 + 0x58) + 0x28);
  uStack_6c = *(undefined4 *)(*(long *)(local_120 + 0x58) + 0x18);
  if (local_118 == (long *)0x0) {
    local_65 = false;
  }
  else {
    local_65 = *(char *)((long)local_118 + 0x13) != '\0';
  }
  local_78 = (long)local_118;
  local_118 = &local_78;
  *(undefined1 *)(local_130 + 0xb) = 1;
  FUN_00133250(&local_130,0x51,0,0,0,0);
  lVar4 = local_130;
  if ((byte)uStack_ed == -1) {
    FUN_0012efb0(&local_130,0xff,"upvalues");
  }
  else {
    iVar1 = *(int *)(local_130 + 0x10);
    lVar5 = (long)iVar1;
    lVar6 = FUN_0012d3b0(*(undefined8 *)(local_120 + 0x38),*(undefined8 *)(local_130 + 0x50),
                         (byte)uStack_ed,local_130 + 0x10,0x10,0xff,"upvalues");
    *(long *)(lVar4 + 0x50) = lVar6;
    if (iVar1 < *(int *)(lVar4 + 0x10)) {
      lVar9 = lVar5 << 4;
      do {
        *(undefined8 *)(lVar6 + lVar9) = 0;
        lVar6 = *(long *)(lVar4 + 0x50);
        lVar5 = lVar5 + 1;
        lVar9 = lVar9 + 0x10;
      } while (lVar5 < *(int *)(lVar4 + 0x10));
    }
    plVar7 = (long *)(lVar6 + (ulong)(byte)uStack_ed * 0x10);
    uStack_ed = CONCAT31(uStack_ed._1_3_,(byte)uStack_ed + 1);
    *(undefined2 *)(plVar7 + 1) = 1;
    *(undefined1 *)((long)plVar7 + 10) = 0;
    *plVar7 = local_80;
    if (((*(byte *)(local_130 + 9) >> 5 & 1) != 0) && ((*(byte *)(local_80 + 9) & 0x18) != 0)) {
      FUN_00129d70(local_b0);
    }
    FUN_00138a10(auStack_e8);
    do {
      iVar1 = local_d8;
      if (local_d8 - 0x103U < 0x1e && (1 << (ulong)(local_d8 - 0x103U & 0x1f) & 0x20020007U) != 0)
      break;
      FUN_0012f030(auStack_e8);
    } while (iVar1 != 0x111);
    if (local_d8 == 0x120) {
      FUN_0012ee20(auStack_e8);
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
      return lVar3;
    }
  }
  FUN_001329f0(auStack_e8,0x120);
                    /* WARNING: Does not return */
  pcVar2 = (code *)UndefinedInstructionException(0,0x12ee18);
  (*pcVar2)();
}


