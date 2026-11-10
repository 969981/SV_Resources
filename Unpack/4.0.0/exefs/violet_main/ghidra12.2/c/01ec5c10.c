/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ec5c10; name: FUN_01ec5c10
 */


void FUN_01ec5c10(long param_1,int param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  if (param_2 == 1) {
    plVar2 = *(long **)(param_1 + 0x50);
    for (plVar3 = *(long **)(param_1 + 0x48); plVar3 != plVar2; plVar3 = plVar3 + 2) {
      if (((*plVar3 != 0) && (lVar4 = *(long *)(*plVar3 + 0x10), lVar4 != 0)) &&
         (lVar1 = (**(code **)(*(long *)(lVar4 + -0x28) + 0x80))((long *)(lVar4 + -0x28)),
         lVar1 == param_3)) {
        if (*(char *)(lVar4 + 0xb0) == '\0') {
          *(undefined1 *)(lVar4 + 0xb0) = 2;
        }
        if (*(char *)(lVar4 + 0xb1) == '\0') {
          *(undefined1 *)(lVar4 + 0xb1) = 2;
        }
        if (*(char *)(lVar4 + 0xb2) == '\0') {
          *(undefined1 *)(lVar4 + 0xb2) = 2;
        }
        if (*(char *)(lVar4 + 0xb3) == '\0') {
          *(undefined1 *)(lVar4 + 0xb3) = 2;
        }
        if (*(char *)(lVar4 + 0xb4) == '\0') {
          *(undefined1 *)(lVar4 + 0xb4) = 2;
        }
        if (*(char *)(lVar4 + 0xb5) == '\0') {
          *(undefined1 *)(lVar4 + 0xb5) = 2;
        }
      }
    }
    plVar3 = *(long **)(param_1 + 0x80);
    plVar2 = *(long **)(param_1 + 0x88);
    while (plVar3 != plVar2) {
      if (((long *)*plVar3 == (long *)0x0) ||
         (lVar4 = (**(code **)(*(long *)*plVar3 + 0x80))(), lVar4 != param_3)) {
        plVar3 = plVar3 + 1;
      }
      else {
        plVar3 = (long *)FUN_00f50044((undefined8 *)(param_1 + 0x80),plVar3);
      }
      plVar2 = *(long **)(param_1 + 0x88);
    }
  }
  return;
}


