/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0012c350; name: FUN_0012c350
 */


void FUN_0012c350(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  if (param_2 != param_3) {
    do {
      bVar2 = *(byte *)(param_2 + 0xb);
      lVar6 = *(long *)(param_2 + 0x18);
      uVar3 = FUN_0013c280(param_2);
      if (uVar3 != 0) {
        lVar7 = 0;
        do {
          lVar1 = *(long *)(param_2 + 0x10) + lVar7;
          if (((*(byte *)(lVar1 + 8) >> 6 & 1) != 0) &&
             (lVar4 = *(long *)(*(long *)(param_2 + 0x10) + lVar7), lVar4 != 0)) {
            if ((*(byte *)(lVar4 + 8) & 0xf) == 4) {
              if ((*(byte *)(lVar4 + 9) & 0x18) != 0) {
                FUN_00129df0(param_1);
              }
            }
            else if ((*(byte *)(lVar4 + 9) & 0x18) != 0) {
              *(undefined1 *)(lVar1 + 8) = 0x10;
            }
          }
          lVar7 = lVar7 + 0x10;
        } while ((ulong)uVar3 * 0x10 != lVar7);
      }
      for (plVar8 = *(long **)(param_2 + 0x18);
          plVar8 < (long *)(lVar6 + (long)(1 << (ulong)(bVar2 & 0x1f)) * 0x18); plVar8 = plVar8 + 3)
      {
        bVar5 = *(byte *)(plVar8 + 1);
        if (((bVar5 >> 6 & 1) == 0) || (lVar7 = *plVar8, lVar7 == 0)) {
LAB_0012c42c:
          if ((bVar5 & 0xf) == 0) goto LAB_0012c484;
        }
        else {
          if ((*(byte *)(lVar7 + 8) & 0xf) == 4) {
            if ((*(byte *)(lVar7 + 9) & 0x18) != 0) {
              FUN_00129df0(param_1);
              bVar5 = *(byte *)(plVar8 + 1);
            }
            goto LAB_0012c42c;
          }
          if ((*(byte *)(lVar7 + 9) & 0x18) == 0) goto LAB_0012c42c;
          *(undefined1 *)(plVar8 + 1) = 0x10;
LAB_0012c484:
          if ((*(byte *)((long)plVar8 + 9) >> 6 & 1) != 0) {
            *(undefined1 *)((long)plVar8 + 9) = 0xb;
          }
        }
      }
      param_2 = *(long *)(param_2 + 0x30);
    } while (param_2 != param_3);
  }
  return;
}


