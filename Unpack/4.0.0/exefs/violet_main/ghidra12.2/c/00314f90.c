/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00314f90; name: FUN_00314f90
 */


ulong FUN_00314f90(long param_1,byte *param_2,byte *param_3)

{
  ushort uVar1;
  ulong uVar2;
  short sVar3;
  ulong uVar4;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  
  if (*(char *)(param_1 + 0xcb) == '\0') {
    uVar4 = FUN_00315140(param_1,param_2,param_3);
    return uVar4;
  }
  if (param_2 != param_3) {
    sVar3 = *(short *)(param_1 + 200);
    do {
      uVar4 = (ulong)(*param_2 >> 3) & 0x1e;
      if (*(ushort *)
           (&DAT_03cd4b92 + (uVar4 | (ulong)*(ushort *)(&DAT_03cd6ab2 + (long)sVar3 * 2) << 5)) <
          0x100) {
        local_68[0] = (undefined1)
                      *(ushort *)
                       (&DAT_03cd4b92 +
                       (uVar4 | (ulong)*(ushort *)(&DAT_03cd6ab2 + (long)sVar3 * 2) << 5));
        uVar2 = FUN_00315140(param_1,local_68,(ulong)local_68 | 1);
        if (uVar2 != 0) goto LAB_003150b0;
      }
      sVar3 = *(short *)(&DAT_03cd6cb2 + (uVar4 | (ulong)(byte)(&DAT_03cd72b2)[sVar3] << 5));
      uVar1 = *(ushort *)(&DAT_03cd6ab2 + (long)sVar3 * 2);
      *(short *)(param_1 + 200) = sVar3;
      uVar4 = ((ulong)*param_2 & 0xf) << 1;
      if (*(ushort *)(&DAT_03cd4b92 + (uVar4 | (ulong)uVar1 << 5)) < 0x100) {
        local_64[0] = (undefined1)*(ushort *)(&DAT_03cd4b92 + (uVar4 | (ulong)uVar1 << 5));
        uVar2 = FUN_00315140(param_1,local_64,(ulong)local_64 | 1);
        if (uVar2 != 0) {
LAB_003150b0:
          if (*(long *)(param_1 + 0x10) == 0) {
            uVar4 = uVar2;
            if (4 < uVar2) {
              uVar4 = FUN_00350fb0(uVar2);
            }
            *(ulong *)(param_1 + 0x10) = uVar4;
          }
          *(undefined1 **)(param_1 + 0x18) = &LAB_00314840;
          return uVar2;
        }
      }
      sVar3 = *(short *)(&DAT_03cd6cb2 + (uVar4 | (ulong)(byte)(&DAT_03cd72b2)[sVar3] << 5));
      param_2 = param_2 + 1;
      *(short *)(param_1 + 200) = sVar3;
    } while (param_3 != param_2);
  }
  return 0;
}


