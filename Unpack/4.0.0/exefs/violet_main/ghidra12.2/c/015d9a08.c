/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015d9a08; name: FUN_015d9a08
 */


undefined8 FUN_015d9a08(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (((uint)param_2 & 0xff) < 0xb) {
    lVar1 = FUN_015d9a7c(*(undefined8 *)(param_1 + 0x50),param_2,2);
    if (((lVar1 != 0) && (uVar2 = FUN_015d9a74(), (uVar2 & 1) != 0)) ||
       ((lVar1 = FUN_015d9a7c(*(undefined8 *)(param_1 + 0x50),param_2 & 0xffffffff,1), lVar1 != 0 &&
        (uVar2 = FUN_015d9a74(), (uVar2 & 1) != 0)))) {
      return 1;
    }
  }
  return 0;
}


