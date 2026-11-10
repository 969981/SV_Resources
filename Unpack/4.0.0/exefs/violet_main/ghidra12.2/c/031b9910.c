/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031b9910; name: FUN_031b9910
 */


ulong FUN_031b9910(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  uint uVar4;
  
  if (((((param_3 == 0xff) && (param_2 == 0xff)) && (param_1 == 0xff)) && (param_5 == 8)) ||
     (((param_4 == 0xff && ((param_2 == 0 && param_1 == 0) && param_3 == 0)) && (param_5 == 8)))) {
    uVar2 = 0x70;
  }
  else {
    uVar2 = 0;
    piVar3 = &DAT_0487f158;
    do {
      if (((piVar3[-7] == param_1) && (piVar3[-6] == param_2)) &&
         ((piVar3[-5] == param_3 && (piVar3[-4] == param_4)))) {
        if ((char)piVar3[-1] == '\0') {
          uVar4 = (uint)*(ushort *)(piVar3 + -10);
        }
        else {
          iVar1 = (uint)*(byte *)((long)piVar3 + -0x25) * (uint)*(byte *)((long)piVar3 + -0x26) *
                  (uint)*(byte *)(piVar3 + -9);
          uVar4 = 0;
          if (iVar1 != 0) {
            uVar4 = (int)((uint)*(ushort *)(piVar3 + -10) + iVar1 + -1) / iVar1;
          }
        }
        if (((uVar4 == param_5) && ((char)piVar3[-1] == '\0')) && (*piVar3 == 3)) goto LAB_031b99f0;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 0xe;
    } while (uVar2 != 0x116);
    uVar2 = 0;
  }
LAB_031b99f0:
  return uVar2 & 0xffffffff;
}


