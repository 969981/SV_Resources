/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001fc9c8; name: FUN_001fc9c8
 */


void FUN_001fc9c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 uint *param_5,undefined8 *param_6)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  ulong local_90 [3];
  long *plStack_78;
  ulong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *plStack_58;
  
  uVar3 = *param_5;
  if (1 < uVar3) {
    if (uVar3 == 2) {
      lVar2 = (long)param_5 + 9;
      if ((param_5[2] & 1) != 0) {
        lVar2 = *(long *)(param_5 + 6);
      }
      FUN_00203e7c(local_90,lVar2,&DAT_03c886bc);
      goto LAB_001fca68;
    }
    if (uVar3 != 3) {
      plStack_78 = (long *)FUN_01cf7e20();
      local_90[2] = 0;
      local_90[0] = 0;
      local_90[1] = 0;
      plStack_58 = (long *)FUN_01cf7e20();
      local_60 = 0;
      local_70 = 0;
      uStack_68 = 0;
      goto LAB_001fca68;
    }
  }
  FUN_00203e7c(local_90,&DAT_03c886bc,&DAT_03c886bc);
LAB_001fca68:
  plVar5 = *(long **)(*(long *)*param_6 + 0x238);
  plVar4 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0xc0,8);
  puVar1 = PTR_DAT_047cba78 + 0x10;
  plVar4[2] = 0;
  plVar4[3] = (long)plVar5;
  *plVar4 = (long)puVar1;
  plVar4[1] = 0;
  FUN_001fac10(plVar4 + 4,param_2,param_3,local_90,param_4,param_5,param_6);
  *param_1 = plVar4 + 4;
  param_1[1] = plVar4;
  if ((local_70 & 1) != 0) {
    (**(code **)(*plStack_58 + 0x18))(plStack_58,local_60,local_70 & 0xfffffffffffffffe,1);
  }
  if ((local_90[0] & 1) != 0) {
    (**(code **)(*plStack_78 + 0x18))(plStack_78,local_90[2],local_90[0] & 0xfffffffffffffffe,1);
  }
  return;
}


