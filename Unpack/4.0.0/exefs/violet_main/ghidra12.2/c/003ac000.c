/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ac000; name: FUN_003ac000
 */


ulong FUN_003ac000(int *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  uint local_14;
  
  local_14 = 0;
  lVar4 = *(long *)(*(long *)(param_1 + 0x154) + 0x188);
  if (lVar4 == 0) {
    FUN_003d6bb0(&local_14,param_1,0x5000e);
    uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x2a) + 0x238) + 0x1c);
    if ((*param_1 < 0x301) || ((uVar1 >> 4 & 1) == 0)) {
      if (((((*param_1 != 0x300) || ((uVar1 >> 1 & 1) == 0)) ||
           ((uVar3 = FUN_003a26e0(param_2,5,1), (int)uVar3 != 0 &&
            (uVar3 = FUN_003a26e0(param_2,6,1), (int)uVar3 != 0)))) &&
          (((local_14 & 1) != 0 || (uVar3 = FUN_003a26e0(param_2,1,1), (int)uVar3 != 0)))) &&
         ((((local_14 >> 1 & 1) != 0 || (uVar3 = FUN_003a26e0(param_2,2,1), (int)uVar3 != 0)) &&
          ((*param_1 < 0x301 ||
           ((((byte)local_14 >> 3 & 1) != 0 ||
            (uVar3 = FUN_003a26e0(param_2,0x40,1), (int)uVar3 != 0)))))))) {
        return 1;
      }
    }
    else {
      uVar3 = FUN_003a26e0(param_2,0x16,1);
      if (((int)uVar3 != 0) && (uVar3 = FUN_003a26e0(param_2,0xee,1), (int)uVar3 != 0)) {
        iVar2 = FUN_003a26e0(param_2,0xef,1);
        return (ulong)(iVar2 != 0);
      }
    }
  }
  else {
    uVar3 = FUN_003a2900(param_2,lVar4,*(undefined8 *)(*(long *)(param_1 + 0x154) + 400));
  }
  return uVar3;
}


