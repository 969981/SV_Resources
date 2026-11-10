/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034a0780; name: FUN_034a0780
 */


void FUN_034a0780(void)

{
  byte bVar1;
  ulong uVar2;
  ushort uVar3;
  ulong uVar4;
  long *plVar5;
  size_t __n;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  for (lVar6 = DAT_048b0118; lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x20)) {
    for (plVar5 = *(long **)(lVar6 + 0xb0); plVar5 != (long *)0x0; plVar5 = (long *)plVar5[1]) {
      uVar2 = (**(code **)(*plVar5 + 0x18))(plVar5);
      if ((uVar2 & 1) != 0) {
        if (*(short *)((long)plVar5 + 0x32) == 0) {
          uVar3 = *(ushort *)(plVar5 + 6);
          uVar2 = (ulong)uVar3;
          if (uVar2 != 0) {
            bVar1 = *(byte *)(plVar5 + 5);
            uVar4 = (ulong)bVar1;
            if (bVar1 != 0) {
              __n = uVar2 << 2;
              uVar7 = uVar4 & 3;
              if (uVar4 - 1 < 3) {
                uVar8 = 0;
              }
              else {
                uVar8 = 0;
                lVar9 = 8;
                do {
                  memset((void *)(plVar5[4] + (lVar9 + -8) * uVar2),0,__n);
                  memset((void *)(plVar5[4] + (lVar9 + -4) * (ulong)*(ushort *)(plVar5 + 6)),0,__n);
                  memset((void *)(plVar5[4] + lVar9 * (ulong)*(ushort *)(plVar5 + 6)),0,__n);
                  memset((void *)(plVar5[4] + (lVar9 + 4) * (ulong)*(ushort *)(plVar5 + 6)),0,__n);
                  uVar2 = (ulong)*(ushort *)(plVar5 + 6);
                  uVar8 = uVar8 + 4;
                  lVar9 = lVar9 + 0x10;
                } while ((uVar4 & 0xfc) != uVar8);
              }
              uVar3 = (ushort)uVar2;
              if ((bVar1 & 3) != 0) {
                lVar9 = uVar8 << 2;
                do {
                  memset((void *)(plVar5[4] + lVar9 * uVar2),0,__n);
                  uVar3 = *(ushort *)(plVar5 + 6);
                  uVar2 = (ulong)uVar3;
                  uVar7 = uVar7 - 1;
                  lVar9 = lVar9 + 4;
                } while (uVar7 != 0);
              }
            }
            *(ushort *)((long)plVar5 + 0x32) = uVar3;
          }
        }
        (**(code **)(*plVar5 + 0x20))(plVar5);
        *(undefined2 *)((long)plVar5 + 0x32) = 0;
      }
    }
    if (*(long **)(lVar6 + 0x3f0) != (long *)0x0) {
      (**(code **)(**(long **)(lVar6 + 0x3f0) + 0x48))();
    }
    *(undefined4 *)(lVar6 + 0x3f8) = *(undefined4 *)(lVar6 + 0x3fc);
    FUN_034a127c(lVar6 + 0x128);
  }
  DAT_047c3890 = DAT_047c3894;
  return;
}


