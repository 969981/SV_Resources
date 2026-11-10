/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019789f0; name: FUN_019789f0
 */


void FUN_019789f0(long param_1,int param_2,byte param_3)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  
  puVar2 = (uint *)FUN_011e2dd4(*(undefined8 *)
                                 (*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8) + 0x50
                                 ));
  if (puVar2 == (uint *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *puVar2;
    if (4 < (int)uVar1) {
      uVar1 = 0;
    }
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x250);
  if ((uVar1 & 0xff) < 5) {
    uVar5 = (ulong)uVar1 & 0xff;
    piVar4 = (int *)(lVar3 + uVar5 * 0x60 + 0x10);
    if ((((*piVar4 == param_2) ||
         (piVar4 = (int *)(lVar3 + uVar5 * 0x60 + 0x20), *piVar4 == param_2)) ||
        (piVar4 = (int *)(lVar3 + uVar5 * 0x60 + 0x30), *piVar4 == param_2)) ||
       (((piVar4 = (int *)(lVar3 + uVar5 * 0x60 + 0x40), *piVar4 == param_2 ||
         (piVar4 = (int *)(lVar3 + uVar5 * 0x60 + 0x50), *piVar4 == param_2)) ||
        (piVar4 = (int *)(lVar3 + uVar5 * 0x60 + 0x60), *piVar4 == param_2)))) {
      *(byte *)((long)piVar4 + 10) = param_3 & 1;
    }
  }
  return;
}


