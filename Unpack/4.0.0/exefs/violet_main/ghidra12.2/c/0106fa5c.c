/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0106fa5c; name: FUN_0106fa5c
 */


bool FUN_0106fa5c(long param_1,long param_2)

{
  ushort uVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  ushort *puVar12;
  
  lVar11 = 0;
  iVar10 = 0;
  puVar12 = (ushort *)(param_1 + 0x28);
  do {
    if (((puVar12[-2] != 0) && (uVar1 = puVar12[-1], uVar1 != 0)) &&
       (*(char *)(*(long *)(*(long *)(param_1 + 8) + 0x310) + lVar11 + 0x86) == '\0')) {
      if (puVar12[-2] == 3) {
        plVar6 = (long *)FUN_0106fc68();
        uVar7 = (**(code **)(*plVar6 + 0x220))(plVar6,0x1a);
        if ((((uVar7 & 1) != 0) ||
            (uVar7 = (**(code **)(*plVar6 + 0x220))(plVar6,0x17), (uVar7 & 1) != 0)) ||
           ((sVar3 = (**(code **)(*plVar6 + 0x230))(plVar6), sVar3 == 2 ||
            (sVar3 = (**(code **)(*plVar6 + 0x230))(plVar6), sVar3 == 3)))) goto LAB_0106fabc;
        uVar1 = puVar12[-1];
      }
      if (param_2 == 0) {
        if ((uVar1 == 2) &&
           (lVar9 = FUN_0106fc68(*(undefined8 *)(*(long *)(param_1 + 8) + 0x310)), lVar9 != 0)) {
          plVar6 = (long *)FUN_0106fc68(*(undefined8 *)(*(long *)(param_1 + 8) + 0x310));
          uVar4 = (**(code **)(*plVar6 + 0x108))();
          plVar6 = (long *)FUN_0106fc68(*(undefined8 *)(*(long *)(param_1 + 8) + 0x310));
          uVar5 = (**(code **)(*plVar6 + 0x110))();
          uVar2 = 0;
          if ((uVar5 & 0xffff) != 0) {
            uVar2 = ((uVar4 & 0xffff) * 100) / (uVar5 & 0xffff);
          }
          if (uVar2 <= *puVar12) goto LAB_0106fc00;
        }
      }
      else if (uVar1 == 1) {
        lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x290);
        sVar3 = *(short *)(*(long *)(lVar9 + 0x10) + 0x8a);
        if (sVar3 != 0) {
          uVar1 = *puVar12;
          lVar8 = FUN_01091070(param_2,sVar3,
                               (long)*(short *)(*(long *)(*(long *)(lVar9 + 8) + 0x1b0) + 8));
          uVar7 = (ulong)*(ushort *)(*(long *)(lVar9 + 0x10) + 0x8a);
          uVar2 = 0;
          if (uVar7 != 0) {
            uVar2 = (uint)((ulong)(lVar8 * 100) / uVar7);
          }
          if (uVar1 < uVar2) goto LAB_0106fabc;
        }
LAB_0106fc00:
        if (*(uint *)(param_1 + 0x7c) < 4) {
          lVar9 = param_1 + (ulong)*(uint *)(param_1 + 0x7c) * 8;
          *(undefined1 *)(lVar9 + 0x5c) = 4;
          *(int *)(lVar9 + 0x60) = (int)lVar11;
          *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
        }
        iVar10 = iVar10 + 1;
      }
    }
LAB_0106fabc:
    lVar11 = lVar11 + 1;
    puVar12 = puVar12 + 4;
    if (lVar11 == 6) {
      return 0 < iVar10;
    }
  } while( true );
}


