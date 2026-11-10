/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00263874; name: FUN_00263874
 */


undefined8 FUN_00263874(long *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    lVar2 = FUN_0049e770(PTR_FUN_047cba38,0x20);
    if (lVar2 != 0) {
                    /* try { // try from 002638bc to 002638c7 has its CatchHandler @ 002638e8 */
      FUN_00267c98(lVar2,0);
    }
    *param_1 = lVar2;
    iVar1 = *(int *)(lVar2 + 0x1c);
  }
  else {
    iVar1 = *(int *)(lVar2 + 0x1c);
  }
  if (iVar1 == 3) {
    return *(undefined8 *)(lVar2 + 0x10);
  }
  return 0;
}


