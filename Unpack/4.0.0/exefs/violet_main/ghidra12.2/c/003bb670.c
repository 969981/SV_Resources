/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003bb670; name: FUN_003bb670
 */


undefined8 FUN_003bb670(long param_1,undefined8 param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (((*(int *)(param_1 + 0x38) != 0) && (*(int *)(param_1 + 200) != 0)) &&
     (bVar1 = *(byte *)(*(long *)(param_1 + 0x5d0) + 0x250),
     (bVar1 != 0 && param_3 == 0) && bVar1 < 5)) {
    FUN_003c3950(param_1,0x6d,0x22d,0x6e,"external/openssl/ssl/statem/extensions.c",0x6ca);
    return 0;
  }
  if (((*(long *)(param_1 + 0x5d0) == 0) ||
      (uVar2 = *(byte *)(*(long *)(param_1 + 0x5d0) + 0x250) - 1, 3 < uVar2)) ||
     (((ulong)(uint)(0x200 << (ulong)(uVar2 & 0x1f)) <= *(ulong *)(param_1 + 0x6c0) ||
      (uVar3 = FUN_003a6be0(), (int)uVar3 != 0)))) {
    uVar3 = 1;
  }
  return uVar3;
}


