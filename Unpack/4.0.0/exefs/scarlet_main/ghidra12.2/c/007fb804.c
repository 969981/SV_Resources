/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007fb804; name: FUN_007fb804
 */


void FUN_007fb804(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_30 [16];
  
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = FUN_008101ac();
    if ((uVar1 & 1) != 0) {
      thunk_FUN_00811d34(*(undefined8 *)(param_1 + 0x20));
    }
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
      FUN_0080ff48(lVar2);
      FUN_007bfaa0(lVar2);
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
  }
  lVar2 = *(long *)(param_1 + 0xc88);
  if (lVar2 == 0) goto LAB_007fb884;
  if (*(int *)(lVar2 + 4) < 1) {
LAB_007fb870:
    FUN_0079213c(lVar2);
    FUN_007bfaa0(lVar2);
  }
  else {
    FUN_00792300(auStack_30,lVar2);
    lVar2 = *(long *)(param_1 + 0xc88);
    if (lVar2 != 0) goto LAB_007fb870;
  }
  *(undefined8 *)(param_1 + 0xc88) = 0;
LAB_007fb884:
  FUN_007fc9e0();
  *(undefined2 *)(param_1 + 8) = 0;
  return;
}


