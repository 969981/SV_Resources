/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00101f80; name: FUN_00101f80
 */


undefined8 FUN_00101f80(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x644) == 0) {
    uVar3 = FUN_0011f640();
    *(undefined4 *)(param_1 + 0x644) = uVar3;
    *(undefined4 *)(param_1 + 0x69c) = 0;
    *(int *)(param_1 + 0x648) = *(int *)(param_1 + 0x630) + -1;
    iVar4 = *(int *)(param_1 + 0x14);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x14);
  }
  if (iVar4 != 0) {
    iVar4 = FUN_0011f640();
    uVar2 = 0;
    if ((ulong)*(uint *)(param_1 + 0x14) != 0) {
      uVar2 = ((ulong)(uint)(*(int *)(param_1 + 0x630) - *(int *)(param_1 + 0x648)) *
               (ulong)*(uint *)(param_1 + 0x18) * 1000) / (ulong)*(uint *)(param_1 + 0x14);
    }
    iVar1 = (iVar4 - *(int *)(param_1 + 0x644)) -
            (int)((uVar2 & 0xffffffff) * (ulong)*(uint *)(*(long *)(param_1 + 0x1b8) + 0x4c) >> 0x10
                 );
    if ((-1 < iVar1) && (*(int *)(param_1 + 0x64c) < iVar1)) {
      if (*(int *)(param_1 + 300) == 0) {
        *(int *)(param_1 + 0x644) = iVar4;
        *(undefined4 *)(param_1 + 0x69c) = 0;
        *(int *)(param_1 + 0x648) = *(int *)(param_1 + 0x630) + -1;
      }
      else {
        if (0x2d5 < iVar1) {
          *(undefined4 *)(param_1 + 0x690) = 1;
        }
        if (*(uint *)(param_1 + 0x698) < 4) {
          *(uint *)(param_1 + 0x698) = *(uint *)(param_1 + 0x698) + 1;
          if (param_2 == 0) {
            *(undefined4 *)(param_1 + 0x68c) = 2;
            *(undefined4 *)(param_1 + 0x120) = 1;
            *(int *)(param_1 + 0x694) = *(int *)(param_1 + 0x694) + 1;
            return 1;
          }
          return 1;
        }
        *(undefined4 *)(param_1 + 0x698) = 0;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x68c) = 1;
  return 0;
}


