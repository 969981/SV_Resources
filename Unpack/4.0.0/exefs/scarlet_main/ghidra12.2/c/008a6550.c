/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008a6550; name: FUN_008a6550
 */


void FUN_008a6550(long param_1,long param_2)

{
  long lVar1;
  int *__src;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined4 local_78 [6];
  
  lVar7 = *(long *)(param_2 + 200);
  if (lVar7 != 0) {
    uVar5 = (ulong)*(uint *)(lVar7 + 0x10);
    uVar6 = (ulong)*(ushort *)(lVar7 + 0xc + uVar5 + 2);
    if (uVar6 != 0) {
      lVar8 = lVar7 + 0x10;
      do {
        uVar6 = uVar6 - 1;
        __src = (int *)(lVar7 + 0xc + (ulong)(uint)(*(int *)(lVar8 + uVar5) + (int)uVar5));
        if (*__src == 6) {
          if (*(uint *)(param_1 + 0x60) == 0) {
LAB_008a6624:
            local_78[0] = 0x15;
            *(undefined8 *)((long)((ulong)local_78 | 4) + 5) = 0xffffffffffffffff;
            *(undefined8 *)((ulong)local_78 | 4) = 0xffffffffffffffff;
            FUN_008a7990(param_1,0x15,local_78,0x14,1);
          }
          else {
            lVar1 = *(long *)(param_1 + 0xa8) + 0xc;
            uVar3 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x10);
            piVar2 = (int *)(lVar1 + (ulong)(*(int *)(lVar1 + (ulong)uVar3 + 4) + uVar3));
            if ((*piVar2 == 0x15) && (bVar4 = *(byte *)((long)piVar2 + 10), -1 < (char)bVar4)) {
              memcpy((void *)(lVar1 + (ulong)(*(int *)(lVar1 + (ulong)uVar3 + 4 + (ulong)bVar4 * 4)
                                             + uVar3)),__src,0xfc);
              goto LAB_008a6660;
            }
            if ((*(uint *)(param_1 + 0x60) >> 0x15 & 1) == 0) goto LAB_008a6624;
          }
          FUN_008a7990(param_1,6,__src,0xfc,0);
        }
LAB_008a6660:
        if (uVar6 == 0) {
          return;
        }
        uVar5 = (ulong)*(uint *)(lVar7 + 0x10);
        lVar8 = lVar8 + 4;
      } while( true );
    }
  }
  return;
}


