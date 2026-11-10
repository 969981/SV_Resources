/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003cb610; name: FUN_003cb610
 */


undefined8 FUN_003cb610(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong local_18;
  
  if ((param_3 == 0x101) || (uVar2 = FUN_003a1fe0(param_2), (int)uVar2 != 0)) {
    iVar1 = FUN_003a2be0(param_2,&local_18);
    uVar2 = 0;
    if ((iVar1 != 0) && (local_18 >> 0x1f == 0)) {
      uVar2 = 1;
      *(ulong *)(param_1 + 0x98) = local_18;
      *(undefined8 *)(param_1 + 0xa0) = 0;
    }
  }
  return uVar2;
}


