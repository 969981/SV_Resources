/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002d7e7c; name: FUN_002d7e7c
 */


undefined8
FUN_002d7e7c(undefined8 param_1,long *param_2,undefined8 param_3,int param_4,int param_5,
            long *param_6,int param_7)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined7 uStack_88;
  undefined4 local_81;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  undefined4 local_38;
  long local_30 [2];
  
  plVar1 = local_30;
  if (0 < param_7) {
    plVar1 = param_6;
  }
  bVar4 = param_5 == 2;
  local_78 = 0;
  plVar2 = plVar1;
  if (!bVar4) {
    plVar2 = param_6;
  }
  local_70 = 0;
  if (bVar4 && param_7 < 1) {
    param_7 = 1;
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_30[0] = 0;
  local_30[1] = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  local_81 = 0;
                    /* try { // try from 002d7f00 to 002d7f07 has its CatchHandler @ 002d7fa0 */
  local_a8 = param_1;
  uVar5 = FUN_002d7ba4(&local_a8,param_2,param_3,param_4 == 1 || bVar4,param_5 != 0,plVar2,param_7);
  if (((uVar5 & 1) == 0) || ((param_5 == 2 && (*plVar1 + plVar1[1] != *param_2 + param_2[1])))) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  bVar4 = local_48 != 0;
  local_48 = 0;
  if (bVar4) {
    local_48 = 0;
    FUN_0049e790(PTR_LAB_047cba48);
  }
  lVar3 = local_58;
  local_58 = 0;
  if (lVar3 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  lVar3 = local_68;
  local_68 = 0;
  if (lVar3 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  return uVar6;
}


