/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00896a48; name: FUN_00896a48
 */


void FUN_00896a48(long param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_68;
  ulong uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined2 local_28;
  ushort local_26;
  
  plVar4 = *(long **)(param_1 + 8);
  if ((*(code **)(param_2 + 0x178) == (code *)0x0) ||
     (uVar1 = (**(code **)(param_2 + 0x178))
                        (param_3,plVar4 + 8,plVar4 + 1,*(long *)(param_1 + 0x20) + 8,plVar4 + 0x11,
                         *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_2 + 0x180)),
     (uVar1 & 1) == 0)) {
    lVar3 = plVar4[3];
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    local_48 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    FUN_008f0584(&local_68);
    local_68 = 0;
    (**(code **)(*plVar4 + 0x20))(&local_90,plVar4);
    uStack_60 = (ulong)CONCAT24((undefined2)local_90,(undefined4)uStack_60);
    (**(code **)(*plVar4 + 0x20))(&local_90,plVar4);
    local_70 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_58 = CONCAT44(local_58._4_4_,(uint)local_90._2_2_);
    local_90 = 0;
    uStack_88 = 0;
    FUN_008f0584(&local_90);
    local_90 = 0;
    (**(code **)(**(long **)(param_1 + 0x20) + 0x20))(&local_28);
    uStack_88 = (ulong)CONCAT24(local_28,(undefined4)uStack_88);
    (**(code **)(**(long **)(param_1 + 0x20) + 0x20))(&local_28);
    local_80 = CONCAT44(local_80._4_4_,(uint)local_26);
    FUN_008f0bec(param_3,lVar3,&local_68,uVar2,&local_90,0);
  }
  return;
}


