/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0048abe0; name: FUN_0048abe0
 */


undefined8 FUN_0048abe0(long param_1,long param_2,undefined8 *param_3,undefined4 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_0043c280();
  if ((lVar1 != param_2) || ((*(uint *)(param_1 + 0xe0) & 0x100100) != 0x100)) {
    uVar2 = FUN_0048ad30(PTR_DAT_047cd548,param_2,param_1,param_3,param_4);
    return uVar2;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0x14;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x138);
  uVar2 = *(undefined8 *)(param_1 + 0x130);
  *(undefined4 *)(param_3 + 2) = *(undefined4 *)(param_1 + 0x140);
  param_3[1] = uVar3;
  *param_3 = uVar2;
  return 1;
}


