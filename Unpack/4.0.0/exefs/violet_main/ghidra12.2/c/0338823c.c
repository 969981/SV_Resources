/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0338823c; name: FUN_0338823c
 */


void FUN_0338823c(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar1 = *(long *)(param_1 + 0x10);
  uVar4 = (*(long *)(param_1 + 8) - lVar1 >> 2) * -0x5555555555555555;
  if (1 < (int)uVar4) {
    uVar7 = 1;
    do {
      uVar2 = *(uint *)(lVar1 + uVar7 * 0xc);
      if (uVar2 >> 0x1c == 1) {
        puVar3 = *(ulong **)(*(long *)(param_2 + 8) + ((ulong)uVar2 & 0xffffff) * 8);
        puVar5 = puVar3;
        while (uVar6 = *puVar5, ((uint)uVar6 >> 8 & 1) == 0) {
          if (((uVar6 & 1) != 0) || (puVar5 = (ulong *)puVar5[1], puVar5 == (ulong *)0x0))
          goto LAB_033882fc;
        }
        if ((puVar5 != (ulong *)0x0) &&
           ((code *)puVar5[(ulong)(byte)POPCOUNT((char)uVar6) + 2] != (code *)0x0)) {
          (*(code *)puVar5[(ulong)(byte)POPCOUNT((char)uVar6) + 2])
                    (*(long *)(param_2 + 0x18) + (ulong)*(uint *)(lVar1 + uVar7 * 0xc + 4),puVar3,1)
          ;
        }
      }
LAB_033882fc:
      uVar7 = uVar7 + 1;
    } while (uVar7 != (uVar4 & 0xffffffff));
  }
  return;
}


