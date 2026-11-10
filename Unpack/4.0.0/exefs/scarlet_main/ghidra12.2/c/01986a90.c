/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01986a90; name: FUN_01986a90
 */


void FUN_01986a90(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 0x48);
  if (lVar3 != 0) {
    plVar1 = (long *)(*(code *)**(undefined8 **)(lVar3 + 0x28))((undefined8 *)(lVar3 + 0x28));
    lVar2 = FUN_01986b08();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        FUN_01f43874(param_1,lVar3);
        return;
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


