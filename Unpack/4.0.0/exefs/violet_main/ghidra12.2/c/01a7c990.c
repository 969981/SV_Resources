/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a7c990; name: FUN_01a7c990
 */


void FUN_01a7c990(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  long *plVar1;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined8 local_50;
  long *local_48;
  
  local_70 = 1;
  local_80 = (long *)0x0;
  uStack_78 = 1;
  local_68 = 0x25;
  local_60 = &DAT_cbf29ce484222645;
  puStack_58 = &DAT_03c886bc;
  local_50 = 0;
  local_48 = (long *)0x0;
  local_98 = *param_2;
  uStack_90 = param_2[1];
  local_88 = param_2[2];
  plVar1 = (long *)param_2[3];
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  local_80 = plVar1;
  uStack_78 = param_3;
  local_70 = param_4;
  local_68 = param_5;
  (**(code **)(*(long *)(DAT_0485a0c8 + 0x30) + 0x58))
            (param_1,(long *)(DAT_0485a0c8 + 0x30),&local_98);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  return;
}


