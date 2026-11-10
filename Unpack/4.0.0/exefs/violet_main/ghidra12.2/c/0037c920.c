/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0037c920; name: FUN_0037c920
 */


undefined8 FUN_0037c920(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  
  if ((((param_1 != 0) && (*(long *)(param_1 + 0x40) != 0)) && (*(long *)(param_1 + 0x48) != 0)) &&
     ((plVar5 = *(long **)(param_1 + 0x38), plVar5 != (long *)0x0 && (*plVar5 == param_1)))) {
    iVar3 = (int)plVar5[1];
    if (((iVar3 - 0x39U < 0x39) &&
        ((1L << ((ulong)(iVar3 - 0x39U) & 0x3f) & 0x100400400011001U) != 0)) ||
       ((iVar3 == 0x29a || (iVar3 == 0x2a)))) {
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x58) = 2;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      plVar5[4] = plVar5[2];
      plVar5[5] = 0;
      iVar3 = (int)plVar5[6];
      if (iVar3 < 0) {
        iVar3 = -iVar3;
        *(int *)(plVar5 + 6) = iVar3;
      }
      uVar4 = 0x71;
      if (iVar3 != 0) {
        uVar4 = 0x2a;
      }
      uVar1 = 0x39;
      if (iVar3 != 2) {
        uVar1 = uVar4;
      }
      *(undefined4 *)(plVar5 + 1) = uVar1;
      if (iVar3 != 2) {
        uVar2 = FUN_0037fbe0(0,0,0);
      }
      else {
        uVar2 = FUN_0037fe70();
      }
      *(undefined8 *)(param_1 + 0x60) = uVar2;
      *(undefined4 *)((long)plVar5 + 0x4c) = 0;
      FUN_003835a0(plVar5);
      return 0;
    }
  }
  return 0xfffffffe;
}


