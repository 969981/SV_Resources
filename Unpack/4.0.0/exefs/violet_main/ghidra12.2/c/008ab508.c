/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008ab508; name: FUN_008ab508
 */


void FUN_008ab508(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 float *param_5,undefined4 param_6,undefined4 param_7)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((long *)*param_2 != (long *)0x0) {
    uVar2 = (**(code **)(*(long *)*param_2 + 0x30))();
    plVar3 = (long *)*param_2;
    if ((uVar2 & 1) == 0) {
      if (plVar3 != (long *)0x0) goto LAB_008ab5d8;
    }
    else {
      if (*(int *)((long)plVar3 + 0xd4) == 0) {
        return;
      }
      (**(code **)(*plVar3 + 0x18))(plVar3,param_3);
      FUN_00896e98(*param_2);
      *param_2 = 0;
    }
  }
  plVar3 = (long *)FUN_00896e78(0xd8);
  if (plVar3 != (long *)0x0) {
    *(undefined4 *)(plVar3 + 2) = 0;
    puVar1 = PTR_DAT_047d2100 + 0x10;
    plVar3[3] = 0;
    plVar3[4] = 0;
    plVar3[7] = 0;
    plVar3[5] = 0;
    plVar3[6] = 0;
    *plVar3 = (long)puVar1;
    plVar3[1] = -1;
    FUN_012abe74(plVar3 + 8);
    FUN_008f2548(plVar3 + 0x11);
    plVar3[0x1a] = -0x100000000;
  }
  *param_2 = (long)plVar3;
LAB_008ab5d8:
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  FUN_008f050c(&local_90);
  uStack_78 = CONCAT44(uStack_78._4_4_,(int)param_5[1]);
  uStack_88 = CONCAT44(param_6,(undefined4)uStack_88);
  local_80 = CONCAT44((int)*param_5,0xa0);
  local_90._0_2_ = CONCAT11(2,(undefined1)local_90);
  local_90 = CONCAT26(1,(undefined6)local_90);
  FUN_008b3eb0(*param_2,param_3,param_4,&local_90,param_7);
  return;
}


