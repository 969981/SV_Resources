/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00813b0c; name: FUN_00813b0c
 */


void FUN_00813b0c(long param_1)

{
  undefined2 uVar1;
  ulong uVar2;
  int local_50 [4];
  undefined1 auStack_40 [32];
  
  if ((*(char *)(param_1 + 0x7c) != '\0') &&
     (uVar2 = (**(code **)(**(long **)(param_1 + 0x80) + 0x20))(), (uVar2 & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x7c) = 0;
    (**(code **)(**(long **)(param_1 + 0x80) + 0x28))
              (local_50,*(long **)(param_1 + 0x80),param_1 + 0x88);
    if (local_50[0] == 0) {
      FUN_007935cc(param_1 + 0x858);
      uVar1 = *(undefined2 *)(param_1 + 0x60);
      FUN_0284e338(auStack_40);
      FUN_0081649c(param_1,1,auStack_40,uVar1,0);
      FUN_0284e3d4(auStack_40);
      return;
    }
    FUN_018ff39c(param_1 + 0x730,local_50);
    *(undefined1 *)(param_1 + 0x7c0) = 5;
  }
  return;
}


