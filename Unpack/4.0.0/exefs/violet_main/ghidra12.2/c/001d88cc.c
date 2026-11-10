/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001d88cc; name: FUN_001d88cc
 */


void FUN_001d88cc(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_30 [16];
  
  lVar2 = *(long *)(param_1 + 0x1e8);
  if (((*(int *)(param_1 + 0xef0) != *(int *)(param_1 + 0x1540)) ||
      (((uint)((ulong)*(undefined8 *)(param_1 + 0xf40) >> 0x34) & 1) !=
       (*(ushort *)(param_1 + 0x15a4) >> 0xc & 1))) ||
     (*(long *)(param_1 + 0xee8) != *(long *)(param_1 + 0x1538))) {
    FUN_001d9994(param_1,auStack_30);
    iVar1 = FUN_001fa120(param_2,0,*(undefined4 *)(lVar2 + 0x218),auStack_30);
    if (iVar1 != 0) {
      return;
    }
  }
  FUN_001efc1c(param_2);
  return;
}


