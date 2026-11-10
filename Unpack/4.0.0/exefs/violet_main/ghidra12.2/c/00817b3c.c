/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00817b3c; name: FUN_00817b3c
 */


undefined8 FUN_00817b3c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  
  puVar2 = PTR_DAT_047d0860;
  if (1 < *(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50)) {
    uVar5 = 0;
    do {
      uVar6 = uVar5 & 0xffff;
      uVar5 = FUN_0078b12c(*(long *)(param_1 + 0x860) + uVar6 * 0xb0 + 0x18);
      if ((uVar5 & 1) == 0) {
        uVar7 = (int)uVar6 + 1;
        uVar5 = (ulong)uVar7;
        uVar7 = uVar7 & 0xffff;
        iVar4 = *(ushort *)(*(long *)puVar2 + 0x50) - 1;
      }
      else {
        uVar5 = FUN_0078b278(*(long *)(param_1 + 0x860) + uVar6 * 0xb0 + 0x18,param_1 + 0x7d8);
        if ((uVar5 & 1) != 0) {
          return 1;
        }
        uVar1 = (int)uVar6 + 1;
        uVar5 = (ulong)uVar1;
        uVar7 = uVar1 & 0xffff;
        iVar4 = *(ushort *)(*(long *)puVar2 + 0x50) - 1;
        if ((int)uVar7 < iVar4) {
          do {
            uVar8 = (ulong)uVar1 & 0xffff;
            uVar3 = FUN_0078b12c(*(long *)(param_1 + 0x860) + uVar8 * 0xb0 + 0x18);
            if (((uVar3 & 1) != 0) &&
               (uVar3 = FUN_0078b278(*(long *)(param_1 + 0x860) + uVar6 * 0xb0 + 0x18,
                                     *(long *)(param_1 + 0x860) + uVar8 * 0xb0 + 0x18),
               (uVar3 & 1) != 0)) {
              return 1;
            }
            uVar1 = (int)uVar8 + 1;
            iVar4 = *(ushort *)(*(long *)puVar2 + 0x50) - 1;
          } while ((int)(uVar1 & 0xffff) < iVar4);
        }
      }
    } while ((int)uVar7 < iVar4);
  }
  return 0;
}


