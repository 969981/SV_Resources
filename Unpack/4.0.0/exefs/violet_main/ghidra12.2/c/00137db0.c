/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00137db0; name: FUN_00137db0
 */


void FUN_00137db0(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  
  if (0 < (int)param_1[4]) {
    lVar2 = *param_1;
    uVar1 = 0;
    do {
      lVar3 = *(long *)(lVar2 + 0x40);
      uVar4 = *(uint *)(lVar3 + uVar1 * 4);
      uVar5 = uVar4 & 0x7f;
      if (uVar5 - 0x45 < 2) {
LAB_00137e68:
        if (*(char *)((long)param_1 + 0x46) != '\0') {
          uVar4 = uVar4 | 0x8000;
          *(uint *)(lVar3 + uVar1 * 4) = uVar4;
        }
        if (*(char *)(lVar2 + 0xb) != '\0') {
          *(uint *)(lVar3 + uVar1 * 4) =
               (uVar4 & 0xffffff | (uint)*(byte *)(lVar2 + 10) << 0x18) + 0x1000000;
        }
      }
      else if (uVar5 - 0x47 < 2) {
        if ((*(char *)((long)param_1 + 0x46) != '\0') || (*(char *)(lVar2 + 0xb) != '\0')) {
          uVar4 = uVar4 & 0xffffff80 | 0x46;
          *(uint *)(lVar3 + uVar1 * 4) = uVar4;
          goto LAB_00137e68;
        }
      }
      else if (uVar5 == 0x38) {
        iVar7 = 100;
        uVar6 = uVar1 & 0xffffffff;
        do {
          uVar5 = (uint)uVar6;
          uVar4 = *(uint *)(lVar3 + (long)(int)uVar5 * 4);
          if ((uVar4 & 0x7f) != 0x38) break;
          uVar5 = (uVar5 - 0xfffffe) + (uVar4 >> 7);
          uVar4 = *(uint *)(lVar3 + (long)(int)uVar5 * 4);
          if ((uVar4 & 0x7f) != 0x38) break;
          uVar5 = (uVar5 - 0xfffffe) + (uVar4 >> 7);
          uVar6 = (ulong)uVar5;
          iVar7 = iVar7 + -2;
        } while (iVar7 != 0);
        iVar7 = uVar5 + ~(uint)uVar1;
        if (iVar7 + 0xffffffU >> 0x19 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00138770(param_1[2],"control structure too long");
        }
        *(uint *)(*(long *)(*param_1 + 0x40) + uVar1 * 4) =
             (*(uint *)(*(long *)(*param_1 + 0x40) + uVar1 * 4) & 0x7f | iVar7 * 0x80) + 0x7fffff80;
      }
      uVar1 = uVar1 + 1;
    } while ((long)uVar1 < (long)(int)param_1[4]);
  }
  return;
}


