/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00879a28; name: FUN_00879a28
 */


void FUN_00879a28(long param_1,uint *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  if (*param_2 != 0) {
    uVar4 = 0;
    do {
      if ((*(int *)(*(long *)(*(long *)(param_2 + 2) + uVar4 * 8) + 0xc) == 0x11) &&
         (0 < (int)*(uint *)(param_1 + 0x510))) {
        uVar2 = 0;
        lVar3 = 0x168;
        do {
          if (*(long *)(*(long *)(param_1 + 0x508) + uVar2 * 8) ==
              **(long **)(*(long *)(param_2 + 4) + uVar4 * 8)) {
            *(undefined8 *)(*(long *)(param_1 + 0x508) + uVar2 * 8) = 0xffffffffffffffff;
            if ((uint)uVar2 < *(uint *)(param_1 + 0x510)) {
              puVar1 = (undefined8 *)(*(long *)(param_1 + 0x500) + lVar3);
              memset((void *)((long)puVar1 + -0x164),0,0x160);
              *puVar1 = 0xffffffffffffffff;
              *(int *)(param_1 + 0x514) = *(int *)(param_1 + 0x514) + -1;
            }
            break;
          }
          uVar2 = uVar2 + 1;
          lVar3 = lVar3 + 0x170;
        } while (*(uint *)(param_1 + 0x510) != uVar2);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *param_2);
  }
  return;
}


