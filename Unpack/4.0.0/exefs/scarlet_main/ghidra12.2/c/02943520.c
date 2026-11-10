/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02943520; name: FUN_02943520
 */


void FUN_02943520(long param_1,undefined4 *param_2,uint param_3,undefined4 param_4,uint param_5)

{
  undefined4 uVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  undefined4 *puVar7;
  long lVar8;
  ulong uVar9;
  ushort *puVar10;
  undefined8 local_70;
  undefined1 local_68;
  
  if (param_3 - 1 < 9) {
    uVar9 = (ulong)param_3;
    if ((param_5 & 1) == 0) {
      puVar7 = param_2;
      uVar4 = uVar9;
      puVar10 = &DAT_0486a1a8;
      do {
        local_70 = 0;
        local_68 = 0;
        local_70 = FUN_01079790(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),*puVar7);
        local_68 = 1;
        uVar2 = FUN_02942100(param_1,&local_70);
        uVar4 = uVar4 - 1;
        *puVar10 = uVar2 & 0xff;
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
      } while (uVar4 != 0);
    }
    else {
      puVar10 = &DAT_0486a1a8;
      puVar7 = param_2;
      uVar4 = uVar9;
      do {
        local_70 = 0;
        local_68 = 0;
        local_70 = FUN_01079790(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),*puVar7);
        local_68 = 1;
        uVar2 = FUN_02942100(param_1,&local_70);
        *puVar10 = uVar2 & 0xff;
        uVar3 = FUN_0128ab58(*(undefined8 *)(*(long *)(param_1 + 8) + 0x290),param_4,*puVar7);
        if ((uVar3 & 1) != 0) {
          *puVar10 = *puVar10 + 6;
        }
        uVar4 = uVar4 - 1;
        puVar10 = puVar10 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar4 != 0);
    }
    lVar5 = 1;
    uVar4 = 0;
    do {
      uVar3 = uVar4 + 1;
      if (uVar3 < uVar9) {
        lVar8 = lVar5;
        if ((~(uint)uVar4 + param_3 & 1) != 0) {
          uVar2 = (&DAT_0486a1a8)[uVar4];
          if ((ushort)(&DAT_0486a1a8)[lVar5] < uVar2) {
            (&DAT_0486a1a8)[uVar4] = (&DAT_0486a1a8)[lVar5];
            (&DAT_0486a1a8)[lVar5] = uVar2;
            uVar1 = param_2[uVar4];
            param_2[uVar4] = param_2[lVar5];
            param_2[lVar5] = uVar1;
          }
          lVar8 = lVar5 + 1;
        }
        if (param_3 - 2 != (uint)uVar4) {
          iVar6 = param_3 - (int)lVar8;
          puVar7 = param_2 + lVar8 + 1;
          puVar10 = &DAT_0486a1aa + lVar8;
          do {
            uVar2 = (&DAT_0486a1a8)[uVar4];
            if (puVar10[-1] < uVar2) {
              (&DAT_0486a1a8)[uVar4] = puVar10[-1];
              puVar10[-1] = uVar2;
              uVar1 = param_2[uVar4];
              param_2[uVar4] = puVar7[-1];
              puVar7[-1] = uVar1;
            }
            uVar2 = (&DAT_0486a1a8)[uVar4];
            if (*puVar10 < uVar2) {
              (&DAT_0486a1a8)[uVar4] = *puVar10;
              *puVar10 = uVar2;
              uVar1 = param_2[uVar4];
              param_2[uVar4] = *puVar7;
              *puVar7 = uVar1;
            }
            iVar6 = iVar6 + -2;
            puVar7 = puVar7 + 2;
            puVar10 = puVar10 + 2;
          } while (iVar6 != 0);
        }
      }
      lVar5 = lVar5 + 1;
      uVar4 = uVar3;
    } while (uVar3 != uVar9);
  }
  return;
}


