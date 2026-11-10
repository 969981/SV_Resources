/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c6f5f0; name: FUN_01c6f5f0
 */


void FUN_01c6f5f0(short param_1,short param_2,char param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_40;
  short local_38;
  ushort local_36;
  char local_34;
  
  lVar2 = FUN_016a48e4();
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x40);
    lVar1 = *(long *)(lVar2 + 0x48);
    if (lVar3 == lVar1) {
LAB_01c6f65c:
      if (lVar3 != lVar1) {
        *(short *)(lVar3 + 0x30) = *(short *)(lVar3 + 0x30) + param_2;
        lVar3 = *(long *)(lVar2 + 0x40);
        lVar1 = *(long *)(lVar2 + 0x48);
        if (lVar3 == lVar1) {
LAB_01c6f6b0:
          if (lVar3 != lVar1) {
            local_36 = (ushort)*(byte *)(lVar3 + 0x24) + param_2;
            *(char *)(lVar3 + 0x24) = (char)local_36;
            if (*(code **)(lVar2 + 0x180) != (code *)0x0) {
              local_36 = local_36 & 0xff;
              local_40 = param_4;
              local_38 = param_1;
              local_34 = param_3;
              (**(code **)(lVar2 + 0x180))(lVar2 + 0x1a0,&local_40);
            }
          }
        }
        else {
          do {
            if (((*(short *)(lVar3 + 0x20) == param_1) && (*(char *)(lVar3 + 0x26) == param_3)) &&
               (*(long *)(lVar3 + 0x28) == param_4)) goto LAB_01c6f6b0;
            lVar3 = lVar3 + 0x40;
          } while (lVar1 != lVar3);
        }
      }
    }
    else {
      do {
        if (((*(short *)(lVar3 + 0x20) == param_1) && (*(char *)(lVar3 + 0x26) == param_3)) &&
           (*(long *)(lVar3 + 0x28) == param_4)) goto LAB_01c6f65c;
        lVar3 = lVar3 + 0x40;
      } while (lVar1 != lVar3);
    }
  }
  return;
}


