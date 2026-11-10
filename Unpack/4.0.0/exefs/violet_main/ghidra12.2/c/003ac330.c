/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ac330; name: FUN_003ac330
 */


undefined8 FUN_003ac330(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  if (*(int *)(*(long *)(param_1 + 0xa8) + 0x104) != 0) {
    iVar1 = FUN_003a4570(param_1 + 0x948);
    if (((iVar1 == 0) && (iVar1 = FUN_003a45d0(param_1 + 0x948), iVar1 == 0)) &&
       ((param_2 != 0 || (iVar1 = FUN_003c38d0(param_1), iVar1 == 0)))) {
      FUN_003c3940(param_1);
      lVar2 = *(long *)(param_1 + 0xa8);
      *(undefined4 *)(lVar2 + 0x104) = 0;
      *(ulong *)(lVar2 + 0x108) =
           CONCAT44((int)((ulong)*(undefined8 *)(lVar2 + 0x108) >> 0x20) + 1,
                    (int)*(undefined8 *)(lVar2 + 0x108) + 1);
      return 1;
    }
  }
  return 0;
}


