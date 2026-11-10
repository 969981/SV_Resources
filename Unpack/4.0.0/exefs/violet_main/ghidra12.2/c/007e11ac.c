/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e11ac; name: FUN_007e11ac
 */


void FUN_007e11ac(ushort *param_1,long param_2)

{
  uint uVar1;
  ushort uVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  
  uVar10 = *(undefined8 *)(param_1 + 4);
  uVar4 = FUN_007de240(param_2 + 8);
  bVar3 = FUN_007e10ac(uVar10,uVar4);
  if ((bVar3 != 0xff) && (uVar2 = *param_1, bVar3 < uVar2)) {
    lVar5 = *(long *)(param_1 + 0xc);
    uVar6 = (ulong)bVar3;
    uVar8 = 0;
    lVar7 = *(long *)(lVar5 + uVar6 * 8);
    do {
      uVar8 = uVar8 & 0xff;
      if (*(char *)(lVar7 + uVar8) != '\0') {
        *(undefined1 *)(lVar7 + uVar8) = 0;
        *(undefined4 *)(*(long *)(*(long *)(param_1 + 8) + uVar6 * 8) + uVar8 * 4) = 2;
      }
      lVar9 = *(long *)(lVar5 + uVar8 * 8);
      if (*(char *)(lVar9 + uVar6) != '\0') {
        *(undefined1 *)(lVar9 + uVar6) = 0;
        *(undefined4 *)(*(long *)(*(long *)(param_1 + 8) + uVar8 * 8) + uVar6 * 4) = 2;
      }
      uVar1 = (int)uVar8 + 1;
      uVar8 = (ulong)uVar1;
    } while ((uVar1 & 0xff) < (uint)uVar2);
  }
  return;
}


