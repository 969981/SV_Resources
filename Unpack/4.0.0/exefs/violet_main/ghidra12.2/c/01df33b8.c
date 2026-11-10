/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01df33b8; name: FUN_01df33b8
 */


void FUN_01df33b8(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  
  if ((param_2 < 0x21) && (param_3 < 0x21)) {
    if (param_3 < 6) {
      lVar3 = param_1 + (ulong)param_3 * 0xc;
      *(undefined4 *)(lVar3 + 0x52e) = 0xffffffff;
      *(undefined8 *)(lVar3 + 0x526) = 0xffffffffffffffff;
    }
    uVar1 = 0;
    if (param_2 < 6) {
      uVar1 = param_2;
    }
    uVar4 = (ulong)uVar1;
    uVar2 = *(ushort *)(param_1 + uVar4 * 0xc + 0x526);
    if (uVar2 >> 8 < 0x21 && (uVar2 & 0xfe) < 0x1e) {
      FUN_01ddc5e8(param_1,param_3,0,uVar2 >> 8,uVar2 & 0xff);
    }
    uVar2 = *(ushort *)(param_1 + uVar4 * 0xc + 0x528);
    if (uVar2 >> 8 < 0x21 && (uVar2 & 0xfe) < 0x1e) {
      FUN_01ddc5e8(param_1,param_3,1,uVar2 >> 8,uVar2 & 0xff);
    }
    uVar2 = *(ushort *)(param_1 + uVar4 * 0xc + 0x52a);
    if (uVar2 >> 8 < 0x21 && (uVar2 & 0xfe) < 0x1e) {
      FUN_01ddc5e8(param_1,param_3,2,uVar2 >> 8,uVar2 & 0xff);
    }
    uVar2 = *(ushort *)(param_1 + uVar4 * 0xc + 0x52c);
    if ((uVar2 >> 8 < 0x21) && ((uVar2 & 0xfe) < 0x1e)) {
      FUN_01ddc5e8(param_1,param_3,3,uVar2 >> 8,uVar2 & 0xff);
    }
    uVar2 = *(ushort *)(param_1 + uVar4 * 0xc + 0x52e);
    if ((uVar2 >> 8 < 0x21) && ((uVar2 & 0xfe) < 0x1e)) {
      FUN_01ddc5e8(param_1,param_3,4,uVar2 >> 8,uVar2 & 0xff);
    }
    uVar2 = *(ushort *)(param_1 + uVar4 * 0xc + 0x530);
    if ((uVar2 >> 8 < 0x21) && ((uVar2 & 0xfe) < 0x1e)) {
      FUN_01ddc5e8(param_1,param_3,5,uVar2 >> 8,uVar2 & 0xff);
      return;
    }
  }
  return;
}


