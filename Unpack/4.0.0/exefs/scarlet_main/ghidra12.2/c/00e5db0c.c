/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e5db0c; name: FUN_00e5db0c
 */


void FUN_00e5db0c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = *param_1;
  FUN_00e5dbb0();
  plVar2 = *(long **)(lVar4 + 0xa8);
  lVar4 = *(long *)(lVar4 + 0xb0);
  plVar1 = plVar2;
  if (lVar4 != 0) {
    plVar1 = plVar2 + lVar4;
  }
  if (plVar2 != plVar1) {
    if ((undefined8 *)*plVar2 != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)*plVar2)();
    }
    if (plVar2 + 1 != plVar1) {
      puVar3 = (undefined8 *)plVar2[1];
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)();
      }
      for (plVar2 = plVar2 + 2; plVar2 != plVar1; plVar2 = plVar2 + 1) {
        if ((undefined8 *)*plVar2 != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)*plVar2)();
        }
      }
    }
  }
  return;
}


