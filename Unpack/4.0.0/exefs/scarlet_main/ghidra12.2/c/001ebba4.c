/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ebba4; name: FUN_001ebba4
 */


void FUN_001ebba4(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(param_1 + 0x1158);
  if ((lVar1 != 0) &&
     ((*(byte **)(param_1 + 0xe8) == (byte *)0x0 || ((**(byte **)(param_1 + 0xe8) >> 4 & 1) == 0))))
  {
    if (*(long *)(param_1 + 0xbf8) != 0) {
      lVar2 = 0;
      uVar3 = 0;
      do {
        FUN_001ebb44(lVar1 + lVar2);
        uVar3 = uVar3 + 1;
        lVar2 = lVar2 + 0xb8;
        lVar1 = *(long *)(param_1 + 0x1158);
      } while (uVar3 < *(ulong *)(param_1 + 0xbf8));
    }
    FUN_001ec308();
    *(undefined8 *)(param_1 + 0x1158) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x001ebc28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)PTR_PTR_047cb968 + 0x80))(param_1);
  return;
}


