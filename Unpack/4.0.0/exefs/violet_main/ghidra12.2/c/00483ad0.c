/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00483ad0; name: FUN_00483ad0
 */


undefined4 FUN_00483ad0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_34 [5];
  
  FUN_0048b9c0(param_1,0);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0x20);
  uVar2 = FUN_0043c280();
  iVar1 = FUN_0042c130(uVar3,(long)iVar1,local_34,0,uVar2,0);
  if (iVar1 == 0) {
    return 0;
  }
  return local_34[0];
}


