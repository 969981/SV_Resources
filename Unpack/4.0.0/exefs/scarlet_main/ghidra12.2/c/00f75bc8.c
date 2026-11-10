/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f75bc8; name: FUN_00f75bc8
 */


void FUN_00f75bc8(long param_1)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  long *plVar4;
  short sVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  plVar1 = (long *)(param_1 + 0x60);
  if (plVar1 != *(long **)(param_1 + 0x68)) {
    plVar4 = *(long **)(param_1 + 0x68);
    do {
      plVar8 = (long *)plVar4[1];
      if (plVar1 != plVar4) {
        lVar6 = *plVar8;
        *(long **)(*plVar4 + 8) = plVar8;
        *plVar8 = *plVar4;
        *(long **)(lVar6 + 8) = plVar4;
        *plVar4 = lVar6;
      }
      if ((*(byte *)(plVar4 + 7) >> 3 & 1) != 0) {
        bVar3 = *(byte *)((long)plVar4 + 0x3b);
        plVar2 = (long *)(param_1 + (ulong)bVar3 * 0x18 + 0x80);
        if (plVar2 != plVar4 + 2) {
          plVar7 = (long *)plVar4[3];
          lVar6 = *plVar7;
          *(long **)(plVar4[2] + 8) = plVar7;
          *plVar7 = plVar4[2];
          *(long **)(lVar6 + 8) = plVar4 + 2;
          plVar4[2] = lVar6;
        }
        plVar7 = *(long **)(param_1 + (ulong)bVar3 * 0x18 + 0x88);
        if (plVar7 == plVar2) {
          sVar5 = 0;
        }
        else {
          do {
            plVar7 = (long *)plVar7[1];
          } while (plVar7 != plVar2);
          sVar5 = *(short *)(*plVar2 + 0x30) + *(short *)(*plVar2 + 0x34) + 2;
        }
        *(short *)(param_1 + (ulong)*(byte *)((long)plVar4 + 0x3b) * 0x18 + 0x92) = sVar5;
      }
      FUN_00889230(param_1 + 0x30,(int)plVar4[6],*(undefined2 *)((long)plVar4 + 0x36),
                   *(undefined2 *)((long)plVar4 + 0x34));
      plVar4 = plVar8;
    } while (plVar1 != plVar8);
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    return;
  }
  FUN_00889920();
  return;
}


