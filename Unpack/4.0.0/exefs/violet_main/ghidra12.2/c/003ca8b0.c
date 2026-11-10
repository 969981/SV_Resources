/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ca8b0; name: FUN_003ca8b0
 */


undefined8 FUN_003ca8b0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined4 local_24;
  undefined8 local_18;
  
  local_24 = 0;
  local_18 = FUN_003a2e80(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x120));
  lVar2 = FUN_003a2e90(&local_18);
  while( true ) {
    if (lVar2 == 0) {
      return 1;
    }
    iVar1 = FUN_003ca930(param_1,(uint)*(ushort *)(*(long *)(lVar2 + 8) + 0x10) * 2 -
                                 *(int *)(*(long *)(lVar2 + 8) + 0x28),&local_24);
    if (iVar1 < 1) break;
    lVar2 = FUN_003a2e90(&local_18);
  }
  return 0xffffffff;
}


