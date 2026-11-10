/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0351b718; name: FUN_0351b718
 */


void FUN_0351b718(long param_1,byte param_2,ulong *param_3)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  
  uVar3 = *param_3;
  if (((uint)uVar3 >> 0xd & 1) != 0) {
    *PTR_DAT_047e74f8 = 1;
    *PTR_DAT_047e7500 = param_2 & 1;
  }
  if (((uVar3 & 0xfffffffffffffff2) != 0) && (*(long *)(param_1 + 0x90) != 0)) {
    uVar2 = *(uint *)(param_1 + 0x108);
    if (uVar2 != 0) {
      plVar4 = *(long **)(param_1 + 0x100);
      plVar5 = plVar4;
      do {
        plVar1 = (long *)*plVar5;
        if ((plVar1[0x12] != 0) && (0 < *(short *)(plVar1[0x12] + 0x90))) {
          (**(code **)(*plVar1 + 0x180))(plVar1,param_2 & 1,0);
          plVar4 = *(long **)(param_1 + 0x100);
          uVar2 = *(uint *)(param_1 + 0x108);
        }
        plVar5 = plVar5 + 1;
      } while (plVar5 != plVar4 + uVar2);
    }
  }
  return;
}


