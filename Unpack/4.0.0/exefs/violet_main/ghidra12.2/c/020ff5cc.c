/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020ff5cc; name: FUN_020ff5cc
 */


long * FUN_020ff5cc(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  long *local_28;
  
  FUN_01247754(auStack_48,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  do {
    uVar3 = FUN_01460dbc(auStack_48,&local_28);
    if ((uVar3 & 1) == 0) {
      return (long *)0x0;
    }
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290);
    uVar1 = (**(code **)(*local_28 + 0x98))();
    iVar2 = FUN_011e2da8(uVar4,uVar1);
  } while ((iVar2 != 1) || (uVar3 = (**(code **)(*local_28 + 0x208))(), (uVar3 & 1) == 0));
  return local_28;
}


