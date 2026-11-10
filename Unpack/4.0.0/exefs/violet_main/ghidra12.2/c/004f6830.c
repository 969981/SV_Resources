/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004f6830; name: FUN_004f6830
 */


undefined8 FUN_004f6830(long param_1,long param_2,long param_3,int param_4)

{
  ulong *puVar1;
  undefined8 uVar2;
  long lVar3;
  long local_50;
  undefined *puStack_48;
  undefined **local_40;
  undefined1 *puStack_38;
  undefined ***local_28;
  
  puVar1 = *(ulong **)(param_3 + 0x30);
  if (puVar1 != (ulong *)0x0) {
    puStack_48 = PTR_LAB_047cd728;
    local_50 = param_3;
    if (*puVar1 != 0xffffffffffffffff) {
      local_40 = &puStack_48;
      local_28 = &local_40;
      puStack_38 = (undefined1 *)&local_50;
      std::__call_once(puVar1,&local_28,(_func_void_void_ptr *)&LAB_004f9a40);
    }
  }
  if (*(char *)(param_3 + 0x43) == '\0') {
    lVar3 = FUN_004f0a68(param_1,param_2,param_3);
    uVar2 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + (long)param_4 * 8 + 8);
  }
  else {
    uVar2 = FUN_00523104(param_2 + (ulong)*(uint *)(param_1 + 0x28),*(undefined4 *)(param_3 + 0x44),
                         param_4);
  }
  return uVar2;
}


