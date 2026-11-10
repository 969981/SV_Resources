/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021b1d5c; name: FUN_021b1d5c
 */


bool FUN_021b1d5c(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    plVar1 = (long *)(*(code *)**(undefined8 **)(lVar4 + 8))((undefined8 *)(lVar4 + 8));
    lVar2 = FUN_021b1de8();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        uVar3 = (**(code **)(*(long *)*param_1 + 0xc0))();
        if ((uVar3 & 1) == 0) {
          return *(long *)(lVar4 + 0xd0) == *(long *)*param_2;
        }
        return false;
      }
    }
  }
  return false;
}


