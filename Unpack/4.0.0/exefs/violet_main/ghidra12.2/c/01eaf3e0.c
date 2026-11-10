/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eaf3e0; name: FUN_01eaf3e0
 */


void FUN_01eaf3e0(long param_1)

{
  long lVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  
  lVar1 = param_1 + 0x38;
  uVar5 = FUN_019965ec(lVar1);
  *(undefined8 *)(param_1 + 0xb8) = uVar5;
  sVar2 = FUN_01419468(lVar1);
  if (sVar2 != 0) {
    uVar8 = 0;
    do {
      lVar6 = FUN_01dcd15c(lVar1,uVar8);
      if ((*(long *)(param_1 + 0xb8) != lVar6) && (uVar3 = FUN_01419468(lVar1), 1 < uVar3)) {
        lVar9 = 0x18;
        do {
          if (*(long *)(param_1 + lVar9 * 8) == 0) {
            *(long *)(param_1 + lVar9 * 8) = lVar6;
            break;
          }
          uVar3 = FUN_01419468(lVar1);
          uVar7 = lVar9 - 0x16;
          lVar9 = lVar9 + 1;
        } while (uVar7 < uVar3);
      }
      uVar8 = uVar8 + 1;
      uVar4 = FUN_01419468(lVar1);
    } while (uVar8 < (uVar4 & 0xffff));
  }
  return;
}


