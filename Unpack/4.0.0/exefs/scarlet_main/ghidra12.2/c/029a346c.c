/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029a346c; name: FUN_029a346c
 */


void FUN_029a346c(long param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  while (lVar3 != param_2) {
    pcVar2 = *(code **)(lVar3 + -0x78);
    if (pcVar2 != (code *)0x0) {
      *(undefined8 *)(lVar3 + -0x70) = 0;
      *(undefined8 *)(lVar3 + -0x68) = 0;
      *(undefined8 *)(lVar3 + -0x80) = 0;
      *(undefined8 *)(lVar3 + -0x78) = 0;
      (*pcVar2)(lVar3 + -0x60);
    }
    plVar1 = (long *)(lVar3 + -0x98);
    lVar3 = lVar3 + -0xb0;
    if ((long *)*plVar1 != (long *)0x0) {
      (**(code **)(*(long *)*plVar1 + 0x20))();
    }
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


