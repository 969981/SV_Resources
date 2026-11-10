/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001e27b8; name: FUN_001e27b8
 */


int FUN_001e27b8(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  *param_2 = 0;
  uVar3 = (uint)*(undefined8 *)(lVar4 + 0xf40);
  if ((((uVar3 >> 0x19 & 1) == 0) || ((*(uint *)(param_1[0x84] + 0x80) & 0x40003) != 0)) &&
     (*(long *)(lVar4 + 0x100) + *(long *)(lVar4 + 0x110) == 0)) {
    if ((((*(byte *)((long)param_1 + 0x3fc) >> 1 & 1) == 0) ||
        (((uVar3 >> 0x18 & 1) != 0 && ((*(byte *)(param_1[0x84] + 0x80) & 3) == 0)))) ||
       (*(int *)(lVar4 + 0xe90) == 0xb)) {
      if ((*(byte *)(lVar4 + 0x15a4) >> 2 & 1) == 0) {
        return 0;
      }
      FUN_001db818(*param_1,"REFUSED_STREAM, retrying a fresh connect\n");
      *(ushort *)(lVar4 + 0x15a4) = *(ushort *)(lVar4 + 0x15a4) & 0xfffb;
    }
    FUN_001db818(*param_1,"Connection died, retrying a fresh connect\n");
    lVar2 = FUN_001ec328(*(undefined8 *)(*param_1 + 0xf48));
    *param_2 = lVar2;
    if (lVar2 == 0) {
      return 0x1b;
    }
    FUN_001c6c60(param_1,1);
    *(uint *)((long)param_1 + 0x3fc) = *(uint *)((long)param_1 + 0x3fc) | 0x2000;
    if (((*(byte *)(param_1[0x84] + 0x80) & 3) != 0) && (*(long *)(lVar4 + 0x108) != 0)) {
      iVar1 = FUN_001e1394(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      FUN_001ec308(*param_2);
      *param_2 = 0;
      return iVar1;
    }
  }
  return 0;
}


