/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012449f4; name: FUN_012449f4
 */


void FUN_012449f4(long param_1,undefined1 *param_2,short *param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long *local_120 [18];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined2 local_78;
  long *local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  
  FUN_01244bd8(*(undefined8 *)(param_1 + 0x38),0,*param_3);
  if (((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x499) >> 2 & 1) != 0) &&
     (*param_3 == 0xf4)) {
    FUN_01245690(param_1,param_3);
    return;
  }
  uVar3 = FUN_0124a808(param_1);
  if (((uVar3 & 1) == 0) || (uVar3 = FUN_014603fc(param_1), (uVar3 & 1) == 0)) {
    memset(local_120,0,0x8f);
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    local_78 = 0;
    lVar4 = *(long *)(*(long *)(param_1 + 0x78) + 0x1280);
    FUN_01244704(lVar4,local_120);
    local_70 = (long *)local_120;
    FUN_01243e3c(*(undefined8 *)(*(long *)(lVar4 + 0x78) + 0x17e0),local_58,&local_70);
    uVar1 = local_78 >> 8;
    local_78 = local_78 & 0xff00;
    if (local_80._6_1_ != '\0') {
      local_78 = CONCAT11((char)uVar1,1);
      plVar5 = local_120[0];
      while (plVar5 != (long *)0x0) {
        uVar6 = *(undefined8 *)(param_1 + 0x38);
        uVar2 = (**(code **)(*plVar5 + 0x98))(plVar5);
        FUN_01244bd8(uVar6,uVar2,*param_3);
        local_68 = 1;
        local_60 = 0;
        local_70 = plVar5;
        FUN_01244df8(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x400),local_58,&local_70);
        if ((**(char **)(*(long *)(param_1 + 0x40) + 0x28) == '\b') ||
           ((uVar3 = FUN_0124a808(param_1), (uVar3 & 1) != 0 &&
            (uVar3 = FUN_014603fc(param_1), (uVar3 & 1) != 0)))) break;
        uVar3 = (ulong)(byte)local_78;
        if (local_80._6_1_ <= (byte)local_78) break;
        local_78 = CONCAT11(local_78._1_1_,(byte)local_78 + 1);
        plVar5 = local_120[uVar3];
      }
    }
    FUN_0123fa64(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x2a0),local_58,&local_70);
  }
  else {
    FUN_0123fa64(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x2a0),&local_70,local_120);
    local_58[0] = local_70._0_1_;
  }
  *param_2 = local_58[0];
  return;
}


