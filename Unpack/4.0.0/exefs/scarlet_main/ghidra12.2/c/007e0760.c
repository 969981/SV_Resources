/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e0760; name: FUN_007e0760
 */


void FUN_007e0760(ushort *param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined4 *puVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  if (param_2 != 0) {
    local_38[0] = 0;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
    uVar16 = *(undefined8 *)(param_1 + 4);
    uVar8 = FUN_007de240(param_2 + 8);
    bVar5 = FUN_007e10ac(uVar16,uVar8);
    if (bVar5 != 0xff) {
      uVar4 = *param_1;
      if ((bVar5 < uVar4) && ((byte)param_1[2] != bVar5)) {
        lVar2 = *(long *)(param_1 + 8);
        lVar3 = *(long *)(param_1 + 0xc);
        uVar10 = (ulong)bVar5;
        lVar12 = *(long *)(lVar2 + uVar10 * 8);
        lVar11 = *(long *)(lVar3 + uVar10 * 8);
        if (uVar4 == 1) {
          uVar13 = 0;
        }
        else {
          uVar13 = 0;
          puVar14 = (undefined4 *)(lVar12 + 4);
          plVar9 = (long *)(lVar2 + 8);
          plVar15 = (long *)(lVar3 + 8);
          do {
            puVar14[-1] = 0;
            puVar1 = (undefined1 *)(lVar11 + uVar13);
            *(undefined4 *)(plVar9[-1] + uVar10 * 4) = 0;
            *puVar1 = 0;
            *(undefined1 *)(plVar15[-1] + uVar10) = 0;
            *puVar14 = 0;
            uVar13 = uVar13 + 2;
            *(undefined4 *)(*plVar9 + uVar10 * 4) = 0;
            puVar1[1] = 0;
            *(undefined1 *)(*plVar15 + uVar10) = 0;
            puVar14 = puVar14 + 2;
            plVar9 = plVar9 + 2;
            plVar15 = plVar15 + 2;
          } while (((ulong)uVar4 & 0xfffe) != uVar13);
        }
        if ((uVar4 & 1) != 0) {
          *(undefined4 *)(lVar12 + uVar13 * 4) = 0;
          *(undefined4 *)(*(long *)(lVar2 + uVar13 * 8) + uVar10 * 4) = 0;
          *(undefined1 *)(lVar11 + uVar13) = 0;
          *(undefined1 *)(*(long *)(lVar3 + uVar13 * 8) + uVar10) = 0;
        }
        if (*(char *)(param_2 + 0x28) != -3) {
          param_1[0x14] = 0;
          param_1[0x15] = 0;
          param_1[0x16] = 0;
          param_1[0x17] = 0;
          if (*(char *)((long)param_1 + 5) != -3) {
            iVar6 = FUN_007e0d98(param_1,1,*(undefined8 *)(param_1 + 0x10));
            *(int *)(param_1 + 0x14) = iVar6;
            uVar7 = FUN_007e0d98(param_1,2,*(long *)(param_1 + 0x10) + (long)iVar6 * 0x30);
            *(undefined4 *)(param_1 + 0x16) = uVar7;
          }
          plVar9 = *(long **)(param_1 + 0x30);
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x10))(plVar9,*(undefined1 *)((long)param_1 + 5));
          }
        }
      }
    }
  }
  return;
}


