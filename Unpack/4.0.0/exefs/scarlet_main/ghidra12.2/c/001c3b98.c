/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c3b98; name: FUN_001c3b98
 */


long FUN_001c3b98(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = FUN_001ec338(1,0x16f8);
  if (lVar2 == 0) {
    return 0;
  }
  lVar4 = *(long *)(param_1 + 0xc10);
  *(long *)(lVar2 + 0xc10) = lVar4;
  lVar4 = FUN_001ec2f8(lVar4 + 1);
  *(long *)(lVar2 + 0x1130) = lVar4;
  if (lVar4 != 0) {
    lVar4 = FUN_001ec2f8(0x100);
    *(long *)(lVar2 + 0x1120) = lVar4;
    if (lVar4 != 0) {
      *(undefined8 *)(lVar2 + 0x1128) = 0x100;
      memcpy((void *)(lVar2 + 0x668),(void *)(param_1 + 0x668),0x8e0);
      FUN_001cb820(lVar2 + 0x820,lVar2);
      memset((void *)(lVar2 + 0xc80),0,0x1f0);
      lVar4 = 0xc80;
      do {
        iVar1 = FUN_001dc318(lVar2 + lVar4,*(undefined8 *)(param_1 + lVar4));
        if (iVar1 != 0) goto LAB_001c3c8c;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0xe60);
      if ((*(long *)(param_1 + 0x6f8) != 0) && (lVar4 = *(long *)(param_1 + 0xe68), lVar4 != 0)) {
        uVar3 = FUN_001ec1a0();
        lVar4 = FUN_001e0b14(lVar4,uVar3);
        *(long *)(lVar2 + 0xe68) = lVar4;
        if (lVar4 == 0) goto LAB_001c3c8c;
        *(long *)(lVar2 + 0x6e8) = lVar4;
      }
      iVar1 = FUN_001cb90c(lVar2 + 0x820,param_1 + 0x820);
      if (*(long *)(param_1 + 0xa18) != 0) {
        *(undefined8 *)(lVar2 + 0xf60) = *(undefined8 *)(lVar2 + 0xa18);
      }
      if (iVar1 == 0) {
        *(undefined8 *)(lVar2 + 0x1100) = 0;
        *(undefined8 *)(lVar2 + 0x1118) = 0xffffffffffffffff;
        *(undefined4 *)(lVar2 + 0xfac) = *(undefined4 *)(param_1 + 0xfac);
        *(byte *)(lVar2 + 0x10fc) =
             *(byte *)(lVar2 + 0x10fc) & 0xfe | *(byte *)(param_1 + 0x10fc) & 1;
        if (*(long *)(param_1 + 0xf70) != 0) {
          lVar4 = FUN_001c3e7c(param_1,*(undefined8 *)(*(long *)(param_1 + 0xf70) + 0x800),
                               *(undefined8 *)(lVar2 + 0xf70),*(ulong *)(param_1 + 0xf40) >> 5 & 1);
          *(long *)(lVar2 + 0xf70) = lVar4;
          if (lVar4 == 0) goto LAB_001c3c8c;
        }
        if (*(long *)(param_1 + 0xf58) != 0) {
          lVar4 = FUN_001e04a0();
          *(long *)(lVar2 + 0xf58) = lVar4;
          if (lVar4 == 0) goto LAB_001c3c8c;
        }
        if (*(long *)(param_1 + 0xf48) != 0) {
          lVar4 = FUN_001ec328();
          *(long *)(lVar2 + 0xf48) = lVar4;
          if (lVar4 == 0) goto LAB_001c3c8c;
          *(byte *)(lVar2 + 0xf68) = *(byte *)(lVar2 + 0xf68) | 1;
        }
        if (*(long *)(param_1 + 0xf50) != 0) {
          lVar4 = FUN_001ec328();
          *(long *)(lVar2 + 0xf50) = lVar4;
          if (lVar4 == 0) goto LAB_001c3c8c;
          *(byte *)(lVar2 + 0xf68) = *(byte *)(lVar2 + 0xf68) | 2;
        }
        if (((*(long *)(lVar2 + 0xdd8) == 0) || (iVar1 = thunk_FUN_001ebdf8(lVar2), iVar1 == 0)) &&
           (iVar1 = FUN_001c7680(lVar2,lVar2 + 0x1288,*(undefined8 *)(param_1 + 0x1288)), iVar1 == 0
           )) {
          FUN_001c8080(lVar2);
          *(undefined4 *)(lVar2 + 0x16f0) = 0xc0dedbad;
          return lVar2;
        }
      }
    }
  }
LAB_001c3c8c:
  FUN_001e04f0(*(undefined8 *)(lVar2 + 0xf58));
  *(undefined8 *)(lVar2 + 0xf58) = 0;
  FUN_001ec308(*(undefined8 *)(lVar2 + 0x1130));
  *(undefined8 *)(lVar2 + 0x1130) = 0;
  FUN_001ec308(*(undefined8 *)(lVar2 + 0x1120));
  *(undefined8 *)(lVar2 + 0x1120) = 0;
  FUN_001ec308(*(undefined8 *)(lVar2 + 0xf48));
  *(undefined8 *)(lVar2 + 0xf48) = 0;
  FUN_001ec308(*(undefined8 *)(lVar2 + 0xf50));
  *(undefined8 *)(lVar2 + 0xf50) = 0;
  FUN_001e4694(lVar2);
  FUN_001ec308(lVar2);
  return 0;
}


