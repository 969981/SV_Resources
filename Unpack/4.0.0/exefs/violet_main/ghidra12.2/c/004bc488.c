/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004bc488; name: FUN_004bc488
 */


void FUN_004bc488(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  ulong *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined **local_58;
  long *plStack_50;
  undefined8 local_48;
  long local_40;
  undefined *puStack_38;
  undefined ***local_28;
  
  iVar1 = *(int *)(*(long *)(param_2 + 0x78) + 0x50);
  if (iVar1 != 0) {
    puVar2 = *(ulong **)(param_2 + 0x30);
    if (puVar2 != (ulong *)0x0) {
      puStack_38 = PTR_LAB_047cd728;
      local_40 = param_2;
      if (*puVar2 != 0xffffffffffffffff) {
        local_58 = &puStack_38;
        plStack_50 = &local_40;
        local_28 = &local_58;
        std::__call_once(puVar2,&local_28,(_func_void_void_ptr *)&LAB_004c0750);
      }
    }
    if ((*(uint *)(param_2 + 0x38) < 0x13) &&
       ((1 << (ulong)(*(uint *)(param_2 + 0x38) & 0x1f) & 0x50058U) != 0)) {
      if (1 < iVar1 - 1U) {
        uVar5 = *(undefined8 *)(param_2 + 8);
        lVar3 = FUN_004ca5c0();
        FUN_004a8ec0(&local_58,
                     "Illegal jstype for int64, uint64, sint64, fixed64 or sfixed64 field: ",
                     *(undefined8 *)(*(long *)(lVar3 + 0x30) + (long)iVar1 * 0x28));
        plVar4 = *(long **)(param_1 + 0x10);
        if (plVar4 != (long *)0x0) {
                    /* try { // try from 004bc560 to 004bc573 has its CatchHandler @ 004bc5c8 */
          (**(code **)(*plVar4 + 0x10))(plVar4,param_1 + 0x38,uVar5,param_3,2,&local_58);
        }
        *(undefined1 *)(param_1 + 0x30) = 1;
        if (((ulong)local_58 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_48);
        }
      }
    }
    else {
      FUN_004aa7f4(param_1,*(undefined8 *)(param_2 + 8),param_3,2,
                   "jstype is only allowed on int64, uint64, sint64, fixed64 or sfixed64 fields.");
    }
  }
  return;
}


