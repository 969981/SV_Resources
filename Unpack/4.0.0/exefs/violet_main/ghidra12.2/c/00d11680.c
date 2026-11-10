/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d11680; name: FUN_00d11680
 */


void FUN_00d11680(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  if (lVar2 != lVar1) {
    if (*(char *)(lVar2 + -0x28) != '\0') {
      if (*(long **)(lVar2 + -8) != (long *)0x0) {
        (**(code **)(**(long **)(lVar2 + -8) + 0x20))();
      }
      *(undefined1 *)(lVar2 + -0x28) = 0;
    }
    if (lVar2 + -0x30 != lVar1) {
      if (*(char *)(lVar2 + -0x58) != '\0') {
        if (*(long **)(lVar2 + -0x38) != (long *)0x0) {
          (**(code **)(**(long **)(lVar2 + -0x38) + 0x20))();
        }
        *(undefined1 *)(lVar2 + -0x58) = 0;
      }
      if (lVar2 + -0x60 != lVar1) {
        do {
          if (*(char *)(lVar2 + -0x88) != '\0') {
            if (*(long **)(lVar2 + -0x68) != (long *)0x0) {
              (**(code **)(**(long **)(lVar2 + -0x68) + 0x20))();
            }
            *(undefined1 *)(lVar2 + -0x88) = 0;
          }
          lVar2 = lVar2 + -0x30;
        } while (lVar1 + 0x60 != lVar2);
      }
    }
  }
  param_1[1] = lVar1;
  return;
}


