/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b64f8c; name: FUN_00b64f8c
 */


undefined8 FUN_00b64f8c(long param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  byte local_68 [4];
  byte local_64 [4];
  
  puVar4 = PTR_DAT_047d0860;
  if (((*(char *)(param_1 + 0x60) != '\0') ||
      ((*(long *)(param_1 + 0x48) != 0 && (*(short *)(*(long *)(param_1 + 0x48) + 0x1a) != 0)))) &&
     (plVar11 = *(long **)(param_1 + 0x58), plVar11 != (long *)0x0)) {
    if (*(long *)PTR_DAT_047d0a08 != 0) {
      cVar2 = *(char *)(param_1 + 0x68);
      iVar6 = FUN_00f21480();
      if (((iVar6 == 1 && (byte)(cVar2 + 4U) < 8) && (lVar10 = *(long *)puVar4, lVar10 != 0)) &&
         (lVar10 = FUN_00f21488(lVar10 + 0x10,(&DAT_0485ea48)[(byte)(cVar2 + 4)],0x81), lVar10 != 0)
         ) {
        if (0xc < *(byte *)(lVar10 + 0x78)) {
          return 0;
        }
        if ((1 << (ulong)(*(byte *)(lVar10 + 0x78) & 0x1f) & 0x1809U) == 0) {
          return 0;
        }
      }
    }
    bVar5 = (**(code **)(*plVar11 + 0x28))(plVar11);
    if (bVar5 != 0xfd) {
      local_68[0] = 0;
      if (DAT_045dfcb0 != 0) {
        do {
          if ((local_68[0] != bVar5) &&
             (lVar10 = (**(code **)(*plVar11 + 0x30))(plVar11,local_68), lVar10 != 0)) {
            local_64[0] = local_68[0];
            if (*(char *)(param_1 + 0x60) == '\0') {
              if (*(long *)(param_1 + 0x48) == 0) {
                return 0;
              }
              if (*(short *)(*(long *)(param_1 + 0x48) + 0x1a) == 0) {
                return 0;
              }
            }
            plVar12 = *(long **)(param_1 + 0x58);
            if (plVar12 == (long *)0x0) {
              return 0;
            }
            if (*(long *)PTR_DAT_047d0a08 == 0) {
              return 0;
            }
            bVar3 = *(byte *)(param_1 + 0x68);
            iVar6 = FUN_00f21480();
            if (iVar6 != 1) {
              return 0;
            }
            uVar1 = bVar3 + 4;
            if (7 < (uVar1 & 0xff)) {
              return 0;
            }
            lVar10 = *(long *)puVar4;
            if (lVar10 == 0) {
              return 0;
            }
            lVar10 = FUN_00f21488(lVar10 + 0x10,(&DAT_0485ea48)[(ulong)uVar1 & 0xff],0x81);
            if (lVar10 == 0) {
              return 0;
            }
            lVar7 = (**(code **)(*plVar12 + 0x30))(plVar12,local_64);
            if (lVar7 == 0) {
              return 0;
            }
            lVar8 = (**(code **)(*plVar12 + 0x20))(plVar12);
            if (lVar7 == lVar8) {
              return 0;
            }
            uVar9 = FUN_00f21f18(lVar10,lVar7,uVar1);
            if ((uVar9 & 1) == 0) {
              return 0;
            }
          }
          local_68[0] = local_68[0] + 1;
        } while (local_68[0] < DAT_045dfcb0);
      }
      return 1;
    }
  }
  return 0;
}


