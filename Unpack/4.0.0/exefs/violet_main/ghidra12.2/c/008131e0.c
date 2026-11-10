/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008131e0; name: FUN_008131e0
 */


void FUN_008131e0(long param_1)

{
  undefined2 uVar1;
  long lVar2;
  undefined1 auStack_40 [32];
  
  if ((*(long *)(param_1 + 0x6f0) != 0) && (0 < *(int *)(*(long *)(param_1 + 0x6f0) + 4))) {
    uVar1 = *(undefined2 *)(param_1 + 0x60);
    FUN_0284e338(auStack_40);
    FUN_0081649c(param_1,6,auStack_40,uVar1,0);
    FUN_0284e3d4(auStack_40);
    FUN_00792300(auStack_40,*(undefined8 *)(param_1 + 0x6f0));
  }
  lVar2 = *(long *)(param_1 + 0x6f8);
  *(undefined1 *)(lVar2 + 0x48) = 1;
  FUN_00792f30(lVar2,2);
  FUN_00818664(*(undefined8 *)(param_1 + 0x6f8));
  FUN_00812cc8(param_1);
  return;
}


