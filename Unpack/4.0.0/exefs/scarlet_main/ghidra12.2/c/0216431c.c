/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0216431c; name: FUN_0216431c
 */


void FUN_0216431c(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 local_28;
  
  lVar2 = *(long *)(param_1 + 0x10);
  while (lVar2 != param_2) {
    *(undefined8 **)(param_1 + 0x10) = (undefined8 *)(lVar2 + -0x90);
    pcVar1 = *(code **)(lVar2 + -0x50);
    if (pcVar1 != (code *)0x0) {
      local_28 = *(undefined8 *)(lVar2 + -0x10);
      (*pcVar1)(lVar2 + -0x30,&local_28);
    }
    pcVar1 = *(code **)(lVar2 + -0x48);
    if (pcVar1 != (code *)0x0) {
      *(undefined8 *)(lVar2 + -0x40) = 0;
      *(undefined8 *)(lVar2 + -0x38) = 0;
      *(undefined8 *)(lVar2 + -0x50) = 0;
      *(undefined8 *)(lVar2 + -0x48) = 0;
      (*pcVar1)(lVar2 + -0x30);
    }
    pcVar1 = *(code **)(lVar2 + -0x88);
    if (pcVar1 != (code *)0x0) {
      *(undefined8 *)(lVar2 + -0x80) = 0;
      *(undefined8 *)(lVar2 + -0x78) = 0;
      *(undefined8 *)(lVar2 + -0x90) = 0;
      *(undefined8 *)(lVar2 + -0x88) = 0;
      (*pcVar1)(lVar2 + -0x70);
    }
    lVar2 = *(long *)(param_1 + 0x10);
  }
  return;
}


