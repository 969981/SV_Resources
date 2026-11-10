/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005bac94; name: FUN_005bac94
 */


void FUN_005bac94(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x68;
    FUN_027c2bd0(lVar2 + -0x20,*(undefined8 *)(lVar2 + -0x18));
    if ((*(byte *)(lVar2 + -0x40) & 1) != 0) {
      (**(code **)(**(long **)(lVar2 + -0x28) + 0x18))
                (*(long **)(lVar2 + -0x28),*(undefined8 *)(lVar2 + -0x30),
                 *(ulong *)(lVar2 + -0x40) & 0xfffffffffffffffe,1);
    }
    FUN_01cfa410(lVar2 + -0x48);
    if ((*(byte *)(lVar2 + -0x68) & 1) != 0) {
      (**(code **)(**(long **)(lVar2 + -0x50) + 0x18))
                (*(long **)(lVar2 + -0x50),*(undefined8 *)(lVar2 + -0x58),
                 *(ulong *)(lVar2 + -0x68) & 0xfffffffffffffffe,1);
    }
    lVar2 = param_1[2];
  }
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005bad44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)param_1[4] + 0x18))(*(long **)param_1[4],lVar1,param_1[3] - lVar1,8);
  return;
}


