/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004f8830; name: FUN_004f8830
 */


uint FUN_004f8830(long param_1,long param_2,undefined *param_3,undefined8 param_4,long param_5)

{
  long *plVar1;
  undefined *puVar2;
  uint uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 ***local_80;
  undefined **ppuStack_78;
  undefined8 local_70;
  long local_68;
  undefined *local_60;
  undefined ***local_58;
  undefined **local_50;
  long *plStack_48;
  
  puVar2 = PTR_LAB_047cd728;
  puVar4 = *(ulong **)(param_3 + 0x30);
  if (puVar4 != (ulong *)0x0) {
    local_58 = (undefined ***)PTR_LAB_047cd728;
    local_60 = param_3;
    if (*puVar4 != 0xffffffffffffffff) {
      local_80 = &local_58;
      ppuStack_78 = &local_60;
      local_50 = (undefined **)&local_80;
      std::__call_once(puVar4,&local_50,(_func_void_void_ptr *)&LAB_004f9a40);
    }
  }
  if (*(int *)(param_3 + 0x38) == 0xb) {
    FUN_004a64c0(param_3);
  }
  uVar5 = FUN_004a5124(param_3);
  local_80 = (undefined8 ***)CONCAT17(local_80._7_1_,0x65756c61760a);
                    /* try { // try from 004f88d4 to 004f891b has its CatchHandler @ 004f8988 */
  lVar6 = FUN_004a5348(uVar5,&local_80);
  puVar4 = *(ulong **)(lVar6 + 0x30);
  if (puVar4 != (ulong *)0x0) {
    local_60 = puVar2;
    local_68 = lVar6;
    if (*puVar4 != 0xffffffffffffffff) {
      local_50 = &local_60;
      plStack_48 = &local_68;
      local_58 = &local_50;
      std::__call_once(puVar4,&local_58,(_func_void_void_ptr *)&LAB_004f9a40);
    }
  }
  *(undefined4 *)(param_5 + 8) =
       *(undefined4 *)(PTR_DAT_047cd750 + (ulong)*(uint *)(lVar6 + 0x38) * 4);
  if (((ulong)local_80 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_70);
  }
  uVar7 = FUN_004fa4b0(param_1 + 8,param_3);
  plVar1 = (long *)(param_2 + (uVar7 & 0xffffffff));
  uVar3 = (**(code **)(*plVar1 + 0x18))(plVar1,param_4,param_5);
  return uVar3 & 1;
}


