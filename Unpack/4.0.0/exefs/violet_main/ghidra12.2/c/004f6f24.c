/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004f6f24; name: FUN_004f6f24
 */


void FUN_004f6f24(long param_1,long param_2,long param_3,int param_4)

{
  undefined4 uVar1;
  ulong *puVar2;
  long lVar3;
  undefined8 uVar4;
  long local_50;
  undefined *puStack_48;
  undefined **local_40;
  undefined1 *puStack_38;
  undefined ***local_28;
  
  puVar2 = *(ulong **)(param_3 + 0x30);
  if (puVar2 != (ulong *)0x0) {
    puStack_48 = PTR_LAB_047cd728;
    local_50 = param_3;
    if (*puVar2 != 0xffffffffffffffff) {
      local_40 = &puStack_48;
      local_28 = &local_40;
      puStack_38 = (undefined1 *)&local_50;
      std::__call_once(puVar2,&local_28,(_func_void_void_ptr *)&LAB_004f9a40);
    }
  }
  if (*(char *)(param_3 + 0x43) == '\0') {
    lVar3 = FUN_004f01c4(param_1,param_2,param_3);
    uVar1 = *(undefined4 *)(*(long *)(lVar3 + 8) + (long)param_4 * 4);
  }
  else {
    uVar1 = FUN_00522e2c(param_2 + (ulong)*(uint *)(param_1 + 0x28),*(undefined4 *)(param_3 + 0x44),
                         param_4);
  }
  uVar4 = FUN_004a86e0(param_3);
  FUN_004a551c(uVar4,uVar1);
  return;
}


