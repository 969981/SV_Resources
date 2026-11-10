/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034ec5cc; name: FUN_034ec5cc
 */


int FUN_034ec5cc(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  long *plVar2;
  undefined1 auStack_5c [4];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined4 local_3c;
  
  plVar2 = (long *)(param_1 + 8);
  if (*plVar2 == 0) {
    local_3c = 0xffffffff;
    local_58 = 0x100000000;
    local_40 = 0;
    local_48 = 0;
    local_50 = 0;
    iVar1 = (**(code **)(**(long **)PTR_DAT_047e2fc8 + 0x20))
                      (*(long **)PTR_DAT_047e2fc8,param_2,&local_58,2,plVar2,1);
    if (iVar1 == 1) {
      iVar1 = (**(code **)(*(long *)*plVar2 + 0x40))
                        (0,(long *)*plVar2,param_3,param_4,1,100,auStack_5c);
      if (iVar1 != 1) {
        (**(code **)(*(long *)*plVar2 + 0x10))();
        *plVar2 = 0;
      }
    }
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}


