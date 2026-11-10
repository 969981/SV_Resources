/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004f71c0; name: FUN_004f71c0
 */


void FUN_004f71c0(long param_1,long param_2,long param_3,int param_4)

{
  ulong *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long local_50;
  undefined *puStack_48;
  undefined **local_40;
  undefined1 *puStack_38;
  undefined ***local_28;
  
  puVar1 = *(ulong **)(param_3 + 0x30);
  if ((puVar1 != (ulong *)0x0) &&
     (puStack_48 = PTR_LAB_047cd728, local_50 = param_3, *puVar1 != 0xffffffffffffffff)) {
    local_40 = &puStack_48;
    local_28 = &local_40;
    puStack_38 = (undefined1 *)&local_50;
    std::__call_once(puVar1,&local_28,(_func_void_void_ptr *)&LAB_004f9a40);
  }
  if (*(int *)(*(long *)(param_3 + 0x28) + 0x3c) != 3) {
    uVar2 = FUN_004a86e0(param_3);
    lVar3 = FUN_004a5400(uVar2,param_4);
    if (lVar3 == 0) {
      uVar4 = *(ulong *)(param_2 + (ulong)*(uint *)(param_1 + 0x24));
      if ((uVar4 & 1) == 0) {
        lVar3 = FUN_00264e54();
      }
      else {
        lVar3 = (uVar4 & 0xfffffffffffffffe) + 8;
      }
      FUN_00514e00(lVar3,*(undefined4 *)(param_3 + 0x44),(long)param_4);
      return;
    }
  }
  FUN_004f70dc(param_1,param_2,param_3,param_4);
  return;
}


