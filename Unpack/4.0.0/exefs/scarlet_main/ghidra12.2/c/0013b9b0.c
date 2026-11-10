/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0013b9b0; name: FUN_0013b9b0
 */


void FUN_0013b9b0(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x18);
  uVar1 = *(uint *)(lVar7 + 0x3c);
  if (((int)param_2 < (int)uVar1) && (0 < (int)uVar1)) {
    lVar3 = *(long *)(lVar7 + 0x30);
    uVar2 = 0;
    do {
      lVar4 = *(long *)(lVar3 + uVar2 * 8);
      *(undefined8 *)(lVar3 + uVar2 * 8) = 0;
      while (lVar4 != 0) {
        lVar6 = (ulong)(*(uint *)(lVar4 + 0xc) & param_2 - 1) * 8;
        lVar5 = *(long *)(lVar4 + 0x10);
        *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + lVar6);
        *(long *)(lVar3 + lVar6) = lVar4;
        lVar4 = lVar5;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar1);
  }
  lVar3 = FUN_0012d700(param_1,*(undefined8 *)(lVar7 + 0x30),(long)(int)uVar1 << 3,
                       -(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)param_2 << 3);
  if (lVar3 == 0) {
    if ((int)param_2 < (int)uVar1) {
      lVar7 = *(long *)(lVar7 + 0x30);
      memset((void *)(lVar7 + (long)(int)param_2 * 8),0,(ulong)(uVar1 + ~param_2) * 8 + 8);
      if (0 < (int)param_2) {
        uVar2 = 0;
        do {
          lVar3 = *(long *)(lVar7 + uVar2 * 8);
          *(undefined8 *)(lVar7 + uVar2 * 8) = 0;
          while (lVar3 != 0) {
            lVar5 = (ulong)(*(uint *)(lVar3 + 0xc) & uVar1 - 1) * 8;
            lVar4 = *(long *)(lVar3 + 0x10);
            *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar7 + lVar5);
            *(long *)(lVar7 + lVar5) = lVar3;
            lVar3 = lVar4;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 != param_2);
      }
    }
  }
  else {
    *(long *)(lVar7 + 0x30) = lVar3;
    *(uint *)(lVar7 + 0x3c) = param_2;
    if (((int)uVar1 < (int)param_2) &&
       (memset((void *)(lVar3 + (long)(int)uVar1 * 8),0,(ulong)(~uVar1 + param_2) * 8 + 8),
       0 < (int)uVar1)) {
      uVar2 = 0;
      do {
        lVar7 = *(long *)(lVar3 + uVar2 * 8);
        *(undefined8 *)(lVar3 + uVar2 * 8) = 0;
        while (lVar7 != 0) {
          lVar5 = (ulong)(*(uint *)(lVar7 + 0xc) & param_2 - 1) * 8;
          lVar4 = *(long *)(lVar7 + 0x10);
          *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar3 + lVar5);
          *(long *)(lVar3 + lVar5) = lVar7;
          lVar7 = lVar4;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 != uVar1);
    }
  }
  return;
}


