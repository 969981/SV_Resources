/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0120d878; name: FUN_0120d878
 */


void FUN_0120d878(long param_1)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    for (lVar3 = *(long *)(param_1 + 0x50); lVar3 != param_1 + 0x48; lVar3 = *(long *)(lVar3 + 8)) {
      FUN_0120d878(*(undefined8 *)(lVar3 + 0x10));
    }
    piVar2 = *(int **)(param_1 + 0x58);
    if ((((piVar2 != (int *)0x0) && (*(undefined8 **)(piVar2 + 2) != (undefined8 *)0x0)) &&
        (uVar1 = piVar2[1] + *piVar2, 0 < (int)uVar1)) &&
       ((**(code **)(*(long *)**(undefined8 **)(piVar2 + 2) + 0x38))(), uVar1 != 1)) {
      uVar4 = 1;
      do {
        (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + uVar4 * 8) + 0x38))();
        uVar4 = uVar4 + 1;
      } while (uVar1 != uVar4);
    }
  }
  return;
}


