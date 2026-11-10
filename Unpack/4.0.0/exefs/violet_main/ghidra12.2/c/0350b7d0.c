/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0350b7d0; name: FUN_0350b7d0
 */


void FUN_0350b7d0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_047e6d08;
  lVar4 = *(long *)(param_1 + 0x128);
  if (lVar4 == 0) {
    *(short *)(param_2 + 0x10) = (short)*(undefined4 *)PTR_DAT_047e6d08;
    (**(code **)(**(long **)(param_1 + 0x118) + 0x78))(*(long **)(param_1 + 0x118),param_2);
    iVar3 = *(int *)(param_2 + 0x2c);
    if (iVar3 == 0x2e) {
      if ((*(byte *)(*(long *)(param_1 + 0x118) + 0x20) >> 1 & 1) != 0) {
        return;
      }
      *(byte *)(param_1 + 0x150) = *(byte *)(param_1 + 0x150) | 1;
      lVar4 = 0;
      if (*(long *)(param_1 + 8) != 0) {
        lVar4 = *(long *)(param_1 + 8) + -0x18;
      }
      FUN_034b3ef0(*(undefined8 *)PTR_DAT_047e6f38,*(undefined4 *)(lVar4 + 0x228),
                   *(undefined4 *)(*(long *)(lVar4 + 0x188) + 0x18));
      iVar3 = *(int *)(param_2 + 0x2c);
    }
    if ((iVar3 == 0x11) && (*(long *)(param_1 + 0x120) != 0)) {
      iVar3 = FUN_0350ba28(param_1,param_2);
      *(int *)(param_2 + 0x2c) = iVar3;
      if (iVar3 == 0x2b) {
        *(short *)(param_2 + 0x10) = (short)*(undefined4 *)puVar1;
        (**(code **)(**(long **)(param_1 + 0x118) + 0x78))(*(long **)(param_1 + 0x118),param_2);
        if ((*(int *)(param_2 + 0x2c) == 0x2e) &&
           ((*(byte *)(*(long *)(param_1 + 0x118) + 0x20) >> 1 & 1) == 0)) {
          *(byte *)(param_1 + 0x150) = *(byte *)(param_1 + 0x150) | 1;
          lVar4 = 0;
          if (*(long *)(param_1 + 8) != 0) {
            lVar4 = *(long *)(param_1 + 8) + -0x18;
          }
          FUN_034b3ef0(*(undefined8 *)PTR_DAT_047e6f38,*(undefined4 *)(lVar4 + 0x228),
                       *(undefined4 *)(*(long *)(lVar4 + 0x188) + 0x18));
          return;
        }
      }
    }
  }
  else {
    *(uint *)(lVar4 + 0x54) = (uint)*(ushort *)(param_2 + 0x10);
    *(undefined1 *)(lVar4 + 0xf1) = 0;
    (**(code **)(**(long **)(lVar4 + 8) + 0x40))();
    FUN_034f5ed8(lVar4 + 0x10,(*(uint *)(*(long *)(lVar4 + 0xe8) + 699) & 0x70000000) == 0);
    if (*(short *)(lVar4 + 0x92) == 0) {
      if (*(char *)(lVar4 + 0xf0) != '\0') {
        *(undefined4 *)(param_2 + 0x2c) = 0x11;
      }
    }
    else {
      FUN_0350d400(lVar4,param_2);
    }
    puVar2 = PTR_DAT_047e6f38;
    puVar1 = PTR_DAT_047e6d08;
    if (*(int *)(param_2 + 0x2c) == 0x2b) {
      while( true ) {
        *(short *)(param_2 + 0x10) = (short)*(undefined4 *)puVar1;
        (**(code **)(**(long **)(param_1 + 0x118) + 0x78))(*(long **)(param_1 + 0x118),param_2);
        iVar3 = *(int *)(param_2 + 0x2c);
        if (iVar3 == 0x2e) {
          if ((*(byte *)(*(long *)(param_1 + 0x118) + 0x20) >> 1 & 1) != 0) {
            return;
          }
          *(byte *)(param_1 + 0x150) = *(byte *)(param_1 + 0x150) | 1;
          lVar4 = 0;
          if (*(long *)(param_1 + 8) != 0) {
            lVar4 = *(long *)(param_1 + 8) + -0x18;
          }
          FUN_034b3ef0(*(undefined8 *)puVar2,*(undefined4 *)(lVar4 + 0x228),
                       *(undefined4 *)(*(long *)(lVar4 + 0x188) + 0x18));
          iVar3 = *(int *)(param_2 + 0x2c);
        }
        if ((iVar3 != 0x2d) && (iVar3 != 0x11)) break;
        FUN_0350d400(*(undefined8 *)(param_1 + 0x128),param_2);
        if (*(int *)(param_2 + 0x2c) != 0x2b) {
          return;
        }
      }
      return;
    }
  }
  return;
}


