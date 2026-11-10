/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008a59cc; name: FUN_008a59cc
 */


void FUN_008a59cc(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long local_20;
  long lStack_18;
  
  lVar2 = *(long *)(param_1 + 0x38);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0xc) != 0)) {
    plVar1 = (long *)(*(long *)(*(long *)(param_3 + 200) + 0x10) +
                     (long)*(int *)(*(long *)(param_3 + 200) + 0x30) * 0x10);
    lStack_18 = plVar1[1];
    local_20 = *plVar1 + (ulong)*(uint *)(lVar2 + 0xc);
    FUN_008f1150(param_2,*(undefined4 *)
                          (*(long *)(*(long *)(param_1 + 0x20) + 0x20) +
                          (ulong)*(ushort *)(param_1 + 0x4a) * 4),3,&local_20,
                 *(undefined4 *)(lVar2 + 8));
  }
  return;
}


