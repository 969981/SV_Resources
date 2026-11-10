/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001e4b44; name: FUN_001e4b44
 */


int FUN_001e4b44(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_001ec338(1,0x16f8);
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x16f0) = 0xc0dedbad;
    iVar1 = FUN_001c7644(lVar2,lVar2 + 0x1288);
    if (iVar1 != 0) {
      FUN_001ec308(lVar2);
      return iVar1;
    }
    lVar3 = FUN_001ec2f8(0x4001);
    *(long *)(lVar2 + 0x1130) = lVar3;
    if (lVar3 != 0) {
      lVar3 = FUN_001ec2f8(0x100);
      *(long *)(lVar2 + 0x1120) = lVar3;
      if (lVar3 != 0) {
        FUN_001e4980(lVar2);
        *(undefined8 *)(lVar2 + 0x1128) = 0x100;
        FUN_001c8080(lVar2);
        *(undefined8 *)(lVar2 + 0x1118) = 0xffffffffffffffff;
        *(undefined8 *)(lVar2 + 0x1140) = 0xffffffffffffffff;
        *(uint *)(lVar2 + 0xfac) = *(uint *)(lVar2 + 0xfac) | 0x10;
        FUN_001d7610(lVar2 + 0x1100);
        *param_1 = lVar2;
        return 0;
      }
    }
    thunk_FUN_001ec308(*(undefined8 *)(lVar2 + 0x1288));
    FUN_001ec308(*(undefined8 *)(lVar2 + 0x1130));
    FUN_001ec308(*(undefined8 *)(lVar2 + 0x1120));
    FUN_001e4694(lVar2);
    FUN_001ec308(lVar2);
  }
  return 0x1b;
}


